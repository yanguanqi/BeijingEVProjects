#ifndef EV_CACHEDBTABLECREATOR_H
#define EV_CACHEDBTABLECREATOR_H
#include "core/stringdefines.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
			/// 
			/// </summary>
			class CacheDBTableCreator
			{
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static ev_void createURLTable();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static ev_void createMetadataTable(const EVString& serverurl, const EVString& servername);
			protected:
			private:
			};
		}
	}
}

#endif