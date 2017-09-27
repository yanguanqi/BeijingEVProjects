#ifndef EV_MODEL_TEMPLATE_TABLE___H
#define EV_MODEL_TEMPLATE_TABLE___H
#include "core/datastream.h"
#include "cachemanager/cachetable.h"
#include "cachemanager/entitytable.h"
#include "cachemanager/modelmaterialtable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			struct CacheMeshTemplateInstance
			{
				_in   ev_int32 meshInstanceID;
				_out ev_int32  meshTemplateID;
				_out ev_int32  meshInstanceNum;
				_out Real  minMeshInstanceNum;
				_out Real  maxMeshInstanceNum;
				_out Real rotx;
				_out Real roty;
				_out Real rotz;
				_out Real rotw;
				_out Real scalex;
				_out Real scaley;
				_out Real scalez;
				_out Real posx;
				_out Real posy;
				_out Real posz;
			};

			struct CacheMeshTemplate
			{
				_in ev_int32  meshTemplateID;
				_out EVString   meshTemplateName;
				_out EVString  meshTemplateFileName;
				_out EarthView::World::Core::MemoryDataStreamPtr  meshTemplateData;
				_out ev_int32  meshTemplateRefCount;
			};

			struct CacheMeshTemplateRef
			{
				_in   ev_int32 meshInstanceID;
				_out ev_int32 meshResID;
				_out ev_int32 meshSubIndex;
			};

			struct CacheModelTemplate
			{
				_in    ev_int32 meshInstanceID;
				_out EarthView::World::Spatial::CacheMeshTemplateInstance meshTemplateInstance;
				_out EarthView::World::Spatial::CacheMeshTemplate meshTemplate;
				_out vector<EarthView::World::Spatial::CacheMeshTemplateRef> refs;
				_out vector<EarthView::World::Spatial::CacheMeshMaterial> materials;
			};

			// <summary>
			// 创建、读写、维护EV_MESH_INSTANCE 、 EV_MESH_TEMPLATE、EV_MESH_INSTANCEREF表格
			// </summary>
			class EV_CACHEMANAGER_DLL ModelTemplateTable : public EarthView::World::Spatial::CacheTable
			{
			public:
				ModelTemplateTable();

				~ModelTemplateTable();

				/// <summary>
				/// 在给定的数据库连接对象中初始化表格
				/// </summary>
				/// <param name="templateName">模板库名称</param>
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

				ev_bool deleteEntity(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,_in ev_int32 entityID);


				ev_bool updateEntityAltitud(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in EarthView::World::Spatial::CacheEntity& entity);

				ev_bool deleteModel(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in EarthView::World::Spatial::CacheEntity& entity);

				ev_bool updateEntity(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				///  清除缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

			ev_private:
				ev_uint32 readEntity(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, _inout vector<EarthView::World::Spatial::CacheEntity>& entityarr);

			public:
				/// <summary>
				/// 写模板实体
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEntity(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 读取模型模板数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readModelTemplateData(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_inout CacheModelTemplate& cacheModelTemplate);

				/// <summary>
				///   读取给定模型的资源数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool readModelTemplateResource(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, ev_int32 meshid, ev_int32 restype, _out ev_vector<EarthView::World::Spatial::CacheModelResource>& resources);

				/// <summary>
				/// 写模型模板数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeModelTemplateData(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in CacheModelTemplate& cacheModelTemplate);

				/// <summary>
				/// 写EV_MESH_INSTANCE
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshTemplateInstance(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					const ev_int32 meshInstanceID,
					const ev_int32  meshTemplateID,
					const ev_int32  meshInstanceNum,
					const Real  minMeshInstanceNum,
					const Real  maxMeshInstanceNum,
					const Real rotx,
					const Real roty,
					const Real rotz,
					const Real rotw,
					const Real scalex,
					const Real scaley,
					const Real scalez,
					const Real posx,
					const Real posy,
					const Real posz);

				ev_bool writeMeshTemplateInstance(EarthView::World::Core::Database::CSqlDatabase* pdbcon, CacheMeshTemplateInstance& instance);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool updateMeshTemplateInstance(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					const ev_int32 meshInstanceID,
					const ev_int32  meshTemplateID,
					const ev_int32  meshInstanceNum,
					const Real  minMeshInstanceNum,
					const Real  maxMeshInstanceNum,
					const Real rotx,
					const Real roty,
					const Real rotz,
					const Real rotw,
					const Real scalex,
					const Real scaley,
					const Real scalez,
					const Real posx,
					const Real posy,
					const Real posz);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 readTemplateID(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, _in ev_int32 meshInstanceID);

				/// <summary>
				/// 写EV_MESH_TEMPLATE
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshTemplate(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32  meshTemplateID,
					const EVString&   meshTemplateName,
					const EVString&  meshTemplateFileName,
					const EarthView::World::Core::MemoryDataStreamPtr&  meshTemplateData,
					const ev_int32  meshTemplateRefCount);
				ev_bool writeMeshTemplate(EarthView::World::Core::Database::CSqlDatabase* pdbcon,CacheMeshTemplate& meshtemplate);

			ev_private:
				/// <summary>
				/// 写EV_MESH_INSTANCEREF
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshTemplateRef(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 meshInstanceID,
					const vector<ev_int32>& meshResID,
					const vector<ev_int32>& meshSubIndex);

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeMeshMaterialData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 resourceID,
					const ev_int32 type,
					const EVString& fileName,
					const EarthView::World::Core::MemoryDataStreamPtr& fileData,
					const ev_int32 refcount);

				ev_bool writeMeshMaterialData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const vector<CacheMeshMaterial>& cacheMeshMaterials);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readMeshMaterialData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					ev_int32 resourceID,
					ev_int32& type,
					EVString& fileName,
					EarthView::World::Core::MemoryDataStreamPtr& fileData,
					ev_int32& refcount);

			protected:
			private:
				EntityTable mEntityTable;
			};
		}}}
#endif