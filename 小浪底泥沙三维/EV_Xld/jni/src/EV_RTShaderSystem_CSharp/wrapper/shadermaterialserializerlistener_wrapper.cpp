/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shadermaterialserializerlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CMaterial* mat);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTechnique* tech);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CPass* pass);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTextureUnitState* textureUnit);
				class CSGMaterialSerializerListenerProxy : public EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback;
				public:
					CSGMaterialSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSGMaterialSerializerListener(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback = pCallback;
					}
					virtual void materialEventRaised(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CMaterial* mat)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback(ser, (int)event, skip, mat);
						}
						else
							return this->CSGMaterialSerializerListener::materialEventRaised(ser, event, skip, mat);
					}
					virtual void techniqueEventRaised(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTechnique* tech)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback(ser, (int)event, skip, tech);
						}
						else
							return this->CSGMaterialSerializerListener::techniqueEventRaised(ser, event, skip, tech);
					}
					virtual void passEventRaised(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CPass* tech)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback(ser, (int)event, skip, tech);
						}
						else
							return this->CSGMaterialSerializerListener::passEventRaised(ser, event, skip, tech);
					}
					virtual void textureUnitStateEventRaised(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTextureUnitState* textureUnit)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback(ser, (int)event, skip, textureUnit);
						}
						else
							return this->CSGMaterialSerializerListener::textureUnitStateEventRaised(ser, event, skip, textureUnit);
					}
				};
				REGISTER_FACTORY_CLASS(CSGMaterialSerializerListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CMaterial* mat )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX;
					if (dynamic_cast<CSGMaterialSerializerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::materialEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, mat);
					else
						ptrNativeObject->materialEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, mat);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Callback* pCallback )
				{
					CSGMaterialSerializerListenerProxy* ptr = dynamic_cast<CSGMaterialSerializerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CMaterial* mat )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::materialEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, mat);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTechnique* tech )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX;
					if (dynamic_cast<CSGMaterialSerializerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::techniqueEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, tech);
					else
						ptrNativeObject->techniqueEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, tech);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Callback* pCallback )
				{
					CSGMaterialSerializerListenerProxy* ptr = dynamic_cast<CSGMaterialSerializerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTechnique* tech )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::techniqueEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, tech);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CPass* tech )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX;
					if (dynamic_cast<CSGMaterialSerializerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::passEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, tech);
					else
						ptrNativeObject->passEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, tech);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Callback* pCallback )
				{
					CSGMaterialSerializerListenerProxy* ptr = dynamic_cast<CSGMaterialSerializerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CPass* tech )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::passEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, tech);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTextureUnitState* textureUnit )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX;
					if (dynamic_cast<CSGMaterialSerializerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::textureUnitStateEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, textureUnit);
					else
						ptrNativeObject->textureUnitStateEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, textureUnit);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Callback* pCallback )
				{
					CSGMaterialSerializerListenerProxy* ptr = dynamic_cast<CSGMaterialSerializerListenerProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in int event, _inout ev_bool& skip, _in const EarthView::World::Graphic::CTextureUnitState* textureUnit )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener::textureUnitStateEventRaised(ser, (EarthView::World::Graphic::CMaterialSerializer::SerializeEvent)event, skip, textureUnit);
				}
			}
		}
	}
}
