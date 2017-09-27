#ifndef EV_CACHE_DATA_H
#define EV_CACHE_DATA_H

#include "core/datastream.h"
#include "mathengine/ev_math.h"
#include "core/stringdefines.h"
#include "core/stdheaders.h"

namespace EarthView{
	namespace World{
		namespace Spatial{

			struct CacheBaseData
			{
				_in EVString cacheVersion;
			};

			struct	CacheDatasetInfo : public CacheBaseData
			{
				_in EVString datasetname;
				_in ev_int32		type;
				_out Real         	maxx;
				_out Real         	maxy;
				_out Real         	maxz;
				_out Real			minx;
				_out Real         	miny;
				_out Real         	minz;
				_out EarthView::World::Core::CCoreTime		lastDatetime;
				_out ev_int32	dataVersion;
				_out EVString		descript;
				_out ev_int32	srid;
				_out ev_int32 evid;
				_out ev_real64 altitudevalue;
				_out ev_int32 altitudemode;
			};

			struct CacheDem : public CacheBaseData
			{
				ev_int32 tilelevel;
				ev_int32 tilerow;
				ev_int32 tilecol;
				ev_int32 tileType;
				ev_bool isLastest;
				EarthView::World::Core::CCoreTime& updateTime;
				EarthView::World::Core::CCoreTime& dateTime;
				EarthView::World::Core::MemoryDataStreamPtr& tileData;
				ev_real32 centerx;
				ev_real32 centery;
			};

			struct CacheEffect : public CacheBaseData
			{
				ev_int32 id;
				EVString name;
				ev_int32 type;
				EVString userType;
				EarthView::World::Core::MemoryDataStreamPtr context;
				EVString desc;
			};

			struct CacheEffectType : public CacheBaseData
			{
				EVString userType;
				EVString effectTypeName;
				EVString effectTypeDesc;
			};

			struct CacheEffectRef : public CacheBaseData
			{
				ev_int32 effectID;
				ev_int32 resID;
			};

			struct CacheEffectMaterial : public CacheBaseData
			{
				_in ev_int32 resID;
				_out ev_int32 resType;
				_out EVString resFileName;
				_out EarthView::World::Core::MemoryDataStreamPtr resData;
				_out ev_int32 resRefCount;
			};

			struct CacheEffectData : public CacheBaseData
			{
				_in ev_int32 effectID;
				_out CacheEffect effect;
				_out CacheEffectType effectType;
				_out vector<CacheEffectMaterial> effectRes;
			};

			struct CacheEffectInstance  : public CacheBaseData
			{
				ev_int32 instanceID;
				ev_int32 effectID;
				ev_int32 positionX;
				ev_int32 positionY;
				ev_int32 positionZ;
				ev_int32 rotationX;
				ev_int32 rotationY;
				ev_int32 rotationZ;
				ev_int32 rotationW;
				Real scaleX;
				Real scaleY;
				Real scaleZ;
				EVString scriptVersion;
			};

		}
	}
}
#endif