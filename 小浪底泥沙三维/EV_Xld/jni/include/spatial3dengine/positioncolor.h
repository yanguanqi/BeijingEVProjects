#ifndef EV_POSITIONCOLOR_H
#define EV_POSITIONCOLOR_H
#include "spatial3dengine/spatial3dengineconfig.h"
#include "mathengine/vector3.h"
#include "graphic/colourvalue.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				class EV_Spatial3DEngine_DLL CPositionColor : public EarthView::World::Core::CBaseObject
				{
				ev_private:
					CPositionColor(EarthView::World::Core::CNameValuePairList* pList){}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CPositionColor(){};
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CPositionColor(){};
					EarthView::World::Spatial::Math::CVector3 Position;
					EarthView::World::Graphic::CColourValue Color;
				};
			}
		}
	}
}
#endif
