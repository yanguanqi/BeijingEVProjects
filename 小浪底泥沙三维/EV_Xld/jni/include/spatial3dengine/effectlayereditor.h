#ifndef EARTHVIEW_WORLD_SPATIAL3D_EFFECTLAYEREDITOR_H
#define EARTHVIEW_WORLD_SPATIAL3D_EFFECTLAYEREDITOR_H

#include "spatial3dengine/layer3deditor.h"
#include "spatial3dengine/cmddatabase.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace EffectManager
			{
				class CEffectObject;
			};
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{

			/// <summary>
			/// 用户工具栏回退的命令对象
			/// </summary>			
			class EV_Spatial3DEngine_DLL CCmdDataEffect : public EarthView::World::Spatial3D::CCmdDataBase
			{
			private:
				EarthView::World::Spatial::Math::CVector3 mUndoPos;
				EarthView::World::Spatial::Math::CVector3 mUndoScale;
				EarthView::World::Spatial::Math::CQuaternion mUndoQua;

				EarthView::World::Spatial::Math::CVector3 mRedoPos;
				EarthView::World::Spatial::Math::CVector3 mRedoScale;
				EarthView::World::Spatial::Math::CQuaternion mRedoQua;
				ev_uint32 mEffectID;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="layer">特效图层指针</param>
				/// <param name="id">具体操作的特效的数据库记录ID</param>
				/// <param name="operType">操作的类型枚举</param>
				/// <returns></returns>
				CCmdDataEffect(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer, ev_uint32 id, EarthView::World::Spatial3D::CommandOperType operType);

			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CCmdDataEffect(_in EarthView::World::Core::CNameValuePairList *pList);
				
				
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CCmdDataEffect();
				/// <summary>
				/// 设置前进之前的位置
				/// </summary>
				/// <param name="pos">位置EarthView::World::Spatial::Math::CVector3</param>
				/// <returns></returns>
				void setRedoPos(EarthView::World::Spatial::Math::CVector3 pos);

				/// <summary>
				/// 获得前进之前的位置
				/// </summary>				
				/// <returns>前进之前的位置EarthView::World::Spatial::Math::CVector3</returns>
				EarthView::World::Spatial::Math::CVector3 getRedoPos();

				/// <summary>
				/// 设置前进之前的缩放
				/// </summary>
				/// <param name="scale">缩放EarthView::World::Spatial::Math::CVector3</param>
				/// <returns></returns>
				void setRedoScale(EarthView::World::Spatial::Math::CVector3 scale);

				/// <summary>
				/// 获得前进之前的缩放
				/// </summary>				
				/// <returns>前进之前的缩放EarthView::World::Spatial::Math::CVector3</returns>
				EarthView::World::Spatial::Math::CVector3 getRedoScale();

				/// <summary>
				/// 设置前进之前的旋转四元数
				/// </summary>
				/// <param name="qua">旋转EarthView::World::Spatial::Math::CQuaternion</param>
				/// <returns></returns>
				void setRedoQua(EarthView::World::Spatial::Math::CQuaternion qua);

				/// <summary>
				/// 获得前进之前的旋转的四元数
				/// </summary>				
				/// <returns>前进之前的旋转EarthView::World::Spatial::Math::CQuaternion</returns>
				EarthView::World::Spatial::Math::CQuaternion getRedoQua();

				/// <summary>
				/// 设置后退之前的位置
				/// </summary>
				/// <param name="pos">后退EarthView::World::Spatial::Math::CVector3</param>
				/// <returns></returns>
				void setUndoPos(EarthView::World::Spatial::Math::CVector3 pos);

				/// <summary>
				/// 获得后退之前的位置
				/// </summary>				
				/// <returns>后退之前的位置EarthView::World::Spatial::Math::CVector3</returns>
				EarthView::World::Spatial::Math::CVector3 getUndoPos();

				/// <summary>
				/// 设置后退之前的缩放
				/// </summary>
				/// <param name="scale">后退缩放EarthView::World::Spatial::Math::CVector3</param>
				/// <returns></returns>
				void setUndoScale(EarthView::World::Spatial::Math::CVector3 scale);

				/// <summary>
				/// 获得后退之前的缩放
				/// </summary>				
				/// <returns>后退之前的缩放EarthView::World::Spatial::Math::CVector3</returns>
				EarthView::World::Spatial::Math::CVector3 getUndoScale();

				/// <summary>
				/// 设置后退之前的旋转四元数
				/// </summary>
				/// <param name="qua">旋转四元数</param>
				/// <returns></returns>
				void setUndoQua(EarthView::World::Spatial::Math::CQuaternion qua);


				/// <summary>
				/// 获得后退之前的旋转的四元数
				/// </summary>				
				/// <returns>后退之前的旋转四元数</returns>
				EarthView::World::Spatial::Math::CQuaternion getUndoQua();


				/// <summary>
				/// 设置操作的特效对象ID
				/// </summary>	
				/// <param name="effectId">特效ID</param>
				/// <returns></returns>
				void setEffectId(ev_uint32 effectId);

				/// <summary>
				/// 获得操作的特效对象ID
				/// </summary>					
				/// <returns>操作特效对象的ID</returns>
				ev_uint32 getEffectId();

				

			}; 

			/// <summary>
			/// 特效的图层编辑器
			/// </summary>	
			class EV_Spatial3DEngine_DLL CEffectLayerEditor : public EarthView::World::Spatial3D::CLayer3DEditor 
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CEffectLayerEditor(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>				
				/// <returns></returns>
				CEffectLayerEditor();
				
				/// <summary>
				/// 析构函数
				/// </summary>				
				/// <returns></returns>
				virtual ~CEffectLayerEditor();

				/// <summary>
				///  保存编辑
				/// </summary>
				/// <returns></returns>
				virtual void saveEditing();

				/// <summary>
				///  开始编辑
				/// </summary>
				/// <param name="withUndo">是否开启回退</param>
				/// <returns>开始编辑是否操作成功，成功为true</returns>
			    virtual ev_bool startEditing(ev_bool withUndo);

				/// <summary>
				///  停止编辑
				/// </summary>
				/// <param name="isSave">是否保存修改的内容，true为保存</param>
				/// <returns></returns>
				virtual void stopEditing(ev_bool isSave);

				/// <summary>
				///  往图层上添加特效
				/// </summary>
				/// <param name="id">所添加的特效ID</param>
				/// <param name="matrix">特效所在的全局变换矩阵</param>
				/// <returns>添加是否成功，true代表成功</returns>
				virtual ev_uint32 addLayerObject(ev_uint32 id, const EarthView::World::Spatial::Math::CMatrix4& matrix);

				/// <summary>
				///  编辑图层上特效
				/// </summary>
				/// <param name="objPtr">所编辑的特效显示对象</param>
				/// <param name="nwMatrix">特效修改后的全局变换矩阵</param>
				/// <returns>编辑是否成功，true代表成功</returns>
				virtual ev_bool changeObjectPosition(EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr, const EarthView::World::Spatial::Math::CMatrix4& nwMatrix);

				/// <summary>
				///  删除图层上的特效
				/// </summary>
				/// <param name="objId">所删除的特效的ID</param>				
				/// <returns>编辑是否成功，true代表成功</returns>
				virtual ev_bool deleteLayerObject(ev_uint32 objId);

				/// <summary>
				/// 将图层上的特效设置为选择状态
				/// </summary>
				/// <param name="obj">特效的可视化对象</param>				
				/// <returns></returns>
				void  setSelectedObject(EarthView::World::Spatial3D::EffectManager::CEffectObject* ref_obj);

				/// <summary>
				/// 获得图层上当前点选的特效
				/// </summary>							
				/// <returns>特效的可视化对象</returns>
				EarthView::World::Spatial3D::EffectManager::CEffectObject* getSelectedObject();

			protected:
		
				/// <summary>
				/// 回退添加特效操作
				/// </summary>	
				/// <param name="cmd">需要回退的CCmdDataEffect对象</param>
				/// <returns>操作是否成功，成功返回true</returns>
				virtual ev_bool undoAddOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				/// 回退修改特效（位置、旋转、缩放）操作
				/// </summary>	
				/// <param name="cmd">需要回退的CCmdDataEffect对象</param>
				/// <returns>操作是否成功，成功返回true</returns>
				virtual ev_bool undoChangePoseOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				/// 回退删除特效操作
				/// </summary>	
				/// <param name="cmd">需要回退的CCmdDataEffect对象</param>
				/// <returns>操作是否成功，成功返回true</returns>
				virtual ev_bool undoDeleteOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				/// 撤销前进添加特效操作
				/// </summary>	
				/// <param name="cmd">需要前进的CCmdDataEffect对象</param>
				/// <returns>操作是否成功，成功返回true</returns>
				virtual ev_bool redoAddOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				/// 撤销前进修改特效（位置、旋转、缩放）操作
				/// </summary>	
				/// <param name="cmd">需要前进的CCmdDataEffect对象</param>
				/// <returns>操作是否成功，成功返回true</returns>
				virtual ev_bool redoChangePoseOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				/// 撤销前进删除特效操作
				/// </summary>	
				/// <param name="cmd">需要前进的CCmdDataEffect对象</param>
				/// <returns>操作是否成功，成功返回true</returns>

				virtual ev_bool redoDeleteOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);
			private:
				EarthView::World::Spatial3D::EffectManager::CEffectObject* mpObj;

			};


		}
	}
}

#endif
