/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/externaltexturesource.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_shutDown_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_Callback)(_in char*& sMaterialName, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_Callback)(_in char*& sMaterialName);
			typedef void  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_Callback)(_in char*& sTextureName, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_Callback)(_in char*& sTextureName);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CExternalTextureSourceProxy : public EarthView::World::Graphic::CExternalTextureSource
			{
			private:
				EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_Callback* m_EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_Callback;
				EarthView_World_Graphic_CExternalTextureSource_shutDown_void_Callback* m_EarthView_World_Graphic_CExternalTextureSource_shutDown_void_Callback;
				EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_Callback* m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_Callback;
				EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_Callback* m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_Callback;
				EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface_Callback;
			public:
				CExternalTextureSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CExternalTextureSource(pList)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_shutDown_void_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool(EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_shutDown_void(EarthView_World_Graphic_CExternalTextureSource_shutDown_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_shutDown_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString(EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString(EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString(EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString(EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString(EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual ev_bool initialise()
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CExternalTextureSource::initialise();
				}
				virtual void shutDown()
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_shutDown_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CExternalTextureSource_shutDown_void_Callback();
					}
					else
						return this->CExternalTextureSource::shutDown();
				}
				virtual void createDefinedTexture(_in const EVString& sMaterialName, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* sMaterialName_Char = sMaterialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_Callback(sMaterialName_Char, groupName_Char);
					}
					else
						return this->CExternalTextureSource::createDefinedTexture(sMaterialName, groupName);
				}
				virtual void createDefinedTexture(_in const EVString& sMaterialName)
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* sMaterialName_Char = sMaterialName.makeBuffer();
						m_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_Callback(sMaterialName_Char);
					}
					else
						return this->CExternalTextureSource::createDefinedTexture(sMaterialName);
				}
				virtual void destroyAdvancedTexture(_in const EVString& sTextureName, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* sTextureName_Char = sTextureName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_Callback(sTextureName_Char, groupName_Char);
					}
					else
						return this->CExternalTextureSource::destroyAdvancedTexture(sTextureName, groupName);
				}
				virtual void destroyAdvancedTexture(_in const EVString& sTextureName)
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* sTextureName_Char = sTextureName.makeBuffer();
						m_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_Callback(sTextureName_Char);
					}
					else
						return this->CExternalTextureSource::destroyAdvancedTexture(sTextureName);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CExternalTextureSource::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CExternalTextureSource::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CExternalTextureSource::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CExternalTextureSource::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CExternalTextureSource::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CExternalTextureSourceProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_setInputName_void_EVString(void *pObjectXXXX, _in char* sIN )
			{
				EarthView::World::Core::ev_string sIN1 = sIN;
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->setInputName(sIN1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CExternalTextureSource_getInputName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getInputName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_setFPS_void_ev_int32(void *pObjectXXXX, _in ev_int32 iFPS )
			{
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->setFPS(iFPS);
			}
			extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Graphic_CExternalTextureSource_getFPS_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				const ev_int32 objXXXX = ptrNativeObject->getFPS();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_setPlayMode_void_eTexturePlayMode(void *pObjectXXXX, _in int eMode )
			{
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->setPlayMode((EarthView::World::Graphic::eTexturePlayMode)eMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CExternalTextureSource_getPlayMode_eTexturePlayMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				EarthView::World::Graphic::eTexturePlayMode objXXXX = ptrNativeObject->getPlayMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_setTextureTecPassStateLevel_void_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 t, _in ev_int32 p, _in ev_int32 s )
			{
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->setTextureTecPassStateLevel(t, p, s);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_getTextureTecPassStateLevel_void_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _inout ev_int32& t, _inout ev_int32& p, _inout ev_int32& s )
			{
				const EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->getTextureTecPassStateLevel(t, p, s);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_addBaseParams_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->addBaseParams();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CExternalTextureSource_getPluginStringName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getPluginStringName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CExternalTextureSource_getDictionaryStringName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDictionaryStringName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				if (dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::initialise();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->initialise();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CExternalTextureSource_initialise_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::initialise();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_shutDown_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				if (dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::shutDown();
				else
					ptrNativeObject->shutDown();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_shutDown_void( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_shutDown_void_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_shutDown_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_shutDown_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::shutDown();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString(void *pObjectXXXX, _in const char* sMaterialName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string sMaterialName1 = sMaterialName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				if (dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::createDefinedTexture(sMaterialName1, groupName1);
				else
					ptrNativeObject->createDefinedTexture(sMaterialName1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* sMaterialName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string sMaterialName1 = sMaterialName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::createDefinedTexture(sMaterialName1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString(void *pObjectXXXX, _in const char* sMaterialName )
			{
				EarthView::World::Core::ev_string sMaterialName1 = sMaterialName;
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				if (dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::createDefinedTexture(sMaterialName1);
				else
					ptrNativeObject->createDefinedTexture(sMaterialName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_createDefinedTexture_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* sMaterialName )
			{
				EarthView::World::Core::ev_string sMaterialName1 = sMaterialName;
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::createDefinedTexture(sMaterialName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString(void *pObjectXXXX, _in const char* sTextureName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string sTextureName1 = sTextureName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				if (dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::destroyAdvancedTexture(sTextureName1, groupName1);
				else
					ptrNativeObject->destroyAdvancedTexture(sTextureName1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* sTextureName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string sTextureName1 = sTextureName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::destroyAdvancedTexture(sTextureName1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString(void *pObjectXXXX, _in const char* sTextureName )
			{
				EarthView::World::Core::ev_string sTextureName1 = sTextureName;
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				if (dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::destroyAdvancedTexture(sTextureName1);
				else
					ptrNativeObject->destroyAdvancedTexture(sTextureName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CExternalTextureSource_destroyAdvancedTexture_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* sTextureName )
			{
				EarthView::World::Core::ev_string sTextureName1 = sTextureName;
				EarthView::World::Graphic::CExternalTextureSource* ptrNativeObject = (EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CExternalTextureSource::destroyAdvancedTexture(sTextureName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CExternalTextureSourceProxy* ptr = dynamic_cast<CExternalTextureSourceProxy*>((EarthView::World::Graphic::CExternalTextureSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CExternalTextureSource_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
		}
	}
}
