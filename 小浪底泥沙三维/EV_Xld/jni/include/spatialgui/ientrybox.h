#ifndef __IENTRYBOX_H_
#define __IENTRYBOX_H_

#include "core/memoryallocatedobject.h"
#include "spatialgui/spatialguiconfig.h"
#include "spatialgui/icommand.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class ICommand;
				class EV_SPATIALGUI_DLL IEntryBox : public EarthView::World::Spatial::SystemUI::ICommand
				{
				public:
					~IEntryBox();

				public:
					/// <summary>
					/// 获取组合框的宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns>宽度值</returns>
					virtual ev_uint32 getWidth() const;
					/// <summary>
					/// 获取组合项中条目的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>条目数量</returns>
					virtual ev_uint32 getEntryCount() const;
					/// <summary>
					/// 获取指定的条目
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					virtual EVString getEntry( _in ev_uint32 index ) const;
					/// <summary>
					/// 获取当前的索引
					/// </summary>
					/// <param name=""></param>
					/// <returns>索引</returns>
					virtual ev_int32 getCurrentIndex() const;
					/// <summary>
					/// 当前的索引发生变化时,会调用该方法
					/// </summary>
					/// <param name="index">新的当前索引</param>
					/// <returns></returns>
					virtual ev_void currentIndexChanged( _in ev_uint32 index );
					/// <summary>
					/// 类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					virtual ev_uint32 getType() const;
ev_private:
					IEntryBox( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IEntryBox )
ev_internal:
					IEntryBox();
				};
			}
		}
	}
}
#endif

