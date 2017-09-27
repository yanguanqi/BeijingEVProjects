#ifndef __ITOOLBUTTON_H_
#define __ITOOLBUTTON_H_

#include "core/memoryallocatedobject.h"
#include "spatialgui/spatialguiconfig.h"
#include "spatialgui/icommand.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class ICommand;
				class EV_SPATIALGUI_DLL IToolButton : public EarthView::World::Spatial::SystemUI::ICommand
				{
				public:
					~IToolButton();

				public:
					/// <summary>
					/// 添加命令项
					/// </summary>
					/// <param name="cmd">待添加的命令项</param>
					/// <returns></returns>
					virtual ev_void addCommand( _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd );
					/// <summary>
					/// 获取命令项的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					virtual ev_uint32 getCount() const;
					/// <summary>
					/// 获取指定索引处的命令项
					/// </summary>
					/// <param name="index">命令项索引</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::SystemUI::ICommand* getCommand( _in ev_uint32 index ) const;

ev_private:
					IToolButton( EarthView::World::Core::CNameValuePairList *pList );

				protected:
					C_DISABLE_COPY( IToolButton )
ev_internal:
					IToolButton();
				};
			}
		}
	}
}
#endif
