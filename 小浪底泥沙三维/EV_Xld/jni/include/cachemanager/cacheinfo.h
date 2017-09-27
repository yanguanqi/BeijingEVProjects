#ifndef EARTHVIEW_WORLD_SPATIAL_CACHE_INFO_H
#define EARTHVIEW_WORLD_SPATIAL_CACHE_INFO_H
#include "core/ev_time.h"
#include "cachemanager/cachemanagerglobal.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			enum CacheType
			{
				CT_Image,
				CT_Tile,
				CT_Vector,
				CT_DEM,
				CT_KML,
				CT_GeoCode,
				CT_File
			};

			class EV_CACHEMANAGER_DLL CacheInfo : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CacheInfo();

				~CacheInfo();
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				const EVString& getName() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void setName(const EVString& name) ;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void setCachePath(const EVString& path);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				const EVString& getCachePath() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				CacheType getType() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void setType(CacheType type);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				const EarthView::World::Core::CCoreTime& getUpdateTime() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void setUpdateTime(EarthView::World::Core::CCoreTime& time);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				const EarthView::World::Core::CCoreTime& getCreateTime() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_void setCreateTime(EarthView::World::Core::CCoreTime& time);
			protected:
			private:
				CacheType mType;
				EarthView::World::Core::CCoreTime mUpdateTime;
				EarthView::World::Core::CCoreTime mCreateTime;
				EVString mName;
				EVString mCachePath;
			};
		
		}}}
#endif
