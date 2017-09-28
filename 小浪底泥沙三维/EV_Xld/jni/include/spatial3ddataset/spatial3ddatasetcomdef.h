#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATASET_COMDEF_H
#define EARTHVIEW_WORLD_SPATIAL3D_DATASET_COMDEF_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/core_common.h"
#include "mathengine/axisalignedbox.h"
#include "spatialinterface/ifield.h"

namespace EarthView{
	namespace World{
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
		namespace Spatial3D{
			namespace Dataset
			{
				enum MaterialResourceType
				{
					MTRL_GPU=0,
					MTRL_PROGRAM,
					MTRL_MATREIAL,
					MTRL_MESH,
					MTRL_TEXTURE,
					MTRL_SKELETON,
					MTRL_ANIMATION
				};

				enum EntityDatasetEvent
				{
					EDTEVT_STOPRENDER,
					EDTEVT_STARTRENDER,
					EDTEVT_UPDATEMODEL,
					EDTEVT_REFRESHALLMODEL,
					EDTEVT_UPDATEALTITUDE,
					EDTEVT_UPDATEDEM,
					EDTEVT_UPDATEOCTREE,
					EDTEVT_REFRESHOCTREE,
					EDTEVT_GETCOMMITID,
					EDTEVT_SWITCHDATASET,
				};

				enum EntityDatasetOperType
				{
					EDS_ADD=0,
					EDS_DELETE,
					EDS_UPDATE,
					EDS_DONOTHING
				};

				enum EffectType
				{
					//单粒子系统
					ET_SINGLEPARTICLE,
					//混合特效
					ET_BLENDEFFECT,
					//混合特效使用的粒子
					ET_BLENDPARTICLE,
					//混合特效使用的动画
					ET_BLENDGIF,
					//gif动画类特效
					ET_GIF,
					//尾迹
					ET_TRAIL

				};

				class  EV_Spatial3DDataset_DLL TextureStreamItem : public EarthView::World::Core::CAllocatedObject
				{
				public:
					TextureStreamItem()
					{
						mIndex =0;
					}

ev_private:
					TextureStreamItem(EarthView::World::Core::CNameValuePairList *pList)
					{
						mIndex =0;
					}
				public:
					ev_uint32 mIndex;
					EarthView::World::Core::MemoryDataStreamPtr mStream;
					EVString filenmae;
				};

				class EV_Spatial3DDataset_DLL TextureStreamVector : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial3D::Dataset::TextureStreamItem> InternalList;
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
					iterator insert(_in iterator pos, _in EarthView::World::Spatial3D::Dataset::TextureStreamItem const &t);

				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					TextureStreamVector(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					TextureStreamVector();

					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial3D::Dataset::TextureStreamItem const &t);

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
					EarthView::World::Spatial3D::Dataset::TextureStreamItem& front();

					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Spatial3D::Dataset::TextureStreamItem& back();

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial3D::Dataset::TextureStreamItem& at(_in ev_uint32 pos);

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial3D::Dataset::TextureStreamItem const &at(_in ev_uint32 pos) const;

					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::Dataset::TextureStreamItem const &t);

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

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void reserve(ev_size_t count);
				};


				class  EV_Spatial3DDataset_DLL FeatureVector : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::GeoDataset::IFeature*> InternalList;
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
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::GeoDataset::IFeature* const &t);

				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					FeatureVector(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					FeatureVector();
					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::GeoDataset::IFeature* const &t);
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
					EarthView::World::Spatial::GeoDataset::IFeature*& front();
					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Spatial::GeoDataset::IFeature*& back();
					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial::GeoDataset::IFeature*& at(_in ev_uint32 pos);

					EarthView::World::Spatial::GeoDataset::IFeature* const &at(_in ev_uint32 pos) const;
					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::GeoDataset::IFeature* const &t);
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

				class EV_Spatial3DDataset_DLL IntMap : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					IntMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					IntMap();
					ev_bool push(const ev_int32& key, ev_int32 const &val);
					ev_bool exist(const ev_int32 &key);
					ev_int32& operator[](const ev_int32 &key);
					ev_int32& get(const ev_int32 &key);
					void erase(const ev_int32 &key);
					ev_size_t size() const;
					void clear();
					ev_bool empty() const;
					EarthView::World::Core::IntVector getKeys()const;
