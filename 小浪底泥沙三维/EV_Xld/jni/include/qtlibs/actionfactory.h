#ifndef _QACTIONFACTORY_H
#define _QACTIONFACTORY_H

#include <QObject>
#include <QMutex>
#include <QWaitCondition>
#include "spatialgui/iactionfactory.h"
#include "qtlibs/viewtoolbar_global.h"
//#include "frmmainwindow.h"
// using namespace EarthView::World::Spatial::SystemUI;
class CNetworkAnalystToolBar;

namespace EarthView{
	namespace World{
		namespace Desktop{
			namespace QT{
				class VIEWTOOLBAR_EXPORT CActionFactory : public QObject, public EarthView::World::Spatial::SystemUI::IActionFactory
				{
					Q_OBJECT
				public:
					~CActionFactory();

				public:
					static EarthView::World::Spatial::SystemUI::IActionFactory* getSingletonPtr();

					virtual EarthView::World::Spatial::SystemUI::IToolBar* createToolBar( ev_uint32 type );
					virtual EarthView::World::Spatial::SystemUI::IMenu* createMenu( ev_uint32 type ) const;

					virtual ev_void destoryToolBar( _in EarthView::World::Spatial::SystemUI::IToolBar* bar ) const;
					virtual ev_void destoryMenu( _in EarthView::World::Spatial::SystemUI::IMenu* menu ) const;

					virtual EarthView::World::Spatial::SystemUI::IItem* getItem( _in EarthView::World::Spatial::SystemUI::ICommand* cmd ) const;

					virtual ev_bool question( const EVString& text ) const;
					virtual ev_void information( const EVString& text ) const;
				private:

					Q_INVOKABLE EarthView::World::Spatial::SystemUI::IToolBar* _createToolBar( ev_uint32 type );

					CActionFactory();
					static CActionFactory* mpInstance;
					ev_map<EarthView::World::Spatial::SystemUI::ICommand*,EarthView::World::Spatial::SystemUI::IItem*> mCommands;

					QMutex mutexCreate;
					QWaitCondition waitForCreating;
					EarthView::World::Spatial::SystemUI::IToolBar* toolbarCreated;

					friend class CCommandItem;
				};
			}
		}
	}
}
#endif // _QACTIONFACTORY_H
