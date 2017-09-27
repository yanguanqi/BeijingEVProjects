#ifndef EV_MODEL_TABLE___H
#define EV_MODEL_TABLE___H
#include "core/datastream.h"
#include "cachemanager/cachetable.h"
#include "cachemanager/modelmaterialtable.h"
#include "cachemanager/entitytable.h"

namespace EarthView{
	namespace World{
		namespace Spatial{

			struct CacheMesh
			{
				_in   ev_int32  meshID;	
				_out EVString meshName;
				_out EVString meshFileName;
				_out EarthView::World::Core::MemoryDataStreamPtr  meshData;
				_out ev_int32  instanceNum;
				_out Real  minDestance;
				_out Real  maxDestance;
			};

			struct CacheMeshRef
			{
				_out ev_int32 meshID;
				_out ev_int32 meshResID;
			};

			struct CacheModel
			{
				_in ev_int32  meshID;
				_out CacheMesh mesh;

			ev_private:
				_out vector<CacheMeshRef> refs;
				_out vector<CacheMeshMaterial> materials;
			};

			// <summary>
			// 创建、读写、维护EV_MESH_ZZZ 和 EV_MESH_REF_ZZZ表格
			// 集合一个 EV_MATERIAL_RESOURCE_xxx表格
			// </summary>
			class EV_CACHEMANAGER_DLL ModelTable : public CacheTable
			{
			public:
				ModelTable();

				~ModelTable();

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
		
				ev_bool readEntity(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_inout EarthView::World::Spatial::CacheEntity& entity);
				ev_bool readEntity(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, _in ev_int32 entityID,
					_out EVString& entityName,
					_out ev_int32& meshID,
					_out Real& MinX,
					_out Real& MaxX,
					_out Real& MinY,
					_out Real& MaxY,
					_out Real& MinZ,
					_out Real& MaxZ,
					_out Real& PositionX,
					_out Real& PositionY,
					_out Real& PositionZ,
					_out Real& ScaleX,
					_out Real& ScaleY,
					_out Real& ScaleZ,
					_out Real& RotationX,
					_out Real& RotationY,
					_out Real& RotationZ,
					_out Real& RotationW,
					_out ev_bool& fromTemplate,
					_out ev_int32& altitudemode,
					_out Real& altitudevalue,
					_out Real& cameralongitude,
					_out Real& cameralatitude,
					_out Real& cameraaltitude,
					_out Real& cameradeflection,
					_out Real& camerapitch);


				ev_bool updateEntityAltitud(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				///   获取模型相关的所有数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readModelData(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, _inout CacheModel& cacheModel);

				/// <summary>
				///   读取给定模型的资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool readModelResource(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, ev_int32 meshid, ev_int32 restype, _out ev_vector<EarthView::World::Spatial::CacheModelResource>& resources);
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool deleteModel(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateEntity(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				///   获取模型数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readMeshData(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_inout CacheMesh& cacheMesh);

				/// <summary>
				///  清除缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

			ev_private:
				/// <summary>
				/// 获取模型的资源引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readMeshMaterialRefData(
					_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const ev_int32& meshID,  					
					_out vector<ev_int32>& resourceIDs);

				/// <summary>
				///   写入模型所有数据, 会自动写入mesh和资源引用关系
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeModelData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,  
					const EarthView::World::Spatial::CacheEntity& entity, 
					const  CacheMesh& mesh,
					const vector<CacheMeshMaterial>& cacheMeshMaterials);

			public:
				/// <summary>
				/// 获取材质模型资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readMeshMaterialData(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_inout CacheMeshMaterial& cacheMeshMaterial);
				
				/// <summary>
				/// 写入mesh数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshData(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const CacheMesh& mesh);
				ev_bool writeMeshData(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					const ev_int32 meshID,
					const EVString& meshName,
					const EVString& meshFileName,
					const EarthView::World::Core::MemoryDataStreamPtr& meshData,
					const ev_int32 instanceNum,
					const Real minDestance,
					const Real maxDestance);

				/// <summary>
				/// 写入材质资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshMaterialData(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					const ev_int32 resourceID,
					const ev_int32 type,
					const EVString& fileName,
					const EarthView::World::Core::MemoryDataStreamPtr& fileData,
					const ev_int32 refcount);

			ev_private:
				/// <summary>
				/// 写入模型和资源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshAndMaterial(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					const  CacheMesh& mesh,
					const vector<CacheMeshMaterial>& cacheMeshMaterials);

				/// <summary>
				/// 写入模型和材质资源引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshMaterialRefData(
					EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 meshID,  					
					const vector<ev_int32>& resourceIDs);

				ev_bool writeMeshMaterialData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const vector<CacheMeshMaterial>& cacheMeshMaterials);

			protected:
				private:
					
					EntityTable mEntityTable;
					/// 模型多线程写入，需要对数据库连接对象加锁。
					EarthView::World::Core::CRecursiveMutex mWriteMtx;
			};
		}}}
#endif