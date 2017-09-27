#ifndef ATLASWIDGET_H
#define ATLASWIDGET_H

#include <QWidget>

#ifndef QDESIGNER_EXPORT_WIDGETS
#if defined(_DEBUG)
#pragma comment(lib, "atlaswidget_d.lib")
#else
#pragma comment(lib, "atlaswidget.lib")
#endif
#define ATLASWIDGET_DLL Q_DECL_IMPORT
#else
#define ATLASWIDGET_DLL Q_DECL_EXPORT
#endif

class AtlasWidgetHelper;

class ATLASWIDGET_DLL AtlasWidget : public QWidget
{
	Q_OBJECT

public:
	AtlasWidget(QWidget *parent = 0);
	~AtlasWidget();
protected:
	QScopedPointer<AtlasWidgetHelper> helper;
	virtual QSize sizeHint () const;
};

#endif // ATLASWIDGET_H
