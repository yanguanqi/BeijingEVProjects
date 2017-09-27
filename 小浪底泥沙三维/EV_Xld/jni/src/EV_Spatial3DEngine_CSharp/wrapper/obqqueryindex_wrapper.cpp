/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obqqueryindex.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelNode_getMinRange_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelNode* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinRange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelNode_getRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelNode* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelNode_getCenterX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelNode* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCenterX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelNode_getCenterY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelNode* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCenterY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelNode_getCenterZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelNode* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCenterZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelNode_getModelPath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelNode* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getModelPath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelNode_getTileFileFolder_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelNode* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getTileFileFolder();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_setCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 centerX, _in ev_real64 centerY )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ptrNativeObject->setCenter(centerX, centerY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_setLevle_void_ev_int32(void *pObjectXXXX, _in ev_int32 level )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ptrNativeObject->setLevle(level);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getCenterX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCenterX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getCenterY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCenterY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getMinX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getMinY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getMaxX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getMaxY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_addOBQModelNode_ev_bool_OBQModelNode_ev_int32(void *pObjectXXXX, _in const void* modelNode, _in ev_int32 level )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addOBQModelNode(*(EarthView::World::Spatial3D::ModelManager::OBQModelNode*)modelNode, level);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getNode_ev_bool_EVString_OBQModelNode(void *pObjectXXXX, _in const char* nodename, _inout void* node )
				{
					EarthView::World::Core::ev_string nodename1 = nodename;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getNode(nodename1, *(EarthView::World::Spatial3D::ModelManager::OBQModelNode*)node);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getModelFiles_EVString_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 level, _in ev_real64 minx, _in ev_real64 miny, _in ev_real64 maxx, _in ev_real64 maxy )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getModelFiles(level, minx, miny, maxx, maxy);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getCode_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getCode();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_child_OBQModelQuadTree_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* objXXXX = ptrNativeObject->child(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getMyModelPathList_EVString_OBQModelQuadRootTree(void *pObjectXXXX, _in const void* tree )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getMyModelPathList(*(EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*)tree);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTree_getMyModelCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getMyModelCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadRootTree_setLocal_void_ev_real64_ev_real64_ev_real64_EVString(void *pObjectXXXX, _in ev_real64 localX, _in ev_real64 localY, _in ev_real64 localZ, _in const char* srs )
				{
					EarthView::World::Core::ev_string srs1 = srs;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjectXXXX;
					ptrNativeObject->setLocal(localX, localY, localZ, srs1);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadRootTree_getLocalX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLocalX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadRootTree_getLocalY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLocalY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadRootTree_getLocalZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLocalZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadRootTree_getSRS_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSRS();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadRootTree_initTree_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32(void *pObjectXXXX, _in ev_real64 minCenterX, _in ev_real64 minCenterY, _in ev_real64 maxCenterX, _in ev_real64 maxCenterY, _in ev_int32 levelCount )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->initTree(minCenterX, minCenterY, maxCenterX, maxCenterY, levelCount);
					return objXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_Callback)(_in char*& info);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_Callback)(_in ev_int32 process);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_Callback)(_in int min, _in int max);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_Callback)();
				class InfoListenerProxy : public EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener
				{
				private:
					EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_Callback* m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_Callback;
					EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_Callback* m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_Callback;
				public:
					InfoListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : InfoListener(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString(EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32(EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int(EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void(EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_Callback = pCallback;
					}
					virtual void printInfo(_in const EVString& info)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* info_Char = info.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_Callback(info_Char);
						}
						else
							return this->InfoListener::printInfo(info);
					}
					virtual void printProcess(_in ev_int32 process)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_Callback(process);
						}
						else
							return this->InfoListener::printProcess(process);
					}
					virtual void setRange(_in int min, _in int max)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_Callback(min, max);
						}
						else
							return this->InfoListener::setRange(min, max);
					}
					virtual void renderSystemError()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_Callback();
						}
						else
							return this->InfoListener::renderSystemError();
					}
				};
				REGISTER_FACTORY_CLASS(InfoListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString(void *pObjectXXXX, _in const char* info )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX;
					if (dynamic_cast<InfoListenerProxy*>((EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::printInfo(info1);
					else
						ptrNativeObject->printInfo(info1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_Callback* pCallback )
				{
					InfoListenerProxy* ptr = dynamic_cast<InfoListenerProxy*>((EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printInfo_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* info )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::printInfo(info1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32(void *pObjectXXXX, _in ev_int32 process )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX;
					if (dynamic_cast<InfoListenerProxy*>((EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::printProcess(process);
					else
						ptrNativeObject->printProcess(process);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_Callback* pCallback )
				{
					InfoListenerProxy* ptr = dynamic_cast<InfoListenerProxy*>((EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_printProcess_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 process )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::printProcess(process);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int(void *pObjectXXXX, _in int min, _in int max )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX;
					if (dynamic_cast<InfoListenerProxy*>((EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::setRange(min, max);
					else
						ptrNativeObject->setRange(min, max);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_Callback* pCallback )
				{
					InfoListenerProxy* ptr = dynamic_cast<InfoListenerProxy*>((EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_setRange_void_int_int_NoVirtual(void *pObjectXXXX, _in int min, _in int max )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::setRange(min, max);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX;
					if (dynamic_cast<InfoListenerProxy*>((EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::renderSystemError();
					else
						ptrNativeObject->renderSystemError();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_Callback* pCallback )
				{
					InfoListenerProxy* ptr = dynamic_cast<InfoListenerProxy*>((EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_InfoListener_renderSystemError_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::renderSystemError();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_convertObqXmlToIndexDB_ev_bool_EVString(void *pObjectXXXX, _in const char* strTileXml )
				{
					EarthView::World::Core::ev_string strTileXml1 = strTileXml;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->convertObqXmlToIndexDB(strTileXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_queryMeshFilesByRegion_StringVector_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 level, _in ev_real64 minLon, _in ev_real64 minLat, _in ev_real64 maxLon, _in ev_real64 maxLat )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->queryMeshFilesByRegion(level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_queryCpdStreamByRegion_MemoryDataStreamPtr_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 level, _in ev_real64 minLon, _in ev_real64 minLat, _in ev_real64 maxLon, _in ev_real64 maxLat )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->queryCpdStreamByRegion(level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_getCpdFileByRegion_EVString_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 level, _in ev_real64 minLon, _in ev_real64 minLat, _in ev_real64 maxLon, _in ev_real64 maxLat )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getCpdFileByRegion(level, minLon, minLat, maxLon, maxLat);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_cpd2mesh_void_EVString_EVString(void *pObjectXXXX, _in const char* cpdFilePath, _in const char* meshPath )
				{
					EarthView::World::Core::ev_string cpdFilePath1 = cpdFilePath;
					EarthView::World::Core::ev_string meshPath1 = meshPath;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->cpd2mesh(cpdFilePath1, meshPath1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_getLevelRange_ev_bool_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_int32& minLevel, _out ev_int32& maxLevel, _out ev_real64& minLon, _out ev_real64& minLat, _out ev_real64& maxLon, _out ev_real64& maxLat )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getLevelRange(minLevel, maxLevel, minLon, minLat, maxLon, maxLat);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_addInfoListener_void_InfoListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* pListener )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->addInfoListener(pListener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_removeInfoListener_void_InfoListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* pListener )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->removeInfoListener(pListener);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_initFromXMLSource_ev_bool_EVString_OBQModelQuadRootTree(void *pObjectXXXX, _in const char* xmlSourcePath, _inout void* tree )
				{
					EarthView::World::Core::ev_string xmlSourcePath1 = xmlSourcePath;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->initFromXMLSource(xmlSourcePath1, *(EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*)tree);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_initFromQueryIndexDB_ev_bool_OBQModelQuadRootTree(void *pObjectXXXX, _inout void* tree )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->initFromQueryIndexDB(*(EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*)tree);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_saveToQueryIndexDB_ev_bool_OBQModelQuadRootTree(void *pObjectXXXX, _in const void* tree )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveToQueryIndexDB(*(EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*)tree);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_dae2mesh_ev_int32_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* srcFolder, _in const char* desFolder, _in ev_bool coverExistentMesh )
				{
					EarthView::World::Core::ev_string srcFolder1 = srcFolder;
					EarthView::World::Core::ev_string desFolder1 = desFolder;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->dae2mesh(srcFolder1, desFolder1, coverExistentMesh);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_createDEM_void_EVString_EVString(void *pObjectXXXX, _in const char* srcFolder, _in const char* desFolder )
				{
					EarthView::World::Core::ev_string srcFolder1 = srcFolder;
					EarthView::World::Core::ev_string desFolder1 = desFolder;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->createDEM(srcFolder1, desFolder1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_initDae2MeshThread_void_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* srcFolder, _in const char* desFolder, _in ev_bool coverExistentMesh )
				{
					EarthView::World::Core::ev_string srcFolder1 = srcFolder;
					EarthView::World::Core::ev_string desFolder1 = desFolder;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->initDae2MeshThread(srcFolder1, desFolder1, coverExistentMesh);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_startCreateQueryIndex_void_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* srcFolder, _in const char* desFolder, _in ev_bool coverExistentMesh )
				{
					EarthView::World::Core::ev_string srcFolder1 = srcFolder;
					EarthView::World::Core::ev_string desFolder1 = desFolder;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->startCreateQueryIndex(srcFolder1, desFolder1, coverExistentMesh);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_stopCreateQueryIndex_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->stopCreateQueryIndex();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_printInfo_void_EVString(void *pObjectXXXX, _in const char* info )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->printInfo(info1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_printProcess_void_ev_int32(void *pObjectXXXX, _in ev_int32 process )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->printProcess(process);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_setRange_void_int_int(void *pObjectXXXX, _in int min, _in int max )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->setRange(min, max);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_renderSystemError_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->renderSystemError();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_dae2meshSdate_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->dae2meshSdate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQModelQuadTreeCreator_setLocalMatrix_void_CMatrix4_ev_bool(void *pObjectXXXX, _in const void* localMatrix, _in ev_bool available )
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjectXXXX;
					ptrNativeObject->setLocalMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)localMatrix, available);
				}
			}
		}
	}
}
