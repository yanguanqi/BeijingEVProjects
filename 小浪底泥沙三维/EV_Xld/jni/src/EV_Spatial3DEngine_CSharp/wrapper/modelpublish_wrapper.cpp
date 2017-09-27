/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelpublish.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelIdAndNameMap_push_ev_bool_ev_uint16_EVString(void *pObjectXXXX, _in ev_uint16& key, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Spatial3D::ModelIdAndNameMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, val1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelIdAndNameMap_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_uint16& key )
			{
				EarthView::World::Spatial3D::ModelIdAndNameMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelIdAndNameMap_OperatorIndex_EVString_ev_uint16(void *pObjXXXX, _in ev_uint16& key )
			{
				EarthView::World::Spatial3D::ModelIdAndNameMap& objYYYY = *(EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				EVString& objXXXX = objYYYY[key];
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelIdAndNameMap_get_EVString_ev_uint16(void *pObjectXXXX, _in ev_uint16& key )
			{
				EarthView::World::Spatial3D::ModelIdAndNameMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->get(key);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelIdAndNameMap_erase_void_ev_uint16(void *pObjectXXXX, _in ev_uint16& key )
			{
				EarthView::World::Spatial3D::ModelIdAndNameMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelIdAndNameMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::ModelIdAndNameMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelIdAndNameMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelIdAndNameMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelIdAndNameMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::ModelIdAndNameMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelIdAndNameMap_getKeys_IntVector(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::ModelIdAndNameMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjectXXXX;
				EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getKeys();
				EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_Callback)(_in char*& info);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_Callback)(_in ev_int32 percent);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_Callback)(_in ev_int32 id, _in char*& name);
			class CModelPublishToolListenerProxy : public EarthView::World::Spatial3D::CModelPublishToolListener
			{
			private:
				EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_Callback* m_EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_Callback;
				EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_Callback* m_EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_Callback;
				EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_Callback;
			public:
				CModelPublishToolListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelPublishToolListener(pList)
				{
					m_EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString(EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32(EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString(EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_Callback = pCallback;
				}
				virtual void information(_in const EVString& info)
				{
					if(m_EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* info_Char = info.makeBuffer();
						m_EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_Callback(info_Char);
					}
					else
						return this->CModelPublishToolListener::information(info);
				}
				virtual void workPercent(_in ev_int32 percent)
				{
					if(m_EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_Callback(percent);
					}
					else
						return this->CModelPublishToolListener::workPercent(percent);
				}
				virtual void getModelIdAndName(_in ev_int32 id, _in const EVString& name)
				{
					if(m_EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_Callback(id, name_Char);
					}
					else
						return this->CModelPublishToolListener::getModelIdAndName(id, name);
				}
			};
			REGISTER_FACTORY_CLASS(CModelPublishToolListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString(void *pObjectXXXX, _in const char* info )
			{
				EarthView::World::Core::ev_string info1 = info;
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				if (dynamic_cast<CModelPublishToolListenerProxy*>((EarthView::World::Spatial3D::CModelPublishToolListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CModelPublishToolListener::information(info1);
				else
					ptrNativeObject->information(info1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_Callback* pCallback )
			{
				CModelPublishToolListenerProxy* ptr = dynamic_cast<CModelPublishToolListenerProxy*>((EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_information_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* info )
			{
				EarthView::World::Core::ev_string info1 = info;
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CModelPublishToolListener::information(info1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32(void *pObjectXXXX, _in ev_int32 percent )
			{
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				if (dynamic_cast<CModelPublishToolListenerProxy*>((EarthView::World::Spatial3D::CModelPublishToolListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CModelPublishToolListener::workPercent(percent);
				else
					ptrNativeObject->workPercent(percent);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_Callback* pCallback )
			{
				CModelPublishToolListenerProxy* ptr = dynamic_cast<CModelPublishToolListenerProxy*>((EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_workPercent_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 percent )
			{
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CModelPublishToolListener::workPercent(percent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString(void *pObjectXXXX, _in ev_int32 id, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				if (dynamic_cast<CModelPublishToolListenerProxy*>((EarthView::World::Spatial3D::CModelPublishToolListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CModelPublishToolListener::getModelIdAndName(id, name1);
				else
					ptrNativeObject->getModelIdAndName(id, name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_Callback* pCallback )
			{
				CModelPublishToolListenerProxy* ptr = dynamic_cast<CModelPublishToolListenerProxy*>((EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_getModelIdAndName_void_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in ev_int32 id, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CModelPublishToolListener::getModelIdAndName(id, name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_setTotalCount_void_ev_int32(void *pObjectXXXX, _in ev_int32 totalcount )
			{
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ptrNativeObject->setTotalCount(totalcount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_setCurrentCount_void_ev_int32(void *pObjectXXXX, _in ev_int32 currentCount )
			{
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ptrNativeObject->setCurrentCount(currentCount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_addTotalCount_void_ev_int32(void *pObjectXXXX, _in ev_int32 addcount )
			{
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ptrNativeObject->addTotalCount(addcount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_addCurrentCount_void_ev_int32(void *pObjectXXXX, _in ev_int32 addCount )
			{
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ptrNativeObject->addCurrentCount(addCount);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_getPercent_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getPercent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_getTotalCount_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTotalCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishToolListener_getCurrentCount_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishToolListener* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getCurrentCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishTool_setCModelPulishToolListener_void_CModelPublishToolListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::CModelPublishToolListener* ref_pListener )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ptrNativeObject->setCModelPulishToolListener(ref_pListener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishTool_startPublish_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ptrNativeObject->startPublish();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishTool_startPublish_void_IntVector_StringVector_CEffectInfoVector(void *pObjectXXXX, _in const void* modelIDVec, _in const void* typeCodesVec, _in const void* effectInfoVec )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ptrNativeObject->startPublish(*(EarthView::World::Core::IntVector*)modelIDVec, *(EarthView::World::Core::StringVector*)typeCodesVec, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)effectInfoVec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishTool_stopPublish_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ptrNativeObject->stopPublish();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishTool_getDesModelSourceAttrNameAndAttrStructVector_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getDesModelSourceAttrNameAndAttrStructVector();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishTool_getSrcModelSourceAttrNameAndAttrStructVector_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getSrcModelSourceAttrNameAndAttrStructVector();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishTool_processAttrTable_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->processAttrTable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishTool_getDesModelSourceNodecodeNameAndAttrNameVector_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getDesModelSourceNodecodeNameAndAttrNameVector();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishTool_getSrcModelSourceNodecodeNameAndAttrNameVector_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getSrcModelSourceNodecodeNameAndAttrNameVector();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishTool_processNodeCode_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->processNodeCode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CModelPublishTool_calcClashModel_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->calcClashModel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishTool_setClashModelTreatWay_void_ClashModelTreatWay(void *pObjectXXXX, _in int treatway )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ptrNativeObject->setClashModelTreatWay((EarthView::World::Spatial3D::ClashModelTreatWay)treatway);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishTool_setCompositorAllSubmesh_void_ev_bool(void *pObjectXXXX, _in const ev_bool b )
			{
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ptrNativeObject->setCompositorAllSubmesh(b);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CModelPublishTool_getNewAttrTableNameAndNewNodecode_ev_bool_EVString_EVString_EVString_EVString(void *pObjectXXXX, _in const char* modelname, _in const char* nodecode, _inout char*& newattrtablename, _inout char*& newnodecode )
			{
				EarthView::World::Core::ev_string modelname1 = modelname;
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Core::ev_string newattrtablename1 = newattrtablename;
				EarthView::World::Core::ev_string newnodecode1 = newnodecode;
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getNewAttrTableNameAndNewNodecode(modelname1, nodecode1, newattrtablename1, newnodecode1);
				newattrtablename=newattrtablename1.makeBuffer();newnodecode=newnodecode1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CModelPublishTool_getDesAttrTableNameAndFieldsByNodeCode_ev_bool_EVString_EVString_CFields(void *pObjectXXXX, _in const char* nodecode, _inout char*& attrtablename, _in EarthView::World::Spatial::GeoDataset::CFields*& fields )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Core::ev_string attrtablename1 = attrtablename;
				EarthView::World::Spatial3D::CModelPublishTool* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getDesAttrTableNameAndFieldsByNodeCode(nodecode1, attrtablename1, fields);
				attrtablename=attrtablename1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishTool_DBDesSource_setDesDataSourcePtr_void_CModelDataSource(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* ref_desdatasourceptr )
			{
				EarthView::World::Spatial3D::CModelPublishTool_DBDesSource* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool_DBDesSource*) pObjectXXXX;
				ptrNativeObject->setDesDataSourcePtr(ref_desdatasourceptr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CModelPublishTool_DBDesSource_setDesNodecode_void_EVString(void *pObjectXXXX, _in const char* desnodecode )
			{
				EarthView::World::Core::ev_string desnodecode1 = desnodecode;
				EarthView::World::Spatial3D::CModelPublishTool_DBDesSource* ptrNativeObject = (EarthView::World::Spatial3D::CModelPublishTool_DBDesSource*) pObjectXXXX;
				ptrNativeObject->setDesNodecode(desnodecode1);
			}
		}
	}
}
