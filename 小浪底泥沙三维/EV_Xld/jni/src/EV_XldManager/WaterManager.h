#include "..\..\include\core\global.h"
#ifndef WATERMANAGER_H_
#define  WATERMANAGER_H_
namespace EarthView
{
	namespace Xld 
	{
		namespace RenderLib
		{
			class CWaterManager
			{
			public:
				static CWaterManager* GetSingletonPtr();
				~CWaterManager();

				void CreateWaterSurface(const ev_real64& waterHeight);

			protected:
				static CWaterManager* mpSingleton;
				CWaterManager();

			};
		}

	}
}

#endif


