#ifndef EV_URL_CACHR_VISITOR_H
#define EV_URL_CACHR_VISITOR_H
#include "core/stringdefines.h"
#include "core/stringvector.h"
#include "spatialserverclient/spatialserverclientexports.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
			/// 
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVSpatialServerURLCacheVisitor
			{
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static CEVSpatialServerURLCacheVisitor& instance();

				/// <summary>
				/// url<ip:port>
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void addUsingCacheURL(const EVString& url, const EVString& servername);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void removeUsingCacheURL(const EVString& url, const EVString& servername);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool isUsingCacheURL(const EVString& url, const EVString& servername);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns>servernameu@url</returns>
				EarthView::World::Core::StringVector readURLListFromCache();				
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void writeURLToCache(const EVString& url, const EVString& servername);

			protected:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CEVSpatialServerURLCacheVisitor()
				{

				}

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CEVSpatialServerURLCacheVisitor()
				{

				}
			private:
				vector<EVString> mUsingCacheURLList;
			};

		}
	}
}
#endif