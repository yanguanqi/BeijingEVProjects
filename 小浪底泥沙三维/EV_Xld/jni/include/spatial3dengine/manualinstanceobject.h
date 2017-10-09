#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MANUALINSTANCEOBJECT_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MANUALINSTANCEOBJECT_H

#include "spatial3dengine/modelbaseobject.h"
#include "spatial3dengine/modelanimation.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CEntityDataset;
				class CMeshTemplateDataset;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{
				class CInstanceInternal;

				class EV_Spatial3DEngine_DLL CManualInstanceObject : public EarthView::World::Spatial3D::ModelManager::CModelBaseObject
				{
					friend class CModelObjectFactory;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CManualInstanceObject(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CManualInstanceObject();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pDataset">数据集对象</param>
					/// <param name="id">模型对象id</param>
					/// <returns></returns>
					CManualInstanceObject(EarthView::World::Graphic::CSceneManager* ref_pSceneManager, EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset, ev_uint32 id);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="modelfile">模型文件</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <returns></returns>
					CManualInstanceObject(EarthView::World::Graphic::CSceneManager* ref_pSceneManager, const EVString& modelfile, ev_bool bFileDirAsGroup);
				public:
					virtual ~CManualInstanceObject();

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
					///  卸载模型资源
					/// </summary>
					/// <returns>true成功，false失败</returns>
					virtual ev_bool unload();

					/// <summary>
					/// 挂接模型对象
					/// </summary>
					/// <returns></returns>
					virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

					/// <summary>
					/// 拆卸模型对象
					/// </summary>
					/// <returns>拆卸成功返回绑定的父节点，否则返回NULL</returns>
					virtual EarthView::World::Graphic::CNode* detachFromNode();

					/// <summary>
					/// 挂接模型对象(只挂载instancebatch，通过控制instanceEntity变换位置)
					/// </summary>
					/// <returns></returns>
					virtual ev_bool attachToScene();

					/// <summary>
					/// 拆卸模型对象
					/// </summary>
					/// <returns>拆卸成功返回true，否则返回false</returns>
					virtual ev_bool detachFromScene();

					/// <summary>
					/// 是否可见
					/// </summary>
					/// <returns>ev_bool，TRUE可见/FALSE不可见</returns>
					virtual ev_bool isVisible();


					/// <summary>
					/// 设置是否可见
					/// </summary>
					/// <param name="flag">TRUE可见/FALSE不可见</param>
					/// <param name="bRecursive">true递归到子模型，false只应用当前主模型。注：没有bRecursive参数的接口是递归子模型</param>
					/// <returns></returns>
					virtual void setVisible(ev_bool flag) ;
					virtual void setVisible(ev_bool flag, ev_bool bRecursive) ;

					/// <summary>
					/// 设置subentity是否可见
					/// </summary>
					/// <param name="subEntityIndex">subentity索引</param>
					/// <param name="isVisible">TRUE可见/FALSE不可见</param>
					/// <param name="bRecursive">true递归到子模型，false只应用当前主模型。注：没有bRecursive参数的接口是递归子模型</param>
					/// <returns></returns>
					virtual void setSubEntityVisibility(ev_uint32 subEntityIndex, ev_bool isVisible);
					virtual void setSubEntityVisibility(ev_uint32 subEntityIndex, ev_bool isVisible, ev_bool bRecursive);

					/// <summary>
					/// 获取subentity是否可见
					/// </summary>
					/// <param name="subEntityIndex">subentity索引</param>
					/// <returns>TRUE可见/FALSE不可见</returns>
					virtual ev_bool getSubEntityVisibility(ev_uint32 subEntityIndex);


					/// <summary>
					/// 获取模型类型
					/// </summary>
					/// <returns>模型类型</returns>
					virtual EarthView::World::Spatial3D::ModelType getType();

					/// <summary>
					/// 获取模型列表
					/// </summary>
					/// <returns>模型列表</returns>
					virtual const EarthView::World::Spatial3D::InstancedEntityVector& getInstanceEntityVector();

					/// <summary>
					/// 获取instanceBatch容量
					/// </summary>
					/// <returns>容量</returns>
					virtual ev_uint32 getNumInstancePerBatch();

					/// <summary>
					/// 设置instanceBatch容量
					/// </summary>
					/// <param name="numPerBatch">instanceBatch容量</param>
					/// <returns></returns>
					virtual void setNumInstancePerBatch(ev_uint32 numPerBatch);

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
					/// <returns></returns>
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
					/// <returns></returns>
					virtual ev_real64 getRenderingMinDistance() ;

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
					///  获取世界变换矩阵
					/// </summary>
					/// <returns>返回世界变换矩阵</returns>
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getWorldAABB();

					/// <summary>
					/// 创建控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴
					/// 限制：1.当前的的CModelBaseObject必须是由createSubEntityObject创建的对象且只有一个子部件
					///       2.当前的的CModelBaseObject必须是已经attachToNode（pWorldNode）后状态【attachToScene不支持】，调用此接口会调整pWorldNode下的挂接层次关系
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
					/// 设置环境光反射率增益
					/// </summary>
					/// <param name="ambient">环境光增益</param>
					/// <param name="diffuse">散射光增益</param>
					/// <param name="specular">镜面光增益</param>
					/// <returns></returns>
					void setEnvParam(const EarthView::World::Graphic::CColourValue& ambient, const EarthView::World::Graphic::CColourValue& diffuse, const EarthView::World::Graphic::CColourValue& specular);

					/// <summary>
					/// 是否可选择
					/// </summary>
					/// <returns>ev_bool，TRUE可选择/FALSE不可选择</returns>
					virtual ev_bool isSelectable();

					/// <summary>
					/// 是否被选择
					/// </summary>
					/// <returns>ev_bool，TRUE被选择/FALSE没有被选择</returns>
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
					/// <returns>true被选中，false没有被选中</returns>
					virtual EVString getSubMeshName(ev_uint32 subEntityIndex);

					/// <summary>
					/// 返回子部件的矩阵
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
					/// <param name="flag">TRUE可编辑/FALSE不可编辑</param>
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

					void linkEntity(EarthView::World::Graphic::CEntity* pEntity);

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
					/// <param name="flag">TRUE可投射阴影/FALSE不可投射阴影</param>
					/// <returns></returns>
					virtual void setCastShadows(ev_bool flag);

					/// <summary>
					/// 设置是否开启反射
					/// </summary>
					/// <param name="flag">TRUE开启反射/FALSE不开启反射</param>
					/// <returns></returns>
					virtual void setReflectable(ev_bool flag);

					/// <summary>
					/// 获取是否开启反射
					/// </summary>
					/// <returns>TRUE开启反射/FALSE不开启反射</returns>
					virtual ev_bool getReflectable();

					/// <summary>
					/// 设置是否开启折射
					/// </summary>
					/// <param name="flag">TRUE开启折射/FALSE不开启折射</param>
					/// <returns></returns>
					virtual void setRefractable(ev_bool flag);

				/// <summary>
					/// 获取是否开启折射
					/// </summary>
					/// <returns>TRUE开启折射/FALSE不开启折射</returns>
					virtual ev_bool getRefractable();

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
					/// 初始模型的动画
					/// </summary>
					/// <returns></returns>
					virtual void initializeAnimation();
					/// <summary>
					/// 获取并管理模型自身的动画（骨骼动画和顶点动画这两类）
					/// </summary>
					virtual void initializeModelAnimation();

					/// <summary>
					/// 获取并管理模型的节点动画（会根据ani文件还原出3DMAX中原有的一样的场景结构）
					/// </summary>
					virtual void initializeNodeAnimation();

					/// <summary>
					///播放所有的动画
					/// </summary>
					/// <returns></returns>
					virtual void startAllAnimation();
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
					////根据动画的名字停止播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <returns></returns>
					virtual void stopAnimation(_in const EVString& animationName);

					/// <summary>
					////根据动画的名字暂停播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <returns></returns>
					virtual void pauseAnimation(_in const EVString& animationName);

					/// <summary>
					////根据动画的名字继续播放动画
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <returns></returns>
					virtual void continueAnimation(_in const EVString& animationName);

					/// <summary>
					////根据动画的名字设置动画是否循环播放
					/// </summary>
					/// <param name="animationName">动画名字</param>
					/// <param name="loop">true循环播放，false不循环播放</param>
					/// <returns></returns>
					virtual void setAnimationLoop(_in const EVString& animationName,_in bool loop);


					/// <summary>
					/// 创建动画场景
					/// </summary>
					/// <param name="node">节点序列器对象</param>
					/// <param name="parent">父节点对象</param>
					/// <param name="parent"></param>
					void createAnimationScene(_in const EarthView::World::Graphic::CNodeSerializer& node ,_in EarthView::World::Graphic::CNode* parent);

					/// <summary>
					/// 开始模型的节点动画之前的准备工作
					/// </summary>
					/// <returns></returns>
					virtual ev_void prepareForNodeAnimation();

					/// <summary>
					/// 恢复节点动画之前的状态
					/// </summary>
					/// <returns></returns>
					virtual ev_void resumeNodeAnimationState();

					/// <summary>
					/// 销毁创建的节点
					/// </summary>
					/// <returns></returns>

					void destoryAnimationSceneNodes();

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
					/// <returns>返回-1计算失败</returns>
					virtual void calculateInstanceIndex(ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex);

					/// <summary>
					/// 获取subEntity个数
					/// </summary>
					/// <returns>返回subentity个数，失败返回-1</returns>
					virtual ev_int32 getNumSubEntities();

					/// <summary>
					///  根据CInstancedEntity取所属组件
					/// </summary>
					/// <param name="CInstancedEntity">CInstancedEntity指针</param>
					/// <returns>组件对象</returns>
					EarthView::World::Spatial3D::CComponent getComponentByInstancedEntity(EarthView::World::Graphic::CInstancedEntity* instancedEntity);

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
					/// 设置内部复用的instance可用
					/// </summary>
					/// <returns></returns>
					void setInstanceInUse(ev_bool bInUse);

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
				protected:
					CInstanceInternal* mpInstanceInternal;
					EarthView::World::Spatial3D::InstancedEntityVector mInstanceEntities;

					EarthView::World::Spatial::Math::CMatrix4* mpWorldMatrix;

					void startAllSkeletonAnimation();
					void stopAllSkeletonAnimation();
					void pauseAllSkeletonAnimation();
					void continueAllSkeletonAnimation();
					void setAllSkeletonAnimationLoop(_in ev_bool loop);

					void startSkeletonAnimation(_in const EVString& animationName);
					void stopSkeletonAnimation(_in const EVString& animationName);
					void pauseSkeletonAnimation(_in const EVString& animationName);
					void continueSkeletonAnimation(_in const EVString& animationName);
					void setSkeletonAnimationLoop(_in const EVString& animationName, _in ev_bool loop);

					virtual void createInstanceInternal();
					virtual void destroyInstanceInternal();
					
					/// <summary>
					/// 加载资源对象，需要重写
					/// </summary>
					virtual ev_bool loadModelResource();
					virtual ev_bool loadModelResource(const EarthView::World::Core::IntVector& subEntityIndexs);

					/// <summary>
					/// 卸载资源对象，派生类实现
					/// </summary>
					virtual ev_bool unloadModelResource();

					/// <summary>
					///  遍历并合并模型节点下的所有包围盒存储到节点
					/// </summary>
					/// <param name="parentMeshNode">模型节点</param>
					/// <returns>合并出的包围盒</returns>
					EarthView::World::Spatial::Math::CAxisAlignedBox curNodeTreeForBoundingBox(EarthView::World::Graphic::CMesh::CMeshNode *parentMeshNode);

					/// <summary>
					///  挂接模型到主模型
					/// </summary>
					/// <param name="obj">需要挂接的模型对象</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual ev_bool attachSubModelToMainObject(const ModelObject& obj);

					/// <summary>
					/// 挂接特效到主模型
					/// </summary>
					/// <param name="obj">需要挂接的特效对象</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual ev_bool attachSubEffectToMainObject(const EffectObject& obj);

					/// <summary>
					/// 挂接光源到主模型
					/// </summary>
					/// <param name="obj">需要挂接的光源对象</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual ev_bool attachSubLightToMainObject(const LightObject& obj);
					
					/// <summary>
					/// 从组模型上卸载挂接的模型
					/// </summary>
					/// <param name="obj">需要卸载挂接的模型对象</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual ev_bool detachSubModelFromMainObject(const ModelObject& obj);

					/// <summary>
					/// 从组模型上卸载挂接的特效
					/// </summary>
					/// <param name="obj">需要卸载挂接的特效对象</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual ev_bool detachSubEffectFromMainObject(const EffectObject& obj);

					/// <summary>
					/// 从组模型上卸载挂接的光源
					/// </summary>
					/// <param name="obj">需要卸载挂接的光源对象</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual ev_bool detachSubLightFromMainObject(const LightObject& obj);

					/// <summary>
					/// 挂接绑定的模型到场景
					/// </summary>
					/// <returns>成功返回true否则返回false</returns>
					virtual void attachBindedModelToScene();

					/// <summary>
					/// 从场景反挂接特绑定的模型
					/// </summary>
					/// <param name="obj">需要挂接的特效对象</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual void detachBindedModelFromScene();


					/// <summary>
					/// 设置图层的属性到对象
					/// </summary>
					/// <returns></returns>
					virtual void setLayerAttribute();

					/// <summary>
					/// 卸载绑定的模型对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回true，失败返回false</returns>
					virtual ev_bool unloadBindedObject();

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
ev_private:
					vector<EarthView::World::Graphic::CNode*> mNodeVector;
					vector<EarthView::World::Graphic::CNode*> msceneNodeVector;
					EarthView::World::Core::IntVector mhideSubEntityIndexs;
					//光源Listener用于自定义模型受那些光源的影响
					vector<EarthView::World::Spatial3D::ModelManager::CModelObjectListener*> mpModelObjLightListeners;
protected:
				
					virtual void buildComponentTree(_inout EarthView::World::Spatial3D::CComponent& comp,_in EarthView::World::Graphic::CMesh::CMeshNode* node);

					void findComponent(EarthView::World::Spatial3D::CComponent& component,_out EarthView::World::Spatial3D::CComponent& resultComponent,EarthView::World::Graphic::CInstancedEntity* pInstanceEntity );

					EarthView::World::Graphic::CNode* _createLocalAxisNode(const InstancedEntityVector& instEntVec, const EarthView::World::Spatial::Math::CMatrix4& offMatrix);
					private:
						ev_bool mbAsyncUpdateBuffer;
				};



			}//end namespace
		}
	}
}
#endif
