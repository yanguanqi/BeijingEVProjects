#ifndef MODELFEATUREVECTOR_H
#define MODELFEATUREVECTOR_H


#include "download/downloadglobal.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ifields.h"

using namespace EarthView::World::Spatial::GeoDataset;



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				/// <summary>
				/// 多级LOD模型要素
				/// </summary>
				class EV_DOWNLOAD_DLL ModelFeature: public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					ModelFeature(_in EarthView::World::Core::CNameValuePairList *pList);
	
					
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ModelFeature();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~ModelFeature();

					/// <summary>
					/// 添加字段值到集合
					/// </summary>
					/// <param name="">字段值</param>
					/// <returns>ev_uint32</returns>
					ev_uint32 addValue(const EVString& fieldvalue);

					/// <summary>
					/// 根据字段名称获取字段的值
					/// </summary>
					/// <param name="name">字段名称</param>
					/// <returns>ev_string</returns>
					EVString getValue(const EVString& name) const;

					/// <summary>
					///设置Feature的字段信息
					/// </summary>
					/// <param name="fields">字段集合指针</param>
					/// <returns></returns>
					ev_void setFields(EarthView::World::Spatial::GeoDataset::IFields* ref_fields);

					/// <summary>
					/// 返回字段集合
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回字段集合指针</returns>
					EarthView::World::Spatial::GeoDataset::IFields* getFields();

				private:
 				    EarthView::World::Spatial::GeoDataset::IFields* mfields;
					vector<EVString> mvalues;
				};

				/// <summary>
				/// 多级LOD模型要素Vector
				/// </summary>
				class EV_DOWNLOAD_DLL ModelFeatureVector : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					ModelFeatureVector(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ModelFeatureVector();

ev_private:
					typedef vector<EarthView::World::Spatial::Download::ModelFeature> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);//保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)

				private:
					InternalList mList;

				public:
					/// <summary>
					/// 为当前容器添加一个ModelFeature
					/// </summary>
					/// <param name="t">ModelFeature</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial::Download::ModelFeature const &t);

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
					/// <returns>ModelFeature的引用</returns>
					EarthView::World::Spatial::Download::ModelFeature& front();

					/// <summary>
					/// 传回容器中最后一个ModelFeature,不检查这个ModelFeature是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>ModelFeature的引用</returns>
					EarthView::World::Spatial::Download::ModelFeature& back();

					/// <summary>
					/// 在pos位置插入一个ModelFeature
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">ModelFeature</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial::Download::ModelFeature const &t);

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
					/// <returns>指定位置的一个ModelFeature的引用 </returns>
					EarthView::World::Spatial::Download::ModelFeature& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个ModelFeature的引用常量 </returns>
					EarthView::World::Spatial::Download::ModelFeature const &operator[](ev_size_t n) const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个ModelFeature的引用 </returns>
					EarthView::World::Spatial::Download::ModelFeature& at(ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个ModelFeature的引用常量 </returns>
					EarthView::World::Spatial::Download::ModelFeature const &at(ev_size_t n) const;

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

				/// <summary>
				/// 点云要素
				/// </summary>
				class EV_DOWNLOAD_DLL EVlasFeature : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					EVlasFeature(_in EarthView::World::Core::CNameValuePairList *pList);


				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVlasFeature();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~EVlasFeature();

					/// <summary>
					/// 获取要素名称
					/// </summary>
					/// <returns></returns>
					EVString getName() const;

					/// <summary>
					/// 获取要素值
					/// </summary>
					/// <returns></returns>
					EVString getValue() const;

					/// <summary>
					/// 设置要素名称
					/// </summary>
					/// <returns></returns>
					void setName(const EVString& name);

					/// <summary>
					/// 设置要素值
					/// </summary>
					/// <returns></returns>
					void setValue(const EVString& value);

				private:
					EVString mName;
					EVString mValue;
				};

					/// <summary>
					/// 点云要素Vector
					/// </summary>
				class EV_DOWNLOAD_DLL EVLasFeatureVector : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					EVLasFeatureVector(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVLasFeatureVector();

ev_private:
					typedef vector<EarthView::World::Spatial::Download::EVlasFeature> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);//保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)

				private:
					InternalList mList;

				public:
					/// <summary>
					/// 为当前容器添加一个EVlasFeature
					/// </summary>
					/// <param name="t">EVlasFeature</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial::Download::EVlasFeature const &t);

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
					/// <returns>EVlasFeature的引用</returns>
					EarthView::World::Spatial::Download::EVlasFeature& front();

					/// <summary>
					/// 传回容器中最后一个EVlasFeature,不检查这个EVlasFeature是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVlasFeature的引用</returns>
					EarthView::World::Spatial::Download::EVlasFeature& back();

					/// <summary>
					/// 在pos位置插入一个EVlasFeature
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">EVlasFeature</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial::Download::EVlasFeature const &t);

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
					/// <returns>指定位置的一个EVlasFeature的引用 </returns>
					EarthView::World::Spatial::Download::EVlasFeature& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个EVlasFeature的引用常量 </returns>
					EarthView::World::Spatial::Download::EVlasFeature const &operator[](ev_size_t n) const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个EVlasFeature的引用 </returns>
					EarthView::World::Spatial::Download::EVlasFeature& at(ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个EVlasFeature的引用常量 </returns>
					EarthView::World::Spatial::Download::EVlasFeature const &at(ev_size_t n) const;

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

			}
		}
	}
}

#endif