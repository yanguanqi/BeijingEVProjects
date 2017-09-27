#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELEFFECTMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELEFFECTMANAGER_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatial3ddataset/effectdatasource.h"
#include "spatial3ddataset/propertymanager.h"
#include "graphic/entity.h"


namespace EarthView
{
	namespace World 
	{
		namespace Core
		{
			class CArchive;
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Graphic{
			class  CSceneManager;
			class  CSceneNode ;
			class   CStreamArchive;
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CModelDataSource;
				class CUserTypeManager;
				class CUserTypeTree;
				class CObjectIDList;
			}
			namespace ModelManager{
			class CModelBaseObject;
			class  EV_Spatial3DEngine_DLL CModelEffectManager : public EarthView::World::Core::CAllocatedObject
			{
				
ev_private:
				CModelEffectManager(_in EarthView::World::Core::CNameValuePairList* pList);
			
			public:

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pSceneManager">场景管理器</param>
				/// <param name="pModelDataSource">模型数据源，不能为NULL</param>
				/// <param name="pEffectDataSource">特效数据源</param>
				/// <returns></returns>
				CModelEffectManager(EarthView::World::Graphic::CSceneManager* ref_pSceneManager,EarthView::World::Spatial3D::Dataset::CModelDataSource* ref_pModelDataSource,EarthView::World::Spatial3D::Dataset::CEffectDataSource* ref_pEffectDataSource);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CModelEffectManager();


				/// <summary>
				/// 获取模型库中的模型个数
				/// </summary>
				/// <returns>模型的个数</returns>
				ev_uint32 getIDNum();

				/// <summary>
				/// 获取模型库中的所有模型ID存到容器中
				/// </summary>
				/// <returns>记录ID的列表</returns>
				EarthView::World::Spatial3D::Dataset::CObjectIDList getAllIDS();

				/// <summary>
				/// 获取模型库中的所有模型类别
				/// </summary>
				/// <returns>用户类别列表</returns>
				EarthView::World::Core::StringVector getAllUserType();

				/// <summary>
				/// 获取某模型类别下的ID集合
				/// </summary>
				/// <param name="userType">模型类别</param>
				/// <returns>存储ID的容器</returns>
				EarthView::World::Spatial3D::Dataset::CObjectIDList  getIDSByUserType(const EVString& userType);

				/// <summary>
				/// 获取某个mesh名称下对应的ID集合，有可能只有一个
				/// </summary>
				/// <param name="meshName">模型类别</param>
				/// <returns>存储ID的容器</returns>
				EarthView::World::Spatial3D::Dataset::CObjectIDList getIDSByMeshName(const EVString& meshName);

				/// <summary>
				/// 通过模型ID获取模型名称
				/// </summary>
				/// <param name="id">模型ID</param>
				/// <returns>返回模型名称</returns>
				EVString getMeshNameByID(ev_uint32 id);

				/// <summary>
				/// 创建模型对象
				/// </summary>
				/// <param name="id">模型ID</param>
				/// <param name="bRemoveParentNode">true,返回的对象里边的scenenode没有parentNode| false, 返回的对象里边的scenenode有parentNode</param>
				/// <returns>EarthView::World::Spatial3D::ModelManager::CModelBaseObject*，返回模型对象</returns>
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* createModel(ev_uint32 id, ev_bool bRemoveParentNode);

				/// <summary>
				/// 销毁模型对象
				/// </summary>
				/// <param name="pModel">模型对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool destoryModel(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);


				/// <summary>
				/// 保存材质编辑结果 
				/// </summary>
				/// <param name="pModel">模型对象</param>
				/// <param name="matPtr">模型材质</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool saveMaterialEditting(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel, const EarthView::World::Graphic::CMaterialPtr& matPtr);

				/// <summary>
				/// 获取根节点树
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeTree*，返回根节点树</returns>
				EarthView::World::Spatial3D::Dataset::CUserTypeTree* getRootTree();

			private:
				ev_bool addResourceToGroupManager();
				ev_bool loadResource(const EVString& meshName);


				EarthView::World::Spatial3D::Dataset::CModelDataSource* mpModelDataSource;
				EarthView::World::Spatial3D::Dataset::CEffectDataSource*  mpEffectDataSource;
				EarthView::World::Graphic::CSceneManager* mpSceneManager;

				EVString meshFilename;
				vector<EVString> materials;
				vector<EVString> programs;
				vector<EVString> gpus;
				vector<EVString> loadTextures;
				EVString archname;
				EarthView::World::Graphic::CSceneNode* mpGeoNode;
				EarthView::World::Graphic::CEntity* mpCurrentEntity;
	            EarthView::World::Core::CArchive* mpArchive;
				EarthView::World::Spatial3D::Dataset::CUserTypeManager* mpUserTypeManager ;

				};

			}//end namespace
		}
	}
}
#endif
