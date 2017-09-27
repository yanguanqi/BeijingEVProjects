#ifndef EARTHVIEW_WORLD_SPATIAL_VECTOR_OCTREE_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_VECTOR_OCTREE_CACHE_ACCESSOR_H
#include "core/datastream.h"
#include "cachemanager/cacheasynchronousaccessor.h"
#include "cachemanager/octreecacheaccessor.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			class EV_CACHEMANAGER_DLL VectorOctreeCacheAccessor : public OctreeCacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				VectorOctreeCacheAccessor();

				~VectorOctreeCacheAccessor();

				/// <summary>
				/// 判断有没有节点, 如果需要节点数据，请直接使用readNode()函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool existsNode(const EVString& layerName,
					const EVString& nodeCode);

				/// <summary>
				///  读取节点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readNode(const EVString& layerName,
					const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& EVIDs,
					_out Real& minX,
					_out Real& minY,
					_out Real& minZ,
					_out Real& maxX,
					_out Real& maxY,
					_out Real& maxZ,
					_out ev_int32& version);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readGeometrys(const EVString& layerName,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& data);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readFieldValues(const EVString& layerName,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& data);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readTheme(const EVString& layerName,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& themeStyle);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readMesh(const EVString& layerName,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& meshData);

				ev_bool readLabelPositions(const EVString& layerName,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& labelPositions);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readGeometryAndMesh(const EVString& layerName,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& geometrys,
					_out EarthView::World::Core::MemoryDataStreamPtr& meshData);

				ev_bool readFieldvalAndThemeSty(const EVString& layerName,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& fieldValues,
					_out EarthView::World::Core::MemoryDataStreamPtr& themeStyle);


				/// <summary>
				///   写入一条新的记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeData(const EVString& layerName,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& EVIDs,
					const Real minX,
					const Real minY,
					const Real minZ,
					const Real maxX,
					const Real maxY,
					const Real maxZ,
					const ev_int32 version,
					const EarthView::World::Core::MemoryDataStreamPtr& geometrys,
					const EarthView::World::Core::MemoryDataStreamPtr& fieldValues,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& meshData,
					const EarthView::World::Core::MemoryDataStreamPtr& labelPositions);

				/// <summary>
				///   
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool updateLabelFieldName(const EVString& layerName,
					const EVString& nodeCode,
					const EVString& labelFieldName,
					const EarthView::World::Core::MemoryDataStreamPtr& labelData);

				/// <summary>
				///   
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool readLabelFieldName(_in const EVString& layerName,
					_in const EVString& nodeCode,
					_out EVString& labelFieldName);

				ev_bool readLabelData(_in const EVString& layerName,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& labelData);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateGeometrys(const EVString& layerName,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& data);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateFieldValues(const EVString& layerName,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& data);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateTheme(const EVString& layerName,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateMesh(const EVString& layerName,
					const EVString& nodeCode,
					const  EarthView::World::Core::MemoryDataStreamPtr& meshData,
					const  EarthView::World::Core::MemoryDataStreamPtr& labelPositions);

				/// <summary>
				/// 清除指定图层的缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(const EVString& layerName)	;

			protected:
			private:
			};

			class EV_CACHEMANAGER_DLL VectorOctreeCacheSyncAccessor : public CacheSyncWriteAccessor
			{
			public:
				VectorOctreeCacheSyncAccessor();
				
				~VectorOctreeCacheSyncAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();

				/// <summary>
				///   写入一条新的记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeData(const EVString& layerName,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& EVIDs,
					const Real minX,
					const Real minY,
					const Real minZ,
					const Real maxX,
					const Real maxY,
					const Real maxZ,
					const ev_int32 version,
					const EarthView::World::Core::MemoryDataStreamPtr& geometrys,
					const EarthView::World::Core::MemoryDataStreamPtr& fieldValues,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle,
					const EarthView::World::Core::MemoryDataStreamPtr& meshData,
					const EarthView::World::Core::MemoryDataStreamPtr& labelPositions);

				/// <summary>
				///   更新
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool updateLabelFieldName(const EVString& layerName,
					const EVString& nodeCode,
					const EVString& labelFieldName,
					const EarthView::World::Core::MemoryDataStreamPtr& labelData);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateGeometrys(const EVString& layerName,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& data);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateFieldValues(const EVString& layerName,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& data);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateTheme(const EVString& layerName,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateMesh(const EVString& layerName,
					const EVString& nodeCode,
					const  EarthView::World::Core::MemoryDataStreamPtr& meshData,
					const  EarthView::World::Core::MemoryDataStreamPtr& labelPositions);
				
			protected:
			private:
				class Param : public CacheSyncWriteAccessor::PrivateData
				{
				public:
					EVString layerName; 
					EVString nodeCode;
					EVString labelFieldName;

					EarthView::World::Core::MemoryDataStreamPtr EVIDs;
					Real minX;
					Real minY;
					Real minZ;
					Real maxX;
					Real maxY;
					Real maxZ;
					ev_int32 version;

					EarthView::World::Core::MemoryDataStreamPtr Geometrys;
					EarthView::World::Core::MemoryDataStreamPtr FieldValues;
					EarthView::World::Core::MemoryDataStreamPtr Theme;
					EarthView::World::Core::MemoryDataStreamPtr Mesh;
					EarthView::World::Core::MemoryDataStreamPtr labelPositions;
					EarthView::World::Core::MemoryDataStreamPtr labelData;

					Param(){};
					~Param()
					{
					}
				protected:
				private:
				};
			};
		}}}
#endif