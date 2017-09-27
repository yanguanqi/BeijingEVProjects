/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：modelresourcecache.h
* 摘    要：该文件是模型资源内存缓存接口声明
*
* 当前版本：1.0
* 作    者：邹先涛
* 完成日期：2013年7月25日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2013-7-25		邹先涛   1.0.0版本的内容声明
* 
**/

#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELRESOURCECACHE_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELRESOURCECACHE_H

#include "core/memoryallocatedobject.h"
#include "core/mutex.h"
#include "graphic/material.h"
#include "spatial3dengine/spatial3denginecomdef.h"

using namespace EarthView::World::Core;
using namespace EarthView::World::Graphic;

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{

				class EV_Spatial3DEngine_DLL CMaterialPriority : public CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMaterialPriority(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					CMaterialPriority(){}
					virtual ~CMaterialPriority(){}
				private:
					typedef ev_multimap<ev_uint32, ev_uint32> TickCountIndex;
					typedef pair<TickCountIndex::iterator, TickCountIndex::iterator>
						_Pairii;
					TickCountIndex mTickCountIndex;

					typedef map<ev_uint32, ev_uint32> IDIndex;
					IDIndex mIDIndex;

				public:
					/// <summary>
					/// 添加一组数据
					/// </summary>
					/// <returns></returns>
					void addItem(ev_uint32 id);

					/// <summary>
					/// 移除一组数据
					/// </summary>
					/// <returns></returns>
					void removeItem(ev_uint32 id);

					/// <summary>
					/// 获取时间最久没更新的一模型iD
					/// </summary>
					/// <returns></returns>
					ev_uint32 getPriorityItem();

					/// <summary>
					/// 更新模型的优先级
					/// </summary>
					/// <returns></returns>
					void updatePriority(ev_uint32 id);
				};

				class EV_Spatial3DEngine_DLL CMaterialResourceCache  : public CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMaterialResourceCache(_in EarthView::World::Core::CNameValuePairList *pList);
				private:
					typedef map<ev_uint32, EarthView::World::Spatial3D::MaterialPtrVector> MaterialCache;
					MaterialCache mMaterialCache;

					CMaterialPriority mPriority;

					ev_uint32 mMaterialCacheSize;

					EarthView::World::Core::CRecursiveMutex mCacheLock;

					typedef map<EVString, ev_uint32> SharedMaterialUserCount;
					SharedMaterialUserCount mSharedCount;

					EVString mGroup;
				public:
					CMaterialResourceCache(const EVString& group);

					virtual ~CMaterialResourceCache();

					/// <summary>
					/// 缓存容器加锁
					/// </summary>
					/// <returns></returns>
					void lock();

					/// <summary>
					/// 缓存容器解锁
					/// </summary>
					/// <returns></returns>
					void unlock();

					/// <summary>
					/// 换组名
					/// </summary>
					/// <returns></returns>
					void setGroupName(const EVString& group);


					/// <summary>
					/// 设置材质缓存对象个数
					/// </summary>
					/// <returns></returns>
					void setMaterialCacheSize(ev_uint32 size);

					/// <summary>
					/// 获取材质缓存对象个数
					/// </summary>
					/// <returns></returns>
					ev_uint32 getMaterialCacheSize();

					/// <summary>
					/// 是否缓存了模型对应的材质
					/// </summary>
					/// <returns></returns>
					ev_bool hasMaterialCache(ev_uint32 modelID);

					/// <summary>
					/// 添模型对应的材质脚本
					/// </summary>
					/// <returns></returns>
					void addMaterial(ev_uint32 modelID, const EarthView::World::Spatial3D::MaterialPtrVector& matPtrVec);

					/// <summary>
					/// 移除模型对应的材质
					/// </summary>
					/// <returns></returns>
					void removeMaterial(ev_uint32 modelID);

					/// <summary>
					/// 移除所有模型对应的材质
					/// </summary>
					/// <returns></returns>
					void removeAllMaterial();

					/// <summary>
					/// 卸载模型对应的材质
					/// </summary>
					/// <returns></returns>
					void unloadMaterial(ev_uint32 modelID);

				protected:
					void _refCount(const EarthView::World::Spatial3D::MaterialPtrVector& matPtrVec);
					void _unRefCount(const EarthView::World::Spatial3D::MaterialPtrVector& matPtrVec);
					ev_uint32 _getRefCount(const EVString& matName);
				};

}}}}

#endif
