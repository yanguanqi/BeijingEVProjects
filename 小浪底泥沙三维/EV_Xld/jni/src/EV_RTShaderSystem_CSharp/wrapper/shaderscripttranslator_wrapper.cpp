/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderscripttranslator.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_Callback)(_in char*& typeName);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
				typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_Callback)();
				class CSGScriptTranslatorProxy : public EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_Callback;
				public:
					CSGScriptTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CSGScriptTranslator(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString(EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_Callback = pCallback;
					}
					virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
						}
						else
							return this->CSGScriptTranslator::translate(compiler, node);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* getGeneratedSubRenderState(_in const EVString& typeName)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* typeName_Char = typeName.makeBuffer();
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_Callback(typeName_Char);
							return returnValue;
						}
						else
							return this->CSGScriptTranslator::getGeneratedSubRenderState(typeName);
					}
					virtual EarthView::World::Graphic::CScriptTranslator* clone()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_Callback();
							return returnValue;
						}
						else
							return this->CSGScriptTranslator::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CSGScriptTranslatorProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjectXXXX;
					if (dynamic_cast<CSGScriptTranslatorProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
					else
						ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
				{
					CSGScriptTranslatorProxy* ptr = dynamic_cast<CSGScriptTranslatorProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString(void *pObjectXXXX, _in const char* typeName )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjectXXXX;
					if (dynamic_cast<CSGScriptTranslatorProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::getGeneratedSubRenderState(typeName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->getGeneratedSubRenderState(typeName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_Callback* pCallback )
				{
					CSGScriptTranslatorProxy* ptr = dynamic_cast<CSGScriptTranslatorProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_getGeneratedSubRenderState_CSubRenderState_EVString_NoVirtual(void *pObjectXXXX, _in const char* typeName )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::getGeneratedSubRenderState(typeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjectXXXX;
					if (dynamic_cast<CSGScriptTranslatorProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_Callback* pCallback )
				{
					CSGScriptTranslatorProxy* ptr = dynamic_cast<CSGScriptTranslatorProxy*>((EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSGScriptTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjectXXXX;
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::clone();
					return objXXXX;
				}
			}
		}
	}
}
