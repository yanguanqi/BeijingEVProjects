#ifndef EV_IKMLOBSERVER_H
#define EV_IKMLOBSERVER_H
#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				class EV_Spatial3DEngine_DLL IKmlObserver:public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					IKmlObserver(){};
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~IKmlObserver(){};
					///<Summary>
					///更新视图数据
					///</Summary>
					/// <returns></returns>
					virtual ev_void update(){};
					///<Summary>
					///刷新非视图数据
					///</Summary>
					/// <returns></returns>
					virtual ev_void refresh(){};
					//<Summary>
					///Tool Deactivate 刷新
					///</Summary>
					/// <returns></returns>
					virtual ev_void toolDeactivatedUpdate(){};
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					IKmlObserver(_in EarthView::World::Core::CNameValuePairList *pList){};

				};
			}
		}
	}
}

#endif
