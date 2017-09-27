/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowtexturemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureList_push_back_void_CTexturePtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CTexturePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ShadowTextureList_front_CTexturePtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ShadowTextureList_back_CTexturePtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureList_insert_void_ev_uint32_CTexturePtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CTexturePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ShadowTextureList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ShadowTextureList_OperatorIndex_CTexturePtr_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ShadowTextureList& objYYYY = *(EarthView::World::Graphic::ShadowTextureList*) pObjXXXX;
				EarthView::World::Graphic::CTexturePtr& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ShadowTextureList_at_CTexturePtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ShadowTextureList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_ShadowTextureConfig_width( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureConfig* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfig*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->width;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ShadowTextureConfig_width( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::ShadowTextureConfig*)pObjectXXXX)->width = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_ShadowTextureConfig_height( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureConfig* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfig*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->height;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ShadowTextureConfig_height( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::ShadowTextureConfig*)pObjectXXXX)->height = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_ShadowTextureConfig_format( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureConfig* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfig*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->format;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ShadowTextureConfig_format( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::ShadowTextureConfig*)pObjectXXXX)->format = (EarthView::World::Graphic::PixelFormat)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_ShadowTextureConfig_fsaa( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureConfig* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfig*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->fsaa;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ShadowTextureConfig_fsaa( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::ShadowTextureConfig*)pObjectXXXX)->fsaa = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_ShadowTextureConfig_depthBufferPoolId( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureConfig* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfig*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->depthBufferPoolId;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ShadowTextureConfig_depthBufferPoolId( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::ShadowTextureConfig*)pObjectXXXX)->depthBufferPoolId = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_push_back_void_ShadowTextureConfig(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::ShadowTextureConfig*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_front_ShadowTextureConfig(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				EarthView::World::Graphic::ShadowTextureConfig& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::ShadowTextureConfig *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_back_ShadowTextureConfig(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				EarthView::World::Graphic::ShadowTextureConfig& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::ShadowTextureConfig *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_insert_void_ev_uint32_ShadowTextureConfig(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::ShadowTextureConfig*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_OperatorIndex_ShadowTextureConfig_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ShadowTextureConfigList& objYYYY = *(EarthView::World::Graphic::ShadowTextureConfigList*) pObjXXXX;
				EarthView::World::Graphic::ShadowTextureConfig& objXXXX = objYYYY[n];
				EarthView::World::Graphic::ShadowTextureConfig *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_at_ShadowTextureConfig_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				EarthView::World::Graphic::ShadowTextureConfig& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::ShadowTextureConfig *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ShadowTextureConfigList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_resize_void_ev_size_t_ShadowTextureConfig(void *pObjectXXXX, _in ev_uint64  newSize, _in void* newValue )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ptrNativeObject->resize(newSize, *(EarthView::World::Graphic::ShadowTextureConfig*)newValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShadowTextureConfigList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShadowTextureConfigList* ptrNativeObject = (EarthView::World::Graphic::ShadowTextureConfigList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ConstShadowTextureConfigIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConstShadowTextureConfigIterator* ptrNativeObject = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstShadowTextureConfigIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator* ptrNativeObject = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ConstShadowTextureConfigIterator_getCurrent_ShadowTextureConfig(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator* ptrNativeObject = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjectXXXX;
				EarthView::World::Graphic::ShadowTextureConfig objXXXX = ptrNativeObject->getCurrent();
				EarthView::World::Graphic::ShadowTextureConfig *pXXXX = new EarthView::World::Graphic::ShadowTextureConfig(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ConstShadowTextureConfigIterator_next_ShadowTextureConfig(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator* ptrNativeObject = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjectXXXX;
				EarthView::World::Graphic::ShadowTextureConfig objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::ShadowTextureConfig *pXXXX = new EarthView::World::Graphic::ShadowTextureConfig(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ConstShadowTextureConfigIterator_getBegin_ShadowTextureConfig(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator* ptrNativeObject = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjectXXXX;
				EarthView::World::Graphic::ShadowTextureConfig objXXXX = ptrNativeObject->getBegin();
				EarthView::World::Graphic::ShadowTextureConfig *pXXXX = new EarthView::World::Graphic::ShadowTextureConfig(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ConstShadowTextureConfigIterator_getEnd_ShadowTextureConfig(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstShadowTextureConfigIterator* ptrNativeObject = (EarthView::World::Graphic::ConstShadowTextureConfigIterator*) pObjectXXXX;
				EarthView::World::Graphic::ShadowTextureConfig objXXXX = ptrNativeObject->getEnd();
				EarthView::World::Graphic::ShadowTextureConfig *pXXXX = new EarthView::World::Graphic::ShadowTextureConfig(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_Callback)(_in const void* config, _inout void* listToPopulate);
			typedef void*  ( _stdcall EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_Callback)(_in int format);
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowTextureManager_clear_void_Callback)();
			class CShadowTextureManagerProxy : public EarthView::World::Graphic::CShadowTextureManager
			{
			private:
				EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_Callback* m_EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_Callback;
				EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_Callback* m_EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_Callback;
				EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_Callback* m_EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_Callback;
				EarthView_World_Graphic_CShadowTextureManager_clear_void_Callback* m_EarthView_World_Graphic_CShadowTextureManager_clear_void_Callback;
			public:
				CShadowTextureManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CShadowTextureManager(pList)
				{
					m_EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_Callback = NULL;
					m_EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_Callback = NULL;
					m_EarthView_World_Graphic_CShadowTextureManager_clear_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList(EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat(EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowTextureManager_clearUnused_void(EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowTextureManager_clear_void(EarthView_World_Graphic_CShadowTextureManager_clear_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowTextureManager_clear_void_Callback = pCallback;
				}
				virtual void getShadowTextures(_in const EarthView::World::Graphic::ShadowTextureConfigList& config, _inout EarthView::World::Graphic::ShadowTextureList& listToPopulate)
				{
					if(m_EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_Callback(&config, &listToPopulate);
					}
					else
						return this->CShadowTextureManager::getShadowTextures(config, listToPopulate);
				}
				virtual EarthView::World::Graphic::CTexturePtr getNullShadowTexture(_in EarthView::World::Graphic::PixelFormat format)
				{
					if(m_EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_Callback((int)format);
						return returnValue;
					}
					else
						return this->CShadowTextureManager::getNullShadowTexture(format);
				}
				virtual void clearUnused()
				{
					if(m_EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_Callback();
					}
					else
						return this->CShadowTextureManager::clearUnused();
				}
				virtual void clear()
				{
					if(m_EarthView_World_Graphic_CShadowTextureManager_clear_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowTextureManager_clear_void_Callback();
					}
					else
						return this->CShadowTextureManager::clear();
				}
			};
			REGISTER_FACTORY_CLASS(CShadowTextureManagerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList(void *pObjectXXXX, _in const void* config, _inout void* listToPopulate )
			{
				EarthView::World::Graphic::CShadowTextureManager* ptrNativeObject = (EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX;
				if (dynamic_cast<CShadowTextureManagerProxy*>((EarthView::World::Graphic::CShadowTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowTextureManager::getShadowTextures(*(EarthView::World::Graphic::ShadowTextureConfigList*)config, *(EarthView::World::Graphic::ShadowTextureList*)listToPopulate);
				else
					ptrNativeObject->getShadowTextures(*(EarthView::World::Graphic::ShadowTextureConfigList*)config, *(EarthView::World::Graphic::ShadowTextureList*)listToPopulate);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList( void *pObjectXXXX, EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_Callback* pCallback )
			{
				CShadowTextureManagerProxy* ptr = dynamic_cast<CShadowTextureManagerProxy*>((EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowTextureManager_getShadowTextures_void_ShadowTextureConfigList_ShadowTextureList_NoVirtual(void *pObjectXXXX, _in const void* config, _inout void* listToPopulate )
			{
				EarthView::World::Graphic::CShadowTextureManager* ptrNativeObject = (EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowTextureManager::getShadowTextures(*(EarthView::World::Graphic::ShadowTextureConfigList*)config, *(EarthView::World::Graphic::ShadowTextureList*)listToPopulate);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat(void *pObjectXXXX, _in int format )
			{
				EarthView::World::Graphic::CShadowTextureManager* ptrNativeObject = (EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX;
				if (dynamic_cast<CShadowTextureManagerProxy*>((EarthView::World::Graphic::CShadowTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowTextureManager::getNullShadowTexture((EarthView::World::Graphic::PixelFormat)format);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->getNullShadowTexture((EarthView::World::Graphic::PixelFormat)format);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_Callback* pCallback )
			{
				CShadowTextureManagerProxy* ptr = dynamic_cast<CShadowTextureManagerProxy*>((EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CShadowTextureManager_getNullShadowTexture_CTexturePtr_PixelFormat_NoVirtual(void *pObjectXXXX, _in int format )
			{
				EarthView::World::Graphic::CShadowTextureManager* ptrNativeObject = (EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowTextureManager::getNullShadowTexture((EarthView::World::Graphic::PixelFormat)format);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowTextureManager_clearUnused_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowTextureManager* ptrNativeObject = (EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX;
				if (dynamic_cast<CShadowTextureManagerProxy*>((EarthView::World::Graphic::CShadowTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowTextureManager::clearUnused();
				else
					ptrNativeObject->clearUnused();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowTextureManager_clearUnused_void( void *pObjectXXXX, EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_Callback* pCallback )
			{
				CShadowTextureManagerProxy* ptr = dynamic_cast<CShadowTextureManagerProxy*>((EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowTextureManager_clearUnused_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowTextureManager_clearUnused_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowTextureManager* ptrNativeObject = (EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowTextureManager::clearUnused();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowTextureManager_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowTextureManager* ptrNativeObject = (EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX;
				if (dynamic_cast<CShadowTextureManagerProxy*>((EarthView::World::Graphic::CShadowTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowTextureManager::clear();
				else
					ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowTextureManager_clear_void( void *pObjectXXXX, EarthView_World_Graphic_CShadowTextureManager_clear_void_Callback* pCallback )
			{
				CShadowTextureManagerProxy* ptr = dynamic_cast<CShadowTextureManagerProxy*>((EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowTextureManager_clear_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowTextureManager_clear_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowTextureManager* ptrNativeObject = (EarthView::World::Graphic::CShadowTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowTextureManager::clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CShadowTextureManager_getSingleton_CShadowTextureManager( )
			{
				EarthView::World::Graphic::CShadowTextureManager& objXXXX = EarthView::World::Graphic::CShadowTextureManager::getSingleton();
				EarthView::World::Graphic::CShadowTextureManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowTextureManager*  _stdcall EarthView_World_Graphic_CShadowTextureManager_getSingletonPtr_CShadowTextureManager( )
			{
				EarthView::World::Graphic::CShadowTextureManager* objXXXX = EarthView::World::Graphic::CShadowTextureManager::getSingletonPtr();
				return objXXXX;
			}
		}
	}
}
