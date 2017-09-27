/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/polylineFeaturemanager.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Callback)(_in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Callback)(_in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Callback)(_in const ev_int32& polylineFeatureUniqueID);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Callback)(_in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& useWallGradualColor);
			typedef EarthView::World::Spatial::Display::CRgbColor*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Callback)(_in const ev_int32& polylineFeatureUniqueID);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Callback)(_in const ev_int32& polylineFeatureUniqueID, _in EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Callback)(_in const ev_int32& polylineFeatureUniqueID);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_Callback)(_in const ev_bool& needUpdate);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_Callback)();
			class CPolylineFeatureManagerProxy : public EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager
			{
			private:
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_Callback;
			public:
				CPolylineFeatureManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CPolylineFeatureManager(pList)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void(EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_Callback = pCallback;
				}
				virtual void setPolylineFeatureVisible(_in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Callback(polylineFeatureUniqueID, value);
					}
					else
						return this->CPolylineFeatureManager::setPolylineFeatureVisible(polylineFeatureUniqueID, value);
				}
				virtual void setNeedClearUselessData(_in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Callback(polylineFeatureUniqueID, value);
					}
					else
						return this->CPolylineFeatureManager::setNeedClearUselessData(polylineFeatureUniqueID, value);
				}
				virtual ev_bool getUseWallGradualColor(_in const ev_int32& polylineFeatureUniqueID)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Callback(polylineFeatureUniqueID);
						return returnValue;
					}
					else
						return this->CPolylineFeatureManager::getUseWallGradualColor(polylineFeatureUniqueID);
				}
				virtual void setUseWallGradualColor(_in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& useWallGradualColor)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Callback(polylineFeatureUniqueID, useWallGradualColor);
					}
					else
						return this->CPolylineFeatureManager::setUseWallGradualColor(polylineFeatureUniqueID, useWallGradualColor);
				}
				virtual EarthView::World::Spatial::Display::CRgbColor* getWallGradualColor(_in const ev_int32& polylineFeatureUniqueID)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Display::CRgbColor* returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Callback(polylineFeatureUniqueID);
						return returnValue;
					}
					else
						return this->CPolylineFeatureManager::getWallGradualColor(polylineFeatureUniqueID);
				}
				virtual void setWallGradualColor(_in const ev_int32& polylineFeatureUniqueID, _in EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Callback(polylineFeatureUniqueID, pWallGradualColor);
					}
					else
						return this->CPolylineFeatureManager::setWallGradualColor(polylineFeatureUniqueID, pWallGradualColor);
				}
				virtual ev_bool canReleaseResource()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeatureManager::canReleaseResource();
				}
				virtual ev_bool canReleaseResource(_in const ev_int32& polylineFeatureUniqueID)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Callback(polylineFeatureUniqueID);
						return returnValue;
					}
					else
						return this->CPolylineFeatureManager::canReleaseResource(polylineFeatureUniqueID);
				}
				virtual void setNeedUpdate(_in const ev_bool& needUpdate)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_Callback(needUpdate);
					}
					else
						return this->CPolylineFeatureManager::setNeedUpdate(needUpdate);
				}
				virtual void update()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_Callback();
					}
					else
						return this->CPolylineFeatureManager::update();
				}
				virtual ev_bool getCanSwapBuffer() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeatureManager::getCanSwapBuffer();
				}
				virtual void setName(_in const EarthView::World::Core::ev_string& name)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string_Callback(name_Char);
					}
					else
						return this->CPolylineFeatureManager::setName(name);
				}
				virtual EarthView::World::Core::ev_string getName() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::ev_string returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeatureManager::getName();
				}
				virtual ev_bool getNeedUpdate() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeatureManager::getNeedUpdate();
				}
				virtual EarthView::World::Graphic::CNode* getNode() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CPolylineFeatureManager::getNode();
				}
			};
			REGISTER_FACTORY_CLASS(CPolylineFeatureManagerProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeature_CPolylineFeature_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* objXXXX = ptrNativeObject->getPolylineFeature(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_addPolylineFeature_void_CPolylineFeature_ev_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* ref_polylineFeature, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->addPolylineFeature(ref_polylineFeature, needUpdate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_removePolylineFeature_void_CPolylineFeature_ev_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* polylineFeature, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->removePolylineFeature(polylineFeature, needUpdate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_removePolylineFeaturePoints_void_ev_int32_ev_bool(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->removePolylineFeaturePoints(polylineFeatureUniqueID, needUpdate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_removePolylineFeature_void_ev_int32_ev_bool(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->removePolylineFeature(polylineFeatureUniqueID, needUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_contain_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->contain(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setPolylineFeatureVisible(polylineFeatureUniqueID, value);
				else
					ptrNativeObject->setPolylineFeatureVisible(polylineFeatureUniqueID, value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setPolylineFeatureVisible(polylineFeatureUniqueID, value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeatureVisible_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getPolylineFeatureVisible(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setNeedClearUselessData(polylineFeatureUniqueID, value);
				else
					ptrNativeObject->setNeedClearUselessData(polylineFeatureUniqueID, value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setNeedClearUselessData(polylineFeatureUniqueID, value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedClearUselessData_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getNeedClearUselessData(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDescription_void_ev_int32_EVString(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const char* description )
			{
				EarthView::World::Core::ev_string description1 = description;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setDescription(polylineFeatureUniqueID, description1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setUniformVisible(value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformPolylineFeatureSymbol_void_ISymbol_EVDisplayMode(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* ref_uniformSymbol, _in const int& displayMode )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setUniformPolylineFeatureSymbol(ref_uniformSymbol, (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode&)displayMode);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformPolylineFeatureSymbol_ISymbol_EVDisplayMode(void *pObjectXXXX, _in const int& displayMode )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getUniformPolylineFeatureSymbol((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode&)displayMode);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_addPoint_void_ev_int32_CCoordinate_ev_bool(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const void* point, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->addPoint(polylineFeatureUniqueID, *(EarthView::World::Spatial::Geometry::CCoordinate*)point, needUpdate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureSymbol_void_ev_int32_ISymbol(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in EarthView::World::Spatial::Display::ISymbol* polylineFeatureSymbol )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setPolylineFeatureSymbol(polylineFeatureUniqueID, polylineFeatureSymbol);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setIsPolylineFeatureHighLine_void_ev_int32_ev_bool(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setIsPolylineFeatureHighLine(polylineFeatureUniqueID, value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getIsPolylineFeatureHighLine_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsPolylineFeatureHighLine(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDisplayStrategyForPointMode_void_ev_int32(void *pObjectXXXX, _in const ev_int32& strategyValue )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setDisplayStrategyForPointMode(strategyValue);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getDisplayStrategyForPointMode_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getDisplayStrategyForPointMode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setHighLineColorInfo_void_ev_int32_CRgbColor_CRgbColor(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor, _in EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setHighLineColorInfo(polylineFeatureUniqueID, staticHighLineColor, dynamicHighLineColor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setHighLineDistance_void_ev_int32_ev_real64(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_real64& highLineDistance )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setHighLineDistance(polylineFeatureUniqueID, highLineDistance);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getHighLineDistance_Real_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getHighLineDistance(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeatureSymbol_ISymbol_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getPolylineFeatureSymbol(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformDisplayMode_void_EVDisplayMode_ISymbol(void *pObjectXXXX, _in const int& displayMode, _in EarthView::World::Spatial::Display::ISymbol* uniformSymbol )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setUniformDisplayMode((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode&)displayMode, uniformSymbol);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformDisplayMode_EVDisplayMode(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode objXXXX = ptrNativeObject->getUniformDisplayMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDisplayMode_void_ev_int32_EVDisplayMode(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const int& displayMode )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setDisplayMode(polylineFeatureUniqueID, (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode&)displayMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getDisplayMode_EVDisplayMode_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode objXXXX = ptrNativeObject->getDisplayMode(polylineFeatureUniqueID);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setISpatialReference_void_ev_int32_ISpatialReference(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_iSpatialReference )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setISpatialReference(polylineFeatureUniqueID, ref_iSpatialReference);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getISpatialReference_ISpatialReference_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getISpatialReference(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformISpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_uniformSpatialReference )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setUniformISpatialReference(ref_uniformSpatialReference);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformISpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getUniformISpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDisplayPointNum_void_ev_int32_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_int32& displayPointNum )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setDisplayPointNum(polylineFeatureUniqueID, displayPointNum);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getDisplayPointNum_ev_int32_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getDisplayPointNum(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformDisplayPointNum_void_ev_int32(void *pObjectXXXX, _in const ev_int32& displayPointNum )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setUniformDisplayPointNum(displayPointNum);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformDisplayPointNum_ev_int32(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getUniformDisplayPointNum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeatureCount_ev_int32(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getPolylineFeatureCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setSegmentRenderParameter_void_ev_int32(void *pObjectXXXX, _in const ev_int32& perSegmentVertexCount )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->setSegmentRenderParameter(perSegmentVertexCount);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::getUseWallGradualColor(polylineFeatureUniqueID);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getUseWallGradualColor(polylineFeatureUniqueID);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::getUseWallGradualColor(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& useWallGradualColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setUseWallGradualColor(polylineFeatureUniqueID, useWallGradualColor);
				else
					ptrNativeObject->setUseWallGradualColor(polylineFeatureUniqueID, useWallGradualColor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& useWallGradualColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setUseWallGradualColor(polylineFeatureUniqueID, useWallGradualColor);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CRgbColor*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Display::CRgbColor* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::getWallGradualColor(polylineFeatureUniqueID);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Display::CRgbColor* objXXXX = ptrNativeObject->getWallGradualColor(polylineFeatureUniqueID);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CRgbColor*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				EarthView::World::Spatial::Display::CRgbColor* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::getWallGradualColor(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setWallGradualColor(polylineFeatureUniqueID, pWallGradualColor);
				else
					ptrNativeObject->setWallGradualColor(polylineFeatureUniqueID, pWallGradualColor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_NoVirtual(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID, _in EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setWallGradualColor(polylineFeatureUniqueID, pWallGradualColor);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::canReleaseResource();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canReleaseResource();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::canReleaseResource();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::canReleaseResource(polylineFeatureUniqueID);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canReleaseResource(polylineFeatureUniqueID);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& polylineFeatureUniqueID )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::canReleaseResource(polylineFeatureUniqueID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool(void *pObjectXXXX, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setNeedUpdate(needUpdate);
				else
					ptrNativeObject->setNeedUpdate(needUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::setNeedUpdate(needUpdate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				if (dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::update();
				else
					ptrNativeObject->update();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager::update();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode_Callback* pCallback )
			{
				CPolylineFeatureManagerProxy* ptr = dynamic_cast<CPolylineFeatureManagerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode(pCallback);
				}
			}
		}
	}
}
