#ifndef _FRMMODELINFORMATION_
#define _FRMMODELINFORMATION_

#include <QDialog>
#include "qtlibs/datasourcetuils_global.h"
#include "core/stringdefines.h"

namespace Ui
{
    class FrmInformation;
}

namespace EarthView
{
	namespace World	
	{
		namespace Desktop
		{
			namespace QT
			{
				class DATASOURCEUTILS_DLL CFrmModelInformation : public QDialog
				{
					Q_OBJECT

				public:
					CFrmModelInformation(EVString info, QWidget *parent = 0);
					~CFrmModelInformation();
				protected:
                    void initVar();
					void initTable();
				private:
					Ui::FrmInformation* ui;
                    ev_vector<EVString> triInfos;
                    ev_vector<EVString> batchInfos;
				    EVString modelInfo;
				};
			}
		}
	}
}
#endif