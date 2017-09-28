#ifndef EARTHVIEW_WORLD_SPATIAL3D_LASXGLAYEREDITOR_H
#define EARTHVIEW_WORLD_SPATIAL3D_LASXGLAYEREDITOR_H

#include "layer3deditor.h"
#include "spatial3denginecomdef.h"
#include "graphic/common.h"
#include "spatialdatabase/propertyset.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			class CCmdDataBase;
			class CEVLasxgEventObject;

			class EV_Spatial3DEngine_DLL CEVLasxgLayerEditor : public EarthView::World::Spatial3D::CLayer3DEditor 
			{
			public:
				/*
				为了c#中可以实现派生类，把原来的protected构造改成了public，如果派生了，layereditormanager就不要再使用了
				*/
				/// <summary>
				///  构造函数
				/// </summary>
				/// <returns></returns>
				CEVLasxgLayerEditor();

				/// <summary>
				///  析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVLasxgLayerEditor();

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
				/// <param name="meshxfile">绝对路径</param>
				/// <param name="lat">纬度</param>
				/// <param name="lon">纬度</param>
				/// <param name="alt">纬度</param>
				/// <param name="localScale">纬度</param>
				/// <param name="localOriation">纬度</param>
				/// <param name="propertyVal">属性键值对，与创建数据集时扩展属性对应。注意：propertyVal键与meshxgdatasource->createDataset时attrFields参数相同，代表扩展属性</param>
				/// </summary>
				/// <returns>返回ID是临时ID，与该模型保存后的ID不同，可以通过监听器CLayer3DEditorListener监听(onInsertMeshxg)提交后ID与这个ID关系</returns>
				virtual ev_uint32 addLayerObject(const EVString& meshxfile, ev_real64 lat, ev_real64 lon, ev_real64 alt, const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CQuaternion& localOrientation, EarthView::World::Spatial::GeoDataset::CPropertySet& propertyVal);

				/// <summary>
				/// 添加复用对象，同样的meshx放在不同位置，最后数据集存储只有一份
				/// </summary>
				/// <returns>返回ID是临时ID，与该模型保存后的ID不同，可以通过监听器CLayer3DEditorListener监听(onInsertMeshxg)提交后ID与这个ID关系</returns>
				virtual ev_uint32 addInstanceObject(const EVString& meshxfile, ev_real64 lat, ev_real64 lon, ev_real64 alt, const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CQuaternion& localOrientation, EarthView::World::Spatial::GeoDataset::CPropertySet& propertyVal);

				/// <summary>
				///  改变模型姿态
				/// <param name="id">图层中模型ID</param>
				/// <param name="lat">纬度</param>
				/// <param name="lon">纬度</param>
				/// <param name="alt">纬度</param>
				/// <param name="localScale">纬度</param>
				/// <param name="localOriation">纬度</param>
				/// </summary>
				/// <returns></returns>
				virtual ev_bool changeObjectPosition(ev_uint32 id, ev_real64 lat, ev_real64 lon, ev_real64 alt, const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CQuaternion& localOrientation);

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
				///  取消编辑
				/// </summary>
				/// <returns></returns>
				void cancelEditing();

				/// <summary>
				///  提交编辑
				/// </summary>
				/// <returns></returns>
				void commitEditing(ev_bool bSaveOrCommit);

ev_private:
				CEVLasxgLayerEditor(_in EarthView::World::Core::CNameValuePairList *pList);

				friend class CEVLasxgEventObject;
			protected:
				ev_uint32 mNewID;
				CEVLasxgEventObject* mpEventObject;
			};

		}
	}
}


#endif
