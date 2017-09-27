/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/pixelcountlodstrategy.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef Real  ( _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Callback)(_in const EarthView::World::Graphic::CMovableObject* movableObject, _in const EarthView::World::Graphic::CCamera* camera);
			typedef Real  ( _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_Callback)(_in Real factor);
			typedef Real  ( _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real_Callback)(_in Real userValue);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Callback)(_in Real value, _in const void* meshLodUsageList);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_Callback)(_in Real value, _in const void* materialLodValueList);
			typedef void  ( _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_Callback)(_inout void* meshLodUsageList);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_Callback)(_in const void* values);
			class CPixelCountLodStrategyProxy : public EarthView::World::Graphic::CPixelCountLodStrategy
			{
			private:
				EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Callback* m_EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Callback;
				EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_Callback* m_EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_Callback;
				EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_Callback* m_EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_Callback;
				EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real_Callback* m_EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real_Callback;
				EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Callback* m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Callback;
				EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_Callback* m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_Callback;
				EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_Callback* m_EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_Callback;
				EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_Callback* m_EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_Callback;
			public:
				CPixelCountLodStrategyProxy(EarthView::World::Core::CNameValuePairList *pList) : CPixelCountLodStrategy(pList)
				{
					m_EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Callback = NULL;
					m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_Callback = NULL;
					m_EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_Callback = NULL;
					m_EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera(EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real(EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real(EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real(EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList(EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList(EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList(EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList(EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_Callback = pCallback;
				}
				virtual Real getValueImpl(_in const EarthView::World::Graphic::CMovableObject* movableObject, _in const EarthView::World::Graphic::CCamera* camera) const
				{
					if(m_EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Callback(movableObject, camera);
						return returnValue;
					}
					else
						return this->CPixelCountLodStrategy::getValueImpl(movableObject, camera);
				}
				virtual Real getBaseValue() const
				{
					if(m_EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CPixelCountLodStrategy::getBaseValue();
				}
				virtual Real transformBias(_in Real factor) const
				{
					if(m_EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_Callback(factor);
						return returnValue;
					}
					else
						return this->CPixelCountLodStrategy::transformBias(factor);
				}
				virtual ev_uint16 getIndex(_in Real value, _in const EarthView::World::Graphic::CMesh::MeshLodUsageList& meshLodUsageList) const
				{
					if(m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Callback(value, &meshLodUsageList);
						return returnValue;
					}
					else
						return this->CPixelCountLodStrategy::getIndex(value, meshLodUsageList);
				}
				virtual ev_uint16 getIndex(_in Real value, _in const EarthView::World::Graphic::LodValueList& materialLodValueList) const
				{
					if(m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_Callback(value, &materialLodValueList);
						return returnValue;
					}
					else
						return this->CPixelCountLodStrategy::getIndex(value, materialLodValueList);
				}
				virtual void sort(_inout EarthView::World::Graphic::CMesh::MeshLodUsageList& meshLodUsageList) const
				{
					if(m_EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_Callback(&meshLodUsageList);
					}
					else
						return this->CPixelCountLodStrategy::sort(meshLodUsageList);
				}
				virtual ev_bool isSorted(_in const EarthView::World::Graphic::LodValueList& values) const
				{
					if(m_EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_Callback(&values);
						return returnValue;
					}
					else
						return this->CPixelCountLodStrategy::isSorted(values);
				}
				virtual Real transformUserValue(_in Real userValue) const
				{
					if(m_EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real_Callback(userValue);
						return returnValue;
					}
					else
						return this->CPixelCountLodStrategy::transformUserValue(userValue);
				}
			};
			REGISTER_FACTORY_CLASS(CPixelCountLodStrategyProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CMovableObject* movableObject, _in const EarthView::World::Graphic::CCamera* camera )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::getValueImpl(movableObject, camera);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getValueImpl(movableObject, camera);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Callback* pCallback )
			{
				CPixelCountLodStrategyProxy* ptr = dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getValueImpl_Real_CMovableObject_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CMovableObject* movableObject, _in const EarthView::World::Graphic::CCamera* camera )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::getValueImpl(movableObject, camera);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::getBaseValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBaseValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_Callback* pCallback )
			{
				CPixelCountLodStrategyProxy* ptr = dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getBaseValue_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::getBaseValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real(void *pObjectXXXX, _in Real factor )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::transformBias(factor);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->transformBias(factor);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_Callback* pCallback )
			{
				CPixelCountLodStrategyProxy* ptr = dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_transformBias_Real_Real_NoVirtual(void *pObjectXXXX, _in Real factor )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::transformBias(factor);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList(void *pObjectXXXX, _in Real value, _in const void* meshLodUsageList )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::getIndex(value, *(EarthView::World::Graphic::CMesh::MeshLodUsageList*)meshLodUsageList);
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getIndex(value, *(EarthView::World::Graphic::CMesh::MeshLodUsageList*)meshLodUsageList);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList( void *pObjectXXXX, EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Callback* pCallback )
			{
				CPixelCountLodStrategyProxy* ptr = dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_NoVirtual(void *pObjectXXXX, _in Real value, _in const void* meshLodUsageList )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::getIndex(value, *(EarthView::World::Graphic::CMesh::MeshLodUsageList*)meshLodUsageList);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList(void *pObjectXXXX, _in Real value, _in const void* materialLodValueList )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::getIndex(value, *(EarthView::World::Graphic::LodValueList*)materialLodValueList);
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getIndex(value, *(EarthView::World::Graphic::LodValueList*)materialLodValueList);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList( void *pObjectXXXX, EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_Callback* pCallback )
			{
				CPixelCountLodStrategyProxy* ptr = dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getIndex_ev_uint16_Real_LodValueList_NoVirtual(void *pObjectXXXX, _in Real value, _in const void* materialLodValueList )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::getIndex(value, *(EarthView::World::Graphic::LodValueList*)materialLodValueList);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList(void *pObjectXXXX, _inout void* meshLodUsageList )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::sort(*(EarthView::World::Graphic::CMesh::MeshLodUsageList*)meshLodUsageList);
				else
					ptrNativeObject->sort(*(EarthView::World::Graphic::CMesh::MeshLodUsageList*)meshLodUsageList);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList( void *pObjectXXXX, EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_Callback* pCallback )
			{
				CPixelCountLodStrategyProxy* ptr = dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_sort_void_MeshLodUsageList_NoVirtual(void *pObjectXXXX, _inout void* meshLodUsageList )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::sort(*(EarthView::World::Graphic::CMesh::MeshLodUsageList*)meshLodUsageList);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList(void *pObjectXXXX, _in const void* values )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				if (dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::isSorted(*(EarthView::World::Graphic::LodValueList*)values);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isSorted(*(EarthView::World::Graphic::LodValueList*)values);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList( void *pObjectXXXX, EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_Callback* pCallback )
			{
				CPixelCountLodStrategyProxy* ptr = dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_isSorted_ev_bool_LodValueList_NoVirtual(void *pObjectXXXX, _in const void* values )
			{
				const EarthView::World::Graphic::CPixelCountLodStrategy* ptrNativeObject = (EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CPixelCountLodStrategy::isSorted(*(EarthView::World::Graphic::LodValueList*)values);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getSingleton_CPixelCountLodStrategy( )
			{
				EarthView::World::Graphic::CPixelCountLodStrategy& objXXXX = EarthView::World::Graphic::CPixelCountLodStrategy::getSingleton();
				EarthView::World::Graphic::CPixelCountLodStrategy *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPixelCountLodStrategy*  _stdcall EarthView_World_Graphic_CPixelCountLodStrategy_getSingletonPtr_CPixelCountLodStrategy( )
			{
				EarthView::World::Graphic::CPixelCountLodStrategy* objXXXX = EarthView::World::Graphic::CPixelCountLodStrategy::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real_Callback* pCallback )
			{
				CPixelCountLodStrategyProxy* ptr = dynamic_cast<CPixelCountLodStrategyProxy*>((EarthView::World::Graphic::CPixelCountLodStrategy*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPixelCountLodStrategy_transformUserValue_Real_Real(pCallback);
				}
			}
		}
	}
}
