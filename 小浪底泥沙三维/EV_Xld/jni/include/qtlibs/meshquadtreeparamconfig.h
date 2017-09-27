#ifndef _MESHQUADTREEPARAMCONFIG_H
#define _MESHQUADTREEPARAMCONFIG_H

#include <QDialog>
#include "ui_paramconfig.h"
#include "core/stringdefines.h"
#include "mathengine/ev_math.h"
#include "meshoptimize/modellodgenerator.h"

namespace EarthView
{
	namespace World 
	{
		namespace Desktop
		{
			namespace QT
			{
				class CFrmMeshQuadTreeConfig : public QDialog
				{
					Q_OBJECT

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CFrmMeshQuadTreeConfig(EarthView::MeshOptimize::CModelLODGenerator* pMeshQuadTreeMgr,QWidget* parent = 0);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CFrmMeshQuadTreeConfig();
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
				protected:

					private slots:
						void defaultConfigClicked();
						void btnOkClicked();
						void btnRemoveAllClicked();
						void btnAddClicked();
						void btndDecreaseClicked();
						void paramItemClicked ( QListWidgetItem * item );


						public slots:
							void slotValueChanged(double d);
							void slotStateChanged( int state );

				private:
					Ui::paramConfig ui;
					EarthView::MeshOptimize::CModelLODGenerator* mpMeshQuadTreeMgr;

					struct ParamStruct
					{
					public:
						ev_real32 mTargetProportion;
						ev_real32 mUpLimitBoxSize;
						ev_uint32 mUptriangleCountBoundary;
						ev_real32 mUpGreatEqualTriNumLimitProportion;
						ev_real32 mUpLessTriNumLimitProportion;
						ev_real32 mDownLimitBoxSize;
						ev_uint32 mDowntriangleCountBoundary;
						ev_real32 mDownGreatEqualTriNumLimitProportion;
						ev_real32 mDownLessTriNumLimitProportion;
						ev_real32 mDiscardBoxSize;
						ev_uint32 mMinOptimizeTriangleNum;
						ev_uint32 mDiscardTrangleCountUpperLimit;
						ev_uint32 mMaxMergeMatrixNum;
						ev_real32 mSmoothDegree;
						ev_real32 mMinRangeCoefficient;
						ev_bool mTriangleRelationshipRebulid;
						ev_bool mMergeMesh;
						ev_bool mUseDoubleSideLight;
						ev_bool mConvertToDDS;
						ev_uint8 mLevel;
						ev_real32 mLineOptimizePersent;
						ev_bool operator != (const ParamStruct& rhs)
						{
							ev_bool equal = false;

							if(EarthView::World::Spatial::Math::CMath::Abs(mTargetProportion - rhs.mTargetProportion) > 1e-6 ||
								EarthView::World::Spatial::Math::CMath::Abs(mSmoothDegree - rhs.mSmoothDegree) > 1e-6||
								EarthView::World::Spatial::Math::CMath::Abs(mMinOptimizeTriangleNum - rhs.mMinOptimizeTriangleNum) > 1e-6 ||
								mTriangleRelationshipRebulid != rhs.mTriangleRelationshipRebulid || 
								mMergeMesh != rhs.mMergeMesh ||
								mUseDoubleSideLight != rhs.mUseDoubleSideLight || 
								mConvertToDDS != rhs.mConvertToDDS
								||mUpLimitBoxSize != rhs.mUpLimitBoxSize
								||mUptriangleCountBoundary != rhs.mUptriangleCountBoundary
								||mUpGreatEqualTriNumLimitProportion != rhs.mUpGreatEqualTriNumLimitProportion
								||mUpLessTriNumLimitProportion != rhs.mUpLessTriNumLimitProportion
								||mDiscardBoxSize != rhs.mDiscardBoxSize
								||mDownLimitBoxSize != rhs.mDownLimitBoxSize
								||mDowntriangleCountBoundary != rhs.mDowntriangleCountBoundary
								||mDownGreatEqualTriNumLimitProportion != rhs.mDownGreatEqualTriNumLimitProportion
								||mDownLessTriNumLimitProportion != rhs.mDownLessTriNumLimitProportion
								||mMaxMergeMatrixNum != rhs.mMaxMergeMatrixNum
								||mMinRangeCoefficient != rhs.mMinRangeCoefficient
								||mDiscardTrangleCountUpperLimit != rhs.mDiscardTrangleCountUpperLimit
								||mLineOptimizePersent != rhs.mLineOptimizePersent
								)
							{
								return true;
							}

							return equal;
						}
					};
					ParamStruct mParamStruct;
					ev_bool mHasSelect;
					ev_real32 mlastProp;
				};
			}
		}
	}
}
#endif