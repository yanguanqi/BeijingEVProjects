#ifndef FRMMODELIMPORTTOOL_H_
#define FRMMODELIMPORTTOOL_H_
#include "core/stringdefines.h"
#include "qtlibs/datasourcetuils_global.h"
#include <QVariant>
#include <QDialog>
#include <QScopedPointer>

// using namespace EarthView::World::Core;

namespace EarthView
{
	namespace World 
	{
		namespace Desktop
		{
			namespace QT
			{
				class ImportToolHelper;

				class DATASOURCEUTILS_DLL CFrmModelImportTool : public QDialog
				{
					Q_OBJECT

				public:
					CFrmModelImportTool(EVString datasourceName, EVString datasetName, QWidget *parent = 0);
					~CFrmModelImportTool();
			        void exec();
				private:
					QScopedPointer<ImportToolHelper> helper;
				};
			}
		}}}
#endif // FRMMAINWINDOW_H
