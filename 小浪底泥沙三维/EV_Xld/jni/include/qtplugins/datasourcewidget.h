#ifndef DATASOURCEWIDGET_H
#define DATASOURCEWIDGET_H

#include <QtGui/QWidget>

#ifndef QDESIGNER_EXPORT_WIDGETS
#if defined(_DEBUG)
#pragma comment(lib, "datasourcewidget_d.lib")
#else
#pragma comment(lib, "datasourcewidget.lib")
#endif
#define ATLASWIDGET_DLL Q_DECL_IMPORT
#else
#define ATLASWIDGET_DLL Q_DECL_EXPORT
#endif

class DatasourceWidgetHelper;

class ATLASWIDGET_DLL DatasourceWidget : public QWidget
{
	Q_OBJECT

public:
	DatasourceWidget(QWidget *parent = 0);
	~DatasourceWidget();
protected:
	QScopedPointer<DatasourceWidgetHelper> helper;
	virtual QSize sizeHint () const;
};

#endif // DATASOURCEWIDGET_H
