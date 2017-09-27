#ifndef EV_CACHE_OCTREETABLE___H
#define  EV_CACHE_OCTREETABLE___H
#include "core/datastream.h"
#include"mathengine/ev_math.h"
#include "cachemanager/cachetable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			struct CacheOctreeNode
			{
				EVString nodeCode;
				EarthView::World::Core::MemoryDataStreamPtr EVIDs;
				Real minX;
				Real minY;
				Real minZ;
				Real maxX;
				Real maxY;
				Real maxZ;
				ev_int32 version;
			};

			// <summary>
			// 创建、读写、维护DEM_Table表格
			// </summary>
			class EV_CACHEMANAGER_DLL OctreeTable : public CacheTable
			{
			public:
				OctreeTable();

				~OctreeTable();

				/// <summary>
				/// 在给定的数据库连接对象中初始化表格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);



				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getVersion(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

				/// <summary>
				///  读取节点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readNode(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
				///   写入节点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool writeNode(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& EVIDs,
					const Real minX,
					const Real minY,
					const Real minZ,
					const Real maxX,
					const Real maxY,
					const Real maxZ,
					const ev_int32 version);

				/// <summary>
				///   读取terraininfo
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString readTerrainInfo(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

				
				/// <summary>
				///   写入terraininfo
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool writeTerrainInfo(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& terrainInfo);


				/// <summary>
				///   更新terraininfo
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool updateTerrainInfo(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& terrainInfo);

				/// <summary>
				/// 清除指定图层的缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

			ev_private:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 readNodeByCodelength(EarthView::World::Core::Database::CSqlDatabase* pdbcon, vector<CacheOctreeNode>& nodes);



			protected:
			private:
			};
		}}}
#endif
