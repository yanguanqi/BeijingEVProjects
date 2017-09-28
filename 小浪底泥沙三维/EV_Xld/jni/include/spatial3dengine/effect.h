#ifndef _EFFECT_H
#define _EFFECT_H
#pragma once

#include "graphic/movableobject.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "geometry3d/featureuserdata.h"
#include "spatial3ddataset/effecttabledef.h"
#include "core/string_array.h"
#include "spatial3dengine/modelbaseobject.h"


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class CVisibleObject;
			
		};
		namespace Graphic
		{
			class CCamera;
		};
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CEffectInfo;	
				class CEffectDataSource;
				class CEffectDataSet;
		
			}
			namespace EffectManager
			{
				class CEffect;		
				class CEffectManager;


				/// <summary>
				/// CEffect特效类中用户自定义数据对象
				/// </summary>
				class EV_Spatial3DEngine_DLL CEffectUserData : public EarthView::World::Spatial3D::CFeatureUserData
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectUserData();


					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectUserData();

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectUserData(EarthView::World::Core::CNameValuePairList* pList);


				public:
					/// <summary>
					/// 克隆数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Graphic::CMovableObject::CUserData* clone();

				public:		
					/// <summary>
					/// 图层上可视对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Geometry3D::CVisibleObject* VisibleObject;


				};

				/// <summary>
				/// 特效类，封装了CParticleSystem、CRibbonTrail
				/// </summary>
				class EV_Spatial3DEngine_DLL CEffect:public EarthView::World::Graphic::CMovableObject
				{
					friend class EarthView::World::Spatial3D::ModelManager::CModelBaseObject;
					friend class EarthView::World::Spatial3D::ModelManager::CManualInstanceObject;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffect(EarthView::World::Core::CNameValuePairList *pList);
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="effectName">特效在模板库中的名称</param>
					/// <param name="dataSource">数据源</param>
					/// <param name="sceneMgr">场景管理器指针</param>
					/// <returns></returns>
					CEffect(const EVString& effectName,EarthView::World::Spatial3D::Dataset::CEffectDataSource* ref_dataSource,EarthView::World::Graphic::CSceneManager* ref_sceneMgr);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="effectId">特效在模板库中的ID</param>
					/// <param name="dataSource">数据源</param>
					/// <param name="sceneMgr">场景管理器指针</param>
					/// <returns></returns>
					CEffect(ev_uint32 effectId,EarthView::World::Spatial3D::Dataset::CEffectDataSource* ref_dataSource,EarthView::World::Graphic::CSceneManager* ref_sceneMgr);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="evId">特效在数据集中的EVID</param>
					/// <param name="dataSet">特效数据集</param>
					/// <param name="sceneMgr">场景管理器指针</param>
					/// <returns></returns>
					CEffect(ev_uint32 evId,EarthView::World::Spatial3D::Dataset::CEffectDataSet* ref_dataSet,EarthView::World::Graphic::CSceneManager* ref_sceneMgr);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffect();

					/// <summary>
					/// 设置该对象可渲染的距离上限
					/// </summary>
					/// <param name="dist">默认为0</param>
					/// <returns></returns>
					virtual void setRenderingMaxDistance(Real dist);

					/// <summary>
					/// 设置该对象可渲染的距离下限
					/// </summary>
					/// <param name="dist">默认为0</param>
					/// <returns></returns>
					virtual void setRenderingMinDistance(Real dist);

					/// <summary>
					/// 设置是否可见               
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <returns></returns>
					virtual void setVisible(ev_bool visible);

					/// <summary>
					/// 获得特效绑定到模型上的别名
					/// </summary>					
					/// <returns>特效绑定的别名</returns>
					EVString getAliasName();

					/// <summary>
					/// 获得模型绑定特效的关系表的主键
					/// </summary>					
					/// <returns>特效绑定模型的主键ID</returns>
					ev_uint32 getBindedID();

					/// <summary>
					/// 设置模型绑定特效的关系表的主键
					/// </summary>
					/// <param name="id">特效绑定的关系表主键ID</param>
					/// <returns></returns>
					ev_void setBindedID(ev_uint32 id);


					/// <summary>
					/// 获得特效里movableobject的数量（目前包含粒子CParticleSystem和飘带CRibbonTrail）
					/// </summary>					
					/// <returns>特效里movableobject的数量</returns>
					ev_uint32 getMovableNum();

					/// <summary>
					/// 通过索引号得到具体的movableobject（根据getType返回的类型，可转成对应的粒子CParticleSystem（类别为ET_SINGLEPARTICLE、ET_BLENDEFFECT、ET_BLENDPARTICLE类型转成CParticleSystem）和飘带CRibbonTrail（类型为ET_TRAIL转成CRibbonTrail）进行操作）
					/// </summary>
					/// <param name="index">特效里movableobject的索引号</param>
					/// <returns>返回对应的movableobject</returns>
					EarthView::World::Graphic::CMovableObject* getMovableByIndex(ev_uint32 index);

					/// <summary>
					/// 获得特效下所包含的粒子或飘带的数量
					/// </summary>					
					/// <returns>所包含的粒子或飘带的数量</returns>
					ev_uint32 getEffectInfoNum();

					/// <summary>
					/// 通过索引查找特效信息（通过此可得到特效里包含的粒子或飘带的名字等基础信息）
					/// </summary>
					/// <param name="index">索引号</param>
					/// <returns>特效信息</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo getEffectInfoByIndex(ev_uint32 index);

					/// <summary>
					/// 获得特效ID
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_uint32,特效ID</returns>
					ev_uint32 getEffectID();

					/// <summary>
					/// 获取当前对象的平行轴边框盒
					/// 边框盒在当地坐标系中
					/// </summary>
					/// <param name=""></param>
					/// <returns> 包围盒</returns>
					virtual const  EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const ;

					/// <summary>
					/// 获得特效的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效的类型</returns>
					EarthView::World::Spatial3D::Dataset::EffectType getType();


					/// <summary>
					/// 设置选择的颜色
					/// </summary>
					/// <param name="colour">颜色</param>
					/// <returns></returns>
					virtual ev_void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour);


					/// <summary>
					/// 绘制选择对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void renderSelection();

					/// <summary>
					/// 清除选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();
					/// <summary>
					/// 设置选中的对象				
					/// <param name="objIndics">选中的对象集合</param>				
					/// <returns></returns>
					virtual ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics);				

					/// <summary>
					/// 获得选中的对象				
					/// <param name=""></param>				
					/// <returns>选中的对象集合</returns>
					virtual EarthView::World::Core::IntVector getSelected()const;

					/// <summary>
					/// 开始编辑
					/// </summary>
					/// <param name="objectIndex">索引号</param>
					/// <returns></returns>
					virtual ev_bool startEditing(ev_uint32 objectIndex);

					/// <summary>
					/// 获得专门的类型标识
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_uint32,类型标识</returns>
					virtual ev_uint32 getTypeFlags() const;

					/// <summary>
					/// 获得所选择对象的世界变换矩阵
					/// </summary>
					/// <param name="objectIndex">索引号</param>
					/// <param name="matrix">矩阵</param>
					/// <returns></returns>
					virtual ev_bool getSelectedObjectWorldMatrix(ev_uint32 objectIndex,_out EarthView::World::Spatial::Math::CMatrix4& matrix);

					/// <summary>
					/// 设置所选择对象的世界变换矩阵
					/// </summary>
					/// <param name="objectIndex">索引号</param>
					/// <param name="matrix">矩阵</param>
					/// <returns></returns>
					virtual ev_bool setSelectedObjectWorldMatrix(ev_uint32 objectIndex,const EarthView::World::Spatial::Math::CMatrix4& matrix);





					/// <summary>
					/// 停止编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void endEditing();

					/// <summary>
					/// 获得编辑包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox();

					/// <summary>
					/// 射线选择
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
					/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
					/// <param name="objIndex">选中的对象序号</param>
					/// <param name="point">交点</param>
					/// <returns>true:与射线相交;false:不相交</returns>
					virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);

					/// <summary>
					/// 盒选择
					/// </summary>
					/// <param name="aabb">盒</param>
					/// <returns>true:物体包围盒与指定盒相交;false:不相交</returns>
					virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb,ev_bool renderSelected, EarthView::World::Core::IntVector& indexVec);

					/// <summary>
					/// 球选择
					/// </summary>
					/// <param name="sphere">球</param>
					/// <returns>true:物体包围盒与指定球相交;false:不相交</returns>
					virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CSphere& sphere,ev_bool renderSelected, EarthView::World::Core::IntVector& indexVec);


					/// <summary>
					/// 获取移动对象类型的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVString,名称</returns>
					virtual EVString getMovableType() const;

					/// <summary>
					/// 获取当前对象的球体限定半径
					/// </summary>
					/// <param name=""></param>
					/// <returns>Real,边框盒</returns>
					virtual Real getBoundingRadius() const;

					/// <summary>
					/// 更新渲染队列
					/// 移动对象必须添加到CRenderable
					/// 内部方法
					/// </summary>
					/// <param name="queue">渲染队列</param>
					/// <returns></returns>
					virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

					/// <summary>
					/// 访问可渲染对象
					/// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
					/// </summary>
					/// <param name="visitor"></param>
					/// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
					/// <returns></returns>
					virtual void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor,ev_bool debugRenderables );

					/// <summary>
					/// 访问可渲染对象
					/// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
					/// </summary>
					/// <param name="visitor"></param>
					/// <returns></returns>
					virtual void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor);

					/// <summary>
					/// 从EarthView::World::Graphic::CMovableObject类重载
					/// 通知摄像机对象被下一个渲染操作使用
					/// </summary>
					/// <param name="cam">摄像机指针</param>
					/// <returns></returns>
					virtual void _notifyCurrentCamera( EarthView::World::Graphic::CCamera *cam);

					/// <summary>
					/// 从EarthView::World::Graphic::CMovableObject类重载
					/// 唤醒一个对象挂接到一个节点的线程
					/// </summary>
					/// <param name="parent">父节点名称</param>
					/// <param name="isTagPoint">是否挂接在节点下</param>
					/// <returns></returns>
					virtual void _notifyAttached( EarthView::World::Graphic::CNode *parent, ev_bool isTagPoint );

					/// <summary>
					/// 从EarthView::World::Graphic::CMovableObject类重载
					/// 唤醒一个对象挂接到一个节点的线程
					/// </summary>
					/// <param name="parent">父节点名称</param>
					/// <returns></returns>
					virtual void _notifyAttached( EarthView::World::Graphic::CNode *parent);
				private:
					vector<EarthView::World::Spatial::Math::CAxisAlignedBox> mMovableBoxVec;
					vector<EarthView::World::Graphic::CMovableObject *> mMovableVec;
					vector<EarthView::World::Spatial3D::Dataset::CEffectInfo> mEffectinfoVec;

					EarthView::World::Graphic::CSceneManager* mpSceneMgr;
					EVString mResourceGroupName;
					static ev_uint32 mNameGen;
					ev_uint32 mEffectID;
					mutable ev_bool mIsInit;
					ev_uint32 mBindedID;
					ev_bool mIsDataSource;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* mpEffectDataSource;
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* mpEffectDataSet;
					mutable EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
					EarthView::World::Graphic::CRenderOperation mRenderOp;
					ev_bool mRenderSelection;
					EarthView::World::Graphic::CWireBoundingBox* mpSelectedBox;
					EarthView::World::Spatial3D::EffectManager::CEffectUserData* mpEffectUserData;
					ev_bool mbSelected;
					EarthView::World::Graphic::CEditBoundingBox* mpEditBox;
					EarthView::World::Core::StringVector mMatNames;
					EarthView::World::Core::StringVector mTextures;
					EarthView::World::Spatial3D::Dataset::EffectType mEffectType;
					EVString mAliasName;
					mutable EarthView::World::Core::CRecursiveMutex mLocker;

					/// <summary>
					/// 加载特效					
					/// </summary>
					/// <param name="info">特效数据库对象</param>
					/// <returns></returns>
					void load(EarthView::World::Spatial3D::Dataset::CEffectInfo& info);

					/// <summary>
					/// 加载特效资源					
					/// </summary>
					/// <param name="info">特效数据库对象</param>
					/// <returns></returns>
					void loadEffectResource(_in EarthView::World::Spatial3D::Dataset::CEffectInfo& info);

					/// <summary>
					/// 加载特效资源					
					/// </summary>
					/// <param name="resIds">通过资源id加载特效资源</param>
					/// <returns></returns>
					void loadResourceByResIds(_in EarthView::World::Core::CStringArray& resIds);	

					/// <summary>
					/// 通过特效对象生成CParticleSystem
					/// </summary>
					/// <param name="info">特效数据库对象</param>
					/// <returns></returns>
					void genParticle(_in EarthView::World::Spatial3D::Dataset::CEffectInfo& info);

					/// <summary>
					/// 通过特效对象生成CRibbonTrail(飘带)
					/// </summary>
					/// <param name="info">特效数据库对象</param>
					/// <returns></returns>
					void genTrail(_in EarthView::World::Spatial3D::Dataset::CEffectInfo& info);

					friend class EarthView::World::Spatial3D::Dataset::CEffectDataSet;
					friend class CEffectManager;
				};
			}
		}
	}
}
#endif


