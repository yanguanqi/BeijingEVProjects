#ifndef EARTHVIEW_WORLD_SPATIAL_ENTITY_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_ENTITY_CACHE_ACCESSOR_H
#include "mathengine/ev_math.h"
#include "cachemanager/cacheaccessor.h"
#include "cachemanager/cacheasynchronousaccessor.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			class EV_CACHEMANAGER_DLL EntityCacheAccessor : public EarthView::World::Spatial::CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				EntityCacheAccessor();

				~EntityCacheAccessor();


				////////////////通过模型或者模型模板读取entity
				///// <summary>
				///// 
				///// </summary>
				///// <param name=""></param>
				///// <returns></returns>
				///// <memo></memo>
				//ev_bool readEntity(const EVString& layerName,
				//	const EVString& nodeCode,
				//	ev_int32 entityID,
				//	_out EVString& entityName,
				//	_out ev_int32& meshID,
				//	_out Real& ENT_MINX,
				//	_out Real& ENT_MAXX,
				//	_out Real& ENT_MINY,
				//	_out Real& ENT_MAXY,
				//	_out Real& ENT_MINZ,
				//	_out Real& ENT_MAXZ,
				//	_out Real& ENT_POSX,
				//	_out Real& ENT_POSY,
				//	_out Real& ENT_POSZ,
				//	_out Real& ENT_SCALEX,
				//	_out Real& ENT_SCALEY,
				//	_out Real& ENT_SCALEZ,
				//	_out Real& ENT_ROTATIONX,
				//	_out Real& ENT_ROTATIONY,
				//	_out Real& ENT_ROTATIONZ,
				//	_out Real& ENT_ROTATIONW,
				//	_out ev_bool& ENT_FROMTEMPLATE);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEntity(const EVString& layerName,
					const EVString& nodeCode,
					const ev_int32 entityID,
					const EVString& entityName,
					const ev_int32 meshID,
					const Real ENT_MINX,
					const Real MaxX,
					const Real ENT_MINY,
					const Real ENT_MAXY,
					const Real ENT_MINZ,
					const Real ENT_MAXZ,
					const Real ENT_POSX,
					const Real ENT_POSY,
					const Real ENT_POSZ,
					const Real ENT_SCALEX,
					const Real ENT_SCALEY,
					const Real ENT_SCALEZ,
					const Real ENT_ROTATIONX,
					const Real ENT_ROTATIONY,
					const Real ENT_ROTATIONZ,
					const Real ENT_ROTATIONW,
					const ev_bool ENT_FROMTEMPLATE,
					const ev_int32 altitudemode,
					const Real altitudevalue,
					const Real cameralongitude,
					const Real cameralatitude,
					const Real cameraaltitude,
					const Real cameradeflection,
					const Real camerapitch);

			protected:
	
			private:
			};

			class EV_CACHEMANAGER_DLL EntityCacheSyncAccessor :  public EarthView::World::Spatial::CacheSyncWriteAccessor
			{
			public:
				EntityCacheSyncAccessor();

				~EntityCacheSyncAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEntity(const EVString& layerName,
					const EVString& nodeCode,
					ev_int32 entityID,
					const EVString& entityName,
					ev_int32 meshID,
					ev_real32 MinX,
					ev_real32 MaxX,
					ev_real32 MinY,
					ev_real32 MaxY,
					ev_real32 MinZ,
					ev_real32 MaxZ,
					ev_real32 PositionX,
					ev_real32 PositionY,
					ev_real32 PositionZ,
					ev_real32 ScaleX,
					ev_real32 ScaleY,
					ev_real32 ScaleZ,
					ev_real32 RotationX,
					ev_real32 RotationY,
					ev_real32 RotationZ,
					ev_real32 RotationW,
					ev_bool ENT_FROMTEMPLATE,
					const ev_int32 altitudemode,
					const Real altitudevalue,
					const Real cameralongitude,
					const Real cameralatitude,
					const Real cameraaltitude,
					const Real cameradeflection,
					const Real camerapitch);

			protected:
			private:
				class Param : public EarthView::World::Spatial::CacheSyncWriteAccessor::PrivateData
				{
				public:
					EVString layerName;
					EVString nodeCode;
					ev_int32 entityID;
					EVString entityName;
					ev_int32 meshID;
					ev_real32 MinX;
					ev_real32 MaxX;
					ev_real32 MinY;
					ev_real32 MaxY;
					ev_real32 MinZ;
					ev_real32 MaxZ;
					ev_real32 PositionX;
					ev_real32 PositionY;
					ev_real32 PositionZ;
					ev_real32 ScaleX;
					ev_real32 ScaleY;
					ev_real32 ScaleZ;
					ev_real32 RotationX;
					ev_real32 RotationY;
					ev_real32 RotationZ;
					ev_real32 RotationW;
					ev_bool ENT_FROMTEMPLATE;
					ev_int32 altitudemode;
					Real altitudevalue;
					Real cameralongitude;
					Real cameralatitude;
					Real cameraaltitude;
					Real cameradeflection;
					Real camerapitch;

					Param(const EVString& layerName,
						const EVString& nodeCode,
						ev_int32 entityID,
						const EVString& entityName,
						ev_int32 meshID,
						ev_real32 MinX,
						ev_real32 MaxX,
						ev_real32 MinY,
						ev_real32 MaxY,
						ev_real32 MinZ,
						ev_real32 MaxZ,
						ev_real32 PositionX,
						ev_real32 PositionY,
						ev_real32 PositionZ,
						ev_real32 ScaleX,
						ev_real32 ScaleY,
						ev_real32 ScaleZ,
						ev_real32 RotationX,
						ev_real32 RotationY,
						ev_real32 RotationZ,
						ev_real32 RotationW,
						ev_bool ENT_FROMTEMPLATE,
						ev_int32 altitudemode,
						Real altitudevalue,
						Real cameralongitude,
						Real cameralatitude,
						Real cameraaltitude,
						Real cameradeflection,
						Real camerapitch)
						: layerName(layerName),
						nodeCode(nodeCode),
						entityID(entityID),
						 entityName(entityName),
						 meshID(meshID),
						MinX(MinX),
						MaxX(MaxX),
						MinY(MinY),
						MaxY(MaxY),
						MinZ(MinZ),
						MaxZ(MaxZ),
						PositionX(PositionX),
						PositionY(PositionY),
						PositionZ(PositionZ),
						ScaleX(ScaleX),
						ScaleY(ScaleY),
						ScaleZ(ScaleZ),
						RotationX(RotationX),
						RotationY(RotationY),
						RotationZ(RotationZ),
						RotationW(RotationW),
						ENT_FROMTEMPLATE(ENT_FROMTEMPLATE),
						altitudemode(altitudemode),
						altitudevalue(altitudevalue),
						cameralongitude(cameralongitude),
						cameralatitude(cameralatitude),
						cameraaltitude(cameraaltitude),
						cameradeflection(cameradeflection),
						camerapitch(camerapitch)
					{
					}
					Param(){};
					~Param(){};
				};
			};
		}}}
#endif