ev_private:
					typedef EarthView::World::Core::hashmap<ev_int32, ev_int32, _StringHash> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef InternalList::_Pairib _Pairib;
					RESERVE_CONTAINER_FUNCTION_HASHMAP(mList);
					_Pairib insert(const value_type &val);
					iterator find(const ev_int32 &key);
					const_iterator find(const ev_int32 &key) const;
				private:
					InternalList mList;
				};


				/// <summary>
				/// 特效表中的特效记录对象
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectInfo:public EarthView::World::Core::CAllocatedObject
				{
				private :
					ev_uint32 mEffectID;
					EVString mName;
					EarthView::World::Spatial3D::Dataset::EffectType mType;
					EVString mUserType;
					EVString mData;

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectInfo(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectInfo();


					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectInfo();


				public:
					/// <summary>
					/// 返回特效ID
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效ID</returns>
					ev_uint32 getEffectID();

					/// <summary>
					/// 设置特效ID
					/// </summary>
					/// <param name="val">特效ID</param>
					/// <returns></returns>
					void setEffectID(ev_uint32 val);

					/// <summary>
					/// 返回特效名字
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效名字</returns>
					EVString getName();

					/// <summary>
					/// 设置特效名字
					/// </summary>
					/// <param name="val">特效名字</param>
					/// <returns></returns>
					void setName(EVString val);

					/// <summary>
					/// 返回特效类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效类型</returns>
					EarthView::World::Spatial3D::Dataset::EffectType getType();

					/// <summary>
					/// 设置特效类型
					/// </summary>
					/// <param name="val">特效类型</param>
					/// <returns></returns>
					void setType(EarthView::World::Spatial3D::Dataset::EffectType val);

					/// <summary>
					/// 返回用户自定义特效分类编码
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效分类编码</returns>
					EVString getUserType() ;

					/// <summary>
					/// 设置用户自定义特效分类编码
					/// </summary>
					/// <param name="val">用户自定义特效分类编码</param>
					/// <returns></returns>
					void setUserType(EVString val) ;

					/// <summary>
					/// 返回特效内容信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>内容信息</returns>
					EVString getContext() ;

					/// <summary>
					/// 设置特效内容信息
					/// </summary>
					/// <param name="val">内容信息</param>
					/// <returns></returns>
					void setContext(EVString val);

				};

				/// <summary>
				/// 特效信息容器类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectInfoVector:public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectInfoVector(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectInfoVector();

ev_private:
					typedef vector<EarthView::World::Spatial3D::Dataset::CEffectInfo> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

					/// <summary>
					/// 在pos位置插入一个特效信息
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">特效信息</param>
					/// <returns>迭代器</returns>
					iterator insert(iterator pos, EarthView::World::Spatial3D::Dataset::CEffectInfo const &t);
				private:
					InternalList mList;
				public:
					/// <summary>
					/// 为当前容器添加一个特效信息
					/// </summary>
					/// <param name="t">特效信息</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial3D::Dataset::CEffectInfo const &t);

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
					/// <returns>特效信息的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo& front();

					/// <summary>
					/// 传回容器中最后一个特效信息,不检查这个特效信息是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效信息的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo& back();

					/// <summary>
					/// 在pos位置插入一个特效信息
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">特效信息</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial3D::Dataset::CEffectInfo const &t);

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
					/// <returns>指定位置的一个特效信息的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效信息的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo const &operator[](ev_size_t n) const;

					/// <summary>
					/// 传回索引n所指的数据
					/// </summary>
					/// <param name="n">索引值</param>
					/// <returns>指定位置的一个特效信息的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo& at(ev_size_t n);

					/// <summary>
					/// 传回索引n所指的数据
					/// </summary>
					/// <param name="n">索引值</param>
					/// <returns>指定位置的一个特效信息的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo const &at(ev_size_t n) const;

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
					/// <param name="count">大小</param>
					/// <returns></returns>
					void reserve(ev_size_t count);

					/// <summary>
					/// 移除容器中所有的数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};

				class EV_Spatial3DDataset_DLL DataSetVector : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::GeoDataset::IDataset*> InternalList;
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
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::GeoDataset::IDataset* const &t);

				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					DataSetVector(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					DataSetVector();

					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::GeoDataset::IDataset* const &t);

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
					EarthView::World::Spatial::GeoDataset::IDataset*& front();

					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Spatial::GeoDataset::IDataset*& back();

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial::GeoDataset::IDataset*& at(_in ev_uint32 pos);

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* const &at(_in ev_uint32 pos) const;

					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::GeoDataset::IDataset* const &t);

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

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void reserve(ev_size_t count);
				};

				/// <summary>
				/// 转换字段类型成string
				/// </summary>
				/// <param name="type">类型</param>
				/// <returns></returns>
				EVString ConvertFieldTypeToString(EarthView::World::Spatial::GeoDataset::EVFieldType type);

				/// <summary>
				/// 转换数据类型到字段类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				EarthView::World::Spatial::GeoDataset::EVFieldType ConvertDataTypeToFieldType(EarthView::World::Core::CVariant::EVDataType type);			

			}
		}
	}
}



#endif
