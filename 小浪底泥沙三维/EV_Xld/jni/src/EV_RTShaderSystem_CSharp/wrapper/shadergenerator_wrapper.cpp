/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shadergenerator.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_initialize_ev_bool( )
				{
					ev_bool objXXXX = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::initialize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_finalize_void( )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::finalize();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSingleton_CShaderGenerator( )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator& objXXXX = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::getSingleton();
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSingletonPtr_CShaderGenerator( )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* objXXXX = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_addSceneManager_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sceneMgr )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->addSceneManager(sceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeSceneManager_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sceneMgr )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->removeSceneManager(sceneMgr);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getActiveSceneManager_CSceneManager(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getActiveSceneManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setTargetLanguage_void_EVString(void *pObjectXXXX, _in const char* shaderLanguage )
				{
					EarthView::World::Core::ev_string shaderLanguage1 = shaderLanguage;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->setTargetLanguage(shaderLanguage1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getTargetLanguage_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getTargetLanguage();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setVertexShaderProfiles_void_EVString(void *pObjectXXXX, _in const char* vertexShaderProfiles )
				{
					EarthView::World::Core::ev_string vertexShaderProfiles1 = vertexShaderProfiles;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->setVertexShaderProfiles(vertexShaderProfiles1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderProfiles_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getVertexShaderProfiles();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderProfilesList_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->getVertexShaderProfilesList();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setFragmentShaderProfiles_void_EVString(void *pObjectXXXX, _in const char* fragmentShaderProfiles )
				{
					EarthView::World::Core::ev_string fragmentShaderProfiles1 = fragmentShaderProfiles;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->setFragmentShaderProfiles(fragmentShaderProfiles1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getFragmentShaderProfiles_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getFragmentShaderProfiles();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getFragmentShaderProfilesList_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->getFragmentShaderProfilesList();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setShaderCachePath_void_EVString(void *pObjectXXXX, _in const char* cachePath )
				{
					EarthView::World::Core::ev_string cachePath1 = cachePath;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->setShaderCachePath(cachePath1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getShaderCachePath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getShaderCachePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_flushShaderCache_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->flushShaderCache();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRenderState_CRenderState_EVString(void *pObjectXXXX, _in const char* schemeName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->getRenderState(schemeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_first( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->first;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_first( void *pObjectXXXX, EarthView::World::Graphic::RTShaderSystem::CRenderState*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult*)pObjectXXXX)->first = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_second( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->second;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_second( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult*)pObjectXXXX)->second = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createOrRetrieveRenderState_RenderStateCreateOrRetrieveResult_EVString(void *pObjectXXXX, _in const char* schemeName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieveRenderState(schemeName1);
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_hasRenderState_ev_bool_EVString(void *pObjectXXXX, _in const char* schemeName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasRenderState(schemeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRenderState_CRenderState_EVString_EVString_ev_uint16(void *pObjectXXXX, _in const char* schemeName, _in const char* materialName, _in ev_uint16 passIndex )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->getRenderState(schemeName1, materialName1, passIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRenderState_CRenderState_EVString_EVString_EVString_ev_uint16(void *pObjectXXXX, _in const char* schemeName, _in const char* materialName, _in const char* groupName, _in ev_uint16 passIndex )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->getRenderState(schemeName1, materialName1, groupName1, passIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_addSubRenderStateFactory_void_CSubRenderStateFactory(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* factory )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->addSubRenderStateFactory(factory);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getNumSubRenderStateFactories_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getNumSubRenderStateFactories();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSubRenderStateFactory_CSubRenderStateFactory_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* objXXXX = ptrNativeObject->getSubRenderStateFactory(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSubRenderStateFactory_CSubRenderStateFactory_EVString(void *pObjectXXXX, _in const char* type )
				{
					EarthView::World::Core::ev_string type1 = type;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* objXXXX = ptrNativeObject->getSubRenderStateFactory(type1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeSubRenderStateFactory_void_CSubRenderStateFactory(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* factory )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->removeSubRenderStateFactory(factory);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createSubRenderState_CSubRenderState_EVString(void *pObjectXXXX, _in const char* type )
				{
					EarthView::World::Core::ev_string type1 = type;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createSubRenderState(type1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_destroySubRenderState_void_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->destroySubRenderState(subRenderState);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_hasShaderBasedTechnique_ev_bool_EVString_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* srcTechniqueSchemeName, _in const char* dstTechniqueSchemeName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string srcTechniqueSchemeName1 = srcTechniqueSchemeName;
					EarthView::World::Core::ev_string dstTechniqueSchemeName1 = dstTechniqueSchemeName;
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasShaderBasedTechnique(materialName1, srcTechniqueSchemeName1, dstTechniqueSchemeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_hasShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName, _in const char* srcTechniqueSchemeName, _in const char* dstTechniqueSchemeName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Core::ev_string srcTechniqueSchemeName1 = srcTechniqueSchemeName;
					EarthView::World::Core::ev_string dstTechniqueSchemeName1 = dstTechniqueSchemeName;
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasShaderBasedTechnique(materialName1, groupName1, srcTechniqueSchemeName1, dstTechniqueSchemeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* materialName, _in const char* srcTechniqueSchemeName, _in const char* dstTechniqueSchemeName, _in ev_bool overProgrammable )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string srcTechniqueSchemeName1 = srcTechniqueSchemeName;
					EarthView::World::Core::ev_string dstTechniqueSchemeName1 = dstTechniqueSchemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createShaderBasedTechnique(materialName1, srcTechniqueSchemeName1, dstTechniqueSchemeName1, overProgrammable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* srcTechniqueSchemeName, _in const char* dstTechniqueSchemeName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string srcTechniqueSchemeName1 = srcTechniqueSchemeName;
					EarthView::World::Core::ev_string dstTechniqueSchemeName1 = dstTechniqueSchemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createShaderBasedTechnique(materialName1, srcTechniqueSchemeName1, dstTechniqueSchemeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* materialName, _in const char* groupName, _in const char* srcTechniqueSchemeName, _in const char* dstTechniqueSchemeName, _in ev_bool overProgrammable )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Core::ev_string srcTechniqueSchemeName1 = srcTechniqueSchemeName;
					EarthView::World::Core::ev_string dstTechniqueSchemeName1 = dstTechniqueSchemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createShaderBasedTechnique(materialName1, groupName1, srcTechniqueSchemeName1, dstTechniqueSchemeName1, overProgrammable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName, _in const char* srcTechniqueSchemeName, _in const char* dstTechniqueSchemeName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Core::ev_string srcTechniqueSchemeName1 = srcTechniqueSchemeName;
					EarthView::World::Core::ev_string dstTechniqueSchemeName1 = dstTechniqueSchemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createShaderBasedTechnique(materialName1, groupName1, srcTechniqueSchemeName1, dstTechniqueSchemeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeShaderBasedTechnique_ev_bool_EVString_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* srcTechniqueSchemeName, _in const char* dstTechniqueSchemeName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string srcTechniqueSchemeName1 = srcTechniqueSchemeName;
					EarthView::World::Core::ev_string dstTechniqueSchemeName1 = dstTechniqueSchemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeShaderBasedTechnique(materialName1, srcTechniqueSchemeName1, dstTechniqueSchemeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName, _in const char* srcTechniqueSchemeName, _in const char* dstTechniqueSchemeName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Core::ev_string srcTechniqueSchemeName1 = srcTechniqueSchemeName;
					EarthView::World::Core::ev_string dstTechniqueSchemeName1 = dstTechniqueSchemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeShaderBasedTechnique(materialName1, groupName1, srcTechniqueSchemeName1, dstTechniqueSchemeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeAllShaderBasedTechniques_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeAllShaderBasedTechniques(materialName1, groupName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeAllShaderBasedTechniques_ev_bool_EVString(void *pObjectXXXX, _in const char* materialName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeAllShaderBasedTechniques(materialName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_cloneShaderBasedTechniques_ev_bool_EVString_EVString_EVString_EVString(void *pObjectXXXX, _in const char* srcMaterialName, _in const char* srcGroupName, _in const char* dstMaterialName, _in const char* dstGroupName )
				{
					EarthView::World::Core::ev_string srcMaterialName1 = srcMaterialName;
					EarthView::World::Core::ev_string srcGroupName1 = srcGroupName;
					EarthView::World::Core::ev_string dstMaterialName1 = dstMaterialName;
					EarthView::World::Core::ev_string dstGroupName1 = dstGroupName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->cloneShaderBasedTechniques(srcMaterialName1, srcGroupName1, dstMaterialName1, dstGroupName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeAllShaderBasedTechniques_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->removeAllShaderBasedTechniques();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createScheme_void_EVString(void *pObjectXXXX, _in const char* schemeName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->createScheme(schemeName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_invalidateScheme_void_EVString(void *pObjectXXXX, _in const char* schemeName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->invalidateScheme(schemeName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_validateScheme_ev_bool_EVString(void *pObjectXXXX, _in const char* schemeName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->validateScheme(schemeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_invalidateMaterial_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* schemeName, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->invalidateMaterial(schemeName1, materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_invalidateMaterial_void_EVString_EVString(void *pObjectXXXX, _in const char* schemeName, _in const char* materialName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->invalidateMaterial(schemeName1, materialName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_validateMaterial_ev_bool_EVString_EVString_EVString(void *pObjectXXXX, _in const char* schemeName, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->validateMaterial(schemeName1, materialName1, groupName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_validateMaterial_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* schemeName, _in const char* materialName )
				{
					EarthView::World::Core::ev_string schemeName1 = schemeName;
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->validateMaterial(schemeName1, materialName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getMaterialSerializerListener_CSGMaterialSerializerListener(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* objXXXX = ptrNativeObject->getMaterialSerializerListener();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderCount_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getVertexShaderCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getFragmentShaderCount_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getFragmentShaderCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setVertexShaderOutputsCompactPolicy_void_VSOutputCompactPolicy(void *pObjectXXXX, _in int policy )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->setVertexShaderOutputsCompactPolicy((EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy)policy);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderOutputsCompactPolicy_VSOutputCompactPolicy(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy objXXXX = ptrNativeObject->getVertexShaderOutputsCompactPolicy();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setCreateShaderOverProgrammablePass_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ptrNativeObject->setCreateShaderOverProgrammablePass(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getCreateShaderOverProgrammablePass_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCreateShaderOverProgrammablePass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRTShaderSchemeCount_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getRTShaderSchemeCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRTShaderScheme_EVString_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getRTShaderScheme(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_DEFAULT_SCHEME_NAME()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::DEFAULT_SCHEME_NAME;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_DEFAULT_SCHEME_NAME( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::DEFAULT_SCHEME_NAME = value1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_push_back_void_SGTechnique(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* t )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_front_SGTechnique(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_back_SGTechnique(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_insert_void_ev_uint32_SGTechnique(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*& t )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_OperatorIndex_SGTechnique_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_at_SGTechnique_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_buildTargetRenderState_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjectXXXX;
					ptrNativeObject->buildTargetRenderState();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_acquirePrograms_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjectXXXX;
					ptrNativeObject->acquirePrograms();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_releasePrograms_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjectXXXX;
					ptrNativeObject->releasePrograms();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_notifyRenderSingleObject_void_CRenderable_CAutoParamDataSource_LightList_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjectXXXX;
					ptrNativeObject->notifyRenderSingleObject(rend, source, pLightList, suppressRenderStateChanges);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getSrcPass_CPass(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjectXXXX;
					EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->getSrcPass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getDstPass_CPass(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjectXXXX;
					EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->getDstPass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getCustomFFPSubState_CSubRenderState_ev_int32(void *pObjectXXXX, _in ev_int32 subStateOrder )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->getCustomFFPSubState(subStateOrder);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getCustomRenderState_CRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->getCustomRenderState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_setCustomRenderState_void_CRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CRenderState* customRenderState )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjectXXXX;
					ptrNativeObject->setCustomRenderState(customRenderState);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_UserKey()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass::UserKey;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_UserKey( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass::UserKey = value1;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getParent_SGMaterial(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial* objXXXX = ptrNativeObject->getParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getSourceTechnique_CTechnique(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getSourceTechnique();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getDestinationTechnique_CTechnique(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getDestinationTechnique();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getDestinationTechniqueSchemeName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getDestinationTechniqueSchemeName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_buildTargetRenderState_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					ptrNativeObject->buildTargetRenderState();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_acquirePrograms_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					ptrNativeObject->acquirePrograms();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_releasePrograms_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					ptrNativeObject->releasePrograms();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_setBuildDestinationTechnique_void_ev_bool(void *pObjectXXXX, _in ev_bool buildTechnique )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					ptrNativeObject->setBuildDestinationTechnique(buildTechnique);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getBuildDestinationTechnique_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getBuildDestinationTechnique();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getRenderState_CRenderState_ev_uint16(void *pObjectXXXX, _in ev_uint16 passIndex )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->getRenderState(passIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_hasRenderState_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_uint16 passIndex )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasRenderState(passIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_UserKey()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique::UserKey;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_UserKey( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique::UserKey = value1;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGMaterial_getMaterialName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getMaterialName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGMaterial_getGroupName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getGroupName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGMaterial_getTechniqueList_SGTechniqueList(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList& objXXXX = ptrNativeObject->getTechniqueList();
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_invalidate_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					ptrNativeObject->invalidate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_validate_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					ptrNativeObject->validate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_invalidate_void_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					ptrNativeObject->invalidate(materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_invalidate_void_EVString(void *pObjectXXXX, _in const char* materialName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					ptrNativeObject->invalidate(materialName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_validate_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->validate(materialName1, groupName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_validate_ev_bool_EVString(void *pObjectXXXX, _in const char* materialName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->validate(materialName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_addTechniqueEntry_void_SGTechnique(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* techEntry )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					ptrNativeObject->addTechniqueEntry(techEntry);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_removeTechniqueEntry_void_SGTechnique(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique* techEntry )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					ptrNativeObject->removeTechniqueEntry(techEntry);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_getRenderState_CRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->getRenderState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_getRenderState_CRenderState_EVString_EVString_ev_uint16(void *pObjectXXXX, _in const char* materialName, _in const char* groupName, _in ev_uint16 passIndex )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->getRenderState(materialName1, groupName1, passIndex);
					return objXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges);
				class SGRenderObjectListenerProxy : public EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback;
				public:
					SGRenderObjectListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : SGRenderObjectListener(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = pCallback;
					}
					virtual void notifyRenderSingleObject(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback(rend, pass, source, pLightList, suppressRenderStateChanges);
						}
						else
							return this->SGRenderObjectListener::notifyRenderSingleObject(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
					virtual void notifyRenderSingleObjectStarted(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback(rend, pass, source, pLightList, suppressRenderStateChanges);
						}
						else
							return this->SGRenderObjectListener::notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
					virtual void notifyRenderSingleObjectEnd(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback(rend, pass, source, pLightList, suppressRenderStateChanges);
						}
						else
							return this->SGRenderObjectListener::notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
				};
				REGISTER_FACTORY_CLASS(SGRenderObjectListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener*) pObjectXXXX;
					if (dynamic_cast<SGRenderObjectListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener::notifyRenderSingleObject(rend, pass, source, pLightList, suppressRenderStateChanges);
					else
						ptrNativeObject->notifyRenderSingleObject(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback )
				{
					SGRenderObjectListenerProxy* ptr = dynamic_cast<SGRenderObjectListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener::notifyRenderSingleObject(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback )
				{
					SGRenderObjectListenerProxy* ptr = dynamic_cast<SGRenderObjectListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback )
				{
					SGRenderObjectListenerProxy* ptr = dynamic_cast<SGRenderObjectListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback)(_in ev_uint64  numberOfShadowTextures);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_uint64  iteration);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback)(_inout void* lightList);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* source);
				class SGSceneManagerListenerProxy : public EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback;
				public:
					SGSceneManagerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : SGSceneManagerListener(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback = pCallback;
					}
					virtual void preFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->SGSceneManagerListener::preFindVisibleObjects(source, irs, v);
					}
					virtual void postFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->SGSceneManagerListener::postFindVisibleObjects(source, irs, v);
					}
					virtual void shadowTexturesUpdated(_in ev_size_t numberOfShadowTextures)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback(numberOfShadowTextures);
						}
						else
							return this->SGSceneManagerListener::shadowTexturesUpdated(numberOfShadowTextures);
					}
					virtual void shadowTextureCasterPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_size_t iteration)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback(light, camera, iteration);
						}
						else
							return this->SGSceneManagerListener::shadowTextureCasterPreViewProj(light, camera, iteration);
					}
					virtual void shadowTextureReceiverPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback(light, frustum);
						}
						else
							return this->SGSceneManagerListener::shadowTextureReceiverPreViewProj(light, frustum);
					}
					virtual void preUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->SGSceneManagerListener::preUpdateSceneGraph(source, camera);
					}
					virtual void postUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->SGSceneManagerListener::postUpdateSceneGraph(source, camera);
					}
					virtual ev_bool sortLightsAffectingFrustum(_inout EarthView::World::Graphic::LightList& lightList)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback(&lightList);
							return returnValue;
						}
						else
							return this->SGSceneManagerListener::sortLightsAffectingFrustum(lightList);
					}
					virtual void sceneManagerDestroyed(_in EarthView::World::Graphic::CSceneManager* source)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback(source);
						}
						else
							return this->SGSceneManagerListener::sceneManagerDestroyed(source);
					}
				};
				REGISTER_FACTORY_CLASS(SGSceneManagerListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					if (dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::preFindVisibleObjects(source, (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage)irs, v);
					else
						ptrNativeObject->preFindVisibleObjects(source, (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage)irs, v);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					SGSceneManagerListenerProxy* ptr = dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::preFindVisibleObjects(source, (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage)irs, v);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					if (dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::postFindVisibleObjects(source, (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage)irs, v);
					else
						ptrNativeObject->postFindVisibleObjects(source, (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage)irs, v);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					SGSceneManagerListenerProxy* ptr = dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::postFindVisibleObjects(source, (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage)irs, v);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  numberOfShadowTextures )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					if (dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTexturesUpdated(numberOfShadowTextures);
					else
						ptrNativeObject->shadowTexturesUpdated(numberOfShadowTextures);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback )
				{
					SGSceneManagerListenerProxy* ptr = dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  numberOfShadowTextures )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTexturesUpdated(numberOfShadowTextures);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(void *pObjectXXXX, _in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_uint64  iteration )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					if (dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTextureCasterPreViewProj(light, camera, iteration);
					else
						ptrNativeObject->shadowTextureCasterPreViewProj(light, camera, iteration);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback )
				{
					SGSceneManagerListenerProxy* ptr = dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_uint64  iteration )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTextureCasterPreViewProj(light, camera, iteration);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(void *pObjectXXXX, _in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					if (dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTextureReceiverPreViewProj(light, frustum);
					else
						ptrNativeObject->shadowTextureReceiverPreViewProj(light, frustum);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback )
				{
					SGSceneManagerListenerProxy* ptr = dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTextureReceiverPreViewProj(light, frustum);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					SGSceneManagerListenerProxy* ptr = dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					SGSceneManagerListenerProxy* ptr = dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback )
				{
					SGSceneManagerListenerProxy* ptr = dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback )
				{
					SGSceneManagerListenerProxy* ptr = dynamic_cast<SGSceneManagerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager(pCallback);
					}
				}
				typedef ev_uint64   ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_Callback)();
				typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback)(_in const void* nodes);
				class SGScriptTranslatorManagerProxy : public EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_Callback;
					EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback* m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback;
				public:
					SGScriptTranslatorManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : SGScriptTranslatorManager(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback = pCallback;
					}
					virtual ev_size_t getNumTranslators() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							ev_size_t returnValue = m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_Callback();
							return returnValue;
						}
						else
							return this->SGScriptTranslatorManager::getNumTranslators();
					}
					virtual EarthView::World::Graphic::CScriptTranslator* getTranslator(_in const EarthView::World::Graphic::AbstractNodePtr& node)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback(&node);
							return returnValue;
						}
						else
							return this->SGScriptTranslatorManager::getTranslator(node);
					}
				};
				REGISTER_FACTORY_CLASS(SGScriptTranslatorManagerProxy);
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjectXXXX;
					if (dynamic_cast<SGScriptTranslatorManagerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*)ptrNativeObject) != NULL)
					{
						ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager::getNumTranslators();
						return objXXXX;
					}
					else
					{
						ev_size_t objXXXX = ptrNativeObject->getNumTranslators();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_Callback* pCallback )
				{
					SGScriptTranslatorManagerProxy* ptr = dynamic_cast<SGScriptTranslatorManagerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager::getNumTranslators();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(void *pObjectXXXX, _in const void* node )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjectXXXX;
					if (dynamic_cast<SGScriptTranslatorManagerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager::getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)node);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)node);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback* pCallback )
				{
					SGScriptTranslatorManagerProxy* ptr = dynamic_cast<SGScriptTranslatorManagerProxy*>((EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in const void* node )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjectXXXX;
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager::getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)node);
					return objXXXX;
				}
			}
		}
	}
}
