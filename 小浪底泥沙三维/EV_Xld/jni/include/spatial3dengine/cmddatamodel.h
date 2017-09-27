#ifndef EARTHVIEW_WORLD_SPATIAL3D_CMDDATAMODEL_H
#define EARTHVIEW_WORLD_SPATIAL3D_CMDDATAMODEL_H

#include "cmddatabase.h"
#include "mathengine/vector3.h"
#include "mathengine/quaternion.h"

namespace EarthView{
	namespace World{
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

			class EV_Spatial3DEngine_DLL CCmdDataModel : public EarthView::World::Spatial3D::CCmdDataBase
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CCmdDataModel(EarthView::World::Core::CNameValuePairList* pList);
			protected:
				EarthView::World::Spatial::Math::CVector3 mUndoPos;
				EarthView::World::Spatial::Math::CVector3 mUndoScale;
				EarthView::World::Spatial::Math::CQuaternion mUndoQua;

				EarthView::World::Spatial::Math::CVector3 mRedoPos;
				EarthView::World::Spatial::Math::CVector3 mRedoScale;
				EarthView::World::Spatial::Math::CQuaternion mRedoQua;

				EarthView::World::Spatial::GeoDataset::IFeature* mpMeshItem;
				vector<EarthView::World::Spatial::GeoDataset::IFeature*> mResItems;

				EarthView::World::Spatial::GeoDataset::IFeature* mpUndoAttr;
				EarthView::World::Spatial::GeoDataset::IFeature* mpRedoAttr;

				EarthView::World::Spatial::Math::CMatrix4 mMatrix;
				ev_uint32 mMeshInstID;
				ev_real64 mUndoDemHeight;
				ev_real64 mRedoDemHeight;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="layer">图层对象</param>
				/// <param name="id">id</param>
				/// <param name="operType">操作类型</param>
				/// <returns></returns>
				CCmdDataModel(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer, ev_uint32 id, EarthView::World::Spatial3D::CommandOperType operType);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CCmdDataModel();

				/// <summary>
				/// 设置撤销位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void setUndoPose(const EarthView::World::Spatial::Math::CVector3& pose, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua, ev_real64 demHeight);

				/// <summary>
				/// 获取撤销位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void getUndoPose(EarthView::World::Spatial::Math::CVector3& pose, EarthView::World::Spatial::Math::CVector3& scale, EarthView::World::Spatial::Math::CQuaternion& qua, ev_real64& demHeight);

				/// <summary>
				/// 设置重做位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void setRedoPose(const EarthView::World::Spatial::Math::CVector3& pose, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua, ev_real64 demHeight );

				/// <summary>
				/// 获取重做位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void getRedoPose(EarthView::World::Spatial::Math::CVector3& pose, EarthView::World::Spatial::Math::CVector3& scale, EarthView::World::Spatial::Math::CQuaternion& qua, ev_real64& demHeight);

				/// <summary>
				/// 设置要素
				/// </summary>
				/// <param name=" f">要素对象</param>
				/// <returns></returns>
				void setMeshItem(EarthView::World::Spatial::GeoDataset::IFeature* ref_f);

				/// <summary>
				/// 获取要素
				/// </summary>
				/// <param name=""></param>
				/// <returns>要素对象</returns>
				EarthView::World::Spatial::GeoDataset::IFeature* getMeshItem();

				/// <summary>
				/// 添加资源要素
				/// </summary>
				/// <param name="f">要素对象</param>
				/// <returns></returns>
				void addResItem(EarthView::World::Spatial::GeoDataset::IFeature* ref_f);

				/// <summary>
				/// 获取资源要素个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>要素个数</returns>
				ev_uint32 getNumResItem();

				/// <summary>
				/// 获取资源要素
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::GeoDataset::IFeature* getResItem(ev_uint32 index);			

				/// <summary>
				/// 设置矩阵
				/// </summary>
				/// <param name="index">序号</param>
				/// <returns></returns>
				void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& mat);

				/// <summary>
				/// 获取矩阵
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix4 getMatrix();

				/// <summary>
				/// 设置模型库对象ID
				/// </summary>
				/// <returns></returns>
				void setMeshInstID(ev_uint32 id);

				/// <summary>
				/// 获取模型库对象ID
				/// </summary>
				/// <returns></returns>
				ev_uint32 getMeshInstID();

				/// <summary>
				/// 设置撤销属性
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void setUndoAttr(EarthView::World::Spatial::GeoDataset::IFeature* ref_f);

				/// <summary>
				/// 获取撤销属性
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::GeoDataset::IFeature* getUndoAttr();

				/// <summary>
				/// 设置重做位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void setRedoAttr(EarthView::World::Spatial::GeoDataset::IFeature* ref_f);

				/// <summary>
				/// 获取重做位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::GeoDataset::IFeature* getRedoAttr();


			};

			class EV_Spatial3DEngine_DLL CCmdDataLodModel : public EarthView::World::Spatial3D::CCmdDataBase
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CCmdDataLodModel(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="layer">图层对象</param>
				/// <param name="id">id</param>
				/// <param name="operType">操作类型</param>
				/// <returns></returns>
				CCmdDataLodModel(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer, ev_uint32 id, EarthView::World::Spatial3D::CommandOperType operType);

				virtual ~CCmdDataLodModel();
			public:
				ev_real64 mUndoLat;
				ev_real64 mUndoLon;
				ev_real64 mUndoAlt;
				EarthView::World::Spatial::Math::CVector3 mUndoLocalScale;
				EarthView::World::Spatial::Math::CQuaternion mUndoLocalOrientation;

				ev_real64 mRedoLat;
				ev_real64 mRedoLon;
				ev_real64 mRedoAlt;
				EarthView::World::Spatial::Math::CVector3 mRedoLocalScale;
				EarthView::World::Spatial::Math::CQuaternion mRedoLocalOrientation;

				EVString mMeshxFile;
				ev_bool mIsInstance;
			};
		}
	}
}

#endif
