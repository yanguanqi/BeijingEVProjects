/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/terrainrevisor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			typedef char*  ( _stdcall EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_Callback)();
			typedef EarthView::World::Spatial3D::ITerrainRevisor*  ( _stdcall EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback)(_inout void* pt);
			class ITerrainRevisorProxy : public EarthView::World::Spatial3D::ITerrainRevisor
			{
			private:
				EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_Callback* m_EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_Callback;
				EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_Callback* m_EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_Callback;
				EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback* m_EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback;
			public:
				ITerrainRevisorProxy(EarthView::World::Core::CNameValuePairList *pList) : ITerrainRevisor(pList)
				{
					m_EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_Callback = NULL;
					m_EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString(EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor(EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint(EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback = pCallback;
				}
				virtual EVString getKey() const
				{
					if(m_EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_Callback();
						return returnValue;
					}
					else
						return this->ITerrainRevisor::getKey();
				}
				virtual EarthView::World::Spatial3D::ITerrainRevisor* clone()
				{
					if(m_EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::ITerrainRevisor* returnValue = m_EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_Callback();
						return returnValue;
					}
					else
						return this->ITerrainRevisor::clone();
				}
				virtual ev_bool modifyTerrain(_inout EarthView::World::Spatial::Geometry::CPoint& pt)
				{
					if(m_EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback(&pt);
						return returnValue;
					}
					else
						return this->ITerrainRevisor::modifyTerrain(pt);
				}
			};
			REGISTER_FACTORY_CLASS(ITerrainRevisorProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::ITerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjectXXXX;
				if (dynamic_cast<ITerrainRevisorProxy*>((EarthView::World::Spatial3D::ITerrainRevisor*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ITerrainRevisor::getKey();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getKey();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_Callback* pCallback )
			{
				ITerrainRevisorProxy* ptr = dynamic_cast<ITerrainRevisorProxy*>((EarthView::World::Spatial3D::ITerrainRevisor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ITerrainRevisor_getKey_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::ITerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ITerrainRevisor::getKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ITerrainRevisor*  _stdcall EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ITerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjectXXXX;
				if (dynamic_cast<ITerrainRevisorProxy*>((EarthView::World::Spatial3D::ITerrainRevisor*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::ITerrainRevisor* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ITerrainRevisor::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::ITerrainRevisor* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor( void *pObjectXXXX, EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_Callback* pCallback )
			{
				ITerrainRevisorProxy* ptr = dynamic_cast<ITerrainRevisorProxy*>((EarthView::World::Spatial3D::ITerrainRevisor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ITerrainRevisor*  _stdcall EarthView_World_Spatial3D_ITerrainRevisor_clone_ITerrainRevisor_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ITerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjectXXXX;
				EarthView::World::Spatial3D::ITerrainRevisor* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ITerrainRevisor::clone();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint(void *pObjectXXXX, _inout void* pt )
			{
				EarthView::World::Spatial3D::ITerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjectXXXX;
				if (dynamic_cast<ITerrainRevisorProxy*>((EarthView::World::Spatial3D::ITerrainRevisor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ITerrainRevisor::modifyTerrain(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->modifyTerrain(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint( void *pObjectXXXX, EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback* pCallback )
			{
				ITerrainRevisorProxy* ptr = dynamic_cast<ITerrainRevisorProxy*>((EarthView::World::Spatial3D::ITerrainRevisor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ITerrainRevisor_modifyTerrain_ev_bool_CPoint_NoVirtual(void *pObjectXXXX, _inout void* pt )
			{
				EarthView::World::Spatial3D::ITerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ITerrainRevisor::modifyTerrain(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				return objXXXX;
			}
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_Callback)();
			typedef EarthView::World::Spatial3D::ITerrainRevisor*  ( _stdcall EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback)(_inout void* pt);
			class CTerrainRevisorProxy : public EarthView::World::Spatial3D::CTerrainRevisor
			{
			private:
				EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_Callback* m_EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_Callback;
				EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_Callback* m_EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_Callback;
				EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback* m_EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback;
			public:
				CTerrainRevisorProxy(EarthView::World::Core::CNameValuePairList *pList) : CTerrainRevisor(pList)
				{
					m_EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_Callback = NULL;
					m_EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString(EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor(EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint(EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback = pCallback;
				}
				virtual EVString getKey() const
				{
					if(m_EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_Callback();
						return returnValue;
					}
					else
						return this->CTerrainRevisor::getKey();
				}
				virtual ev_bool modifyTerrain(_inout EarthView::World::Spatial::Geometry::CPoint& pt)
				{
					if(m_EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback(&pt);
						return returnValue;
					}
					else
						return this->CTerrainRevisor::modifyTerrain(pt);
				}
				virtual EarthView::World::Spatial3D::ITerrainRevisor* clone()
				{
					if(m_EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::ITerrainRevisor* returnValue = m_EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_Callback();
						return returnValue;
					}
					else
						return this->CTerrainRevisor::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CTerrainRevisorProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_OperatorAssign_CTerrainRevisor_CTerrainRevisor(void *pObjXXXX, _in const void* tr )
			{
				EarthView::World::Spatial3D::CTerrainRevisor& objXXXX = *((EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX);
				objXXXX = *(EarthView::World::Spatial3D::CTerrainRevisor*)tr;
				EarthView::World::Spatial3D::CTerrainRevisor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				if (dynamic_cast<CTerrainRevisorProxy*>((EarthView::World::Spatial3D::CTerrainRevisor*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTerrainRevisor::getKey();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getKey();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_Callback* pCallback )
			{
				CTerrainRevisorProxy* ptr = dynamic_cast<CTerrainRevisorProxy*>((EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_getKey_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTerrainRevisor::getKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_getRangeMode_TerrainRangeMode(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				EarthView::World::Spatial3D::TerrainRangeMode objXXXX = ptrNativeObject->getRangeMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_setRangeMode_void_TerrainRangeMode(void *pObjectXXXX, _in int m )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				ptrNativeObject->setRangeMode((EarthView::World::Spatial3D::TerrainRangeMode)m);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_getMode_TerrainReviseMode(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				EarthView::World::Spatial3D::TerrainReviseMode objXXXX = ptrNativeObject->getMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_setMode_void_TerrainReviseMode(void *pObjectXXXX, _in int m )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				ptrNativeObject->setMode((EarthView::World::Spatial3D::TerrainReviseMode)m);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_getFactor_Real(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getFactor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_setFactor_void_Real(void *pObjectXXXX, _in Real factor )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				ptrNativeObject->setFactor(factor);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPolygon*  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_getExtent_CPolygon(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::CPolygon* objXXXX = ptrNativeObject->getExtent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_setExtent_void_CPolygon(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CPolygon* extent )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				ptrNativeObject->setExtent(extent);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint(void *pObjectXXXX, _inout void* pt )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				if (dynamic_cast<CTerrainRevisorProxy*>((EarthView::World::Spatial3D::CTerrainRevisor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTerrainRevisor::modifyTerrain(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->modifyTerrain(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint( void *pObjectXXXX, EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_Callback* pCallback )
			{
				CTerrainRevisorProxy* ptr = dynamic_cast<CTerrainRevisorProxy*>((EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_modifyTerrain_ev_bool_CPoint_NoVirtual(void *pObjectXXXX, _inout void* pt )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTerrainRevisor::modifyTerrain(*(EarthView::World::Spatial::Geometry::CPoint*)pt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				ptrNativeObject->setEnabled(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_getEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_setAltitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 alt )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				ptrNativeObject->setAltitude(alt);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_getAltitude_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getAltitude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ITerrainRevisor*  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				if (dynamic_cast<CTerrainRevisorProxy*>((EarthView::World::Spatial3D::CTerrainRevisor*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::ITerrainRevisor* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTerrainRevisor::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::ITerrainRevisor* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor( void *pObjectXXXX, EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_Callback* pCallback )
			{
				CTerrainRevisorProxy* ptr = dynamic_cast<CTerrainRevisorProxy*>((EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ITerrainRevisor*  _stdcall EarthView_World_Spatial3D_CTerrainRevisor_clone_ITerrainRevisor_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainRevisor* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjectXXXX;
				EarthView::World::Spatial3D::ITerrainRevisor* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CTerrainRevisor::clone();
				return objXXXX;
			}
		}
	}
}
