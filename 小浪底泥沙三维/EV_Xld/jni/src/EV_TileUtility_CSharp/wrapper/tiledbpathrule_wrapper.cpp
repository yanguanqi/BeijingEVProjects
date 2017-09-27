/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tiledbpathrule.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef const char*  ( _stdcall EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_Callback)(_in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in char*& format);
			typedef int  ( _stdcall EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_Callback)();
			typedef EarthView::World::Spatial::CTilePathRule*  ( _stdcall EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_Callback)();
			class CTileDBPathRuleProxy : public EarthView::World::Spatial::CTileDBPathRule
			{
			private:
				EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_Callback* m_EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_Callback;
				EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_Callback* m_EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_Callback;
				EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_Callback* m_EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_Callback;
			public:
				CTileDBPathRuleProxy(EarthView::World::Core::CNameValuePairList *pList) : CTileDBPathRule(pList)
				{
					m_EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_Callback = NULL;
					m_EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString(EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType(EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule(EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_Callback = pCallback;
				}
				virtual const EVString getPath(_in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in const EVString& format) const
				{
					if(m_EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* format_Char = format.makeBuffer();
						const EVString returnValue = m_EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_Callback(level, row, col, format_Char);
						return returnValue;
					}
					else
						return this->CTileDBPathRule::getPath(level, row, col, format);
				}
				virtual EarthView::World::Spatial::EVTilePathType getType() const
				{
					if(m_EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVTilePathType returnValue = (EarthView::World::Spatial::EVTilePathType)m_EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_Callback();
						return returnValue;
					}
					else
						return this->CTileDBPathRule::getType();
				}
				virtual EarthView::World::Spatial::CTilePathRule* clone()
				{
					if(m_EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CTilePathRule* returnValue = m_EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CTileDBPathRule::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CTileDBPathRuleProxy);
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in const char* format )
			{
				EarthView::World::Core::ev_string format1 = format;
				const EarthView::World::Spatial::CTileDBPathRule* ptrNativeObject = (EarthView::World::Spatial::CTileDBPathRule*) pObjectXXXX;
				if (dynamic_cast<CTileDBPathRuleProxy*>((EarthView::World::Spatial::CTileDBPathRule*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CTileDBPathRule::getPath(level, row, col, format1);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getPath(level, row, col, format1);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_Callback* pCallback )
			{
				CTileDBPathRuleProxy* ptr = dynamic_cast<CTileDBPathRuleProxy*>((EarthView::World::Spatial::CTileDBPathRule*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileDBPathRule_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in const char* format )
			{
				EarthView::World::Core::ev_string format1 = format;
				const EarthView::World::Spatial::CTileDBPathRule* ptrNativeObject = (EarthView::World::Spatial::CTileDBPathRule*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CTileDBPathRule::getPath(level, row, col, format1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileDBPathRule* ptrNativeObject = (EarthView::World::Spatial::CTileDBPathRule*) pObjectXXXX;
				if (dynamic_cast<CTileDBPathRuleProxy*>((EarthView::World::Spatial::CTileDBPathRule*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVTilePathType objXXXX = ptrNativeObject->EarthView::World::Spatial::CTileDBPathRule::getType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVTilePathType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType( void *pObjectXXXX, EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_Callback* pCallback )
			{
				CTileDBPathRuleProxy* ptr = dynamic_cast<CTileDBPathRuleProxy*>((EarthView::World::Spatial::CTileDBPathRule*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CTileDBPathRule_getType_EVTilePathType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileDBPathRule* ptrNativeObject = (EarthView::World::Spatial::CTileDBPathRule*) pObjectXXXX;
				EarthView::World::Spatial::EVTilePathType objXXXX = ptrNativeObject->EarthView::World::Spatial::CTileDBPathRule::getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTilePathRule*  _stdcall EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileDBPathRule* ptrNativeObject = (EarthView::World::Spatial::CTileDBPathRule*) pObjectXXXX;
				if (dynamic_cast<CTileDBPathRuleProxy*>((EarthView::World::Spatial::CTileDBPathRule*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::CTilePathRule* objXXXX = ptrNativeObject->EarthView::World::Spatial::CTileDBPathRule::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::CTilePathRule* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule( void *pObjectXXXX, EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_Callback* pCallback )
			{
				CTileDBPathRuleProxy* ptr = dynamic_cast<CTileDBPathRuleProxy*>((EarthView::World::Spatial::CTileDBPathRule*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTilePathRule*  _stdcall EarthView_World_Spatial_CTileDBPathRule_clone_CTilePathRule_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileDBPathRule* ptrNativeObject = (EarthView::World::Spatial::CTileDBPathRule*) pObjectXXXX;
				EarthView::World::Spatial::CTilePathRule* objXXXX = ptrNativeObject->EarthView::World::Spatial::CTileDBPathRule::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
		}
	}
}
