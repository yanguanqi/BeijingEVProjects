#ifndef EARTHVIEW_WORLD_SPATIAL3D_EFFECTLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_EFFECTLAYER_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatial3ddataset/effecttabledef.h"
#include "spatial3dengine/i3dlayer.h"
#include "spatial3dengine/effectobject.h"
#include "spatialinterface/altitudemode.h"


namespace EarthView{
	namespace World{
		namespace Graphic{
			class CMovableObject;
			class CSceneManager;
			class CCamera;

		}

	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CEffectDataSet;

			}}}}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{


				/// <summary>
				/// 特效图层
				/// </summary>
				class EV_Spatial3DEngine_DLL CEffectLayer : public EarthView::World::Spatial3D::Atlas::I3DLayer
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectLayer(EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectLayer();

					/// <summary>
					/// 设置图层里的选择对象的颜色
					/// </summary>
					/// <param name="colour">颜色</param>
					/// <returns></returns>
					ev_void setSelectionColour( const EarthView::World::Graphic::CColourValue& colour );

					/// <summary>
					/// 获得图层里所有选择对象的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					const EarthView::World::Graphic::CColourValue& getSelectionColour()const;

					/// <summary>
					/// 获取材质的环境光
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Graphic::CColourValue getAmbient();

					/// <summary>
					/// 设置材质的环境光
					/// </summary>
					/// <param name="val">环境光颜色</param>
					/// <returns></returns>
					ev_void setAmbient(EarthView::World::Graphic::CColourValue val);

					/// <summary>
					/// 获取材质的漫反射光
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Graphic::CColourValue  getDiffuse();

					/// <summary>
					/// 设置材质的漫反射光
					/// </summary>
					/// <param name="val">漫反射光颜色</param>
					/// <returns></returns>
					ev_void setDiffuse(EarthView::World::Graphic::CColourValue val);

					/// <summary>
					/// 获取材质的镜面反射光
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Graphic::CColourValue getSpecular();

					/// <summary>
					/// 设置材质的镜面反射光
					/// </summary>
					/// <param name="val">镜面反射光颜色</param>
					/// <returns></returns>
					ev_void setSpecular(EarthView::World::Graphic::CColourValue val);

					/// <summary>
					/// 查看光照是否开启
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getLightEnable();

					/// <summary>
					/// 设置是否开启光照
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setLightEnable(ev_bool val);

					/// <summary>
					///设置图层高亮选择集
					/// </summary>
					/// <param name="selection">图层选择集</param>
					/// <returns></returns>

					virtual ev_void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection);

					/// <summary>
					/// 图层sql查询
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();

					/// <summary>
					/// 获取图层选择集
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择集</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();

					/// <summary>
					/// 刷新图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void refresh();

					/// <summary>
					/// 获取可见对象列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::VisibleObjects&，可见物体列表容器</returns>
					EarthView::World::Geometry3D::VisibleObjectPtrVector& getVisibleObjectPtrVector();

					/// <summary>
					/// 根据featureid来取得对象
					/// </summary>
					/// <param name="id">对象标示符</param>
					/// <returns></returns>
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(ev_uint32 id);

					/// <summary>
					/// 通过可移动对象查询VisibleObject
					/// </summary>
					/// <param name="pMovableObj">可移动对象</param>
					/// <returns></returns>
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(EarthView::World::Graphic::CMovableObject* pMovableObj);

					/// <summary>
					/// 根据要素获取对象，对象已存在图层中
					/// </summary>
					/// <param name="f">要素</param>
					/// <returns></returns>
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(EarthView::World::Spatial::GeoDataset::IFeature* f);

					/// <summary>
					/// 设置图层可见距离
					/// </summary>
					/// <param name="distance">距离值</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual void setLayerVisibleDistance(ev_real32 distance);

					/// <summary>
					/// 获取图层可见距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_real32 getLayerVisibleDistance();

					/// <summary>
					/// 设置图层高度模式
					/// </summary>
					/// <param name="altitudeMode">高度模式</param>
					/// <param name="altitudeValue">高度值</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual void setAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, ev_real32 altitudeValue);

					/// <summary>
					/// 修改缓存中的高度模式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					//virtual void setModelCacheAltitudeMode(ev_int32 altitudeMode, ev_real32 altitudeValue);

					/// <summary>
					/// 获取图层高度模式
					/// </summary>
					/// <param name="altitudeMode">高度模式</param>
					/// <param name="altitudeValue">高度值</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual void getAltitudeMode(_out ev_int32& altitudeMode,_out ev_real32& altitudeValue);

					/// <summary>
					/// 根据要素创建特效对象，插入到图层中
					/// </summary>
					/// <param name="f">要素</param>
					/// <returns></returns>
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr createVisibleObjectPtr(EarthView::World::Spatial::GeoDataset::IFeature* f);

					/// <summary>
					/// 移除对象
					/// </summary>
					/// <param name="id">对象标示符EVID</param>
					/// <returns></returns>
					ev_bool removeVisibleObject(ev_uint32 id);				


					/// <summary>
					/// 获取场景管理器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager();

					/// <summary>
					/// 获取场景管理器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const;

					/// <summary>
					/// 获取特效数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CEffectDataSet*,特效数据集指针</returns>
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* getEffectDataset();

					/// <summary>
					/// 获取数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataset*,数据集指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();

					/// <summary>
					/// 获取图层名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVString,图层名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 设置图层名称
					/// </summary>
					/// <param name="name">图层名称</param>
					/// <returns></returns>
					virtual ev_void setName( const EVString &name );

					/// <summary>
					/// 获取描述信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVString,描述信息</returns>
					virtual EVString getDescription() const;

					/// <summary>
					/// 设置描述信息
					/// </summary>
					/// <param name="value">描述信息</param>
					/// <returns></returns>
					virtual ev_void setDescription(const EVString& value);

					/// <summary>
					/// 复制函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;

					/// <summary>
					/// 获取是否可见
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isVisible() const;

					/// <summary>
					/// 设置可见性
					/// </summary>
					/// <param name="visible">TRUE/FALSE</param>
					/// <returns></returns>
					virtual ev_void setVisible(ev_bool visible);


					/// <summary>
					/// 获取是否可编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool canEdit() const;

					/// <summary>
					/// 设置是否可编辑
					/// </summary>
					/// <param name="can">TRUE/FALSE</param>
					/// <returns></returns>
					virtual ev_void setCanEdit(ev_bool can);

					/// <summary>
					/// 判断是否正在编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isEditing() const;

					/// <summary>
					/// 设置编辑状态
					/// </summary>
					/// <param name="editing">编辑状态</param>
					/// <returns></returns>
					virtual ev_void setEditing(ev_bool editing);

					/// <summary>
					/// 判断是否为有效的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isValid() const;

					/// <summary>
					/// 是否可选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isSelectable() const;

					/// <summary>
					/// 设置是否可以选中
					/// </summary>
					/// <param name="selectable">是否可被选中</param>
					/// <returns></returns>
					virtual ev_void setSelectable(ev_bool selectable);

					/// <summary>
					/// 获取场景名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getSceneName() const;

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;

					/// <summary>
					/// 获取图层包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelop();

					/// <summary>
					/// 从XML文件中读入数据
					/// </summary>
					/// <param name="element">Xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 转化为XML格式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 序列化为XML格式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString toXML() const;

					/// <summary>
					/// 图层信息序列化成流
					/// </summary>
					/// <param name="stream">数据流</param>   
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary> 
					/// Globe加载一个图层之后通知图层已被添加
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// Globe卸载一个图层之后通知图层已被移除
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// Globe刷新时通知图层刷新
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

					/// <summary>
					/// 设置对象可见性条件
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <param name="ids">id集合</param>
					/// <returns>ev_bool,全部设置成功返回TRUE,未全部设置成功返回FALSE</returns>
					ev_bool setVisibilityFilter( ev_bool visible,const EarthView::World::Core::IntVector& ids );

					/// <summary>
					/// 获取对象可见性条件
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <param name="ids">id集合</param>
					/// <returns>ev_bool,获取成功返回TRUE,失败返回FALSE</returns>
					ev_bool getVisibilityFilter( ev_bool& visible,EarthView::World::Core::IntVector& ids );
ev_internal:
					/// <summary> 
					/// 读入数据流
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns></returns>
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );


				private:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectLayer();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="layerName">图层名称</param>
					/// <param name="dataset">特效数据集</param>
					/// <returns></returns>
					CEffectLayer(const EVString& layerName, EarthView::World::Spatial3D::Dataset::CEffectDataSet* dataset);		

					/// <summary>
					/// 更新高度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void _notifyUpdateAltitude();
				private:
					/// <summary>
					/// 图层选择要素集合
					/// </summary>
					EarthView::World::Spatial::Atlas::ILayerSelection* m_pSelectionSet;

					EarthView::World::Spatial::Math::CMatrix4 mWorldMatrix;

					EarthView::World::Spatial3D::Dataset::CEffectDataSet* mpDataset;
					EarthView::World::Spatial::Geometry::CEnvelope *mEnvelope;

					EVString mDesc;
					ev_bool mIsNotifyAdd;
					//ev_bool mIsVisible;
					//ev_bool mIsValid;
					//ev_bool mIsSelectable;
					//ev_bool mCanEdit;
					//ev_bool mIsEditing;

					double mMinDistance;
					double mMaxDistance;

					ev_bool mbFilterVisibility;
					EarthView::World::Core::IntVector mFilterIDs;
					EarthView::World::Core::IntVector mUnFilterIDs;

					typedef ev_map<EarthView::World::Spatial3D::EffectManager::CEffect*,EarthView::World::Spatial3D::Dataset::CEffectInstance> EffectMovableObjectsMap;
					EffectMovableObjectsMap mItemMap;
					typedef ev_map<EarthView::World::Spatial3D::EffectManager::CEffect*,EarthView::World::Graphic::CSceneNode*> EffectNodeMap;
					EffectNodeMap mNodesMap;
					vector<EarthView::World::Graphic::CSceneNode*> mNodes;					
					EarthView::World::Geometry3D::VisibleObjectPtrVector mVisibleObjectPtrs;
					EarthView::World::Geometry3D::CVisibleObjectPtr mpVisibleObjectPtr;
					//图层的可见距离
					ev_real32 mLayerVisibleDistance;
					//高度模式
					ev_real32 mAltitudeValue;
					EarthView::World::Spatial::Utility::EVAltitudeMode mAltitudeMode;
					EarthView::World::Graphic::CColourValue mAmbient;
					EarthView::World::Graphic::CColourValue mDiffuse;
					EarthView::World::Graphic::CColourValue mSpecular;
					ev_bool mLightEnable;
					EarthView::World::Graphic:: CColourValue mSelectionColour;

					ev_bool checkVisibleDistance(EarthView::World::Spatial3D::EffectManager::CEffectObject* obj);

					ev_void setEffectObjectVisible();
					ev_void setEffectObjectVisible( EarthView::World::Spatial3D::EffectManager::CEffectObject *obj );
					ev_bool isSetFilterVisibleObject();
					ev_bool checkFilterObject(EarthView::World::Spatial3D::EffectManager::CEffectObject* obj);


				private:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					//ev_void tranformCoordinate(EarthView::World::Spatial3D::Dataset::CEffectDataSet* dataset,EarthView::World::Spatial::Math::CVector3& Vret);
					friend  class CEffectLayerFactory;		
					friend class EarthView::World::Spatial3D::EffectManager::CAsynchronousEffectListener;
				};
			}
		}
	}
}
#endif
