#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELFACTORY_H

#include "spatial3dengine/spatial3denginecomdef.h"
#include "graphic/common.h"
#include "graphic/mesh.h"
#include "spatial3dengine/manualmodelobject.h"
#include "spatial3dengine/manualinstanceobject.h"

namespace EarthView{
	namespace World{
		namespace Graphic{
			class CSceneManager;
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CModelDataSource;
			}
			namespace ModelManager{
				//class CModelBaseObject;
				//class CManualInstanceObject;
				//class CManualModelObject;

				class EV_Spatial3DEngine_DLL CModelObjectFactory : public EarthView::World::Core::CAllocatedObject
				{
				private:
					static EarthView::World::Spatial3D::ModelManager::CModelObjectFactory* mpSingletonPtr;
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CModelObjectFactory(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CModelObjectFactory();
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CModelObjectFactory();

					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>失败则返回NULL</returns>
					static EarthView::World::Spatial3D::ModelManager::CModelObjectFactory* getSingletonPtr();

					/// <summary>
					/// 释放单例的数据源工厂句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					static void releaseSingleton();

					/// <summary>
					/// 修改默认资源组，让用户有机会去指定自己想要的资源组
					/// 默认情况下资源组是数据源的名称，如果需要修改默认资源组名称，那么工厂在创建的时候会帮助你去创建资源组对象和销毁资源组对象
					/// 如果修改了默认资源组，之后想恢复默认行为，再设置一次资源组名称为空即可, 修改资源组在load以前有效
					/// ps:此接口对文件版无效，不要指定系统默认的资源组
					/// </summary>
					/// <param name="group">资源组名称</param>
					/// <returns></returns>

					static void setGroupName(const EVString& group);
					static EVString getGroupName();

					/// <summary>
					/// 创建 模型库 中的一个模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshName">模型名称</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CManualModelObject* createModelObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& datasourceName, const EVString& meshName);

					/// <summary>
					/// 创建 模型库 中的一个模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshID">模型id</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CManualModelObject* createModelObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& datasourceName, ev_uint32 meshID);

					/// <summary>
					/// 创建 模型库 中的一个模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshName">模型名称</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CManualModelObject* createModelObject(EarthView::World::Graphic::CSceneManager* pSceneManager, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, const EVString& meshName);

					/// <summary>
					/// 创建 模型库 中的一个模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshID">模型id</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CManualModelObject* createModelObject(EarthView::World::Graphic::CSceneManager* pSceneManager, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, ev_uint32 meshID);

					/// <summary>
					/// 创建 一个本地模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="modelfile">模型文件（绝对路径）</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <returns>失败则返回NULL</returns>

					static EarthView::World::Spatial3D::ModelManager::CManualModelObject* createModelObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& modelfile, ev_bool bFileDirAsGroup);
					
					/// <summary>
					/// 创建 模型库 中的一个instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshName">模型名称</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* createInstanceObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& datasourceName, const EVString& meshName);

					/// <summary>
					/// 创建 模型库 中的一个instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshID">模型id</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* createInstanceObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& datasourceName, ev_uint32 meshID);

					/// <summary>
					/// 创建 模型库 中的一个instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshName">模型名称</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* createInstanceObject(EarthView::World::Graphic::CSceneManager* pSceneManager, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, const EVString& meshName);

					/// <summary>
					/// 创建 模型库 中的一个instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshID">模型id</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* createInstanceObject(EarthView::World::Graphic::CSceneManager* pSceneManager, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, ev_uint32 meshID);

					/// <summary>
					/// 创建 一个本地instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="meshfile">模型文件（绝对路径）</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <returns>失败则返回NULL</returns>

					static EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* createInstanceObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& modelfile, ev_bool bFileDirAsGroup);

					/// <summary>
					/// 根据传入的 EarthView::World::Spatial3D::ModelManager::CModelBaseObject 创建一个只显示相应子部件的对象
					/// 传入的模型对象是什么类型，创建出的就是什么类型
					/// </summary>
					/// <param name="pModelObject">模型对象</param>
					/// <param name="subEntityIndexs">subentity索引</param>
					/// <returns>失败则返回NULL</returns>
					static EarthView::World::Spatial3D::ModelManager::CModelBaseObject* createSubEntityObject(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModelObject, const EarthView::World::Core::IntVector& subEntityIndexs);

					/// <summary>
					/// 销毁模型对象
					/// </summary>
					/// <param name="pModelObject">模型对象</param>
					/// <returns></returns>
					static void destroyObject(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModelObject);

					/// <summary>
					/// 获取instance每个批次渲染个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>instance每个批次渲染个数</returns>
					
					static ev_uint16 getMaxInstanceCountPerBatch();

					/// <summary>
					///  设置instance每个批次最大渲染个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>设置成功返回true否则返回false</returns>
					
					static ev_bool setMaxInstanceCountPerBatch(ev_uint16 count);

					/// <summary>
					/// 判断是否支持硬件Instance
					/// </summary>				
					/// <returns></returns>
					static ev_bool checkHardwareInstanceCapability();

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="mesh">mesh资源对象</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					static EarthView::World::Graphic::InstanceTechniuqe checkInstanceCapability(EarthView::World::Graphic::CMeshPtr mesh);

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源指针</param>
					/// <param name="meshID">模型id</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					static EarthView::World::Graphic::InstanceTechniuqe checkInstanceCapability(EarthView::World::Graphic::CSceneManager* pSceneManager, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, ev_uint32 meshID);

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源指针</param>
					/// <param name="mesh">mesh名称</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					static EarthView::World::Graphic::InstanceTechniuqe checkInstanceCapability(EarthView::World::Graphic::CSceneManager* pSceneManager, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, const EVString& meshName);

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshID">模型id</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					static EarthView::World::Graphic::InstanceTechniuqe checkInstanceCapability(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& datasourceName, ev_uint32 meshID);

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshID">模型名称</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					static EarthView::World::Graphic::InstanceTechniuqe checkInstanceCapability(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& datasourceName, const EVString& meshName);

					static ev_bool isInternalVertexProgram(const EVString& strVertexProgramName); 
					static ev_bool isInternalFragmentProgram(const EVString& strFragmentProgramName);
				protected:
					/// <summary>
					/// 创建模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshName">模型名称</param>
					/// <param name="type">模型类型</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CModelBaseObject* createModelDBObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& datasourceName, const EVString& meshName, ModelType type);

					/// <summary>
					/// 创建模型对象
					/// </summary>
					/// <param name="pSceneManager"></param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshID">模型id</param>
					/// <param name="type">模型类型</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CModelBaseObject* createModelDBObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& datasourceName, ev_uint32 meshID, ModelType type);

					/// <summary>
					/// 创建模型对象
					/// </summary>
					/// <param name="pSceneManager"></param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshName">模型名称</param>
					/// <param name="type">模型类型</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CModelBaseObject* createModelDBObject(EarthView::World::Graphic::CSceneManager* pSceneManager, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, const EVString& meshName, ModelType type);

					/// <summary>
					/// 创建模型对象
					/// </summary>
					/// <param name="pSceneManager"></param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshID">模型id</param>
					/// <param name="type">模型类型</param>
					/// <returns>失败则返回NULL</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CModelBaseObject* createModelDBObject(EarthView::World::Graphic::CSceneManager* pSceneManager, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, ev_uint32 meshID, ModelType type);

				protected:
					static ev_uint16 g_MaxInstanceCountPerBatch;
					static EVString g_groupName;
				};


			}//namespace
		}
	}
}
#endif
