#ifndef EARTHVIEW_WORLD_SPATIAL_CTILELEVEL_H
#define EARTHVIEW_WORLD_SPATIAL_CTILELEVEL_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 瓦片级别规则类
            /// </summary>
			class EV_TILEUTILITY_DLL CTileLevel:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTileLevel();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTileLevel();
			
			public:
				/// <summary>
                /// 获取基础级别
                /// </summary>
                /// <returns>瓦片基础级别</returns>
				ev_int32 getBaseLevel() const;

				/// <summary>
                /// 获取基础级别跨度
                /// </summary>
                /// <returns>基础级别跨度</returns>
				ev_real64 getSpanOfBaseLevel() const;

				/// <summary>
                /// 获取最小级别
                /// </summary>
                /// <returns>最小级别，如果hasMinLevel=false，返回 - 100</returns>
				ev_int32 getMinLevel() const;

				/// <summary>
                /// 获取最大级别
                /// </summary>
                /// <returns>最大级别，如果hasMaxLevel=false，返回 100</returns>
				ev_int32 getMaxLevel() const;

				/// <summary>
                /// 判断是否具有最小级别
                /// </summary>
                /// <returns>具有最小级别返回真，否则返回假</returns>
				ev_bool hasMinLevel() const;

				/// <summary>
                /// 判断是否具有最大级别
                /// </summary>
                /// <returns>具有最大级别返回真，否则返回假</returns>
				ev_bool hasMaxLevel() const;

				/// <summary>
                /// 设置基础级别
                /// </summary>
				/// <param name="nLevel">基础级别</param>
                /// <returns></returns>
				ev_void setBaseLevel(_in ev_int32 nLevel);

				/// <summary>
                /// 设置基础级别跨度
                /// </summary>
				/// <param name="dSpan">基础级别跨度</param>
                /// <returns></returns>
				ev_void setSpanOfBaseLevel(_in ev_real64 dSpan);

				/// <summary>
                /// 设置最小级别
                /// </summary>
				/// <param name="nLevel">最小级别</param>
                /// <returns></returns>
				ev_void setMinLevel(_in ev_int32 nLevel);

				/// <summary>
                /// 设置最大级别
                /// </summary>
				/// <param name="nLevel">最大级别</param>
                /// <returns></returns>
				ev_void setMaxLevel(_in ev_int32 nLevel);

				/// <summary>
                /// 设置是否含有最小级别
                /// </summary>
				/// <param name="bHas">是否含有最小级别</param>
                /// <returns></returns>
				ev_void setHasMinLevel(_in ev_bool bHas);

				/// <summary>
                /// 设置是否含有最大级别
                /// </summary>
				/// <param name="bHas">是否含有最大级别</param>
                /// <returns></returns>
				ev_void setHasMaxLevel(_in ev_bool bHas);

				/// <summary>
                /// 深度拷贝
                /// </summary>
                /// <returns>新对象指针</returns>
				_extfree EarthView::World::Spatial::CTileLevel * clone() const;
			ev_private:
				CTileLevel(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				/// <summary>
                /// 禁止拷贝构造函数
                /// </summary>
                /// <returns></returns>
				C_DISABLE_COPY( CTileLevel );
			private:
				///基础级别
				ev_int32 mnBaseLevel;
				///基础级别跨度
				ev_real64 mdfSpan;
				///最小级别
				ev_int32 mnMinLevel;
				///最大级别
				ev_int32 mnMaxLevel;
				///是否含有最小级别
				ev_bool mbHasMinLevel;
				///是否含有最大级别
				ev_bool mbHasMaxLevel;
			};
		}
	}
}
#endif


