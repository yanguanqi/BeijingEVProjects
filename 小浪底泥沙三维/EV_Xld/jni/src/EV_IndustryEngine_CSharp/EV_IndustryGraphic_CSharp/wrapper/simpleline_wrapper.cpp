/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/simpleline.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			typedef EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_Callback)();
			typedef EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_Callback)(_in const ev_int32& index);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_Callback)(_in const ev_int32& index);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_Callback)();
			typedef void*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in const ev_real32& red, _in const ev_real32& green, _in const ev_real32& blue, _in const ev_real32& alpha);
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_Callback)(_in const ev_int32& id);
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_Callback)(_in const ev_bool& value);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_Callback)(_in const ev_uint32& indexPos);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_Callback)(_in const ev_bool& value);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_Callback)();
			class CSimplelineProxy : public EarthView::IndustryEngine::IndustryGraphic::CSimpleline
			{
			private:
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_Callback;
			public:
				CSimplelineProxy(EarthView::World::Core::CNameValuePairList *pList) : CSimpleline(pList)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_Callback = pCallback;
				}
				virtual EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* addSubSimpleline()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_Callback != NULL && this->isCustomExtend())
					{
						EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_Callback();
						return returnValue;
					}
					else
						return this->CSimpleline::addSubSimpleline();
				}
				virtual EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* getSubSimpleline(_in const ev_int32& index)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_Callback(index);
						return returnValue;
					}
					else
						return this->CSimpleline::getSubSimpleline(index);
				}
				virtual void removeSubSimpleline(_in const ev_int32& index)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_Callback(index);
					}
					else
						return this->CSimpleline::removeSubSimpleline(index);
				}
				virtual void removeAllPoints()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_Callback();
					}
					else
						return this->CSimpleline::removeAllPoints();
				}
				virtual EarthView::World::Graphic::CColourValue& getColor()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CSimpleline::getColor();
				}
				virtual void setColor(_in const ev_real32& red, _in const ev_real32& green, _in const ev_real32& blue, _in const ev_real32& alpha)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback(red, green, blue, alpha);
					}
					else
						return this->CSimpleline::setColor(red, green, blue, alpha);
				}
				virtual ev_int32 getID()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CSimpleline::getID();
				}
				virtual void setID(_in const ev_int32& id)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_Callback(id);
					}
					else
						return this->CSimpleline::setID(id);
				}
				virtual ev_int32 getCount()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CSimpleline::getCount();
				}
				virtual ev_bool getVisible()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleline::getVisible();
				}
				virtual void setVisible(_in const ev_bool& value)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_Callback(value);
					}
					else
						return this->CSimpleline::setVisible(value);
				}
				virtual ev_bool containVertex(_in const ev_uint32& indexPos)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_Callback(indexPos);
						return returnValue;
					}
					else
						return this->CSimpleline::containVertex(indexPos);
				}
				virtual void setNeedHightlight(_in const ev_bool& value)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_Callback(value);
					}
					else
						return this->CSimpleline::setNeedHightlight(value);
				}
				virtual ev_bool getNeedHightlight()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleline::getNeedHightlight();
				}
			};
			REGISTER_FACTORY_CLASS(CSimplelineProxy);
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
				{
					EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::addSubSimpleline();
					return objXXXX;
				}
				else
				{
					EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* objXXXX = ptrNativeObject->addSubSimpleline();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_addSubSimpleline_CSubSimpleline_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::addSubSimpleline();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
				{
					EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getSubSimpleline(index);
					return objXXXX;
				}
				else
				{
					EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* objXXXX = ptrNativeObject->getSubSimpleline(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getSubSimpleline_CSubSimpleline_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getSubSimpleline(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::removeSubSimpleline(index);
				else
					ptrNativeObject->removeSubSimpleline(index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeSubSimpleline_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::removeSubSimpleline(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::removeAllPoints();
				else
					ptrNativeObject->removeAllPoints();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_removeAllPoints_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::removeAllPoints();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getColor();
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getColor();
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getColor_CColourValue_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getColor();
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in const ev_real32& red, _in const ev_real32& green, _in const ev_real32& blue, _in const ev_real32& alpha )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setColor(red, green, blue, alpha);
				else
					ptrNativeObject->setColor(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setColor_void_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(void *pObjectXXXX, _in const ev_real32& red, _in const ev_real32& green, _in const ev_real32& blue, _in const ev_real32& alpha )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setColor(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getID();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getID_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32(void *pObjectXXXX, _in const ev_int32& id )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setID(id);
				else
					ptrNativeObject->setID(id);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setID_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& id )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setID(id);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getCount();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getCount_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setVisible(value);
				else
					ptrNativeObject->setVisible(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setVisible(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32(void *pObjectXXXX, _in const ev_uint32& indexPos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::containVertex(indexPos);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->containVertex(indexPos);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_containVertex_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in const ev_uint32& indexPos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::containVertex(indexPos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setNeedHightlight(value);
				else
					ptrNativeObject->setNeedHightlight(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_setNeedHightlight_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setNeedHightlight(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getNeedHightlight();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getNeedHightlight();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_Callback* pCallback )
			{
				CSimplelineProxy* ptr = dynamic_cast<CSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSimpleline_getNeedHightlight_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getNeedHightlight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_UNIQUE_ID()
			{
				ev_int32 objXXXX = EarthView::IndustryEngine::IndustryGraphic::CSimpleline::UNIQUE_ID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_IndustryEngine_IndustryGraphic_CSimpleline_UNIQUE_ID( ev_int32  value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline::UNIQUE_ID = value;
			}
		}
	}
}
