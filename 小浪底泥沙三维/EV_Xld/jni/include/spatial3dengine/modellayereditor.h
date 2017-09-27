#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELLAYEREDITOR_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELLAYEREDITOR_H

#include "layer3deditor.h"
#include "geometry3d/visibleobject.h"
#include "spatial3denginecomdef.h"
#include "graphic/common.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CEntityLayer;
			}
		}
		namespace Spatial{
			namespace GeoDataset{
				class IFeature;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			class CCmdDataBase;
			class CModelLayerEditorEventObject;

			class EV_Spatial3DEngine_DLL CModelLayerEditor : public EarthView::World::Spatial3D::CLayer3DEditor 
			{
			public:
				/*
				为了c#中可以实现派生类，把原来的protected构造改成了public，如果派生了，layereditormanager就不要再使用了
				*/
				/// <summary>
				///  构造函数
				/// </summary>
				/// <returns></returns>
				CModelLayerEditor();

				/// <summary>
				///  析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CModelLayerEditor();

				/// <summary>
				///  开始编辑
				/// <param name="withUndo">是否支持撤消</param>
				/// </summary>
				/// <returns></returns>
				virtual ev_bool startEditing(ev_bool withUndo);

				/// <summary>
				///  停止编辑
				/// <param name="isSave">是否保存</param>
				/// </summary>
				/// <returns></returns>
				virtual void stopEditing(ev_bool isSave);

				/// <summary>
				///  保存
				/// </summary>
				/// <returns></returns>
				virtual void saveEditing();

				/// <summary>
				///  添加一个可见对象
				/// <param name="id">模型库中模型ID</param>
				/// <param name="matrix">模型在球上的世界变换</param>
				/// </summary>
				/// <returns></returns>
				virtual ev_uint32 addLayerObject(ev_uint32 id, const EarthView::World::Spatial::Math::CMatrix4& matrix);

				/// <summary>
				///  界面上先移动的模型，再修改对象存储
				/// 2014.1.14修改接口（没有与基类一致），解决模型mesh包围盒中心点不在原点
				/// </summary>
				/// <returns></returns>
				virtual ev_bool changeObjectPosition(EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr, const EarthView::World::Spatial::Math::CMatrix4& oldMatrix, ev_real64 oldDem);

				/// <summary>
				///  修改记录表属性（非用户属性(比如内置属性或只读属性)不会被更新）
				///  记录表属性：数据集的用户属性，可通过编辑记录表来添加用户属性
				///  pMeshFeature = entityDataset->getFeature(id)
				///  pMeshFeature->setValue(val, "customFld");
				///  注：不可用pMeshFeature = pModel->getMeshFeature，因为模型中的feature的包围盒考虑了高程，而数据库中的包围盒不考虑高程
				/// </summary>
				/// <param name="设置新属性值以后的feature">pMeshFeature</param>
				/// <param name="设置新属性值之前的">pOldMeshFeature</param>
				/// <returns></returns>
				ev_bool changeObjectAttribute(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, EarthView::World::Spatial::GeoDataset::IFeature* pOldMeshFeature);

				/// <summary>
				///  删除对象
				/// </summary>
				/// <param name="id">图层中的ID</param>
				/// <returns></returns>
				virtual ev_bool deleteLayerObject(ev_uint32 id);

			protected:

				/// <summary>
				///  撤消添加
				/// </summary>
				/// <returns></returns>
				virtual ev_bool undoAddOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  撤消修改位置操作
				/// </summary>
				/// <returns></returns>
				virtual ev_bool undoChangePoseOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  撤消删除
				/// </summary>
				/// <returns></returns>
				virtual ev_bool undoDeleteOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  重做添加
				/// </summary>
				/// <returns></returns>
				virtual ev_bool redoAddOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  重做修改位置操作
				/// </summary>
				/// <returns></returns>
				virtual ev_bool redoChangePoseOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  重做删除
				/// </summary>
				/// <returns></returns
				virtual ev_bool redoDeleteOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  获取对象所有数据流
				/// </summary>
				/// <returns></returns>
				virtual ev_void getDataStreamForObject(EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr);

				/// <summary>
				///  设置对象的所有数据流为空
				/// </summary>
				/// <returns></returns>
				virtual ev_void setDataStreamNullForObject(EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr);

				/// <summary>
				///  获取对象的mesh数据流
				/// </summary>
				/// <returns></returns>
				virtual ev_void getMeshStreamForObject(EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr);

				/// <summary>
				///  把对象的mesh数据流设置为空
				/// </summary>
				/// <returns></returns>
				virtual ev_void setMeshStreamNullForObject(EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr);

				/// <summary>
				///  取消编辑
				/// </summary>
				/// <returns></returns>
				void cancelEditing();

				/// <summary>
				///  提交编辑
				/// </summary>
				/// <returns></returns>
				void commitEditing(ev_bool bSaveOrCommit);

				/// <summary>
				///  从模板库加载模型，添加到图层
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 addVisibleObjectFromTemplateDB(ev_uint32 meshInstID, const EarthView::World::Spatial::Math::CVector3& pos, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua, _out EarthView::World::Spatial::Math::CAxisAlignedBox& entityBox);

				/// <summary>
				///  根据数据流直接添加对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 addVisibleObject(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, EarthView::World::Spatial3D::Dataset::FeatureVector& resVec);

				/// <summary>
				///  从模板库取数据流
				/// </summary>
				/// <returns></returns>
				ev_bool getTemplObjDataStream(ev_uint32 meshInstID, const EarthView::World::Spatial::Math::CVector3& pos, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua,  _out EarthView::World::Spatial::GeoDataset::IFeature*& pMeshFeature, _out EarthView::World::Spatial3D::Dataset::FeatureVector& resFeatures);

				/// <summary>
				///  更新图层中模型位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool changeObjectPosition(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

				/// <summary>
				///  删除图层对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool deleteVisibleObject(EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr);
				ev_bool deleteVisibleObject(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, EarthView::World::Spatial3D::Dataset::FeatureVector& featureVec);
				ev_bool canEdit();

ev_private:
				CModelLayerEditor(_in EarthView::World::Core::CNameValuePairList *pList);

				friend class CLayer3DEditorManager;
				friend class CModelLayerEditorEventObject;
			protected:
				ev_uint32 mMaxEntID;
				ev_uint32 mMaxMeshID;
				ev_bool mHasGeneral;
				CModelLayerEditorEventObject* mpEventObject;
			};

		}
	}
}


#endif
