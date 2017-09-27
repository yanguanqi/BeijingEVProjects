#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_WORKCOMMANDMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_WORKCOMMANDMANAGER_H

#include "spatialdatabase/spatialdatabaseconfig.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				///<summary>
				///工作命令管理器
				///</summary>
				class CWorkCommand;
				class EV_SPATIALDATABASE_DLL CWorkCommandManager : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CWorkCommandManager();
					virtual ~CWorkCommandManager();

				public:
					/// <summary>
					/// 判断是否支持"重做"操作
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果支持"重做"则返回true,反之则否</returns>
					
					ev_bool canRedo() const;
					/// <summary>
					/// 判断是否支持"回退"操作
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果支持"回退"操作就返回true,反之则否</returns>
					
					ev_bool canUndo() const;
					/// <summary>
					/// 获取操作数据的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					
					ev_int32 getCount() const;
					/// <summary>
					/// 获取指定索引处的操作数据
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>操作数据</returns>
					
					EarthView::World::Spatial::GeoDataset::CWorkCommand * getCommand( ev_uint32 index );
					/// <summary>
					/// 获取回退次数
					/// </summary>
					/// <param name=""></param>
					/// <returns>次数</returns>
					
					ev_int32 getUndoLimit() const;
					/// <summary>
					/// 设置回退次数
					/// </summary>
					/// <param name="limit">次数限制</param>
					/// <returns></returns>
					
					ev_void setUndoLimit( ev_uint32 limit );
					/// <summary>
					/// 执行重做
					/// </summary>
					/// <param name=""></param>
					/// <returns>操作数据</returns>
					
					EarthView::World::Spatial::GeoDataset::CWorkCommand * redo();
					/// <summary>
					/// 执行回退
					/// </summary>
					/// <param name=""></param>
					/// <returns>操作数据</returns>
					
					EarthView::World::Spatial::GeoDataset::CWorkCommand * undo();
					/// <summary>
					/// 开启编辑宏,即"组操作"
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void beginMacro();
					/// <summary>
					/// 结束编辑宏,把在编辑宏中所做的所有操作合为一个操作,即最后一个操作
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void endMacro();
					/// <summary>
					/// 检测是否在编辑宏中
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果是,则返回true,反之则否</returns>
					
					ev_bool isInMacro() const;
					/// <summary>
					/// 废弃编辑宏,即在编辑宏中的所有操作都清除掉
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void abortMacro();
					/// <summary>
					/// 获取当前的编辑索引
					/// </summary>
					/// <param name=""></param>
					/// <returns>索引</returns>
					
					ev_int32 getCurrentIndex() const;
					/// <summary>
					/// 添加一个操作命令
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					EarthView::World::Spatial::GeoDataset::CWorkCommand * push();
					/// <summary>
					/// 清空所有的操作命令
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void clear();

				protected:
					ev_void deleteCommands( ev_int32 beginIndex, ev_int32 endIndex );

					ev_vector<EarthView::World::Spatial::GeoDataset::CWorkCommand*> m_vecCommands;
					ev_int32 m_nLimit;
					ev_int32 m_nCurrentIndex;
					ev_int32 m_nMacroIndex;
					ev_bool m_bBeginMacro;
				ev_private:
					CWorkCommandManager( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CWorkCommandManager )
				};
			}
		}
	}
}
#endif
