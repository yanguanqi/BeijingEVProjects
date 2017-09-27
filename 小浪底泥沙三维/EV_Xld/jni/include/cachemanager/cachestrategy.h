#ifndef EARTHVIEW_WORLD_SPATIAL_CACHE_STRATEGY_H
#define EARTHVIEW_WORLD_SPATIAL_CACHE_STRATEGY_H

#include "cachemanager/cachemanagerglobal.h"

namespace EarthView{
	namespace World{
		namespace Spatial{

			enum CacheBaseType
			{
				CBT_UnKnow,
				CBT_Location,
				CBT_VaildTime
			};

			class EV_CACHEMANAGER_DLL CacheStrategy : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CacheStrategy();

				~CacheStrategy();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				EarthView::World::Spatial::CacheBaseType getType() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void setType(EarthView::World::Spatial::CacheBaseType type);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getLimitedValue() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void setLimitedValue(ev_int32 limitValue);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool getEnabled() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void setEnabled(ev_bool enable);
			protected:
			private:
				EarthView::World::Spatial::CacheBaseType mType;
				ev_int32 mLimitedValue;
				ev_bool mEnabled;
			};

		}}}

#endif
