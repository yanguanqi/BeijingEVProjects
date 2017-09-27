#ifndef EV_ENTITY_CACHE_TABLE___H
#define EV_ENTITY_CACHE_TABLE___H
#include"mathengine/ev_math.h"
#include "cachemanager/cachetable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			struct CacheEntity
			{
				_in ev_int32 entityID;
				_out EVString entityName;
				_out ev_int32 meshID;
				_out Real MinX;
				_out Real MaxX;
				_out Real MinY;
				_out Real MaxY;
				_out Real MinZ;
				_out Real MaxZ;
				_out Real PositionX;
				_out Real PositionY;
				_out Real PositionZ;
				_out Real ScaleX;
				_out Real ScaleY;
				_out Real ScaleZ;
				_out Real RotationX;
				_out Real RotationY;
				_out Real RotationZ;
				_out Real RotationW;
				_out ev_bool fromTemplate;
				_out ev_int32 altitudemode;
				_out Real altitudevalue;
				_out Real cameralongitude;
				_out Real cameralatitude;
				_out Real cameraaltitude ;
				_out Real cameradeflection;
				_out Real camerapitch;
			};

			// <summary>
			// 创建、读写、维护EV_ENTITY_ZZZ表格
			// </summary>
			class EV_CACHEMANAGER_DLL EntityTable : public CacheTable
			{
			public:
				EntityTable();

				~EntityTable();

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


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEntity(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EarthView::World::Spatial::CacheEntity& entity);
				ev_bool writeEntity(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 entityID,
					const EVString& entityName,
					ev_int32 meshID,
					const Real MinX,
					const Real MaxX,
					const Real MinY,
					const Real MaxY,
					const Real MinZ,
					const Real MaxZ,
					const Real PositionX,
					const Real PositionY,
					const Real PositionZ,
					const Real ScaleX,
					const Real ScaleY,
					const Real ScaleZ,
					const Real RotationX,
					const Real RotationY,
					const Real RotationZ,
					const Real RotationW,
					const ev_bool fromTemplate,
					const ev_int32 altitudemode,
					const Real altitudevalue,
					const Real cameralongitude,
					const Real cameralatitude,
					const Real cameraaltitude,
					const Real cameradeflection,
					const Real camerapitch);

				/// <summary>
				/// 更新
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateEntityAltitud(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EarthView::World::Spatial::CacheEntity& entity);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateEntity(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EarthView::World::Spatial::CacheEntity& entity);
				ev_bool updateEntity(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 entityID,
					const EVString& entityName,
					ev_int32 meshID,
					const Real MinX,
					const Real MaxX,
					const Real MinY,
					const Real MaxY,
					const Real MinZ,
					const Real MaxZ,
					const Real PositionX,
					const Real PositionY,
					const Real PositionZ,
					const Real ScaleX,
					const Real ScaleY,
					const Real ScaleZ,
					const Real RotationX,
					const Real RotationY,
					const Real RotationZ,
					const Real RotationW,
					const ev_bool fromTemplate,
					const ev_int32 altitudemode,
					const Real altitudevalue,
					const Real cameralongitude,
					const Real cameralatitude,
					const Real cameraaltitude,
					const Real cameradeflection,
					const Real camerapitch);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool deleteEntity(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const ev_int32& entityid);

				/// <summary>
				///  清除缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);
			ev_private:
				ev_uint32 readEntity(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, _inout vector<EarthView::World::Spatial::CacheEntity>& entityarr);

			public:

			protected:
			private:
			};
		}}}

#endif
