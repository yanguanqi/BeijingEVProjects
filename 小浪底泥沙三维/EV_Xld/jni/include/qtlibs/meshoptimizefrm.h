#ifndef _FRMMESHOPTIMIZE_H
#define _FRMMESHOPTIMIZE_H

#include <QDialog>
#include "qtlibs/datasourcetuils_global.h"
#include "meshoptimize/modellodgenerator.h"
#include "spatialinterface/ifeatureclass.h"
#include "meshoptimize/obqmerge.h"

namespace Ui
{
	class FrmMeshOptimize;
}
class QLineEdit;
class QComboBox;
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				class CEntityDataset;
			}
		}

		namespace Core
		{
			class CBackgroundQueueManager;
			class CDefaultWorkQueue;
		}

		namespace Desktop
		{
			namespace QT
			{
				class CModelDatasourceTree;  //数据源树
				class CModelDataSourceItem; // 数据源树的根节点
				class DATASOURCEUTILS_DLL MeshOptimizeParamCreateDialog : public QDialog
				{
				public:
					enum FileType
					{
						XML
					};

					MeshOptimizeParamCreateDialog(QWidget* parent = 0);

					QString getName() const;

					int     getType() const;

				protected:

					void accept();

					QLineEdit* editName;
					QComboBox* comboType;
				};
				//
				class DATASOURCEUTILS_DLL CFrmMeshOptimize : public QDialog,public EarthView::MeshOptimize::CModelLODGenerateListener
				{
					Q_OBJECT

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CFrmMeshOptimize(EarthView::World::Spatial::GeoDataset::IDataset* dataset,QWidget* parent = 0);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CFrmMeshOptimize();
					/// <summary>
					/// 关闭dialog事件
					/// </summary>
					/// <param name="e"></param>
					/// <returns></returns>
					void closeEvent ( QCloseEvent * e ); 
					/// <summary>
					/// 所有触发的槽函数
					/// </summary>
					void allSlotFunctions();
					//virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
					//
					virtual ev_void processMsg(EVString msg);
					virtual ev_void paused();
					virtual ev_void finished();
				protected:
					void customEvent(QEvent* e );
					struct ParamStruct
					{
						EVString FilePath;
						ev_uint32 Index;
					};
					private slots:
						void openDstFile();
						void proportionRadioChecked(bool b);
						void triangleNumRadioChecked(bool b);
						void optimizeClicked();
						void collectInfoClicked();
						void optimizeStopped();
						void configMeshQuadTreeChecked(bool b);
						void lodParamConfig();
						//
						void addParamConfig();
						void editParamConfig();
						void deleteParamConfig();
						//
						void currentParamIndexChanged (const QString& text);
				private:
					ev_void btnStart();
					ev_void btnStop();
					ev_void loadParamInitPage();
					Ui::FrmMeshOptimize* ui;
					EVString mDstFile;
					EarthView::MeshOptimize::CModelLODGenerator* mpMeshQuadTreeMgr;
					EarthView::World::Core::CDefaultWorkQueue* m_wq;
					EarthView::World::Core::CBackgroundQueueManager* m_bqm;
					EarthView::World::Spatial::GeoDataset::IDataset* mpDataset;
					ev_bool m_collectInfo;
					ev_map<EVString,ParamStruct> mParamMap;
					EVString mCurrentParamName;

				};
			}
		}
	}
}
#endif