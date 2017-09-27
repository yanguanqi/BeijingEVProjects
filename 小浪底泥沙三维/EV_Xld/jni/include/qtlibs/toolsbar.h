#ifndef __TOOLSBAR_H
#define __TOOLSBAR_H

#include "qtlibs/viewtoolbar_global.h"
#include "spatialgui/itoolbar.h"
#include "spatialgui/iitem.h"
class QToolBar;

namespace EarthView{
	namespace World{
		namespace Desktop{
			namespace QT{
				class VIEWTOOLBAR_EXPORT CToolsBar : public EarthView::World::Spatial::SystemUI::IToolBar
				{
				public:
					CToolsBar( ev_uint32 type );
					~CToolsBar();

				public:
					ev_uint32 getType() const;

					EVString getName() const;
					ev_void setName( _in const EVString& name );

					ev_bool isEnabled() const;
					ev_void setEnabled( ev_bool enable );

					ev_bool isVisible() const;
					ev_void setVisible( _in ev_bool visible );

					ev_uint32 getItemCount() const;
					ev_bool removeItem( _in ev_uint32 index );
					EarthView::World::Spatial::SystemUI::IItem* getItem( _in ev_uint32 index ) const;
					ev_void clear();

					ev_bool appendItem( _in EarthView::World::Spatial::SystemUI::ICommand *command );
					ev_bool insertItem( _in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand *command );

					ev_bool appendSeperator();
					ev_bool insertSeperator( _in ev_uint32 index );

					ev_void connect( _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl );

					QToolBar* getQtToolBar() const;
				protected:
					QToolBar* mpToolBar;

					ev_uint32 mnType;

					ev_vector<EarthView::World::Spatial::SystemUI::IItem*> mItems;
					C_DISABLE_COPY( CToolsBar )
				};
			}
		}
	}
}
#endif