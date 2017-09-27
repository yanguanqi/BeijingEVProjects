#ifndef EV_KMLCACHEMANAGER_H 
#define EV_KMLCACHEMANAGER_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "graphic/scenemanager.h"
#include "cachemanager/kmlcacheaccessor.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{

				class EV_Spatial3DEngine_DLL CKmlCacheManager:public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlCacheManager(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CKmlCacheManager();
					virtual ~CKmlCacheManager();
					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>CModelDataSourceFactory，失败则返回NULL</returns>
					static EarthView::World::Spatial3D::KmlManager::CKmlCacheManager* getSingletonPtr();

					/// <summary>
					/// 
					/// </summary>
					/// <returns></returns>
					EarthView::World::Core::MemoryDataStreamPtr genKmlPicCache(const EVString& picPath);

					/// <summary>
					/// 
					/// </summary>
					/// <returns></returns>
					EVString genKmlOrKmzCache(const EVString& kmlPath);

					/// <summary>
					/// 
					/// </summary>
					/// <returns></returns>
					EVString genKmlModelCache(const EVString& modelPath,EarthView::World::Graphic::CSceneManager* sceneMgr);







				private:

					static EarthView::World::Spatial3D::KmlManager::CKmlCacheManager* mSingletonPtr;

					ev_bool isHttp(const EVString& url);
					ev_bool isKmz(const EVString& url);
					ev_bool isMesh(const EVString& url);

					ev_void genCachePath(const EVString& picPath,_out EVString& cacheFolder,_out EVString&fileName);
					EVString processModel(const EVString& modelFile,EarthView::World::Graphic::CSceneManager* sceneMgr);
					EVString encrypt( EVString src );

					EarthView::World::Spatial::KmlCacheAccessor*  pAccessor;

				};
			}
		}
	}
}
#endif
