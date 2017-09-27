#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_WORKCOMMAND_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_WORKCOMMAND_H

#include "spatialdatabase/spatialdatabaseconfig.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				///<summary>
				///工作命令类
				///</summary>
				class EV_SPATIALDATABASE_DLL CWorkCommand : public EarthView::World::Core::CAllocatedObject
				{
				public:
					///<summary>
					///默认构造函数
					///</summary>
					CWorkCommand();
					///<summary>
					///析构函数
					///</summary>
					virtual ~CWorkCommand();

				public:
					/// <summary>
					/// 获取"工作命令"中的数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据</returns>
					
					EarthView::World::Core::CBaseObject * getData() const;
					/// <summary>
					/// 设置"工作命令"数据
					/// </summary>
					/// <param name="data">数据</param>
					/// <returns></returns>
					
					ev_void setData( _in EarthView::World::Core::CBaseObject * ref_data );

				private:
					EarthView::World::Core::CBaseObject *m_pData;
				ev_private:
					CWorkCommand( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CWorkCommand )
				};
			}
		}
	}
}
#endif

