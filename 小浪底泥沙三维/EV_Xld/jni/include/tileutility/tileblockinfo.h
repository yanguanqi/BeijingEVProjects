#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEBLOCKINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEBLOCKINFO_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 瓦片分块信息类
            /// </summary>
			class EV_TILEUTILITY_DLL CTileBlockInfo
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
				/// <returns></returns>
				~CTileBlockInfo();

				/// <summary>
                /// 是否可用
                /// </summary>
				/// <returns>可用返回true，否则返回false</returns>
				ev_bool isValid();

				/// <summary>
                /// 设置瓦片分块的基础级别
                /// </summary>
				/// <param name="level">基础级别</param>
                /// <returns></returns>
				ev_void setBlockLevel(_in ev_int32 level);

				/// <summary>
                /// 设置瓦片分块的开始级别
                /// </summary>
				/// <param name="level">开始级别</param>
                /// <returns></returns>
				ev_void setStartLevel(_in ev_int32 level);

				/// <summary>
                /// 设置瓦片分块的终止级别
                /// </summary>
				/// <param name="level">终止级别</param>
                /// <returns></returns>
				ev_void setEndLevel(_in ev_int32 level);
				
				/// <summary>
                /// 获取瓦片分块的基础级别
                /// </summary>
                /// <returns>基础级别</returns>
				ev_uint32 getBlockLevel()const;

				/// <summary>
                /// 获取瓦片分块的开始级别
                /// </summary>
                /// <returns>开始级别</returns>
				ev_uint32 getStartLevel()const;

				/// <summary>
                /// 获取瓦片分块的终止级别
                /// </summary>
                /// <returns>终止级别</returns>
				ev_uint32 getEndLevel()const;
				
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆对象指针</returns>
				_extfree EarthView::World::Spatial::CTileBlockInfo* clone();

				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="blocklevel">分块的基础级别</param>
				/// <param name="startlevel">分块的开始级别</param>
				/// <param name="endlevel">分块的终止级别</param>
                /// <returns></returns>
				CTileBlockInfo(_in ev_int32 blocklevel,_in ev_int32 startlevel,_in ev_int32 endlevel);
			ev_private:
				CTileBlockInfo(_in EarthView::World::Core::CNameValuePairList * pList);
			protected:	
				ev_uint32 mnStartLevel;
				ev_uint32 mnEndLevel;
				ev_uint32 mnBlockLevel;
			};
		}
	}
}
#endif
