#ifndef EARTHVIEW_WORLD_SPATIAL3D_ENTITYINSTANCELAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_ENTITYINSTANCELAYER_H


#include "spatial3dengine/spatial3denginecomdef.h"
#include "spatial3dengine/entitylayer.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CModelOctreeManager;
				class CEntityDataset;
			}
		}}}



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
				class CEntityInstanceLayerFactory;


				class EV_Spatial3DEngine_DLL CEntityInstanceLayer : public EarthView::World::Spatial3D::Atlas::CEntityLayer
				{
				public:
					/// <summary>
					///  析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CEntityInstanceLayer();

					/// <summary>
					///  克隆函数
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;

					/// <summary>
					///  获取图层类别
					/// </summary>
					/// <returns>图层类别</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;

					/// <summary>
					///  从工程文件序列化
					/// </summary>
					/// <param name="element">xml数据</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					///  序列化到工程文件
					/// </summary>
					/// <returns>xml数据</returns>
					EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 设置图层属性
					/// </summary>
					/// <returns></returns>
					virtual void setLayerAttribute(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);
					/// <summary>
					/// 获取指定图层对象指定可见性的子部件集合
					/// </summary>
					/// <param name="id">模型id</param>
					/// <param name="visible">可见性</param>
					/// <param name="subEntityIndexVector">subentity下标集合</param>
					/// <returns></returns>
					virtual ev_bool getSubEntityVisibility(ev_uint32 id,ev_bool visible, _out EarthView::World::Core::IntVector& subEntityIndexVector);
					/// <summary>
					/// 设置异步更新buffer
					/// </summary>
					/// <param name="asyncUpdate">异步更新</param>
					ev_void setAsyncUpdateBuffer(ev_bool asyncUpdate);
					/// <summary>
					/// 获取异步更新buffer
					/// </summary>
					/// <returns>是否异步更新buffer</returns>
					ev_bool getAsyncUpdateBuffer();
					/// <summary>
					/// 启用或禁用图层编辑
					/// </summary>
					/// <param name="editing">编辑状态</param>
					virtual ev_void setEditing(ev_bool editing);
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					/// <param name="pList">参数键值对</param>
					///<returns></returns>
					CEntityInstanceLayer(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:

					/// <summary>
					///  构造函数
					/// </summary>
					/// <param name="layerName">图层名称</param>
					/// <param name="dataset">数据集对象</param>
					/// <returns></returns>
					CEntityInstanceLayer(const EVString& layerName, EarthView::World::Spatial3D::Dataset::CEntityDataset* ref_dataset);

					/// <summary>
					///  默认构造函数
					/// </summary>
					/// <returns></returns>
					CEntityInstanceLayer(); 

					friend class EarthView::World::Spatial3D::Dataset::CModelOctreeManager;
					friend class CEntityInstanceLayerFactory;
					ev_bool mbAsyncUpdateBuffer;
				};

			}//namespace
		}
	}
}
#endif

