#ifndef EARTHVIEW_WORLD_SPATIAL_EFFECT_TILE_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_EFFECT_TILE_CACHE_ACCESSOR_H
#include "cachemanager/cacheaccessor.h"
#include "cachemanager/effecttable.h"
#include "cachemanager/cachedata.h"
#include "cachemanager/cacheasynchronousaccessor.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			class  EffectCacheSyncAccessor;

			// <summary>
			// DemTileCacheAccessor
			// </summary>
			class EV_CACHEMANAGER_DLL EffectCacheAccessor : public EarthView::World::Spatial::CacheAccessor
			{
				friend class CacheAccessorManager;
				friend class EffectCacheSyncAccessor;
			public:
				EffectCacheAccessor();

				~EffectCacheAccessor();

			ev_private:
				/// <summary>
				/// 获取数据库中所有instance记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectInstance( const EVString& instanceTableName, vector<EarthView::World::Spatial::CacheEffectInstance>& instances);

				/// <summary>
				///  根据effectid获取一条instance记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectInstance( const ev_int32 effectID,  const EVString& instanceTableName, vector<EarthView::World::Spatial::CacheEffectInstance>& instances);

				/// <summary>
				/// 读取缓存中所有的特效信息，这里不取出特效数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>特效信息个数</returns>
		
				ev_int32  readAllEffectInfo(vector<EarthView::World::Spatial::CacheEffect>& effectInfos);

			public:
				/// <summary>
				///  获取一条instance记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectInstance(const EVString& instanceTableName, _inout EarthView::World::Spatial::CacheEffectInstance& instance);

				/// <summary>
				/// 读取特效所有相关数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectData( EarthView::World::Spatial::CacheEffectData& effectData);

				/// <summary>
				/// 读取特效数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffect(
					_in const ev_int32 effectID,
					_out EVString& effectName,
					_out ev_int32 effectType,
					_out EVString& userType,
					_out EarthView::World::Core::MemoryDataStreamPtr context,
					_out EVString& effectDesc);


				/// <summary>
				/// 读取特效类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectType(
					_in EVString& userType,
					_out EVString& userTypeName,			
					_out EVString& userTypeDesc);

				ev_bool readEffectRes(_inout EarthView::World::Spatial::CacheEffectMaterial& res);
				
			ev_private:
				ev_int32	readEffectLikeType(_in const EVString& userType, _inout vector<EarthView::World::Spatial::CacheEffectType>& effectTypes);

				/// <summary>
				/// 写入特效资源引用关系
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectResRef(
					_in const ev_int32 effectID,
					_out vector<ev_int32>& resIDs);

				/// <summary>
				/// 读取特效资源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectRes( 
					_in const ev_int32 effectID,
					_out vector<EarthView::World::Spatial::CacheEffectMaterial>& ress);

		 protected:
			 /// <summary>
			 /// 写入effectinstance记录
			 /// </summary>
			 /// <param name=""></param>
			 /// <returns></returns>
			 /// <memo></memo>
			 ev_bool writeEffectInstance(const EVString& instanceTableName, const EarthView::World::Spatial::CacheEffectInstance& instance);
			 ev_bool writeEffectInstance( const EVString& instanceTableName, 
				 const ev_int32 effectID,
				 const ev_int32 instanceID,
				 const ev_int32 positionX,
				 const ev_int32 positionY,
				 const ev_int32 positionZ,
				 const ev_int32 rotationX,
				 const ev_int32 rotationY,
				 const ev_int32 rotationZ,
				 const ev_int32 rotationW,
				 const Real scaleX,
				 const Real scaleY,
				 const Real scaleZ,
				 const EVString& scriptVersion
				 );
		
			 /// <summary>
			 /// 写入特效数据
			 /// </summary>
			 /// <param name=""></param>
			 /// <returns></returns>
			 /// <memo></memo>
			 ev_bool writeEffect( const ev_int32 effectID,
				 const EVString& effectName,
				 const ev_int32 effectType,
				 const EVString& userType,
				 const EarthView::World::Core::MemoryDataStreamPtr context,
				 const EVString& effectDesc);
			 ev_bool writeEffect(const CacheEffect& effect);
			 /// <summary>
			 /// 写入特效类型
			 /// </summary>
			 /// <param name=""></param>
			 /// <returns></returns>
			 /// <memo></memo>
			 ev_bool writeEffectType(const EVString& userType,
				 const EVString& userTypeName,			
				 const EVString& userTypeDesc);
		
			 /// <summary>
			 /// 写入特效资源, 会自动写入资源引用关系
			 /// </summary>
			 /// <param name=""></param>
			 /// <returns></returns>
			 /// <memo></memo>
			 ev_bool writeEffectRes( const ev_int32 effectID,
				 const vector<EarthView::World::Spatial::CacheEffectMaterial*>& ress);

			 ev_bool writeEffectRes( const ev_int32 effectID,
				 const ev_int32 resID,
				 const ev_int32 resType,
				 const EVString& resFileName,
				 const EarthView::World::Core::MemoryDataStreamPtr resData,
				 const ev_int32 resRefCount);

				 /// <summary>
				 /// 写入特效和资源
				 /// </summary>
				 /// <param name=""></param>
				 /// <returns></returns>
				 /// <memo></memo>
				 ev_bool writeEffectRes( const EarthView::World::Spatial::CacheEffect& effect,
				 const vector<EarthView::World::Spatial::CacheEffectMaterial*>& ress);


			private:
			};


			// <summary>
			// 特效缓存数据写入
			// </summary>
			class EV_CACHEMANAGER_DLL EffectCacheSyncAccessor : public EarthView::World::Spatial::CacheSyncWriteAccessor
			{
			public:
				EffectCacheSyncAccessor();

				~EffectCacheSyncAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();

				/// <summary>
				///   写入特效数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEffect(const EarthView::World::Spatial::CacheEffect& effect);

				/// <summary>
				/// 写入特效类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEffectType(const EarthView::World::Spatial::CacheEffectType& effectType);

				/// <summary>
				/// 写入特效实例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEffectInstance(const EVString& instanceTableName, const EarthView::World::Spatial::CacheEffectInstance& instance);

			ev_private:
				/// <summary>
				/// 同时写入特效数据和其资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEffectMaterial(const EarthView::World::Spatial::CacheEffect& effect, const vector<EarthView::World::Spatial::CacheEffectMaterial> materials);

				/// <summary>
				/// 单独写入特效资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEffectMaterial(const ev_int32 effectID, const vector<EarthView::World::Spatial::CacheEffectMaterial> materials);

			private:
				class Param : public EarthView::World::Spatial::CacheSyncWriteAccessor::PrivateData
				{
				public:
					Param();
					~Param();

					EarthView::World::Spatial::CacheEffect* pEffect;
					EarthView::World::Spatial::CacheEffectType* pEffectType;
					vector<EarthView::World::Spatial::CacheEffectMaterial*> effectMaterial;
					ev_int32 effectID;
					EarthView::World::Spatial::CacheEffectInstance* pEffectInstance;
					EVString effectInstanceTableName;
				};
			
			};
		}}}
#endif