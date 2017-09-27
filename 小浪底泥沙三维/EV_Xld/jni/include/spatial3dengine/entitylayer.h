#ifndef EARTHVIEW_WORLD_SPATIAL3D_ENTITYLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_ENTITYLAYER_H


#include "spatial3dengine/spatial3denginecomdef.h"
#include "spatial3dengine/i3dlayer.h"
#include "geometry3d/visibleobject.h"
#include "graphic/colourvalue.h"
#include "spatialinterface/altitudemode.h"
#include "graphic/mesh.h"
#include "graphic/rendersystem.h"
#include "mathengine/ray.h"
#define  ANIMATIONENABLE 0
namespace EarthView{
	namespace World{
		namespace Graphic{
			class CMovableObject;
			class CSceneManager;
			class CCamera;
		}
		namespace Spatial
		{
			namespace Octree
			{
				class CBaseOctree;
			}
			namespace GeoDataset
			{
				class IFeatureSelection;
			}
		}
		namespace Geometry3D
		{
			class VisibleObjects;
		}
		namespace Spatial3D{
			
			class CGlobeCamera;
			class CModelLayerEditor;
			namespace Dataset
			{
				class CModelDataset;
				class CModelOctreeManager;
			}
			namespace ModelManager{
				
				class CModelObjectManager;
				class CModelObjectGroup;
				class CModelUnloadWorkQueue;
				class CModelLoadWorkQueue;
				class CModelBaseObject;
				class CMaterialResourceCache;
				class CInstanceDBLayerObject;
				class CModelDBLayerObject;
				class CInternalObjectManager;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class ModelCommand;
				class ModelCommandKey;
				class CEntityLayerFactory;
				class EV_Spatial3DEngine_DLL CModelStateListener : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelStateListener(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CModelStateListener();

					~CModelStateListener();
					/// <summary>
					/// 模型卸载之后监听
					/// </summary>
					/// <param name="object">被卸载的模型对象</param>
					virtual ev_void modelUnLoaded(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
					/// <summary>
					/// 模型加载之后监听
					/// </summary>
					/// <param name="object">被加载的模型对象</param>
					virtual ev_void modelLoaded(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
					/// <summary>
					/// 模型挂接之前监听
					/// </summary>
					/// <param name="object">被挂接的模型对象</param>
					virtual ev_void modelPreAttach(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
					/// <summary>
					/// 模型挂接后监听
					/// </summary>
					/// <param name="object">被挂接的模型对象</param>
					virtual ev_void modelAttached(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
					/// <summary>
					/// 模型反挂接后监听
					/// </summary>
					/// <param name="object">被挂接的模型对象</param>
					virtual ev_void modelDetached(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				};
				//
				class EV_Spatial3DEngine_DLL CEntityLayer : public EarthView::World::Spatial3D::Atlas::I3DLayer
				{
				public:
					struct CSubEntityState 
					{
						ev_bool Visible;
					};
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CEntityLayer();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType()const;

					/// <summary>
					/// 获取数据集
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();

					/// <summary>
					/// 图层克隆
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;

					/// <summary>
					/// 前一帧是否有可见模型
					/// </summary>
					/// <returns></returns>
					virtual ev_bool hasVisibleObject();

					/// <summary>
					/// 图层是否可编辑 
					/// </summary>
					/// <returns>可编辑返回true，不可编辑返回false</returns>
					virtual ev_bool canEdit() const;

					/// <summary>
					/// 设置是否可编辑
					/// </summary>
					/// <param name="can">true 可编辑，false 不可编辑</param>
					/// <returns></returns>
					virtual ev_void setCanEdit(ev_bool can);

					/// <summary>
					/// 图层是否正在编辑
					/// </summary>
					/// <returns>正在编辑返回true，没有编辑返回false</returns>
					virtual ev_bool isEditing() const;

					/// <summary>
					/// 设置图层编辑状态
					/// </summary>
					/// <param name="editing">true 设置在编辑，false 设置没有编辑</param>
					/// <returns></returns>
					virtual ev_void setEditing(ev_bool editing);

					/// <summary>
					/// 图层可见状态
					/// </summary>
					/// <returns></returns>
					virtual ev_bool isVisible() const;

					/// <summary>
					/// 设置图层可见状态
					/// </summary>
					/// <param name="visible">true 可见，false 不可见</param>
					/// <returns></returns>
					virtual ev_void setVisible(ev_bool visible);

					/// <summary>
					/// 图层合法状态
					/// </summary>
					/// <returns>合法返回true，不合法返回false</returns>
					virtual ev_bool isValid() const;

					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <returns>包围盒</returns>
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getAABBox();

					/// <summary>
					/// 图层是否被选择
					/// </summary>
					/// <returns>被选择返回true，否则返回false</returns>
					virtual ev_bool isSelectable() const;

					/// <summary>
					/// 设置图层选择状态
					/// </summary>
					/// <param name="selectable">true 被选择，false 没有被选择</param>
					/// <returns></returns>
					virtual ev_void setSelectable(ev_bool selectable);

					/// <summary>
					/// 设置选择时的颜色
					/// </summary>
					/// <param name="color">设置的颜色</param>
					/// <returns></returns>
					virtual void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour);
					
					/// <summary>
					///获取选择时的颜色
					/// </summary>
					/// <returns>EarthView::World::Graphic::CColourValue</returns>
					virtual EarthView::World::Graphic::CColourValue getSelectionColour();

					/// <summary>
					/// 返回图层透明度
					/// </summary>
					/// <param name=""></param>
					/// <returns>百分比[0,100]</returns>
					virtual ev_uint8 getTransparentValue() const;

					/// <summary>
					/// 设置图层透明度
					/// </summary>
					/// <param name="transparent">百分比[0,100]</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);

					/// <summary>
					/// 是否接收阴影
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool isRevShadow();

					/// <summary>
					/// 设置接收阴影
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual void setRevShadow(ev_bool revShadow);

					/// <summary>
					///是否投射阴影
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool isCastShadow();

					/// <summary>
					///设置投射阴影
					/// </summary>
					/// <returns></returns>
					virtual void setCastShadow(ev_bool castShadow);

					/// <summary>
					/// 设置某个图层反射光系数增益
					/// </summary>
					/// <param name="ambient">环境光增益</param>
					/// <param name="diffuse">漫反射增益</param>
					/// <param name="specular">镜面反射增益</param>
					/// <returns></returns>
					virtual void setEnvParam(EarthView::World::Graphic::CColourValue& ambient, EarthView::World::Graphic::CColourValue& diffuse, EarthView::World::Graphic::CColourValue& specular);

					/// <summary>
					/// 获取图层反射光系数增益
					/// </summary>
					/// <returns>ambient 环境光增益，diffuse 漫反射增益，specular 镜面反射增益</returns>
					virtual void getEnvParam(EarthView::World::Graphic::CColourValue& ambient, EarthView::World::Graphic::CColourValue& diffuse, EarthView::World::Graphic::CColourValue& specular);

					/// <summary>
					/// 设置图层mipmap参数，调用以前要停止图层工作
					/// </summary>
					/// <param name="modelMipMap">mipmap参数</param>
					/// <returns></returns>
					virtual void setMipMap(ev_real64 modelMipMap);

					/// <summary>
					/// 获取图层mipmap参数
					/// </summary>
					/// <returns>mipmap参数</returns>
					virtual ev_real64 getMipMap();

					/// <summary>
					/// 获取图层安全的可见距离
					/// </summary>
					/// <returns>mipmap参数</returns>
					virtual ev_bool checkSafeVisibleDistance(ev_real64 distance);

					/// <summary>
					/// 设置图层可见距离
					/// </summary>
					/// <param name="distance">可见距离</param>
					/// <returns></returns>
					virtual void setVisibleDistance(ev_real64 distance);

					/// <summary>
					/// 获取图层可见距离
					/// </summary>
					/// <returns>可见距离</returns>
					virtual ev_real64 getVisibleDistance();

					/// <summary>
					/// 设置对象卸载时的缓冲距离
					/// </summary>
					/// <param name="distance">可见距离</param>
					/// <returns></returns>
					virtual void setUnloadBufferDistance(ev_real64 distance);

					/// <summary>
					/// 获取对象卸载时的缓冲距离
					/// </summary>
					/// <returns>可见距离</returns>
					virtual ev_real64 getUnloadBufferDistance();

					/// <summary>
					/// 设置高度模式
					/// </summary>
					/// <param name="altitudeMode">高度模式</param>
					/// <param name="altitudeValue">高度值</param>
					/// <returns></returns>
					virtual void setAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, ev_real64 altitudeValue);

					/// <summary>
					/// 获取高度模式 
					/// </summary>
					/// <returns>altitudeMode 高度模式，altitudeValue 高度值</returns>
					virtual void getAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode& altitudeMode, ev_real64& altitudeValue);

					/// <summary>
					/// 当前高度模式是否代被dem影响
					/// </summary>
					/// <returns></returns>
					virtual ev_bool isAffectByDem();

					/// <summary>
					/// 当前高度模式是否能编辑模型高度
					/// </summary>
					/// <returns></returns>
					virtual ev_bool canEditAltitude();

					/// <summary>
					/// 获取模型的海拔
					/// </summary>
					/// <param name="pModel">获取模型的海拔</param>
					/// <returns></returns>
					virtual ev_real64 getAltitude(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);

					/// <summary>
					/// 获取dem
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <returns></returns>
					virtual ev_real64 getDem(ev_real64 latitude, ev_real64 longitude);

					/// <summary>
					/// 获取模型中心点对应的高程
					/// </summary>
					/// <param name="pModel">获取模型中心点对应的高程</param>
					/// <returns></returns>
					virtual ev_real64 getDem(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);

					/// <summary>
					/// 刷新
					/// </summary>
					/// <returns></returns>
					virtual ev_bool refresh();

					/// <summary>
					/// 刷新指定id的模型
					/// </summary>
					/// <returns></returns>
					virtual ev_bool refresh(ev_uint32 id);

					/// <summary>
					/// 刷新模型位置
					/// </summary>
					/// <param name="pModel">刷新模型位置</param>
					/// <returns></returns>
					virtual void refreshPosition(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);

					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="ray">射线</param>
					/// <returns></returns>
					virtual EarthView::World::Graphic::CMovableObject* select( EarthView::World::Spatial::Math::CRay ray,_out Real& hitDistance,_out ev_int32& objIndex
						,_out ev_int32& submeshIndex,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex,_out EarthView::World::Spatial::Math::CVector3& point);
					virtual EarthView::World::Graphic::CMovableObject* selectComponentBy( EarthView::World::Spatial::Math::CRay ray,_out Real& hitDistance,_out ev_int32& objIndex
						,_out ev_int32& submeshIndex,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex,_out EarthView::World::Spatial::Math::CVector3& point);

					/// <summary>
					/// 加载所有可视对象的节点并合并包围盒
					/// </summary>
					/// <param name="ray">射线</param>
					/// <returns></returns>
					virtual	ev_void loadVisibleObjectNodeAndMergeBoundingBox();
					
					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();

					/// <summary>
					/// 清空指定ID子部件可见性
					/// </summary>
					/// <param name="id">模型id</param>
					/// <returns></returns>
					virtual ev_void clearSubEntityVisibility(ev_uint32 id);
					/// <summary>
					/// 清空所有子部件可见性
					/// </summary>
					/// <param name="id">模型id</param>
					/// <returns></returns>
					virtual ev_void clearSubEntityVisibility();
					/// <summary>
					/// 设置图层的选择集
					/// </summary>
					/// <param name="selection">图层的选择集</param>
					/// <returns></returns>
					virtual ev_void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection);

					/// <summary>
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();

					/// <summary>
					/// 设置图层对象可见过滤器,不带记忆功能（这次设置会把上次冲掉）
					/// </summary>
					/// <param name="visible">visible为true时，只有ids指定的对象可见；visible为false时，ids指定的对象不可见</param>
					/// <param name="ids">对象的ID集合</param>
					/// <returns></returns>
					virtual ev_bool setVisibilityFilter(ev_bool visible, const EarthView::World::Core::IntVector& ids);

					/// <summary>
					/// 设置图层对象可见过滤器，带记忆功能（不会冲掉上次设置）
					/// </summary>
					/// <param name="visible">visible为true时，只有ids指定的对象可见；visible为false时，ids指定的对象不可见</param>
					/// <param name="id">对象的ID</param>
					/// <returns></returns>
					virtual ev_bool setVisibilityFilter(ev_bool visible, ev_uint32 id);
					/// <summary>
					/// 设置图层对象可见过滤器，带记忆功能（不会冲掉上次设置）
					/// </summary>
					virtual ev_bool setVisibilityFilter2(ev_bool visible, const EarthView::World::Core::IntVector& ids);
					/// <summary>
					/// 设置图层对象子部件可见性
					/// </summary>
					/// <param name="visible">设置指定的subentity可见或者不可见</param>
					/// <param name="id">对象的ID</param>
					/// <param name="subEntityIndex">对象的某个subEntityIndex</param>
					/// <returns></returns>
					virtual ev_bool setSubEntityVisibility(ev_bool visible, ev_uint32 id, const ev_uint32& subEntityIndex);
					/// <summary>
					/// 设置图层对象子部件可见性
					/// </summary>
					/// <param name="visible">设置指定的subEntity集合可见或者不可见</param>
					/// <param name="id">对象的ID</param>
					/// <param name="subEntityIndexVector">对象的subEntityIndex集合</param>
					/// <returns></returns>
					virtual ev_bool setSubEntityVisibility(ev_bool visible, ev_uint32 id, const EarthView::World::Core::IntVector& subEntityIndexVector);
					/// <summary>
					/// 获取图层对象可见过滤器
					/// </summary>
					/// <param name="visible">visible为true时，只有ids指定的对象可见；visible为false时，ids指定的对象不可见</param>
					/// <param name="ids">对象的ID集合</param>
					/// <returns></returns>
					virtual ev_bool getVisibilityFilter(ev_bool& visible, _out EarthView::World::Core::IntVector& ids);

					/// <summary>
					/// 获取图层对象可见过滤器
					/// </summary>
					/// <param name="id">对象的ID集合</param>
					/// <returns>返回当前对象在过滤器中的可见性</returns>
					virtual ev_bool getVisibilityFilter(ev_uint32 id);
					/// <summary>
					/// 获取指定图层对象指定子部件的可见性
					/// </summary>
					/// <param name="id">对象的ID</param>
					/// <param name="subEntityIndex">对象的SubEntity</param>
					/// <returns>返回当前对象在过滤器中的可见性</returns>
					virtual ev_bool getSubEntityVisibility(ev_uint32 id, const ev_uint32& subEntityIndex);
					/// <summary>
					/// 获取指定图层对象指定可见性的子部件集合
					/// </summary>
					/// <param name="id">模型id</param>
					/// <param name="visible">可见性</param>
					/// <param name="subEntityIndexVector">subentity下标集合</param>
					/// <returns></returns>
					virtual ev_bool getSubEntityVisibility(ev_uint32 id,ev_bool visible, _out EarthView::World::Core::IntVector& subEntityIndexVector);

					/// <summary>
					/// 获取图层的模型(图层中如果不可见则创建)
					/// 重要：返回是智能指针，可长时间持有，图层不再管理这个对象，等这个智能指针销毁后，图层下一帧检查无人使用再重新接管这个对象
					/// </summary>
					/// <param name="id">模型id</param>
					/// <returns>模型对象</returns>
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(ev_uint32 id);

					/// <summary>
					/// 获取图层可见的模型指针，不可见则返回NULL。只能临时取出用用，下一帧有可能被图层卸载。
					/// </summary>
					/// <param name="id">模型id</param>
					/// <returns>模型对象</returns>
					virtual EarthView::World::Geometry3D::CVisibleObject* getVisibleObject(ev_uint32 id);

					/// <summary>
					/// 获取所有模型ID
					/// </summary>
					/// <param name="id">模型id</param>
					/// <returns>模型对象</returns>
					virtual EarthView::World::Core::IntVector getAllObjectIDs();

					/// <summary>
					/// 从xml文本序列化
					/// </summary>
					/// <param name="element">xml数据</param>   
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns>xml数据</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns>xml数据</returns>
					virtual EVString toXML() const;

					/// <summary>
					/// 序列化成流
					/// </summary>
					/// <param name=""></param>   
					/// <returns>序列化后的流</returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// Globe加载一个图层之后调用的函数
					/// </summary>
					/// <param name="pSceneMgr">场景管理器对象</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// Globe卸载一个图层之后调用的函数
					/// </summary>
					/// <param name="pSceneMgr">场景管理器对象</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="level">当前的级别</param>
					/// <param name="force">是否为强制刷新</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <returns></returns>
					
					virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera);

					/// <summary>
					/// 通知模型工作完成
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <returns></returns>
					void _notifyWorkDone(ev_uint32 id, ev_uint64 reqID, ModelRequestType reqType, ev_bool bAbort);

					/// <summary>
					/// 数据集更新事件的通知
					/// </summary>
					/// <param name="strDataSourceName">数据源名称</param>
					/// <param name="strDatasetName">数据集名称</param>
					/// <param name="pEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);

					/// <summary>
					/// 图层定位
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高度</param>
					/// <returns>true跳转成功，false图层无数据</returns>
					virtual ev_bool getGotoParam(_out ev_real64& latitude, _out ev_real64& longitude ,_out ev_real64& altitude);

					/// <summary>
					/// 获取图层记录跳转参数
					/// <param name="id">模型id</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高度</param>
					/// <returns>true跳转成功，false图层无数据</returns>
					virtual ev_bool getGotoParam(ev_uint32 id, _out ev_real64& latitude, _out ev_real64& longitude ,_out ev_real64& altitude);

					/// <summary>
					/// 应用环境纹理映射到模型
					/// <param name="id">模型id</param>
					/// <returns></returns>
					virtual void applyModelEnvMapTexture(ev_uint32 id);

					/// <summary>
					/// 取消应用环境纹理映射从模型
					/// <param name="id">模型id</param>
					/// <returns></returns>
					virtual void cancelModelEnvMapTexture(ev_uint32 id);

					/// <summary>
					/// 设置环境映射最大支持的模型个数
					/// <returns></returns>
					virtual void setMaxEnvMapObjectCount(ev_uint32 count);

					/// <summary>
					/// 获取环境映射最大支持的模型个数
					/// <returns></returns>
					virtual ev_uint32 getMaxEnvMapObjectCount();

					/// <summary>
					/// 是否超过图层映射允许的最多模型个数
					/// <returns></returns>
					virtual ev_bool allowApplyEnvMap();

					/// <summary>
					/// 应用环境纹理映射到图层
					/// <returns></returns>
					virtual void applyEnvMapTexture();

					/// <summary>
					/// 取消应用环境纹理映射从图层
					/// <returns></returns>
					virtual void cancelEnvMapTexture();

					/// <summary>
					/// //强行停止图层工作，相机裁剪此时不起作用
					/// </summary>
					/// <param name="bClearObject">是否清除对象</param>
					/// <returns></returns>
					virtual void stopRender(ev_bool bClearObject);

					/// <summary>
					/// 强行开始图层工作
					/// </summary>
					/// <returns></returns>
					virtual void startRender();

					/// <summary>
					/// 是否开启模型图层选择
					/// </summary>
					/// <returns></returns>
					virtual ev_bool isLoadModelNode();

					/// <summary>
					/// 设置模型图层选择是否开启
					/// </summary>
					/// <param name="flag">是否开启</param>
					/// <returns></returns>
					virtual void setLoadModelNode(ev_bool flag);
					/// <summary>
					/// 添加模型状态监听
					/// </summary>
					/// <param name="listener">模型监听</param>
					ev_void addModelStateListener(_in CModelStateListener* listener);
					/// <summary>
					/// 移除模型状态监听
					/// </summary>
					/// <param name="listener">模型监听</param>
					ev_void removeModelStateListener(_in CModelStateListener* listener);
					/// <summary>
					/// 模型被加载监听
					/// </summary>
					/// <param name="object">模型对象</param>
					virtual ev_void _notifyModelLoaded(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
					/// <summary>
					/// 模型被卸载监听
					/// </summary>
					/// <param name="object">模型对象</param>
					virtual ev_void _notifyModelUnLoaded(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
					/// <summary>
					/// 模型挂接前监听
					/// </summary>
					/// <param name="object">模型对象</param>
					virtual ev_void _notifyModelPreAttach(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
					/// <summary>
					/// 模型挂接后监听
					/// </summary>
					/// <param name="object">模型对象</param>
					virtual ev_void _notifyModelAttached(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
					/// <summary>
					/// 模型反挂接后监听
					/// </summary>
					/// <param name="object">模型对象</param>
					virtual ev_void _notifyModelDetached(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
ev_internal:
					/// <summary>
					/// 从流加载图层
					/// </summary>
					/// <param name="stream">内存流</param>
					///<returns></returns>
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CEntityLayer(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="layerName">图层名称</param>
					/// <param name="dataset">数据集对象</param>
					/// <returns></returns>
					CEntityLayer(const EVString& layerName, EarthView::World::Spatial3D::Dataset::CModelDataset* ref_dataset);

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CEntityLayer(); 

					/// <summary>
					/// 初始化图层基本参数
					/// </summary>
					/// <returns></returns>
					virtual void _init();

					/// <summary>
					/// 反初始化图层基本参数
					/// </summary>
					/// <returns></returns>
					virtual void _unInit();
					
					/// <summary>
					/// 选择模型
					/// </summary>
					/// <param name="pSelection">被选择的要素id构成的要素选择器</param>
					/// <returns></returns>
					virtual void _selectModel(EarthView::World::Spatial::GeoDataset::IFeatureSelection* pSelection);

					/// <summary>
					/// 清除模型选择
					/// </summary>
					/// <returns></returns>
					virtual void _clearSelectedModel();

					/// <summary>
					/// 设置高度模型后，其它图层同步更新
					/// </summary>
					/// <returns></returns>
					virtual void _notifyUpdateAltitude();

					/// <summary>
					/// 设置勾掉高程后，其它图层同步更新
					/// </summary>
					/// <returns></returns>
					virtual void _notifyRefreshPosition();

					/// <summary>
					/// 给模型设置图层属性
					/// </summary>
					/// <returns></returns>
					virtual void setLayerAttribute(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);

					/// <summary>
					/// 设置模型子部件可见性状态
					/// </summary>
					/// <returns></returns>
					virtual void resumeSubEntityVisibility(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);
					/****************************模型命令***********************/

					/// <summary>
					///  添加异步的命令
					/// </summary>
					/// <param name="cmd">命令对象</param>
					/// <returns></returns>
					
					void _addModelCommand(ModelCommand cmd);

					/// <summary>
					/// 清理指定类型的命令
					/// </summary>
					/// <param name="type">命令类型</param>
					/// <returns></returns>
					
					ev_void _clearModelCommand(EarthView::World::Spatial3D::ModelCommandType type);

					/// <summary>
					/// 清理所有命令
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void _clearModelCommand();

					/// <summary>
					/// 执行命令
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void _execModelCommand();

					/// <summary>
					/// 在指定的对象上执行命令
					/// </summary>
					/// <param name="pModel">指定的对象</param>
					/// <returns></returns>
					
					ev_void _execModelCommand(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);

					/// <summary>
					/// 获取图层的材质内存缓存
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* _getMaterialCache();

					

					/******************************************八叉树裁剪相关*****************************************/

					/// <summary>
					/// 找出可见对象
					/// </summary>
					/// <param name="camera">相机对象</param>
					/// <returns></returns>
					virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera* camera);

					/// <summary>
					/// 卸载所有模型对象
					/// </summary>
					/// <returns></returns>
					void _destroyAllObject(ev_bool bClearObject);

					void _destroyAllObject_syn();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void _findVisibleObjects ( EarthView::World::Graphic::CCamera *cam, _out EarthView::World::Spatial3D::OctNodeVector& octNodeVec);	

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void _walkOctree( EarthView::World::Graphic::CCamera *cam, EarthView::World::Spatial::Octree::CBaseOctree *octant, ev_bool foundvisible, _out EarthView::World::Spatial3D::OctNodeVector& octNodeVec);

					/// <summary>
					/// 如果更新了dem或高度模式，重新调整八叉树
					/// </summary>
					/// <returns></returns>
					void _updateOctreeDem();
					void _updateOctreeDem2(ev_bool bInit);

					/// <summary>
					/// 更新八叉树的节点
					/// </summary>
					/// <returns></returns>
					void _updateOctreeNode(ev_uint32 id, const EarthView::World::Spatial::Math::CAxisAlignedBox& box, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType oprType);

					/// <summary>
					///  渲染八叉树包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void _drawWireBox(EarthView::World::Spatial::Octree::CBaseOctree* oct, EarthView::World::Graphic::CSceneNode* pParentNode, EarthView::World::Spatial3D::RenderBoxType renderType);

					/// <summary>
					///  渲染八叉树包围盒
					/// </summary>
					/// <param name="renderType">
					/*
					RBT_OCTREEBOX_AND_LEATBOX=0, //渲染八叉树节点和叶子节点
					RBT_OCTREEBOX, //渲染八叉树节点
					RBT_LEATBOX //渲染叶子节点
					*/
					///</param>
					/// <returns></returns>
					void _drawWireBox(EarthView::World::Graphic::CSceneNode* pParentNode, EarthView::World::Spatial3D::RenderBoxType renderType);

					/// <summary>
					///  释放渲染的包围盒对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void _releaseWireBox();

					/// <summary>
					///  裁剪的时候检查此ID是否需要被过滤掉
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool _checkFilter(ev_uint32 id);

					/// <summary>
					///  遍历安全值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void _findSafeDistanceObjCount(EarthView::World::Spatial::Octree::CBaseOctree *octant, const EarthView::World::Spatial::Math::CVector3& camPos, ev_real64 distance, _out ev_uint32& count);

				protected:
					//
					typedef ev_map<ev_uint32,CSubEntityState> ModelSubEntityVisibleMap;
					ev_map<ev_uint32,ModelSubEntityVisibleMap> mSubEntityStateMap;
					//八叉树包围盒边框
					EarthView::World::Graphic::CSceneNode* mpWireBoxNode;
					vector<EarthView::World::Graphic::CWireBoundingBox*> mWireBoxList;

					/// <summary>
					/// 图层选择要素集合
					/// </summary>
					EarthView::World::Spatial::Atlas::ILayerSelection* m_pSelectionSet;

					//图层数据集
					EarthView::World::Spatial3D::Dataset::CModelDataset* mpDataset;

					//图层类别
					EarthView::World::Spatial::Atlas::EVLayerType mType;

					//选择时颜色
					EarthView::World::Graphic::CColourValue mSelectionColour;

					//模型的mipmap距离
					ev_real64 mModelMipMap;

					//对象的卸载距离
					ev_real64 mUnloadBufferDistance;

					//图层的可见距离
					ev_real64 mLayerVisibleDistance;

					//环境光反射系数增益
					EarthView::World::Graphic::CColourValue mAmbient;

					//镜面光反射系数增益 
					EarthView::World::Graphic::CColourValue mSpecular;

					//散射光 反射系数增益
					EarthView::World::Graphic::CColourValue mDiffuse;

					//高度模式
					ev_real64 mAltitudeValue;
					EarthView::World::Spatial::Utility::EVAltitudeMode mAltitudeMode;

					ev_bool mRevShadow;
					ev_bool mCastShadow;
					ev_bool mCanEdit;

					//模型命令
					typedef map<ev_uint32, ModelCommand> ModelCommandMap;
					ModelCommandMap mModelCommands;
					EarthView::World::Core::CRecursiveMutex mModelCommandsMtx;

					ev_bool mRenderFlag;
					ev_bool mSceneCloseFlag;
					ev_bool mDemVisible;
					ev_bool mbHasVisibleObject;

					//是否创建模型节点
					ev_bool mbLoadModelNode;

					//材质内存缓存
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* mpMatCache;

					//拷贝的索引
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* mpOctreeMnger;

					//图层对象管理器
					EarthView::World::Spatial3D::ModelManager::CInternalObjectManager* mpObjectManager;

					ev_uint32 mMaxEnvMapCount;

					//透明度
					ev_uint8 mTransparent;
					ev_bool mHasSetTransparent;

					friend class EarthView::World::Spatial3D::Atlas::CEntityLayerFactory;

					friend class EarthView::World::Spatial3D::CModelLayerEditor;
					friend class EarthView::World::Spatial3D::ModelManager::CModelObjectManager;
					friend class EarthView::World::Spatial3D::ModelManager::CModelDBLayerObject;
					friend class EarthView::World::Spatial3D::ModelManager::CInstanceDBLayerObject;
					friend class EarthView::World::Spatial3D::ModelManager::CModelLoadWorkQueue;
					friend class EarthView::World::Spatial3D::ModelManager::CModelUnloadWorkQueue;
				
					typedef vector<EarthView::World::Graphic::CMesh::SubMeshInfo> SubmeshInfoVec;
					typedef vector<EarthView::World::Graphic::CMesh::CMeshNode*> NodeVec;

					virtual void intersectsNodeBoundingBox(EarthView::World::Spatial3D::ModelManager::CModelBaseObject *obj,EarthView::World::Graphic::CMesh::CMeshNode *node,EarthView::World::Spatial::Math::CRay ray,NodeVec& vec);

					virtual void intersectsLayerModelBoundingBox( EarthView::World::Spatial::Math::CRay ray,list<EarthView::World::Spatial3D::ModelManager::CModelBaseObject*> &hitBoundingBoxObjectList);

					virtual EarthView::World::Graphic::CMovableObject * intersectsAllSubEntitys(EarthView::World::Spatial3D::ModelManager::CModelBaseObject *obj,EarthView::World::Spatial::Math::CRay ray
						,_out Real& hitDistance,_out ev_int32& objIndex
						,_out ev_int32& submeshIndex,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex,_out EarthView::World::Spatial::Math::CVector3& point);

					virtual EarthView::World::Graphic::CMovableObject *intersectsSubEntity(EarthView::World::Spatial::Math::CRay ray,EarthView::World::Spatial3D::ModelManager::CModelBaseObject *obj
						,const NodeVec &vec,_out ev_int32& subEntityIndex, _out Real& hitDistance,_out ev_int32& objIndex
						,_out ev_int32& submeshIndex,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex,_out EarthView::World::Spatial::Math::CVector3& point);

					virtual EarthView::World::Graphic::CMovableObject *intersectsInstanceEntity(EarthView::World::Spatial::Math::CRay ray,EarthView::World::Spatial3D::ModelManager::CModelBaseObject *obj
						,const NodeVec &vec,_out ev_int32& subEntityIndex, _out Real& hitDistance,_out ev_int32& objIndex
						,_out ev_int32& submeshIndex,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex,_out EarthView::World::Spatial::Math::CVector3& point);
					//
					ev_list<CModelStateListener*> mModelStateListenerList;
					protected:
						class CEntityLayerD3DDeviceListener : public EarthView::World::Graphic::CRenderSystem::CRenderSystemListener
						{
						public:					
							CEntityLayerD3DDeviceListener(CEntityLayer* pEntLayer);
							~CEntityLayerD3DDeviceListener();

							virtual void eventOccurred(const EVString &eventName,
								const EarthView::World::Core::NameValuePairList *parameters );
						private:
							CEntityLayer* mEntityLayer;
							ev_bool mVisible;
							ev_bool mDeviceLost;
						};

						CEntityLayerD3DDeviceListener* m_EntLayerD3DDeviceListener;
				}; 

				

				// <summary>
				// 模型命令
				// </summary>
				class  EV_Spatial3DEngine_DLL ModelCommand :  public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					ModelCommand( _in EarthView::World::Core::CNameValuePairList* list )
					{

					}
				public:
					ModelCommand(ev_int32 modelID, EarthView::World::Spatial3D::ModelCommandType type)
					{
						mModelID = modelID;
						mType = type;
					}
					ev_int32 modelID() const 
					{
						return mModelID;
					}
					EarthView::World::Spatial3D::ModelCommandType commandType() const
					{
						return mType;
					}
					void setSubIndexs(const EarthView::World::Core::Int3Vector& subIndexs)
					{
						mSubIndex = subIndexs;
					}
					const EarthView::World::Core::Int3Vector& getSubIndexs() const 
					{
						return mSubIndex;
					}

				private:
					ev_int32 mModelID;
					EarthView::World::Spatial3D::ModelCommandType mType;
					EarthView::World::Core::Int3Vector mSubIndex;
					
				
				};

			}//namespace
		}
	}
}
#endif

