/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelobjectfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelObjectFactory*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_getSingletonPtr_CModelObjectFactory( )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectFactory* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_releaseSingleton_void( )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::releaseSingleton();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_setGroupName_void_EVString(_in const char* group )
				{
					EarthView::World::Core::ev_string group1 = group;
					EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::setGroupName(group1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_getGroupName_EVString( )
				{
					EVString objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::getGroupName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualModelObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_EVString_EVString(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* datasourceName, _in const char* meshName )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, datasourceName1, meshName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualModelObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_EVString_ev_uint32(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* datasourceName, _in ev_uint32 meshID )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, datasourceName1, meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualModelObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_CModelDataSource_EVString(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, _in const char* meshName )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, pModelDataSource, meshName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualModelObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_CModelDataSource_ev_uint32(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, pModelDataSource, meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualModelObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_EVString_ev_bool(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* modelfile, _in ev_bool bFileDirAsGroup )
				{
					EarthView::World::Core::ev_string modelfile1 = modelfile;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createModelObject(pSceneManager, modelfile1, bFileDirAsGroup);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_EVString_EVString(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* datasourceName, _in const char* meshName )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, datasourceName1, meshName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_EVString_ev_uint32(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* datasourceName, _in ev_uint32 meshID )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, datasourceName1, meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_CModelDataSource_EVString(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, _in const char* meshName )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, pModelDataSource, meshName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_CModelDataSource_ev_uint32(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, pModelDataSource, meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_EVString_ev_bool(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* modelfile, _in ev_bool bFileDirAsGroup )
				{
					EarthView::World::Core::ev_string modelfile1 = modelfile;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createInstanceObject(pSceneManager, modelfile1, bFileDirAsGroup);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createSubEntityObject_CModelBaseObject_CModelBaseObject_IntVector(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModelObject, _in const void* subEntityIndexs )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::createSubEntityObject(pModelObject, *(EarthView::World::Core::IntVector*)subEntityIndexs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_destroyObject_void_CModelBaseObject(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModelObject )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::destroyObject(pModelObject);
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_getMaxInstanceCountPerBatch_ev_uint16( )
				{
					ev_uint16 objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::getMaxInstanceCountPerBatch();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_setMaxInstanceCountPerBatch_ev_bool_ev_uint16(_in ev_uint16 count )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::setMaxInstanceCountPerBatch(count);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkHardwareInstanceCapability_ev_bool( )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkHardwareInstanceCapability();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CMeshPtr(_in void* mesh )
				{
					EarthView::World::Graphic::InstanceTechniuqe objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(*(EarthView::World::Graphic::CMeshPtr*)mesh);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_CModelDataSource_ev_uint32(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, _in ev_uint32 meshID )
				{
					EarthView::World::Graphic::InstanceTechniuqe objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(pSceneManager, pModelDataSource, meshID);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_CModelDataSource_EVString(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDataSource, _in const char* meshName )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Graphic::InstanceTechniuqe objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(pSceneManager, pModelDataSource, meshName1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_EVString_ev_uint32(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* datasourceName, _in ev_uint32 meshID )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Graphic::InstanceTechniuqe objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(pSceneManager, datasourceName1, meshID);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_EVString_EVString(_in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* datasourceName, _in const char* meshName )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Graphic::InstanceTechniuqe objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::checkInstanceCapability(pSceneManager, datasourceName1, meshName1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_isInternalVertexProgram_ev_bool_EVString(_in const char* strVertexProgramName )
				{
					EarthView::World::Core::ev_string strVertexProgramName1 = strVertexProgramName;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::isInternalVertexProgram(strVertexProgramName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_isInternalFragmentProgram_ev_bool_EVString(_in const char* strFragmentProgramName )
				{
					EarthView::World::Core::ev_string strFragmentProgramName1 = strFragmentProgramName;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectFactory::isInternalFragmentProgram(strFragmentProgramName1);
					return objXXXX;
				}
			}
		}
	}
}
