#ifndef __EffectTableRef_H__
#define __EffectTableRef_H__

#pragma once

#include "mathengine/vector3.h"
#include "spatial3ddataset/effectfeature.h"
#include "spatialinterface/altitudemode.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "core/stdheaders.h"



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			class CMaterialResourceInfo ;
		}
	}
};

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{

				/// <summary>
				/// 特效数据集表中特效记录对象
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectInstance:public EarthView::World::Core::CAllocatedObject
				{
				private:
					ev_uint32 mId;
					ev_uint32 mEffectId;
					EarthView::World::Spatial::Math::CVector3 mPos;
					EarthView::World::Spatial::Math::CVector3 mScale;
					EarthView::World::Spatial::Math::CQuaternion mQuater;					
					EarthView::World::Spatial::Utility::EVAltitudeMode mAltMode;
					ev_real64 mAltValue;

				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectInstance(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectInstance();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectInstance();

				public:
					/// <summary>
					/// 返回实例ID
					/// </summary>
					/// <param name=""></param>
					/// <returns>实例ID</returns>
					ev_uint32 getId();

					/// <summary>
					/// 设置实例ID
					/// </summary>
					/// <param name="val">实例ID</param>
					/// <returns></returns>
					void setId(ev_uint32 val);

					/// <summary>
					/// 返回特效ID
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效ID</returns>
					ev_uint32 getEffectId() ;

					/// <summary>
					/// 设置特效ID
					/// </summary>
					/// <param name="val">特效ID</param>
					/// <returns></returns>
					void setEffectId(ev_uint32 val);

					/// <summary>
					/// 返回实例坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>实例坐标</returns>
					EarthView::World::Spatial::Math::CVector3 getPos();

					/// <summary>
					/// 设置实例坐标
					/// </summary>
					/// <param name="val">实例坐标</param>
					/// <returns></returns>
					void setPos(EarthView::World::Spatial::Math::CVector3 val);

					/// <summary>
					/// 获取缩放因子
					/// </summary>
					/// <param name></param>
					/// <returns>缩放因子</returns>
					EarthView::World::Spatial::Math::CVector3 getScale();

					/// <summary>
					/// 设置缩放因子
					/// </summary>
					/// <param name="val">缩放因子</param>
					/// <returns></returns>
					void setScale(EarthView::World::Spatial::Math::CVector3 val);

					/// <summary>
					/// 获取旋转四元数
					/// </summary>
					/// <param name=""></param>
					/// <returns>四元数值</returns>
					EarthView::World::Spatial::Math::CQuaternion getRotate();

					/// <summary>
					/// 设置旋转四元数
					/// </summary>
					/// <param name="val">四元数值</param>
					/// <returns></returns>
					void setRotate(EarthView::World::Spatial::Math::CQuaternion val);


					/// <summary>
					/// 获得高度模式
					/// </summary>
					/// <param name=""></param>
					/// <returns>高度模式</returns>
					EarthView::World::Spatial::Utility::EVAltitudeMode getAltMode();

					/// <summary>
					/// 设置高度模式
					/// </summary>
					/// <param name="mode">高度模式</param>
					/// <returns></returns>
					void setAltMode(EarthView::World::Spatial::Utility::EVAltitudeMode mode);

					/// <summary>
					/// 获得高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>高度</returns>
					ev_real64 getAltValue();

					/// <summary>
					/// 设置高度
					/// </summary>
					/// <param name="altValue">高度</param>
					/// <returns></returns>
					void setAltValue(ev_real64 altValue);				

				};

				/// <summary>
				/// 特效数据集中特效记录容器类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectInstanceVector:public EarthView::World::Core::CBaseObject
				{
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectInstanceVector(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList"></param>
					/// <returns></returns>
					CEffectInstanceVector();

				ev_private:
					typedef vector<EarthView::World::Spatial3D::Dataset::CEffectInstance> InternalList;
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
					/// 为当前容器添加一个特效实例
					/// </summary>
					/// <param name="t">特效实例</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial3D::Dataset::CEffectInstance const &t);

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
					/// <returns>特效实例的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInstance& front();

					/// <summary>
					/// 传回容器中最后一个特效实例,不检查这个特效实例是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效实例的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInstance& back();

					/// <summary>
					/// 在pos位置插入一个特效实例
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">特效实例</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial3D::Dataset::CEffectInstance const &t);

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
					/// <returns>容器为空返回true,容器不为空返回false </returns>
					ev_bool empty() const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效实例的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectInstance& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效实例的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectInstance const &operator[](ev_size_t n) const;

					/// <summary>
					/// 传回索引n所指的数据
					/// </summary>
					/// <param name="n">索引值</param>
					/// <returns>指定位置的一个特效实例的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectInstance& at(ev_size_t n);

					/// <summary>
					/// 传回索引n所指的数据
					/// </summary>
					/// <param name="n">索引值</param>
					/// <returns>指定位置的一个特效实例的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectInstance const &at(ev_size_t n) const;

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
				/// 用户自定义特效类型类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectUserTypeInfo:public EarthView::World::Core::CAllocatedObject
				{
				private :
					EVString mUserType;
					EVString mUserTypeName;
					EVString mUserTypeDesc;

				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectUserTypeInfo(_in EarthView::World::Core::CNameValuePairList *pList);


				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectUserTypeInfo();


					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectUserTypeInfo();

				public:
					/// <summary>
					/// 返回用户自定义特效分类编码
					/// </summary>
					/// <param name=""></param>
					/// <returns>用户自定义特效分类编码</returns>
					EVString getUserType();

					/// <summary>
					/// 设置用户自定义特效分类编码
					/// </summary>
					/// <param name="val">用户自定义特效分类编码</param>
					/// <returns></returns>
					void setUserType(EVString val) ;

					/// <summary>
					/// 返回用户自定义特效分类名字
					/// </summary>
					/// <param name=""></param>
					/// <returns>用户自定义特效分类名字</returns>
					EVString getUserTypeName() ;

					/// <summary>
					/// 设置用户自定义特效分类名字
					/// </summary>
					/// <param name="val">用户自定义特效分类名字</param>
					/// <returns></returns>
					void setUserTypeName(EVString val) ;

					/// <summary>
					/// 返回用户自定义类型描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>用户自定义类型描述</returns>
					EVString getUserTypeDesc() ;

					/// <summary>
					/// 设置用户自定义类型描述
					/// </summary>
					/// <param name="val">用户自定义类型描述</param>
					/// <returns></returns>
					void setUserTypeDesc(EVString val) ;
				};

				/// <summary>
				/// 用户自定义特效类型容器类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectUserTypeInfoVector:public EarthView::World::Core::CBaseObject
				{
			ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectUserTypeInfoVector(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectUserTypeInfoVector();

				ev_private:
					typedef vector<EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo > InternalList;
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
					/// 在pos位置插入一个用户自定义类型信息
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">用户自定义类型信息</param>
					/// <returns>迭代器</returns>
					iterator insert(iterator pos, EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo const &t);
				private:
					InternalList mList;
				public:
					/// <summary>
					/// 为当前容器添加一个用户自定义类型信息
					/// </summary>
					/// <param name="t">用户自定义类型信息</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo const &t);

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
					/// <returns>用户自定义类型信息的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& front();

					/// <summary>
					/// 传回容器中最后一个用户自定义类型信息,不检查这个用户自定义类型信息是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>用户自定义类型信息的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& back();

					/// <summary>
					/// 在pos位置插入一个用户自定义类型信息
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">用户自定义类型信息</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo const &t);

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
					/// <returns>容器为空返回true,容器不为空返回false </returns>
					ev_bool empty() const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个用户自定义类型信息的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个用户自定义类型信息的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo const &operator[](ev_size_t n) const;

					/// <summary>
					/// 传回索引n所指的数据
					/// </summary>
					/// <param name="n">索引值</param>
					/// <returns>指定位置的一个用户自定义类型信息的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo & at(ev_size_t n);

					/// <summary>
					/// 传回索引n所指的数据
					/// </summary>
					/// <param name="n">索引值</param>
					/// <returns>指定位置的一个用户自定义类型信息的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo const &at(ev_size_t n) const;

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
				/// 特效资源关系类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectRefInfo:public EarthView::World::Core::CAllocatedObject
				{
				private :
					ev_uint32 mEffectRefID;
					ev_uint32 mEffectID;
					ev_uint32 mResouceID;
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectRefInfo(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectRefInfo();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectRefInfo();

				public:
					/// <summary>
					/// 返回特效RefID
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效RefID</returns>
					ev_uint32 getEffectRefID() ;

					/// <summary>
					/// 设置特效Ref资源ID
					/// </summary>
					/// <param name="val">特效RefID</param>
					/// <returns></returns>
					void setEffectRefID(ev_uint32 val);

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
					/// 返回资源ID
					/// </summary>
					/// <param name=""></param>
					/// <returns>资源ID</returns>
					ev_uint32 getResourceID();

					/// <summary>
					/// 设置资源ID
					/// </summary>
					/// <param name="val">资源ID</param>
					/// <returns></returns>
					void setResourceID(ev_uint32 val);
				};

				/// <summary>
				/// 特效资源关系容器类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectRefInfoVector:public EarthView::World::Core::CBaseObject
				{
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectRefInfoVector(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectRefInfoVector();

				ev_private:
					typedef vector<EarthView::World::Spatial3D::Dataset::CEffectRefInfo > InternalList;
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
					/// 在pos位置插入一个特效资源关系信息
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">特效资源关系信息</param>
					/// <returns>迭代器</returns>
					iterator insert(iterator pos, EarthView::World::Spatial3D::Dataset::CEffectRefInfo const &t);
				private:
					InternalList mList;
				public:
					/// <summary>
					/// 为当前容器添加一个特效资源关系信息
					/// </summary>
					/// <param name="t">特效资源关系信息</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial3D::Dataset::CEffectRefInfo const &t);

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
					/// <returns>特效资源关系信息的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& front();
					
					/// <summary>
					/// 传回容器中最后一个特效资源关系信息,不检查这个特效资源关系信息是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效资源关系信息的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& back();

					/// <summary>
					/// 在pos位置插入一个特效资源关系信息
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">特效资源关系信息</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial3D::Dataset::CEffectRefInfo const &t);

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
					/// <returns>容器为空返回true,容器不为空返回false </returns>
					ev_bool empty() const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效资源关系信息的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效资源关系信息的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo const &operator[](ev_size_t n) const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效资源关系信息的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo & at(ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效资源关系信息的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo const &at(ev_size_t n) const;

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
				/// 特效资源信息类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectResourceInfo : public EarthView::World::Core::CAllocatedObject
				{
				private:
					ev_uint32 mResourceID;
					EVString mName;
					EarthView::World::Spatial3D::Dataset::MaterialResourceType mResourceType;
					EarthView::World::Core::MemoryDataStreamPtr mData;
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectResourceInfo(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectResourceInfo();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectResourceInfo();

					/// <summary>
					/// 设置资源ID
					/// </summary>
					/// <param name="resourceID">资源ID</param>
					/// <returns></returns>
					void setResourceID(ev_uint32 resourceID);

					/// <summary>
					/// 获取资源ID
					/// </summary>
					/// <param name=""></param>
					/// <returns>资源ID</returns>
					ev_uint32 getResourceID();

					/// <summary>
					/// 设置特效资源信息名称
					/// </summary>
					/// <param name="name">资源信息名称</param>
					/// <returns></returns>
					void setName(EVString name);

					/// <summary>
					/// 获取特效资源信息名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效资源信息名称</returns>
					EVString getName();

					/// <summary>
					/// 设置特效资源信息类型
					/// </summary>
					/// <param name="type">特效资源信息类型</param>
					/// <returns></returns>
					void setResourceType(EarthView::World::Spatial3D::Dataset::MaterialResourceType type);

					/// <summary>
					/// 获取特效资源信息类型
					/// </summary>
					/// <param name="type"></param>
					/// <returns>特效资源信息类型</returns>
					EarthView::World::Spatial3D::Dataset::MaterialResourceType getResourceType();


					/// <summary>
					/// 设置特效资源信息数据
					/// </summary>
					/// <param name="val">数据流</param>
					/// <returns></returns>
					void setResourceData(EarthView::World::Core::MemoryDataStreamPtr val);

					/// <summary>
					/// 获取特效资源信息数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据流</returns>
					EarthView::World::Core::MemoryDataStreamPtr getResourceData();

				};


				/// <summary>
				/// 特效资源信息容器类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectResourceInfoVector:public EarthView::World::Core::CBaseObject
				{
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectResourceInfoVector(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectResourceInfoVector();

				ev_private:
					typedef vector<EarthView::World::Spatial3D::Dataset::CEffectResourceInfo> InternalList;
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
					/// 在pos位置插入一个特效资源信息
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">特效资源信息</param>
					/// <returns>迭代器</returns>
					iterator insert(iterator pos, EarthView::World::Spatial3D::Dataset::CEffectResourceInfo const &t);
				private:
					InternalList mList;
				public:

					/// <summary>
					/// 为当前容器添加一个特效资源信息
					/// </summary>
					/// <param name="t">特效资源信息</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial3D::Dataset::CEffectResourceInfo const &t);

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
					/// <returns>特效资源信息的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& front();

					/// <summary>
					/// 传回容器中最后一个特效资源信息,不检查这个特效资源信息是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效资源信息的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& back();

					/// <summary>
					/// 在pos位置插入一个特效资源信息
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">特效资源信息</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial3D::Dataset::CEffectResourceInfo const &t);

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
					/// <returns>指定位置的一个特效资源信息的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效资源信息的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo const &operator[](ev_size_t n) const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效资源信息的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& at(ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效资源信息的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo const &at(ev_size_t n) const;

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
				/// 特效Feature容器类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectFeatureVector:public EarthView::World::Core::CBaseObject
				{
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectFeatureVector(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectFeatureVector();

				ev_private:
					typedef vector<EarthView::World::Spatial3D::Dataset::CEffectFeature *> InternalList;
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
					/// 为当前容器添加一个EarthView::World::Spatial3D::Dataset::CEffectFeature
					/// </summary>
					/// <param name="t">EarthView::World::Spatial3D::Dataset::CEffectFeature</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial3D::Dataset::CEffectFeature *const &t);

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
					/// <returns>EarthView::World::Spatial3D::Dataset::CEffectFeature的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectFeature*& front();

					/// <summary>
					/// 传回容器中最后一个EarthView::World::Spatial3D::Dataset::CEffectFeature,不检查这个EarthView::World::Spatial3D::Dataset::CEffectFeature是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CEffectFeature的引用</returns>
					EarthView::World::Spatial3D::Dataset::CEffectFeature*& back();

					/// <summary>
					/// 在pos位置插入一个EarthView::World::Spatial3D::Dataset::CEffectFeature
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">EarthView::World::Spatial3D::Dataset::CEffectFeature</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial3D::Dataset::CEffectFeature *const &t);

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
					/// <returns>容器为空返回true,容器不为空返回false </returns>
					ev_bool empty() const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个EarthView::World::Spatial3D::Dataset::CEffectFeature的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectFeature*& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个EarthView::World::Spatial3D::Dataset::CEffectFeature的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectFeature *const &operator[](ev_size_t n) const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个EarthView::World::Spatial3D::Dataset::CEffectFeature的引用 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectFeature*& at(ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个EarthView::World::Spatial3D::Dataset::CEffectFeature的引用常量 </returns>
					EarthView::World::Spatial3D::Dataset::CEffectFeature *const &at(ev_size_t n) const;

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
