#ifndef EV_VECTOR_OCTREE_TABLE___H
#define EV_VECTOR_OCTREE_TABLE___H
#include "core/datastream.h"
#include"mathengine/ev_math.h"
#include "cachemanager/cachetable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			// <summary>
			// 创建、读写、维护DEM_Table表格
			// </summary>
			class EV_CACHEMANAGER_DLL VectorOctreeTable :  public EarthView::World::Spatial::CacheTable
			{
			public:
				VectorOctreeTable();

				~VectorOctreeTable();

				/// <summary>
				/// 在给定的数据库连接对象中初始化表格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);


				/// <summary>
				/// 判断有没有节点, 如果需要节点数据，请直接使用readNode()函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool existsNode(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EVString& nodeCode);

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
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readGeometrys(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& data);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readFieldValues(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& data);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readTheme(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& themeStyle);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readMesh(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& meshData);

				ev_bool readLabelPositions(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& labelPositions);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readGeometryAndMesh(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& geometrys,
					_out EarthView::World::Core::MemoryDataStreamPtr& meshData);

				ev_bool readFieldvalAndThemeSty(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& fieldValues,
					_out EarthView::World::Core::MemoryDataStreamPtr& themeStyle);


				/// <summary>
				///   写入一条新的记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
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
				ev_bool updateLabelFieldName(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EVString& nodeCode,
					const EVString& labelFieldName,
					const EarthView::World::Core::MemoryDataStreamPtr& labelData);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool readLabelFieldName(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& nodeCode,
					_out EVString& labelFieldName);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool readLabelData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& nodeCode,
					_out EarthView::World::Core::MemoryDataStreamPtr& labelData);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateGeometrys(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& data);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateFieldValues(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& data);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateTheme(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EVString& nodeCode,
					const EarthView::World::Core::MemoryDataStreamPtr& themeStyle);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateMesh(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EVString& nodeCode,
					const  EarthView::World::Core::MemoryDataStreamPtr& meshData,
					const  EarthView::World::Core::MemoryDataStreamPtr& labelPositions);

				/// <summary>
				/// 清除指定图层的缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

			protected:
			private:
			};
		}}}
#endif