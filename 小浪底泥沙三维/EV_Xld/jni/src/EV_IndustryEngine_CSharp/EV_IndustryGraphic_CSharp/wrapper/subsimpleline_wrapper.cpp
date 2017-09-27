/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/subsimpleline.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_Callback)(_in const ev_real64& x, _in const ev_real64& y, _in const ev_real64& z);
			typedef void*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_Callback)(_in const ev_int32& index);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_Callback)(_in const ev_int32& index);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_Callback)();
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_Callback)(_in const ev_int32& beginVertexPos);
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_Callback)(_in const ev_int32& endVertexPos);
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_Callback)(_in const ev_int32& beginIndicePos);
			typedef ev_int32  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_Callback)(_in const ev_int32& endIndicePos);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_Callback)(_in const ev_uint32& indexPos);
			class CSubSimplelineProxy : public EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline
			{
			private:
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_Callback;
			public:
				CSubSimplelineProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubSimpleline(pList)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32(EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_Callback = pCallback;
				}
				virtual void addPoint(_in const ev_real64& x, _in const ev_real64& y, _in const ev_real64& z)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
					}
					else
						return this->CSubSimpleline::addPoint(x, y, z);
				}
				virtual EarthView::World::Spatial::Math::CVector3 getPoint(_in const ev_int32& index)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_Callback(index);
						return returnValue;
					}
					else
						return this->CSubSimpleline::getPoint(index);
				}
				virtual void removePoint(_in const ev_int32& index)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_Callback(index);
					}
					else
						return this->CSubSimpleline::removePoint(index);
				}
				virtual void removeAllPoints()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_Callback();
					}
					else
						return this->CSubSimpleline::removeAllPoints();
				}
				virtual ev_int32 getCount()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CSubSimpleline::getCount();
				}
				virtual ev_int32 getBeginVertexPos()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CSubSimpleline::getBeginVertexPos();
				}
				virtual void setBeginVertexPos(_in const ev_int32& beginVertexPos)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_Callback(beginVertexPos);
					}
					else
						return this->CSubSimpleline::setBeginVertexPos(beginVertexPos);
				}
				virtual ev_int32 getEndVertexPos()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CSubSimpleline::getEndVertexPos();
				}
				virtual void setEndVertexPos(_in const ev_int32& endVertexPos)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_Callback(endVertexPos);
					}
					else
						return this->CSubSimpleline::setEndVertexPos(endVertexPos);
				}
				virtual ev_int32 getBeginIndicePos()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CSubSimpleline::getBeginIndicePos();
				}
				virtual void setBeginIndicePos(_in const ev_int32& beginIndicePos)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_Callback(beginIndicePos);
					}
					else
						return this->CSubSimpleline::setBeginIndicePos(beginIndicePos);
				}
				virtual ev_int32 getEndIndicePos()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CSubSimpleline::getEndIndicePos();
				}
				virtual void setEndIndicePos(_in const ev_int32& endIndicePos)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_Callback(endIndicePos);
					}
					else
						return this->CSubSimpleline::setEndIndicePos(endIndicePos);
				}
				virtual ev_bool containVertex(_in const ev_uint32& indexPos)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_Callback(indexPos);
						return returnValue;
					}
					else
						return this->CSubSimpleline::containVertex(indexPos);
				}
			};
			REGISTER_FACTORY_CLASS(CSubSimplelineProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const ev_real64& x, _in const ev_real64& y, _in const ev_real64& z )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::addPoint(x, y, z);
				else
					ptrNativeObject->addPoint(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_addPoint_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64& x, _in const ev_real64& y, _in const ev_real64& z )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::addPoint(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getPoint(index);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPoint(index);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getPoint_CVector3_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getPoint(index);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::removePoint(index);
				else
					ptrNativeObject->removePoint(index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removePoint_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& index )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::removePoint(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::removeAllPoints();
				else
					ptrNativeObject->removeAllPoints();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_removeAllPoints_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::removeAllPoints();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getCount();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getCount_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getBeginVertexPos();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getBeginVertexPos();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginVertexPos_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getBeginVertexPos();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32(void *pObjectXXXX, _in const ev_int32& beginVertexPos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setBeginVertexPos(beginVertexPos);
				else
					ptrNativeObject->setBeginVertexPos(beginVertexPos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginVertexPos_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& beginVertexPos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setBeginVertexPos(beginVertexPos);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getEndVertexPos();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getEndVertexPos();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndVertexPos_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getEndVertexPos();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32(void *pObjectXXXX, _in const ev_int32& endVertexPos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setEndVertexPos(endVertexPos);
				else
					ptrNativeObject->setEndVertexPos(endVertexPos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndVertexPos_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& endVertexPos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setEndVertexPos(endVertexPos);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getBeginIndicePos();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getBeginIndicePos();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getBeginIndicePos_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getBeginIndicePos();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32(void *pObjectXXXX, _in const ev_int32& beginIndicePos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setBeginIndicePos(beginIndicePos);
				else
					ptrNativeObject->setBeginIndicePos(beginIndicePos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setBeginIndicePos_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& beginIndicePos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setBeginIndicePos(beginIndicePos);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getEndIndicePos();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getEndIndicePos();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_getEndIndicePos_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getEndIndicePos();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32(void *pObjectXXXX, _in const ev_int32& endIndicePos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setEndIndicePos(endIndicePos);
				else
					ptrNativeObject->setEndIndicePos(endIndicePos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_setEndIndicePos_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32& endIndicePos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setEndIndicePos(endIndicePos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32(void *pObjectXXXX, _in const ev_uint32& indexPos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				if (dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::containVertex(indexPos);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->containVertex(indexPos);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_Callback* pCallback )
			{
				CSubSimplelineProxy* ptr = dynamic_cast<CSubSimplelineProxy*>((EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CSubSimpleline_containVertex_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in const ev_uint32& indexPos )
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::containVertex(indexPos);
				return objXXXX;
			}
		}
	}
}
