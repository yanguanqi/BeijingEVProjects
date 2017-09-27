#ifndef EVAPPLICATION_H
#define EVAPPLICATION_H

#include <QWidget>

#ifndef QDESIGNER_EXPORT_WIDGETS
#if defined(_DEBUG)
#pragma comment(lib, "evworkspace_d.lib")
#else
#pragma comment(lib, "evworkspace.lib")
#endif
#define EVAPP_DLL Q_DECL_IMPORT
#else
#define EVAPP_DLL Q_DECL_EXPORT
#endif
namespace EarthView{namespace World{namespace Utilities{
class AppAtlas;
class AppDataSource;
class AppProject;
}}}
class EvAppHelper;
// using namespace EarthView::World::Utilities;

class EVAPP_DLL EVWorkspace : public QWidget
{
	Q_OBJECT

public:
	EVWorkspace(QWidget *parent = 0, bool init = true);
	~EVWorkspace();

	static EarthView::World::Utilities::AppAtlas& atlas();

	static EarthView::World::Utilities::AppDataSource& dataSource();

	static EarthView::World::Utilities::AppProject&	project();

	QScopedPointer<EvAppHelper> helper;

public:

	virtual void paintEvent(QPaintEvent* ev);

	virtual void timerEvent(QTimerEvent * e);

	void setProjectName(const QString& projName);

	QString getProjectName() const;

	void setLocalProjectName(const QString& projName);

	QString getLocalProjectName() const;

	void setUseAbsolutePath(bool b);

	bool getUseAbsolutePath() const;

	void setShowSplash(bool b);

	bool getShowSplash() const;

	virtual QSize sizeHint () const;

	virtual bool event(QEvent* e);

	Q_PROPERTY(QString	projectName		 READ getProjectName	  WRITE setProjectName)
	Q_PROPERTY(QString	localProjectName READ getLocalProjectName WRITE setLocalProjectName)
	Q_PROPERTY(bool		useAbsolutePath  READ getUseAbsolutePath  WRITE setUseAbsolutePath)
	Q_PROPERTY(bool		showSplash		 READ getShowSplash		  WRITE setShowSplash)
};

#endif // EVAPPLICATION_H
