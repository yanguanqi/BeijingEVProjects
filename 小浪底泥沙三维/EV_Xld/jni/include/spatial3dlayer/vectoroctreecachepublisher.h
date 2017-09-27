#ifndef EV_SPATIAL3DLAYER_VECTOROCTREECACHEPUBLISHER_H
#define EV_SPATIAL3DLAYER_VECTOROCTREECACHEPUBLISHER_H

#include "spatial3dlayer/3dlayerconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/irasterdataset.h"

#include "geometry3d/iscenelayer.h"

#include "spatialobject/geometry/geometrycollection.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ifield.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class CVectorOctreePublishListener;
				class CVector3DCacheFieldVector;
				class EV_3DLAYER_DLL CVectorOctreeCachePublisher : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CVectorOctreeCachePublisher();
					virtual ~CVectorOctreeCachePublisher();
ev_private:
					CVectorOctreeCachePublisher(EarthView::World::Core::CNameValuePairList* pList);
				public:
					
					virtual ev_bool publish(EarthView::World::Spatial3D::Atlas::ISceneLayer* pLayer,const EVString& path,const EVString& fileName,const CVector3DCacheFieldVector& fieldNames);

					virtual void stopPublish();

					virtual void setPublishListener(CVectorOctreePublishListener* listener);

					virtual void setTotalCount(ev_uint32 count);
					virtual void updateProgressInformation(const EVString& info,ev_uint32 publishCount);
					virtual void setInformation(const EVString& info,ev_int32 percent);
				private:
					CVectorOctreePublishListener* mpPublishListener;
					ev_uint32 mTotalCount;
					ev_uint32 mCurrentCount;

					EarthView::World::Core::CRecursiveMutex mLayerLock;
					EarthView::World::Spatial3D::Atlas::ISceneLayer* mpLayer;
				};

				/// <summary>				
				/// 矢量缓存发布进度监听类
				/// </summary>
				class EV_3DLAYER_DLL CVectorOctreePublishListener : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CVectorOctreePublishListener(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CVectorOctreePublishListener();
					virtual ~CVectorOctreePublishListener();

					/// <summary>
					/// 消息接收
					/// </summary>
					/// <param name="info">消息内容</param>
					/// <param name="percent">进程</param>
					/// <returns></returns>
					virtual ev_void setInformation(const EVString& info,ev_int32 percent);
				};
				
				class EV_3DLAYER_DLL CVector3DCacheField : public EarthView::World::Core::CBaseObject
				{
				public:
					EVString mFieldName;
					EarthView::World::Spatial::GeoDataset::EVFieldType mFieldType;
ev_private:
					CVector3DCacheField(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CVector3DCacheField();
					CVector3DCacheField(const EVString& fieldName,EarthView::World::Spatial::GeoDataset::EVFieldType type);
					~CVector3DCacheField();

					EVString getFieldName() const;

					EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const;
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
ev_private:
					bool operator < (const CVector3DCacheField &rhs) const;
				};

				class EV_3DLAYER_DLL CVector3DCacheFieldVector : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<CVector3DCacheField> InternalList;
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
					CVector3DCacheFieldVector(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVector3DCacheFieldVector();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CVector3DCacheFieldVector();
					/// <summary>
					/// 在容器的尾部添加值为t的元素
					/// </summary>
					/// <param name="t">添加元素的值</param>
					/// <returns></returns>
					void push_back(CVector3DCacheField const &t);
					/// <summary>
					/// 删除容器的最后一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();

					/// <summary>
					/// 返回容器的第一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVector3DCacheField front() const;
					/// <summary>
					/// 返回容器的最后一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVector3DCacheField back() const;
					/// <summary>
					/// 在迭代器pos所指向的元素前面插入值为t的新元素
					/// </summary>
					/// <param name="pos">插入元素的位置</param>
					/// <param name="t">插入元素的值</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, CVector3DCacheField const &t);
					/// <summary>
					/// 去掉位置pos处元素的值
					/// </summary>
					/// <param name="pos">元素的位置</param>
					/// <returns>返回容器当前的值</returns>
					void remove(ev_size_t pos);
					/// <summary>
					/// 返回标记容器大小是否为0的布尔值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CVector3DCacheField &operator[](ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					///由const对象调用，并且返回值不能出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CVector3DCacheField const &operator[](ev_size_t n) const;                
					/// <summary>
					/// 返回下标为n的元素的引用
					/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CVector3DCacheField at(ev_size_t n) const;
					/// <summary>
					/// 返回容器中元素的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// 调整容器的长度大小，使其能容纳newSize个元素
					/// </summary>
					/// <param name="newSize">长度</param>
					/// <returns></returns>
					void resize(ev_size_t newSize);

					void reserve(ev_size_t count);
					/// <summary>
					/// 删除容器中的所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();

					/// <summary>
					/// 交换内容
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void swap(CVector3DCacheFieldVector& list);

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
ev_private:

					ev_void insert(iterator pos, iterator from ,iterator to)
					{
						mList.insert(pos,from,to);
					}		
				};

				class CGeometryObject
				{
				protected:
					ev_uint32 mID;
					EarthView::World::Spatial::Geometry::IGeometry* mGeometry;
					map<EVString,EarthView::World::Core::CVariant> mFieldValues;
					friend class CGeometryObjectVector;
				public:

					CGeometryObject();
					~CGeometryObject();

					void setID(ev_uint32 id);
					ev_uint32 getID() const;

					void insertFieldValue(const EVString& field,const EarthView::World::Core::CVariant& value);
					ev_bool getFieldValue(const EVString& field,EarthView::World::Core::CVariant& value);

					ev_uint32 getFieldValueCount() const;
					ev_bool getField(ev_uint32 pos,EVString& field,EarthView::World::Core::CVariant& value);

					EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const;
				};

				class CGeometryObjectVector
				{
ev_private:
					typedef vector<CGeometryObject> InternalList;
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

					EarthView::World::Spatial::Geometry::CGeometryCollection* mpGeometrys;
					ev_bool mbAuthorize;
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryObjectVector();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CGeometryObjectVector();
					/// <summary>
					/// 在容器的尾部添加值为t的元素
					/// </summary>
					/// <param name="t">添加元素的值</param>
					/// <returns></returns>
					void push_back(CGeometryObject  const &t);
					/// <summary>
					/// 删除容器的最后一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();

					/// <summary>
					/// 返回容器的第一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryObject front() const;
					/// <summary>
					/// 返回容器的最后一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryObject back() const;
					/// <summary>
					/// 在迭代器pos所指向的元素前面插入值为t的新元素
					/// </summary>
					/// <param name="pos">插入元素的位置</param>
					/// <param name="t">插入元素的值</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, CGeometryObject const &t);
					/// <summary>
					/// 去掉位置pos处元素的值
					/// </summary>
					/// <param name="pos">元素的位置</param>
					/// <returns>返回容器当前的值</returns>
					void remove(ev_size_t pos);
					/// <summary>
					/// 返回标记容器大小是否为0的布尔值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CGeometryObject &operator[](ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					///由const对象调用，并且返回值不能出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CGeometryObject const &operator[](ev_size_t n) const;                
					/// <summary>
					/// 返回下标为n的元素的引用
					/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CGeometryObject at(ev_size_t n) const;
					/// <summary>
					/// 返回容器中元素的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// 调整容器的长度大小，使其能容纳newSize个元素
					/// </summary>
					/// <param name="newSize">长度</param>
					/// <returns></returns>
					void resize(ev_size_t newSize);

					void reserve(ev_size_t count);
					/// <summary>
					/// 删除容器中的所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();

					/// <summary>
					/// 交换内容
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void swap(CGeometryObjectVector& list);

					void setGeometrys(EarthView::World::Spatial::Geometry::CGeometryCollection* geometrs,ev_bool bAuthorize);

					EarthView::World::Spatial::Geometry::CGeometryCollection* getGeometrys() const;

					EarthView::World::Core::MemoryDataStreamPtr toStream();
					void fromStream(const EarthView::World::Core::MemoryDataStreamPtr& objectsStream);
ev_private:

					ev_void insert(iterator pos, iterator from ,iterator to)
					{
						mList.insert(pos,from,to);
					}					
				};

			}
		}
	}
}

#endif
