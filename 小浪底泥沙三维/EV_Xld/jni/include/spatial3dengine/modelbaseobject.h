#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELBASEOBJECT_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELBASEOBJECT_H

#include "spatial3dengine/spatial3denginecomdef.h"
#include "graphic/mesh.h"
#include "spatial3ddataset/mesheffectref.h"
#include "spatial3dengine/modelanimation.h"
#include "spatial3dengine/modelbindinfo.h"
#include "geometry3d/visibleobject.h"
#include "core/stringdefines.h"
#include "core/datastream.h"
#include "spatialinterface/altitudemode.h"
#include "spatial3dengine/fltmodelnode.h"
#include "core/string_array.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial{
			namespace GeoDataset{
				class IDataset;
				class IFeature;
				class IFeatureClass;
			}
		}
		namespace Graphic
		{
			class CSceneManager;
			class CNode;
			class CEntity;
			class CSubEntity;
			class CNode::CNodeListener;
			class CMesh;
			class CMesh::MeshNodePtr;
		}
		namespace Spatial3D
		{
			class CModelLayerEditor;
			namespace Atlas
			{
				class CEntityLayer;
				class CEntityInstanceLayer;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CEntityDataset;
				class CMeshTemplateDataset;
				class CResourceDataset;
			}
			namespace ModelManager{
				class CModelObjectManager;
				class CModelAnimation;
				class CModelNodeListener;
				class CModelFrameListener;
				class CSubmeshInstanceParser;
				class CMaterialResourceCache;

				/// <summary>
				/// 对象监听类
				/// 主要在对象销毁之前做一些操作
				/// </summary>
				class CModelObjectListener : public EarthView::World::Graphic::CMovableObject::CMovableObjectListener
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="obj">模型对象</param>
					/// <returns></returns>	
					CModelObjectListener(CModelBaseObject *obj);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					~CModelObjectListener();
				public:
					/// <summary>
					/// 询问光源容器
					/// 如果你要定制光源发现物体，要重载这个函数，
					/// </summary>
					/// <param name="">移动对象</param>
					/// <returns>一个指向光源容器的指针，可以你自己设定光源容器粒子增加，或者为空，则返回系统默认过程，</returns>
					virtual const EarthView::World::Graphic::LightList *objectQueryLights(const EarthView::World::Graphic::CMovableObject *pMovableObject);
				protected:
					EarthView::World::Graphic::LightList mlightObjects;
					CModelBaseObject* mObj;
				};

				class EV_Spatial3DEngine_DLL CModelBaseObject : public EarthView::World::Geometry3D::CVisibleObject
				{
					friend class CModelFrameListener;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelBaseObject(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CModelBaseObject();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pDataset">数据集对象</param>
					/// <param name="id">模型对象id</param>
					/// <returns></returns>
					CModelBaseObject(EarthView::World::Graphic::CSceneManager* ref_pSceneManager, EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset, ev_uint32 id);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="meshfile">模型文件路径</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <returns></returns>
					CModelBaseObject(EarthView::World::Graphic::CSceneManager* ref_pSceneManager, const EVString& modelfile, ev_bool bFileDirAsGroup);

					/// <summary>
					/// 初始化默认参数
					/// </summary>
					/// <returns></returns>
					void _initParam();

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CModelBaseObject();

					/// <summary>
					///  加载模型资源
					/// </summary>
					/// <returns>true成功，false失败</returns>
					virtual ev_bool load();

					/// <summary>
					/// 加载资源，只加载subIndex列表的subEntity
					/// <param name="subEntityIndexs">可见的subIndex列表</param>
					/// </summary>
					/// <returns>加载成功返回true否则返回false</returns>
					virtual ev_bool load(const EarthView::World::Core::IntVector& subEntityIndexs);

					/// <summary>
					///  挂接渲染
					/// <param name="n">将要挂接的场景节点</param>
					/// </summary>
					/// <returns>true成功，false失败</returns>
					virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

					/// <summary>
					///  反挂接
					/// </summary>
					/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
					virtual EarthView::World::Graphic::CNode* detachFromNode();

					/// <summary>
					///  卸载模型资源
					/// </summary>
					/// <returns>true成功，false失败</returns>
					virtual ev_bool unload();

					/// <summary>
					///  是否加载过模型资源
					/// </summary>
					/// <returns>true成功，false失败</returns>
					virtual ev_bool isLoaded();

					/// <summary>
					///  是否挂接
					/// </summary>
					/// <returns>true成功，false失败</returns>
					virtual ev_bool isAttached();

					/// <summary>
					/// 设置世界变换矩阵
					/// </summary>
					/// <param name="m">世界变换矩阵</param>
					/// <returns></returns>
					virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& m);


					/// <summary>
					/// 获取世界变换矩阵
					/// </summary>
					/// <returns>返回世界变换矩阵</returns>
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix();


					/// <summary>
					/// 设置局部矩阵
					/// </summary>
					/// <param name="m">局部矩阵</param>
					/// <returns></returns>
					virtual void setLocalMatrix(const EarthView::World::Spatial::Math::CMatrix4& m);


					/// <summary>
					/// 获取局部矩阵
					/// </summary>
					/// <returns>返回局部矩阵</returns>
					virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix();

					/// <summary>
					/// 设置模型位置
					/// </summary>
					/// <param name="latitude">经度</param>
					/// <param name="longitude">纬度</param>
					/// <param name="altitude">高程</param>
					/// <param name="scale">缩放信息</param>
					/// <param name="qua">旋转四元数信息</param>
					/// <returns></returns>
					virtual void setPosition(ev_real64 latitude, ev_real64 longitude, ev_real64 altitude, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 获取模型位置
					/// </summary>
					/// <param name="latitude">经度</param>
					/// <param name="longitude">纬度</param>
					/// <param name="altitude">高程</param>
					/// <param name="scale">缩放信息</param>
					/// <param name="qua">旋转四元数信息</param>
					/// <returns></returns>
					virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 获取模型在模型库中的偏移位置
					/// </summary>
					/// <param name="offPosition">模型库中的位置</param>
					/// <param name="offScale">模型库中的缩放</param>
					/// <param name="qua">模型库中的姿态</param>
					/// <returns></returns>
					virtual void getModelDBTransform(_out EarthView::World::Spatial::Math::CVector3& offPosition, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 获取可见对象所在图层
					/// </summary>
					/// <returns>图层对象</returns>
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer();

					/// <summary>
					///  获取数据集
					/// </summary>
					/// <returns>成功返回数据集，失败返回NULL</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();

					/// <summary>
					///  获取ID
					/// </summary>
					/// <returns>返回模型ID</returns>
					virtual ev_uint32 getID();

					/// <summary>
					/// 获取可见对象名称
					/// </summary>
					/// <returns>名称</returns>
					virtual EVString getName();

					/// <summary>
					///  获取文件路径
					/// </summary>
					/// <returns>返回文件路径</returns>
					virtual EVString getFile();

					/// <summary>
					///  是否以文件目录为分组
					/// </summary>
					/// <returns>true是以文件目录为工作组，false使用默认工作组</returns>
					virtual ev_bool isFileDirAsGroup();

					/// <summary>
					///  获取模型类别
					/// </summary>
					/// <returns>返回模型类别</returns>
					virtual EarthView::World::Spatial3D::ModelType getType();


					/// <summary>
					///  获取场景管理器
					/// </summary>
					/// <returns>成功返回场景管理器，失败返回NULL</returns>
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager();


					/// <summary>
					///  获取世界变换矩阵
					/// </summary>
					/// <returns>返回世界变换矩阵</returns>
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getWorldAABB();

					/// <summary>
					///  获取模型内部的根节点
					/// </summary>
					/// <returns>MeshNodePtr，返回模型内部的根节点</returns>
					EarthView::World::Graphic::CMesh::MeshNodePtr getRootMeshNode();

					/// <summary>
					/// 是否可见
					/// </summary>
					/// <returns>true可见，false不可见</returns>
					virtual ev_bool isVisible();

					/// <summary>
					/// 设置是否可见
					/// </summary>
					/// <param name="flag">true为可见，false为不可见</param>
					/// <param name="bRecursive">true递归到子模型，false只应用当前主模型。注：没有bRecursive参数的接口是递归子模型</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual void setVisible(ev_bool flag) ;
					virtual void setVisible(ev_bool flag, ev_bool bRecursive) ;

					/// <summary>
					///  设置模型某部分可见或不可见
					/// </summary>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <param name="isVisible">true为可见，false为不可见</param>
					/// <param name="bRecursive">true递归到子模型，false只应用当前主模型。注：没有bRecursive参数的接口是递归子模型</param>
					/// <returns></returns>
					virtual void setSubEntityVisibility(ev_uint32 subEntityIndex, ev_bool isVisible);
					virtual void setSubEntityVisibility(ev_uint32 subEntityIndex, ev_bool isVisible, ev_bool bRecursive);

					/// <summary>
					/// 获取模型某部分可见状态
					/// </summary>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <returns>true为可见，false为不可见</returns>
					virtual ev_bool getSubEntityVisibility(ev_uint32 subEntityIndex);

					/// <summary>
					/// 设置该对象可渲染的距离上限
					/// </summary>
					/// <param name="dist">默认为0</param>
					/// <returns></returns>
					virtual void setRenderingMaxDistance(ev_real64 dist);

					/// <summary>
					/// 获取该对象可渲染的距离下限
					/// </summary>
					/// <param name=""></param>
					/// <returns>获取该对象可渲染的距离下限</returns>
					virtual ev_real64 getRenderingMaxDistance() ;

					/// <summary>
					/// 设置该对象可渲染的距离下限
					/// </summary>
					/// <param name="dist">默认为0</param>
					/// <returns></returns>
					virtual void setRenderingMinDistance(ev_real64 dist);

					/// <summary>
					/// 获取该对象可渲染的距离上限
					/// </summary>
					/// <param name=""></param>
					/// <returns>获取该对象可渲染的距离上限</returns>
					virtual ev_real64 getRenderingMinDistance() ;

					/// <summary>
					/// 计算subEntity的下标
					/// </summary>
					/// <param name="submeshIndex">子部件下标</param>
					/// <param name="instanceIndex">instance下标</param>
					/// <returns>返回-1计算失败</returns>
					virtual ev_int32 calculateSubEntityIndex(ev_uint16 submeshIndex, ev_uint32 instanceIndex);

					/// <summary>
					/// 计算subEntity的下标属于哪个子部件的哪个instance
					/// </summary>
					/// <param name="subEntityIndex">subEntity下标</param>
					/// <param name="submeshIndex">子部件下标</param>
					/// <param name="instanceIndex">instance下标</param>
					/// <returns></returns>
					virtual void calculateInstanceIndex(ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex);

					/// <summary>
					/// 获取subEntity个数
					/// </summary>
					/// <returns>返回subentity个数，失败返回-1</returns>
					virtual ev_int32 getNumSubEntities();
					/*************************************************************************************
					模型绑定
					*************************************************************************************/
					/// <summary>
					/// 获取别名，只有被绑定的模型才有
					/// </summary>
					/// <returns>绑定模型别名</returns>
					virtual EVString getAliasName();

					/// <summary>
					/// 获取模型绑定状态
					/// </summary>
					/// <returns>模型绑定状态</returns>
					virtual EarthView::World::Spatial3D::BindedState getBindedState();

					/// <summary>
					/// 获取所有绑定的特效
					/// </summary>
					/// <returns>模型绑定状态</returns>
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getAllBindedEffect();

					/// <summary>
					/// 获取所有绑定的光源
					/// </summary>
					/// <returns>模型绑定状态</returns>
					virtual EarthView::World::Spatial3D::ModelManager::LightObjectMap getAllBindedLight();
					/// <summary>
					/// 根据subIndex获取绑定特效
					/// </summary>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <returns>绑定特效</returns>
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffect(ev_uint32 subEntityIndex);

					/// <summary>
					/// 根据subIndex获取绑定光源
					/// </summary>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <returns>绑定光源</returns>
					virtual EarthView::World::Spatial3D::ModelManager::LightObjectMap getBindedLight(ev_uint32 subEntityIndex);
					
					/// <summary>
					/// 根据subIndex获取绑定粒子
					/// </summary>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <returns>绑定粒子</returns>
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedParticle(ev_uint32 subEntityIndex);

					/// <summary>
					/// 根据subIndex获取绑定飘带
					/// </summary>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <returns>绑定飘带</returns>
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrail(ev_uint32 subEntityIndex);

					/// <summary>
					///  根据骨头获取绑定特效
					/// </summary>
					/// <param name="boneName">骨骼名称</param>
					/// <returns>绑定特效</returns>
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffect(const EVString& boneName);

					/// <summary>
					///  根据节点获取绑定特效
					/// </summary>
					/// <param name="boneName">节点名称</param>
					/// <returns>绑定特效</returns>
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffectByNodeName(const EVString& nodeName);

					/// <summary>
					///  根据骨头获取绑定粒子
					/// </summary>
					/// <param name="boneName">骨骼名称</param>
					/// <returns>绑定粒子</returns>
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedParticle(const EVString& boneName);

					/// <summary>
					///  根据骨头获取绑定飘带
					/// </summary>
					/// <param name="boneName">骨骼名称</param>
					/// <returns>绑定飘带</returns>
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrail(const EVString& boneName);

					/// <summary>
					///  根据节点名称获取绑定飘带
					/// </summary>
					/// <param name="nodeName">节点名称</param>
					/// <returns>绑定飘带</returns>
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrailByNodeName(const EVString& nodeName);

					/// <summary>
					///  获取所有绑定的模型
					/// </summary>
					/// <returns>返回模型列表</returns>
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getAllBindedModel();

					/// <summary>
					///  根据subIndex获取模型
					/// </summary>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <returns>返回模型列表</returns>
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModel(ev_uint32 subEntityIndex);

					/// <summary>
					///  根据节点名称获取模型
					/// </summary>
					/// <param name="nodeName">节点名称</param>
					/// <returns>返回模型列表</returns>
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModelByNodeName(const EVString& nodeName);

					/// <summary>
					///  根据名字取组件对象
					/// </summary>
					/// <param name="name">组件的名称</param>
					/// <returns>组件对象</returns>
					virtual EarthView::World::Spatial3D::CComponent getComponentByName(const EVString& name);
					virtual EarthView::World::Spatial3D::CComponent getComponentBySubEntityIndex(ev_uint32 subEntityIndex);
					virtual EarthView::World::Spatial3D::CComponent getParentComponentByName(const EVString& name);

					/// <summary>
					///  获取根组件对象
					/// </summary>
					/// <returns>组件对象</returns>
					virtual EarthView::World::Spatial3D::CComponent getRootComponent();

					/// <summary>
					///  根据骨头获取模型
					/// </summary>
					/// <param name="boneName">骨骼名称</param>
					/// <returns>返回模型列表</returns>
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModel(const EVString& boneName);

					/// <summary>
					///  根据名称取特效
					/// </summary>
					/// <param name="aliasName">绑定特效别名</param>
					/// <returns>成功返回特效，失败返回NULL</returns>
					virtual EarthView::World::Spatial3D::EffectManager::CEffect* getBindedParticleByName(const EVString& aliasName);

					/// <summary>
					///  根据名称取飘带
					/// </summary>
					/// <param name="aliasName">飘带别名</param>
					/// <returns>成功返回飘带，失败返回NULL</returns>
					virtual EarthView::World::Graphic::CRibbonTrail* getBindedRibbonTrailByName(const EVString& aliasName);

					/// <summary>
					///  根据名称取模型
					/// </summary>
					/// <param name="aliasName">模型别名</param>
					/// <returns>成功返回模型，失败返回NULL</returns>
					virtual EarthView::World::Spatial3D::ModelManager::CModelBaseObject* getBindedModelByName(const EVString& aliasName);

					/// <summary>
					///  根据名称取光源
					/// </summary>
					/// <param name="aliasName">光源名称</param>
					/// <returns>成功返回光源，失败返回NULL</returns>
					virtual EarthView::World::Graphic::CLight* getBindedLightByName(const EVString& aliasName);

					/// <summary>
					///  在骨头上绑定特效
					/// </summary>
					/// <param name="pEffect">特效</param>
					/// <param name="boneName">模型骨骼名称</param>
					/// <param name="offMatrix">偏移矩阵</param>
					/// <param name="aliasName">绑定特效别名</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool bindEffectAtBone(EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, const EVString& boneName, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName);

					/// <summary>
					///  在模型节点上绑定特效
					/// </summary>
					/// <param name="pEffect">特效</param>
					/// <param name="nodeName">节点名称</param>
					/// <param name="offMatrix">偏移矩阵</param>
					/// <param name="aliasName">绑定特效别名</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool bindEffectAtNode(EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect,const EVString& nodeName, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName);

					/// <summary>
					///  在模型子部件上绑定特效
					/// </summary>
					/// <param name="pEffect">特效</param>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <param name="offMatrix">偏移矩阵</param>
					/// <param name="aliasName">绑定特效别名</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool bindEffectAtSubEntity(EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, ev_uint32 subEntityIndex, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName);

					/// <summary>
					///  在模型子部件上绑定光源
					/// </summary>
					/// <param name="l">光源</param>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <param name="offMatrix">偏移矩阵</param>
					/// <param name="aliasName">绑定光源别名</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool bindLightAtSubEntity(EarthView::World::Graphic::CLight* l, ev_uint32 subEntityIndex, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName);
					
					/// <summary>
					/// 在骨头上绑定模型
					/// </summary>
					/// <param name="pModel">模型</param>
					/// <param name="boneName">模型骨骼名称</param>
					/// <param name="offMatrix">偏移矩阵</param>
					/// <param name="aliasName">绑定模型别名</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool bindModelAtBone(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, const EVString& boneName, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName);

					/// <summary>
					/// 在模型子部件上绑定模型
					/// </summary>
					/// <param name="pModel">模型</param>
					/// <param name="subEntityIndex">subentity标识索引</param>
					/// <param name="offMatrix">偏移矩阵</param>
					/// <param name="aliasName">绑定模型别名</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool bindModelAtSubEntity(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, ev_uint32 subEntityIndex, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName);

					/// <summary>
					/// 在模型节点上绑定模型
					/// </summary>
					/// <param name="pModel">模型</param>
					/// <param name="nodeName">模型名称</param>
					/// <param name="offMatrix">偏移矩阵</param>
					/// <param name="aliasName">绑定模型别名</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool bindModelAtNode(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, const EVString& nodeName, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName);

					/// <summary>
					/// 解除模型上绑定的特效
					/// </summary>
					/// <param name="pEffect">特效</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool unBindEffect(EarthView::World::Spatial3D::EffectManager::CEffect* pEffect);

					/// <summary>
					/// 解除模型上绑定的光源
					/// </summary>
					/// <param name="pLight">光源</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool unBindLight(EarthView::World::Graphic::CLight* pLight);
					
					/// <summary>
					/// 解除模型上绑定的模型
					/// </summary>
					/// <param name="pModel">模型</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool unBindModel(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);

					/// <summary>
					/// 获取绑定的ID
					/// </summary>
					/// <returns></returns>
					virtual ev_uint32 getBindedID();

					/// <summary>
					/// 设置绑定的ID
					/// </summary>
					/// <param name="bindedID">绑定ID</param>
					/// <returns></returns>
					virtual void setBindedID(ev_uint32 bindedID);

					/// <summary>
					/// 设置被绑定所有特效可见性
					/// </summary>
					/// <param name="isVisible">可见性</param>
					/// <returns></returns>
					virtual void setBindedEffectVisibility(ev_bool isVisible);

					/*************************************************************************************
					材质编辑
					*************************************************************************************/
					/// <summary>
					///  更新模型的材质
					/// </summary>
					/// <param name="matPtr">新的模型材质</param>
					/// <param name="replacedTextures">被替换的纹理名称</param>
					/// <param name="newTextureFilesPath">替换的纹理文件路径</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool updateMaterial(const EarthView::World::Graphic::CMaterialPtr& matPtr
													,const EarthView::World::Core::StringVector& replacedTextures
													,const EarthView::World::Core::StringVector& newTextureFilesPath
													);

					/// <summary>
					///  切换材质
					/// </summary>
					/// <param name="subEntityIndex">子部件下标</param>
					/// <param name="matPtr">新材质对象</param>
					/// <returns></returns>
					virtual void setMaterial(ev_uint32 subEntityIndex, EarthView::World::Graphic::CMaterialPtr& matPtr);

					/*************************************************************************************
					资源管理器里边的对象
					*************************************************************************************/

					/// <summary>
					/// 获取mesh对象
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Graphic::CMeshPtr getMeshPtr();

					/// <summary>
					/// 获取纹理集合
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial3D::TexturePtrVector getTexturePtrs();

					/// <summary>
					/// 获取材质集合
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial3D::MaterialPtrVector getMaterialPtrs();

					/// <summary>
					/// 获取GPU集合
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial3D::GpuPtrVector getGpuPtrs();


					/*************************************************************************************
					数据
					*************************************************************************************/

					/// <summary>
					/// 获取mesh的feature
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getMeshFeature();

					/// <summary>
					/// 获取mesh大纹理
					/// </summary>
					/// <returns></returns>
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getOrigTextureFeatures();

					/// <summary>
					/// 获取mesh小纹理
					/// </summary>
					/// <returns></returns>
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getThumbTextureFeatures();

					/// <summary>
					/// 获取mesh材质信息
					/// </summary>
					/// <returns></returns>
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getMaterialFeatures();

					/// <summary>
					/// 获取mesh动画信息
					/// </summary>
					/// <returns></returns>
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getAnimationFeatures();

					/// <summary>
					/// 获取mesh的GPU信息
					/// </summary>
					/// <returns></returns>
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getGpuFeatures();

					/// <summary>
					/// 获取mesh的Prg信息
					/// </summary>
					/// <returns></returns>
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getProgramFeatures();

					/// <summary>
					/// 获取mesh的资源
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial3D::Dataset::FeatureVector getResourceFeature();

					/*******************************************************************************************
					效果设置
					*******************************************************************************************/
					/// <summary>
					/// 设置选择时的颜色
					/// </summary>
					/// <param name="color">设置的颜色</param>
					/// <returns></returns>
					virtual void setSelectionColour(const EarthView::World::Graphic::CColourValue& color);

					/// <summary>
					///获取选择时的颜色
					/// </summary>
					/// <returns>EarthView::World::Graphic::CColourValue</returns>
					virtual EarthView::World::Graphic::CColourValue getSelectionColour();
						
					/// <summary>
					/// 开始闪烁
					/// <param name="color">高亮颜色</param>
					/// <param name="hightLight_ms">高亮时长(单位：毫秒)</param>
					/// <param name="normally_ms">非高亮时长(单位：毫秒)</param>
					/// </summary>
					/// <returns></returns>
					virtual void startFlash(const EarthView::World::Graphic::CColourValue& color, ev_uint32 hightLight_ms, ev_uint32 normally_ms);

					/// <summary>
					/// 停止闪烁
					/// </summary>
					/// <returns></returns>
					virtual void stopFlash();

					/// <summary>
					/// 是否可选择
					/// </summary>
					/// <returns>true可选择，false不可选择</returns>
					virtual ev_bool isSelectable();

					/// <summary>
					/// 是否被选择
					/// </summary>
					/// <returns>true被选择，false没有选择</returns>
					virtual ev_bool isSelected();

					/// <summary>
					/// 设置是否可选择
					/// </summary>
					/// <param name="flag">true能够选择，false不能选择</param>
					/// <returns>e</returns>
					virtual void setSelectable(ev_bool flag);

					/// <summary>
					/// 设置选中状态
					/// </summary>
					/// <param name="flag">true选中，false没选中</param>
					/// <returns></returns>
					virtual void setSelected(ev_bool flag);

					/// <summary>
					/// 设置子部件的选择状态
					/// </summary>
					/// <param name="subEntityIndex">子部件下标</param>
					/// <param name="flag">true能够选择，false不能选择</param>
					/// <returns>e</returns>
					virtual void setSubEntitySelected(ev_uint32 subEntityIndex, ev_bool flag);
					virtual void setSubEntitySelected(ev_uint32 subEntityIndex, ev_int32 segmentIndex, ev_bool flag)
					{
						setSubEntitySelected(subEntityIndex, flag);
					}

					/// <summary>
					/// 获取子部件的选择状态
					/// </summary>
					/// <returns>true被选中，false没有被选中</returns>
					virtual ev_bool getSubEntitySelected(ev_uint32 subEntityIndex);

					/// <summary>
					/// 获取选中的子部件索引
					/// </summary>
					/// <param name="subMeshIndex">submesh的索引</param>
					/// <param name="instanceIndex">submesh的复用索引</param>
					/// <param name="segmentIndex">submesh的复用段索引</param>
					/// <returns>是否选中</returns>
					virtual ev_bool getSelectedSubEntityIndex(_out ev_uint32& subMeshIndex,_out ev_uint32& instanceIndex,_out ev_int32& segmentIndex);

					/// <summary>
					/// 返回子部件的名称
					/// </summary>
					/// <returns>返回子部件的名称</returns>
					virtual EVString getSubMeshName(ev_uint32 subEntityIndex);

					/// <summary>
					/// 返回子部件的矩阵。（未开启动画时可用）
					/// </summary>
					/// <param name="subEntityIndex">子部件下标</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Math::CMatrix4 getSubMeshMatrix(_in ev_uint32 subEntityIndex);

					/// <summary>
					/// 给子部件挂接的节点添加监听。（用在动画开启后使用）
					/// </summary>
					/// <param name="subEntityIndex">子部件下标</param>
					/// <param name="nodeListener">节点监听</param>
					/// <returns>要在Loaded后使用这个接口。true,添加成功。false,说明该部件是没有动画的，可用getSubMeshMatrix取得其矩阵</returns>
					virtual ev_bool addNodeListenerForSubMesh(_in ev_uint32 subEntityIndex,_in EarthView::World::Graphic::CNode::CNodeListener* nodeListener);

					/// <summary>
					/// 移除子部件挂接的节点的监听。（用在动画开启后使用）
					/// </summary>
					/// <param name="subEntityIndex">子部件下标</param>
					/// <param name="nodeListener">节点监听</param>
					/// <returns></returns>
					virtual ev_void removeNodeListenerForSubMesh(_in ev_uint32 subEntityIndex,_in EarthView::World::Graphic::CNode::CNodeListener* nodeListener);

					/// <summary>
					/// 清除选择
					/// </summary>
					/// <returns></returns>
					virtual void clearSelection();

					/// <summary>
					/// 设置可编辑状态
					/// </summary>
					/// <param name="flag">true能够编辑，false不能编辑</param>
					/// <returns></returns>
					virtual void setEditable(ev_bool flag);

					/// <summary>
					/// 停止可编辑状态
					/// </summary>
					/// <returns></returns>
					virtual void endEditing();

					/// <summary>
					/// 设置模型透明度
					/// </summary>
					/// <param name="percent">值区间[0,1], (percent=1完全透明，percent=0不透明）</param>
					/// <returns></returns>
					virtual void setTransparency(ev_real64 percent);

					/// <summary>
					/// 设置模型子部件透明度
					/// </summary>
					/// <param name="subEntityIndex">子部件</param>
					/// <param name="percent">值区间[0,1], (percent=1完全透明，percent=0不透明）</param>
					/// <returns></returns>
					virtual void setTransparency(ev_uint32 subEntityIndex, ev_real64 percent);

					/// <summary>
					/// 设置阴影
					/// </summary>
					/// <param name="flag">true有阴影，false没有阴影</param>
					/// <returns></returns>
					virtual void setCastShadows(ev_bool flag);

					/// <summary>
					/// 设置环境光反射率增益
					/// </summary>
					/// <param name="ambient">环境光增益</param>
					/// <param name="diffuse">散射光增益</param>
					/// <param name="specular">镜面光增益</param>
					/// <returns></returns>
					virtual void setEnvParam(const EarthView::World::Graphic::CColourValue& ambient, const EarthView::World::Graphic::CColourValue& diffuse, const EarthView::World::Graphic::CColourValue& specular);

					/// <summary>
					/// 设置是否开启反射
					/// </summary>
					/// <param name="flag">true开启反射，false关闭反射</param>
					/// <returns></returns>
					virtual void setReflectable(ev_bool flag);

					/// <summary>
					/// 获取是否开启反射
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool getReflectable();

					/// <summary>
					/// 设置是否开启折射
					/// </summary>
					/// <param name="flag">true开启折射，false关闭折射</param>
					/// <returns></returns>
					virtual void setRefractable(ev_bool flag);

					/// <summary>
					/// 获取是否开启折射
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool getRefractable();

					/// <summary>
					/// 获取模型状态
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial3D::ModelObjectState getModelState();

					/// <summary>
					/// 获取模型纹理状态
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial3D::TextureState getTextureState();

					/// <summary>
					/// 是否需要切换纹理
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool needSwitchTexture();

					/// <summary>
					/// 切换小纹理
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool switchThumb(EarthView::World::Spatial3D::TexturePtrVector& outTmpTextureVec);

					/// <summary>
					/// 把切换的小纹理应用到模型
					/// </summary>
					/// <returns></returns>
					virtual ev_void attachThumb(EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec);

					/// <summary>
					/// 切换大纹理
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ev_bool switchOrig(EarthView::World::Spatial3D::TexturePtrVector& outTmpTextureVec);

					/// <summary>
					/// 把切换的大纹理应用到模型
					/// </summary>
					/// <returns></returns>
					virtual ev_void attachOrig(EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec);

					/// <summary>
					/// 清除临时纹理对象
					/// </summary>
					/// <returns></returns>
					virtual ev_void clearTmpTextureStream(EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec);

					/// <summary>
					/// 返加模型动画的管理对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* getModelAnimation();

					/// <summary>
					/// 销毁模型动画
					/// </summary>
					/// <returns></returns>
					ev_void destroyModelAnimation();

					/// <summary>
					/// 设置每个通路的剔除模式
					/// </summary>
					/// <returns></returns>
					void setCullingMode(EarthView::World::Graphic::CullingMode mode);

					virtual void setLoadFromLayer(const ev_bool& fromLayer);
					virtual ev_bool getLoadFromLayer();
               public:
				   EarthView::World::Graphic::CNode* getNodeByName(EVString nodeName);
				   bool hasMergeNodeBoundingBox();
				   virtual ev_bool hasFltAnimation();
				   /// <summary>
				   /// 恢复模型的场景结构
				   /// </summary>
				   EarthView::World::Core::MemoryDataStreamPtr addNodeForMesh();

				   /// <summary>
				   /// 恢复模型的场景结构并存储包围盒到节点上
				   /// </summary>
				   ev_void addNodeAndBoundingBoxForMesh();

				   /// <summary>
				   /// 存储包围盒到节点上
				   /// </summary>
				   virtual ev_void mergeBoundingBoxForNode();

					/// <summary>
					/// 开始模型的节点动画之前的准备工作
					/// </summary>
					/// <returns></returns>
					virtual ev_void prepareForNodeAnimation()
					{
					}

					/// <summary>
					/// 恢复节点动画之前的状态
					/// </summary>
					/// <returns></returns>
					virtual ev_void resumeNodeAnimationState()
					{
					}

					/// <summary>
					///播放所有的节点动画
					/// </summary>
					/// <returns></returns>
					virtual void startAllNodeAnimation();

					/// <summary>
					///播放所有的节点动画
					/// </summary>
					/// <returns></returns>
					virtual void stopAllNodeAnimation();

					/// <summary>
					///播放所有的动画
					/// </summary>
					/// <returns></returns>
					virtual void startAllAnimation();

					/// <summary>
					///跟据时间标记点播放动画。详情参照modelanimation.h处的TimeRelationShip枚举的注释
					/// </summary>
					/// <param name="keyTimeTagName">标记点的名字</param>
					/// <param name="segmentConut">段数</param>
					/// <param name="option">要选择播放动画的类型 TimeRelationShip类型的组合</param>
					/// <returns></returns>
					virtual void startRangeAnimation(_in const EVString& keyTimeTagName,_in ev_int32 segmentConut,_in ev_uint32 option);
					/// <summary>
					///跟据时间标记点播放一段动画。详情参照modelanimation.h处的TimeRelationShip枚举的注释
					/// </summary>
					/// <param name="keyTimeTagName">标记点的名字</param>
					/// <returns></returns>
					virtual void startRangeAnimation(_in const EVString& keyTimeTagName);
					/// <summary>
					///跟据时间标记点播放动画(与startRangeAnimation的区别是只操作被选中的动画，不对没选中的动画进行操作)
					/// </summary>
					/// <param name="keyTimeTagName">标记点的名字</param>
					/// <param name="segmentConut">段数</param>
					/// <param name="option">要选择播放动画的类型 TimeRelationShip类型的组合</param>
					/// <returns>被选中动画信息的句柄，停止动画时使用</returns>
					virtual ev_int32 startRangeAnimationIndependently(_in const EVString& keyTimeTagName,_in ev_int32 segmentConut,_in ev_uint32 option);
					/// <summary>
					///跟据时间标记点播放一段动画(与startRangeAnimation的区别是只操作被选中的动画，不对没选中的动画进行操作)
					/// </summary>
					/// <param name="keyTimeTagName">标记点的名字</param>
					/// <returns>被选中动画信息的句柄，停止动画时使用</returns>
					virtual ev_int32 startRangeAnimationIndependently(_in const EVString& keyTimeTagName);
					/// <summary>
					///停止按区间播放的动画,并将场景停在区间的起始位置或区间的终点
					/// </summary>
					/// <param name="stopAtRangeStart">true，停止在区间的起始点；false，停在区间的终点</param>
					/// <returns></returns>
					virtual void stopRangeAnimation(_in ev_bool stopAtRangeStart);
					/// <summary>
					///停止按区间播放的动画,并将场景停在区间的起始位置或区间的终点
					/// </summary>
					/// <param name="stopAtRangeStart">true，停止在区间的起始点；false，停在区间的终点</param>
					/// <param name="handle">调用startRangeAnimationIndependently后，返回的值</param>
					/// <returns></returns>
					virtual void stopRangeAnimation(_in ev_bool stopAtRangeStart, ev_int32 handle);

					/// <summary>
					///停止播放所有的动画
					/// </summary>
					/// <returns></returns>
					virtual void stopAllAnimation();

					/// <summary>
					///暂停播放所有的动画
					/// </summary>
					/// <returns></returns>
					virtual void pauseAllAnimation();

					/// <summary>
					////继续播放所有的动画
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void continueAllAnimation();

					/// <summary>
					////设置动画是否循环播放
					/// </summary>
					/// <param name="loop">true开启循环播放，false关闭循环播放</param>
					/// <returns></returns>
					virtual void setAllAnimationLoop(_in ev_bool loop);

					/// <summary>
					////根据动画的名字播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <returns></returns>
					virtual void startAnimation(_in const EVString& animationName);
					/// <summary>
					///根据动画的名字开启某个动画
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					void startAnimation(_in const EVString& animationName,_in ev_bool processChild);

					/// <summary>
					////根据动画的名字停止播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <returns></returns>
					virtual void stopAnimation(_in const EVString& animationName);
					/// <summary>
					////根据动画的名字停止播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					virtual void stopAnimation(_in const EVString& animationName,_in ev_bool processChild);

					/// <summary>
					////根据动画的名字暂停播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <returns></returns>
					virtual void pauseAnimation(_in const EVString& animationName);

					/// <summary>
					////根据动画的名字暂停播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					virtual void pauseAnimation(_in const EVString& animationName,_in ev_bool processChild);

					/// <summary>
					////根据动画的名字继续播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <returns></returns>
					virtual void continueAnimation(_in const EVString& animationName);

					/// <summary>
					////根据动画的名字继续播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					virtual void continueAnimation(_in const EVString& animationName,_in ev_bool processChild);

					/// <summary>
					////根据动画的名字设置动画是否循环播放
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <param name="loop">true循环播放，false不循环播放</param>
					/// <returns></returns>
					virtual void setAnimationLoop(_in const EVString& animationName,_in bool loop);

					/// <summary>
					////根据动画的名字设置动画是否循环播放
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <param name="loop">true循环播放，false不循环播放</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					virtual void setAnimationLoop(_in const EVString& animationName,_in bool loop,_in ev_bool processChild);

					/// <summary>
					/// 创建控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴
					/// 限制：1.当前的CModelBaseObject必须是由createSubEntityObject创建的对象且只有一个子部件
					///       2.当前的CModelBaseObject必须是已经attachToNode（pWorldNode）后状态【attachToScene不支持】，调用此接口会调整pWorldNode下的挂接层次关系
					///         
					/// </summary>
					/// <param name="pModelObject">模型对象</param>
					/// <returns>返回节点，失败返回NULL</returns>
					virtual EarthView::World::Graphic::CNode* createLocalAxisNode();

					/// <summary>
					/// 创建控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴
					/// 限制：1.当前的CModelBaseObject必须是由createSubEntityObject创建的对象且是同一个组件下的子部件
					///       2.当前的CModelBaseObject必须是已经attachToNode（pWorldNode）后状态【attachToScene不支持】，调用此接口会调整pWorldNode下的挂接层次关系
					///         
					/// </summary>
					/// <param name="componentName">组件名称，即是模型库左下角纯蓝色节点名称</param>
					/// <returns>返回节点，失败返回NULL</returns>
					virtual EarthView::World::Graphic::CNode* createLocalAxisNode(const EVString& componentName);

					/// <summary>
					/// 获取控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴    
					/// </summary>
					/// <returns>返回节点，失败返回NULL</returns>
					virtual EarthView::World::Graphic::CNode* getLocalAxisNode();

					/// <summary>
					/// 销毁createLocalAxisNode创建的节点，销毁后原来在节点上设置的偏移与姿态会丢失
					/// </summary>
					/// <param name="pModelObject">模型对象</param>
					/// <param name="node">createLocalAxisNode返回的node</param>
					/// <returns>true成功，false失败</returns>
					virtual ev_bool destroyLocalAxisNode();

					/// <summary>
					/// 通过节点名称获取bone节点
					/// </summary>
					/// <param name="boneName">骨骼节点名称</param>
					/// <returns>失败返回NULL</returns>
					virtual EarthView::World::Graphic::CNode* getBoneNode(const EVString& boneName);

					/// <summary>
					/// 通过bone节点控制模型部件时，bone节点设置完位置后，需要调用此接口刷新一下
					/// 限制：不支持instance模型，不支持内部instance模型
					/// </summary>
					/// <returns></returns>
					virtual void updateSkeletonAnimationVertex();

				protected:

					/// <summary>
					/// 注册模型监听器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void registerNodeListener();

					/// <summary>
					/// 反注册模型监听器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void unRegisterNodeListener();

					/// <summary>
					/// 注册模型(光源)监听器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void registerLightListener();

					/// <summary>
					/// 反注册模型(光源)监听器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void unRegisterLightListener();

					/// <summary>
					/// 设置世界包围盒
					/// </summary>
					/// <param name="box">世界包围盒</param>
					/// <returns></returns>
					virtual ev_void setWorldAABB(const EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					/// <summary>
					/// 设置模型状态
					/// </summary>
					/// <param name="state">模型状态</param>
					/// <returns></returns>
					virtual void setModelState(EarthView::World::Spatial3D::ModelObjectState state);

					/// <summary>
					///  设置环境参数增益
					/// </summary>
					/// <param name="ambient">环境光</param>
					/// <param name="diffuse">反射光</param>
					/// <param name="specular">镜面光</param>
					/// <returns></returns>
					virtual void setProductEnv(const EarthView::World::Graphic::CColourValue& ambient, const EarthView::World::Graphic::CColourValue& diffuse, const EarthView::World::Graphic::CColourValue& specular);

					/// <summary>
					/// 获取环境参数增益
					/// </summary>
					/// <param name="ambient">环境光</param>
					/// <param name="diffuse">反射光</param>
					/// <param name="specular">镜面光</param>
					/// <returns></returns>
					virtual void getProductEnv(EarthView::World::Graphic::CColourValue& ambient, EarthView::World::Graphic::CColourValue& diffuse, EarthView::World::Graphic::CColourValue& specular);

					/// <summary>
					/// 应用环境贴图
					/// </summary>
					/// <param name="enabled">启用</param>
					/// <returns></returns>
					virtual void applyEnvMap(ev_bool enabled);
					/// <summary>
					/// 返回启用环境贴图的材质
					/// </summary>
					/// <returns></returns>
					CMemoryDataStreamMap getEnvMapMaterial();
					/// <summary>
					/// 返回环境贴图的图片
					/// </summary>
					/// <returns></returns>
					CMemoryDataStreamMap getEnvMapTexture();
					/// <summary>
					/// 返回环境贴图的图片
					/// </summary>
					/// <returns></returns>
					EarthView::World::Core::MemoryDataStreamPtr getEnvMapMesh();

					/// <summary>
					/// 返回是否启用了环境贴图
					/// </summary>
					/// <returns></returns>
					virtual ev_bool isApplyEnvMap();

					/// <summary>
					/// 设置父模型对象
					/// </summary>
					/// <param name="pModel">模型</param>
					/// <param name="state">状态</param>
					/// <returns></returns>
					virtual void setParentObject(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, EarthView::World::Spatial3D::BindedState state);

					/// <summary>
					/// 加载绑定的部件
					/// </summary>
					/// <param name="refInfoVec">绑定的模型和特效集合</param>
					/// <returns></returns>
					virtual ev_bool loadBindedObject(const EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector& refInfoVec, const EarthView::World::Core::IntVector& subEntityIndexs);

					/// <summary>
					/// 挂接被绑定的模型
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool attachBindedObject();

					/// <summary>
					/// 拆卸被绑定的模型对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool detachBindedObject();

					/// <summary>
					/// 卸载绑定的模型对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool unloadBindedObject();

					/// <summary>
					///  将绑定模型挂接到主模型上
					/// </summary>
					/// <param name="obj">挂接到主模型的模型</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool attachSubModelToMainObject(const ModelObject& obj);

					/// <summary>
					/// 将绑定特效挂接到主模型上
					/// </summary>
					/// <param name="obj">挂接到主模型的特效</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool attachSubEffectToMainObject(const EffectObject& obj);
					
					/// <summary>
					/// 将绑定光源挂接到主模型上
					/// </summary>
					/// <param name="obj">挂接到主模型的光源</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool attachSubLightToMainObject(const LightObject& obj);

					/// <summary>
					/// 从主模型接绑定模型拆卸下来
					/// </summary>
					/// <param name="obj">从主模型上拆卸下模型</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool detachSubModelFromMainObject(const ModelObject& obj);

					/// <summary>
					/// 从主模型将绑定特效拆卸下来
					/// </summary>
					/// <param name="obj">从主模型上拆卸下特效</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool detachSubEffectFromMainObject(const EffectObject& obj);

					/// <summary>
					/// 从主模型将绑定光源拆卸下来
					/// </summary>
					/// <param name="obj">从主模型上拆卸下光源</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool detachSubLightFromMainObject(const LightObject& obj);

					/// <summary>
					/// 抽象本地模型与数据库模型
					/// </summary>
					/// <param name="obj">从主模型上拆卸下特效</param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr readAniDataStream();

					/// <summary>
					///  遍历并合并模型节点下的所有包围盒存储到节点
					/// </summary>
					/// <param name="parentMeshNode">模型节点</param>
					/// <returns>合并出的包围盒</returns>
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox curNodeTreeForBoundingBox(EarthView::World::Graphic::CMesh::CMeshNode *parentMeshNode);

					public:
					/// <summary>
					///指示否是挎贝出来的
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool getIsClone();

					/// <summary>
					///设置是否拷贝
					/// </summary>
					/// <param name="isClone">true为拷贝，false为不拷贝</param>
					/// <returns></returns>
					void setIsClone(ev_bool isClone);

					/// <summary>
					/// 初始模型的动画
					/// </summary>
					/// <returns></returns>
					virtual void initializeAnimation();

					/// <summary>
					/// 获取并管理模型自身的动画（骨骼动画和顶点动画这两类）
					/// </summary>
					/// <returns></returns>
					virtual void initializeModelAnimation();

					/// <summary>
					/// 获取并管理模型的节点动画（会根据ani文件还原出3DMAX中原有的一样的场景结构）
					/// </summary>
					/// <returns></returns>
					virtual void initializeNodeAnimation();

					/// <summary>
					///返回模型的动画信息
					/// </summary>
					/// <returns></returns>			
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap getModelAnimationInformationMap();
					/// <summary>
					/// 返回关键时间标记队列
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::CFrameTagList getFrameTagList() const;

					/// <summary>
					/// 设置组件是否显示
					/// </summary>
					/// <param name="component">组件</param>
					/// <param name="visible">是否可见</param>
					/// <returns></returns>
					virtual void setComponentVisible(const EarthView::World::Spatial3D::CComponent& component,ev_bool visible);
					/// <summary>
					/// 设置组件是否高亮
					/// </summary>
					/// <param name="component">组件</param>
					/// <param name="highlight">是否高亮</param>
					/// <returns></returns>
					virtual void setComponentHighlight(const EarthView::World::Spatial3D::CComponent& component,ev_bool highlight);
					/// <summary>
					/// 设置组件透明度
					/// </summary>
					/// <param name="component">组件</param>
					/// <param name="alpha">透明度，0为不透明，1为全透明</param>
					/// <returns></returns>
					virtual void setComponentTransparency(const EarthView::World::Spatial3D::CComponent& component,ev_real32 alpha);


					/// <summary>
					/// 获取节点动画的根节点
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::CNode* getAnimationRootNode() 
					{
						return mAnimationRootNode;
					}

                  protected:
					/// <summary>
					/// 设置是否夹取播放动画
					/// </summary>
					/// <param name="clip">是否夹取</param>
					/// <returns></returns>
					void setClipToRange(_in ev_bool clip);
					/// <summary>
					/// 返回是否夹取播放动画
					/// </summary>
					/// <returns></returns>
					ev_bool getClipToRange() const;
					/// <summary>
					/// 设置夹取播放动画的边界
					/// </summary>
					/// <param name="start">边界的起始时间</param>
					/// <param name="end">边界的终止时间</param>
					/// <returns></returns>
					void setRange(_in Real start,_in Real end);
					/// <summary>
					/// 返回边界的起始点
					/// </summary>
					/// <returns></returns>
					Real getRangeStart() const;
					/// <summary>
					/// 返回边界的终止点
					/// </summary>
					/// <returns></returns>
					Real getRangeEnd() const;

					ev_uint32 addInstanceMatrixCount(ev_uint16 submeshIndex);

					void clearInstanceMatrixCount();
					void getParentCom(EarthView::World::Spatial3D::CComponent& comp,EarthView::World::Spatial3D::CComponent& resultComponent,const EVString& name );

				protected:
					/// <summary>
					/// 读数据流，派生类实现
					/// </summary>
					virtual ev_bool loadModelDataStream();

					/// <summary>
					/// 卸载数据流，派生类实现
					/// </summary>
					virtual ev_bool unloadModelDataStream();

					/// <summary>
					/// 加载资源对象，派生类实现
					/// </summary>
					virtual ev_bool loadModelResource();
					virtual ev_bool loadModelResource(const EarthView::World::Core::IntVector& subEntityIndexs);

					/// <summary>
					/// 卸载资源对象，派生类实现
					/// </summary>
					virtual ev_bool unloadModelResource();

				private:
					
					/// <summary>
					/// 更新材质流，并更新数据库
					/// </summary>
					/// <param name="matPtr">材质对象</param>
					/// <param name="pdataSet">所在的资源数据集</param>
					/// <returns></returns>
					ev_bool updateMaterialStream(const EarthView::World::Graphic::CMaterialPtr& matPtr, EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataSet);
					
					/// <summary>
					//// 检查指定纹理被自身引用的次数
					/// </summary>
					/// <param name="matPtr">纹理名字</param>
					/// <returns>引用的次数</returns>
					ev_uint32 checkTextRefBySelf(EVString textName);
					/// <summary>
					//// 找出需要更新的大纹理features
					/// </summary>
					/// <param name="replacedTextures">用以替换的纹理的名字集合</param>
					/// <param name="updateOrigFeatureIds">需要更新的大纹理feature的id集合</param>
					/// <param name="origTmps">保持不变的大纹理feature的集合</param>
					/// <param name="updateOrigFeatureIds">需要更新的小纹理feature的id集合</param>
					/// <param name="origTmps">保持不变的小纹理feature的集合</param>
					/// <param name="addThumIds">需要重新切小纹理的图片文件id号列表</param>
					/// <returns></returns>
					ev_void findNeedUpdateTextureFeatures(const EarthView::World::Core::StringVector& replacedTextures, 
						EarthView::World::Core::IntVector& updateOrigFeatureIds, 
						EarthView::World::Spatial3D::Dataset::FeatureVector& origTmps, 
						EarthView::World::Core::IntVector& updateThumbFeatureIds, 
						EarthView::World::Spatial3D::Dataset::FeatureVector& thumbTmps,
						EarthView::World::Core::IntVector& addThumIds);
					/// <summary>
					//// 更新大纹理features
					/// </summary>
					/// <param name="newTextures">新的大纹理的名字集合</param>
					/// <param name="pdataSet">所在的资源数据集</param>
					/// <param name="updateOrigFeatureIds">更新的大纹理的id集合</param>
					/// <param name="origTmps">保持不变的大纹理feature的集合</param>
					/// <param name="deleteTexttureFeatures">需要释放的纹理featur列表</param>
					/// <returns></returns>
					ev_void updateOrigTexture(const EarthView::World::Core::StringVector& newTextures,
						EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataSet,
						EarthView::World::Core::IntVector& updateOrigFeatureIds,
						EarthView::World::Spatial3D::Dataset::FeatureVector& origTmps,
						EarthView::World::Spatial3D::Dataset::FeatureVector& deleteTexttureFeatures
						);
					/// <summary>
					//// 更新小纹理features
					/// </summary>
					/// <param name="newTextures">新的小纹理的名字集合</param>
					/// <param name="pdataSet">所在的资源数据集</param>
					/// <param name="updateOrigFeatureIds">更新的小纹理的id集合</param>
					/// <param name="origTmps">保持不变的小纹理feature的集合</param>
					/// <param name="deleteTexttureFeatures">需要释放的纹理featur列表</param>
					/// <returns></returns>
					ev_void updateThumbTexture(const EarthView::World::Core::StringVector& newTextures,
						EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataSet,
						EarthView::World::Core::IntVector& updateThumFeatureIds,
						EarthView::World::Spatial3D::Dataset::FeatureVector& thumTmps,
						EarthView::World::Spatial3D::Dataset::FeatureVector& deleteTexttureFeatures
						);
					/// <summary>
					//// 有可能更换的大纹理本身没有小纹理，比如dds纹理，所以在这里需要生成小纹理
					/// </summary>
					/// <param name="newTextures">新的小纹理的名字集合</param>
					/// <param name="pdataSet">所在的资源数据集</param>
					/// <param name="IntVector">新加的小纹理的id集合</param>
					/// <returns></returns>
					ev_void genThumbTexture(const EarthView::World::Core::StringVector& newTextures,
						EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataSet,
						EarthView::World::Core::IntVector& addThumIds,
						EarthView::World::Spatial3D::Dataset::FeatureVector& thumTmps
						);
				protected:
					EarthView::World::Spatial::Math::CMatrix4 mWorldMatrix;
					EarthView::World::Spatial::Math::CAxisAlignedBox mWorldAABB;

					EarthView::World::Graphic::CColourValue mProductAmbient;
					EarthView::World::Graphic::CColourValue mProductDiffuse;
					EarthView::World::Graphic::CColourValue mProductSpecular;

					ModelDataStream mModelDataStream;
					ModelResource mModelResource;

					ModelBindedObjectMap mBindAtBoneModels;
					ModelBindedObjectMap mBindAtSubMeshModels;
					ModelBindedObjectMap mBindAtNodeModels;
					EffectBindedObjectMap mBindAtBondEffects;
					EffectBindedObjectMap mBindAtNodeEffects;
					EffectBindedObjectMap mBindAtSubMeshEffects;
					//LightBindedObjectMap mBindAtBondLights;
					LightBindedObjectMap mBindAtSubMeshLights;

					map< EVString, EarthView::World::Graphic::CNode*> mNodeNameAndCNodeMap;

					EVString mGroupName;
					EVString mInternalKeyName;
					EVString mAliasName;

					EarthView::World::Spatial3D::ModelManager::CModelNodeListener* mpNodeListener;
					EarthView::World::Spatial3D::ModelManager::CModelFrameListener* mpFrameListener;
					EarthView::World::Spatial::GeoDataset::IDataset* mpDataset;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* mpParentObject;
					EarthView::World::Graphic::CSceneManager* mpSceneManager;
					EarthView::World::Graphic::CNode* mpLocalNode;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* mModelAnimation;

					ev_uint32 mBindedID;
					ev_uint32 mID;

					EarthView::World::Spatial3D::ModelObjectState mState;
					EarthView::World::Spatial3D::ModelType mType;
						 
					EarthView::World::Spatial3D::TextureState mTextureState;
					EarthView::World::Spatial3D::BindedState mBindedState;
					ev_bool mIsDefaultOrigTexture;
					ev_bool mIsClone;
					ev_bool mUpdateAltitude;
					ev_bool mbPartEntity;

					EarthView::World::Spatial3D::Dataset::IntMap mInstanceMatrixCount;

					CMemoryDataStreamMap mEnvironmentImages;
					CMemoryDataStreamMap mUseEnvironmentMaterials;
                    EarthView::World::Core::MemoryDataStreamPtr mUseEnvironmentMesh;	
					EarthView::World::Graphic::CNode* mAnimationParentNode;
					EarthView::World::Graphic::CNode* mAnimationRootNode;
					EarthView::World::Graphic::CNode* mFltRootNode;
					ev_bool mInitAnimation;
					ev_bool mNeedPrepareForNodeAnimation;
					
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache* mpMatCache;
					ev_bool mbCacheEnable;

					ev_bool mbFileDirAsGroup;
					EVString mModelfile;

					EarthView::World::Graphic::CNode*  mpLocalAxisNode;

					friend class CInstanceInternal;
					friend class CModelObjectManager;
					friend class CModelUnloadWorkQueue;
					friend class CModelLoadWorkQueue;
					friend class CModelLayerEditor;
					friend class CModelNodeListener;
					friend class EarthView::World::Spatial3D::Atlas::CEntityLayer;
					friend class CModelObjectFactory;
ev_private:
					map<ev_int32,ev_bool> mSubEntityVisibilityMap;
				    ev_bool mNodeAnimationPrepared;
					ev_bool mHasDetached;

ev_private:
					ev_void clearEnvMapStream();
				protected:
					virtual void buildComponentTree(_inout EarthView::World::Spatial3D::CComponent& comp,_in EarthView::World::Graphic::CMesh::CMeshNode* node);
					ev_void findComponent(EarthView::World::Spatial3D::CComponent& comp,EarthView::World::Spatial3D::CComponent& resultComponent,const EVString& name );
					ev_void findComponent(EarthView::World::Spatial3D::CComponent& comp,EarthView::World::Spatial3D::CComponent& resultComponent,ev_uint32 subEntityIndex );
					ev_void initLightByXml(EarthView::World::Graphic::CLight* l,const EVString& xml);
					EarthView::World::Spatial3D::CComponent mRootComponent;
					ev_bool mIsComponentInit;
					ev_bool mHasResetNodeStruct;
					ev_bool mhasMergeNodeBoundingBox;
					//zhf 2014/12/22
					ev_bool mFltAnimationInitialized;
					ev_list<EarthView::World::Spatial3D::ModelManager::CLightPointSystem*> mLightLPSList;
					EarthView::World::Spatial3D::ModelManager::CLightPointSystem* mpCurrentLPS;
					EarthView::World::Spatial3D::ModelManager::CModelFrameListener* mpFltAnimationFrameListener;
					ev_bool mbIsFltAnimation;
					ev_bool mbLoadFromLayer;
					ev_map<EVString,EarthView::World::Core::NameValuePairList> mCategoryNamePairMap;
					ev_void toCategoryNamePairMap(EarthView::World::Graphic::CCategoryList& categoryList);
					EarthView::World::Graphic::CNode* createFltNode(EVString nodeName,EarthView::World::Core::NameValuePairList& nameList);
				protected:
					struct AnimtionInfo
					{
					public:
						AnimtionInfo()
							:mHandle(0)
							,mstartTime(0.0)
							,mstopTime(0.0)
						{

						}
						ev_int32 mHandle;
						ev_real32 mstartTime;
						ev_real32 mstopTime;
						ev_vector<EVString> mAnimationName;
					};

					ev_map<ev_int32,AnimtionInfo> mAnimationInfoMap;
				};

			}//end namespace
		}
	}
}
#endif

