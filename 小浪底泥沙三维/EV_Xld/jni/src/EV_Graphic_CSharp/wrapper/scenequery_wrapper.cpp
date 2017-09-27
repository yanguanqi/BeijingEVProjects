/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scenequery.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CSceneQueryProxy : public EarthView::World::Graphic::CSceneQuery
			{
			private:
				EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CSceneQuery_WorldFragment_fragmentType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) pObjectXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragmentType objXXXX = ptrNativeObject->fragmentType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneQuery_WorldFragment_fragmentType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjectXXXX)->fragmentType = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CSceneQuery_WorldFragment_singleIntersection( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->singleIntersection;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneQuery_WorldFragment_singleIntersection( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjectXXXX)->singleIntersection = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::Planes*  _stdcall Get_EarthView_World_Graphic_CSceneQuery_WorldFragment_planes( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) pObjectXXXX;
				EarthView::World::Spatial::Math::Planes* objXXXX = ptrNativeObject->planes;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneQuery_WorldFragment_planes( void *pObjectXXXX, EarthView::World::Spatial::Math::Planes*  value )
			{
				((EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjectXXXX)->planes = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CSceneQuery_WorldFragment_geometry( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->geometry;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneQuery_WorldFragment_geometry( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjectXXXX)->geometry = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderOperation*  _stdcall Get_EarthView_World_Graphic_CSceneQuery_WorldFragment_renderOp( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation* objXXXX = ptrNativeObject->renderOp;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneQuery_WorldFragment_renderOp( void *pObjectXXXX, EarthView::World::Graphic::CRenderOperation*  value )
			{
				((EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjectXXXX)->renderOp = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneQuery_WorldFragmentTypeSet_push_ev_bool_WorldFragmentType(void *pObjectXXXX, _in const int& key )
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push((EarthView::World::Graphic::CSceneQuery::WorldFragmentType&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneQuery_WorldFragmentTypeSet_exist_ev_bool_WorldFragmentType(void *pObjectXXXX, _in const int& key )
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist((EarthView::World::Graphic::CSceneQuery::WorldFragmentType&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneQuery_WorldFragmentTypeSet_erase_void_WorldFragmentType(void *pObjectXXXX, _in const int& key )
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjectXXXX;
				ptrNativeObject->erase((EarthView::World::Graphic::CSceneQuery::WorldFragmentType&)key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSceneQuery_WorldFragmentTypeSet_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneQuery_WorldFragmentTypeSet_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneQuery_WorldFragmentTypeSet_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneQuery::setQueryMask(mask);
				else
					ptrNativeObject->setQueryMask(mask);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CSceneQueryProxy* ptr = dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneQuery::setQueryMask(mask);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQuery::getQueryMask();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getQueryMask();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CSceneQueryProxy* ptr = dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQuery::getQueryMask();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneQuery::setQueryTypeMask(mask);
				else
					ptrNativeObject->setQueryTypeMask(mask);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CSceneQueryProxy* ptr = dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneQuery::setQueryTypeMask(mask);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQuery::getQueryTypeMask();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getQueryTypeMask();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CSceneQueryProxy* ptr = dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQuery::getQueryTypeMask();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType(void *pObjectXXXX, _in int wft )
			{
				EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneQuery::setWorldFragmentType((EarthView::World::Graphic::CSceneQuery::WorldFragmentType)wft);
				else
					ptrNativeObject->setWorldFragmentType((EarthView::World::Graphic::CSceneQuery::WorldFragmentType)wft);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CSceneQueryProxy* ptr = dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_NoVirtual(void *pObjectXXXX, _in int wft )
			{
				EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneQuery::setWorldFragmentType((EarthView::World::Graphic::CSceneQuery::WorldFragmentType)wft);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneQuery::WorldFragmentType objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQuery::getWorldFragmentType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneQuery::WorldFragmentType objXXXX = ptrNativeObject->getWorldFragmentType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CSceneQueryProxy* ptr = dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragmentType objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQuery::getWorldFragmentType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  _stdcall EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQuery::getSupportedWorldFragmentTypes();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* objXXXX = ptrNativeObject->getSupportedWorldFragmentTypes();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CSceneQueryProxy* ptr = dynamic_cast<CSceneQueryProxy*>((EarthView::World::Graphic::CSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  _stdcall EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSceneQuery*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQuery::getSupportedWorldFragmentTypes();
				return objXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* object);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* object, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			class CSceneQueryListenerProxy : public EarthView::World::Graphic::CSceneQueryListener
			{
			private:
				EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback;
			public:
				CSceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSceneQueryListener(pList)
				{
					m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* object)
				{
					if(m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback(object);
						return returnValue;
					}
					else
						return this->CSceneQueryListener::queryResult(object);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* object, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback(object, &indexVec);
						return returnValue;
					}
					else
						return this->CSceneQueryListener::queryResult(object, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CSceneQueryListener::queryResult(fragment);
				}
			};
			REGISTER_FACTORY_CLASS(CSceneQueryListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* object )
			{
				EarthView::World::Graphic::CSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CSceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryListenerProxy*>((EarthView::World::Graphic::CSceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQueryListener::queryResult(object);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(object);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CSceneQueryListenerProxy* ptr = dynamic_cast<CSceneQueryListenerProxy*>((EarthView::World::Graphic::CSceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* object )
			{
				EarthView::World::Graphic::CSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CSceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQueryListener::queryResult(object);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* object, _inout void* indexVec )
			{
				EarthView::World::Graphic::CSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CSceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryListenerProxy*>((EarthView::World::Graphic::CSceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQueryListener::queryResult(object, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(object, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CSceneQueryListenerProxy* ptr = dynamic_cast<CSceneQueryListenerProxy*>((EarthView::World::Graphic::CSceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* object, _inout void* indexVec )
			{
				EarthView::World::Graphic::CSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CSceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQueryListener::queryResult(object, *(EarthView::World::Core::IntVector*)indexVec);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CSceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CSceneQueryListenerProxy*>((EarthView::World::Graphic::CSceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQueryListener::queryResult(fragment);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(fragment);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CSceneQueryListenerProxy* ptr = dynamic_cast<CSceneQueryListenerProxy*>((EarthView::World::Graphic::CSceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneQueryListener_queryResult_ev_bool_WorldFragment_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CSceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneQueryListener::queryResult(fragment);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_push_back_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject*& ref_t )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_push_front_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject*& ref_t )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ptrNativeObject->push_front(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_front_CMovableObject(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_back_CMovableObject(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_at_CMovableObject_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_insert_void_ev_uint32_CMovableObject(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CMovableObject*& ref_t )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_push_back_void_WorldFragment(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment*& ref_t )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_push_front_void_WorldFragment(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment*& ref_t )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ptrNativeObject->push_front(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneQuery::WorldFragment*  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_front_WorldFragment(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragment* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneQuery::WorldFragment*  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_back_WorldFragment(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragment* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneQuery::WorldFragment*  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_at_WorldFragment_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragment* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_insert_void_ev_uint32_WorldFragment(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CSceneQuery::WorldFragment*& ref_t )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultWorldFragmentList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall Get_EarthView_World_Graphic_SceneQueryResultEntry_movable( void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultEntry*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->movable;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_SceneQueryResultEntry_movable( void *pObjectXXXX, EarthView::World::Graphic::CMovableObject*  value )
			{
				((EarthView::World::Graphic::SceneQueryResultEntry*)pObjectXXXX)->movable = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_SceneQueryResultEntry_objIndexVec( void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultEntry*) pObjectXXXX;
				EarthView::World::Core::IntVector &objXXXX = ptrNativeObject->objIndexVec;
				EarthView::World::Core::IntVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_SceneQueryResultEntry_objIndexVec( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::SceneQueryResultEntry*)pObjectXXXX)->objIndexVec = *(EarthView::World::Core::IntVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_push_back_void_SceneQueryResultEntry(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::SceneQueryResultEntry*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_push_front_void_SceneQueryResultEntry(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Graphic::SceneQueryResultEntry*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_front_SceneQueryResultEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResultEntry& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::SceneQueryResultEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_back_SceneQueryResultEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResultEntry& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::SceneQueryResultEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_at_SceneQueryResultEntry_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResultEntry& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::SceneQueryResultEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_insert_void_ev_uint32_SceneQueryResultEntry(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::SceneQueryResultEntry*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryResultMovableListEx_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_SceneQueryResult_movables( void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResult*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResultMovableList &objXXXX = ptrNativeObject->movables;
				EarthView::World::Graphic::SceneQueryResultMovableList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_SceneQueryResult_movables( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::SceneQueryResult*)pObjectXXXX)->movables = *(EarthView::World::Graphic::SceneQueryResultMovableList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_SceneQueryResult_movablesEx( void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResult*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResultMovableListEx &objXXXX = ptrNativeObject->movablesEx;
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_SceneQueryResult_movablesEx( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::SceneQueryResult*)pObjectXXXX)->movablesEx = *(EarthView::World::Graphic::SceneQueryResultMovableListEx*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_SceneQueryResult_worldFragments( void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::SceneQueryResult*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList &objXXXX = ptrNativeObject->worldFragments;
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_SceneQueryResult_worldFragments( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::SceneQueryResult*)pObjectXXXX)->worldFragments = *(EarthView::World::Graphic::SceneQueryResultWorldFragmentList*)value;
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CRegionSceneQueryProxy : public EarthView::World::Graphic::CRegionSceneQuery
			{
			private:
				EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CRegionSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_clearResults_void(EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CRegionSceneQuery::execute();
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->CRegionSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CRegionSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Callback();
					}
					else
						return this->CRegionSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CRegionSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CRegionSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CRegionSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CRegionSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRegionSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CRegionSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRegionSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CRegionSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CRegionSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CRegionSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CRegionSceneQueryProxy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* object);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* object, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			class CRegionSceneQueryListenerProxy : public EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener
			{
			private:
				EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback;
			public:
				CRegionSceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionSceneQueryListener(pList)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CRegionSceneQueryListener::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CRegionSceneQueryListener::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CRegionSceneQueryListener::queryResult(fragment);
				}
			};
			REGISTER_FACTORY_CLASS(CRegionSceneQueryListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first )
			{
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryListenerProxy*>((EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(first);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(first);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CRegionSceneQueryListenerProxy* ptr = dynamic_cast<CRegionSceneQueryListenerProxy*>((EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first )
			{
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(first);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec )
			{
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryListenerProxy*>((EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(first, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(first, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CRegionSceneQueryListenerProxy* ptr = dynamic_cast<CRegionSceneQueryListenerProxy*>((EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_CMovableObject_IntVector_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec )
			{
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(first, *(EarthView::World::Core::IntVector*)indexVec);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryListenerProxy*>((EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(fragment);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(fragment);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CRegionSceneQueryListenerProxy* ptr = dynamic_cast<CRegionSceneQueryListenerProxy*>((EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_CRegionSceneQueryListener_queryResult_ev_bool_WorldFragment_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(fragment);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*  _stdcall EarthView_World_Graphic_CRegionSceneQuery_getListenerPtr_CRegionSceneQueryListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				const EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener* objXXXX = ptrNativeObject->getListenerPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::execute();
					EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->execute();
					EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::execute();
				EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::getLastResults();
					EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->getLastResults();
					EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::getLastResults();
				EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRegionSceneQuery_clearResults_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::clearResults();
				else
					ptrNativeObject->clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::queryResult(first);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(first);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::queryResult(first);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::queryResult(first, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(first, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::queryResult(first, *(EarthView::World::Core::IntVector*)indexVec);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::queryResult(fragment);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(fragment);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CRegionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRegionSceneQuery::queryResult(fragment);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CRegionSceneQueryProxy* ptr = dynamic_cast<CRegionSceneQueryProxy*>((EarthView::World::Graphic::CRegionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRegionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CAxisAlignedBoxSceneQueryProxy : public EarthView::World::Graphic::CAxisAlignedBoxSceneQuery
			{
			private:
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CAxisAlignedBoxSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CAxisAlignedBoxSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CAxisAlignedBoxSceneQuery::execute();
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->CAxisAlignedBoxSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CAxisAlignedBoxSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void_Callback();
					}
					else
						return this->CAxisAlignedBoxSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CAxisAlignedBoxSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CAxisAlignedBoxSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CAxisAlignedBoxSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CAxisAlignedBoxSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CAxisAlignedBoxSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CAxisAlignedBoxSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CAxisAlignedBoxSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CAxisAlignedBoxSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CAxisAlignedBoxSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CAxisAlignedBoxSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CAxisAlignedBoxSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setBox_void_CAxisAlignedBox(void *pObjectXXXX, _in const void* box )
			{
				EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX;
				ptrNativeObject->setBox(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CSphereSceneQueryProxy : public EarthView::World::Graphic::CSphereSceneQuery
			{
			private:
				EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CSphereSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_clearResults_void(EarthView_World_Graphic_CSphereSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CSphereSceneQuery::execute();
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->CSphereSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CSphereSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSceneQuery_clearResults_void_Callback();
					}
					else
						return this->CSphereSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CSphereSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CSphereSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CSphereSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CSphereSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSphereSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CSphereSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSphereSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CSphereSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CSphereSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CSphereSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CSphereSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereSceneQuery_setSphere_void_CSphere(void *pObjectXXXX, _in const void* sphere )
			{
				EarthView::World::Graphic::CSphereSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX;
				ptrNativeObject->setSphere(*(EarthView::World::Spatial::Math::CSphere*)sphere);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSphereSceneQuery_getSphere_CSphere(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CSphere& objXXXX = ptrNativeObject->getSphere();
				const EarthView::World::Spatial::Math::CSphere *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_clearResults_void_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CSphereSceneQueryProxy* ptr = dynamic_cast<CSphereSceneQueryProxy*>((EarthView::World::Graphic::CSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CPlaneBoundedVolumeListSceneQueryProxy : public EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery
			{
			private:
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CPlaneBoundedVolumeListSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CPlaneBoundedVolumeListSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::execute();
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback();
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CPlaneBoundedVolumeListSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CPlaneBoundedVolumeListSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setVolumes_void_PlaneBoundedVolumeList(void *pObjectXXXX, _in const void* volumes )
			{
				EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX;
				ptrNativeObject->setVolumes(*(EarthView::World::Spatial::Math::PlaneBoundedVolumeList*)volumes);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getVolumes_PlaneBoundedVolumeList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX;
				const EarthView::World::Spatial::Math::PlaneBoundedVolumeList& objXXXX = ptrNativeObject->getVolumes();
				const EarthView::World::Spatial::Math::PlaneBoundedVolumeList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance);
			class CRaySceneQueryListenerProxy : public EarthView::World::Graphic::CRaySceneQueryListener
			{
			private:
				EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_Callback* m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_Callback;
				EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_Callback* m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_Callback;
			public:
				CRaySceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRaySceneQueryListener(pList)
				{
					m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real(EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real(EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_Callback = pCallback;
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_Callback(obj, distance);
						return returnValue;
					}
					else
						return this->CRaySceneQueryListener::queryResult(obj, distance);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CRaySceneQueryListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout EarthView::World::Graphic::CColourValue& cv, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback(obj, distance, e, c, i, r, &cv, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CRaySceneQueryListener::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_Callback(fragment, distance);
						return returnValue;
					}
					else
						return this->CRaySceneQueryListener::queryResult(fragment, distance);
				}
			};
			REGISTER_FACTORY_CLASS(CRaySceneQueryListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryListenerProxy*>((EarthView::World::Graphic::CRaySceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(obj, distance);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback )
			{
				CRaySceneQueryListenerProxy* ptr = dynamic_cast<CRaySceneQueryListenerProxy*>((EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryListenerProxy*>((EarthView::World::Graphic::CRaySceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback )
			{
				CRaySceneQueryListenerProxy* ptr = dynamic_cast<CRaySceneQueryListenerProxy*>((EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryListenerProxy*>((EarthView::World::Graphic::CRaySceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance, e, c, i, r, *(EarthView::World::Graphic::CColourValue*)cv, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(obj, distance, e, c, i, r, *(EarthView::World::Graphic::CColourValue*)cv, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback )
			{
				CRaySceneQueryListenerProxy* ptr = dynamic_cast<CRaySceneQueryListenerProxy*>((EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance, e, c, i, r, *(EarthView::World::Graphic::CColourValue*)cv, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryListenerProxy*>((EarthView::World::Graphic::CRaySceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(fragment, distance);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(fragment, distance);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback )
			{
				CRaySceneQueryListenerProxy* ptr = dynamic_cast<CRaySceneQueryListenerProxy*>((EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQueryListener_queryResult_ev_bool_WorldFragment_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(fragment, distance);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_distance( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->distance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_distance( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->distance = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_movable( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->movable;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_movable( void *pObjectXXXX, EarthView::World::Graphic::CMovableObject*  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->movable = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_objectIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->objectIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_objectIndex( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->objectIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_submeshIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->submeshIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_submeshIndex( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->submeshIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_instanceIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->instanceIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_instanceIndex( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->instanceIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_segmentIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->segmentIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_segmentIndex( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->segmentIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_elevation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->elevation;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_elevation( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->elevation = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_classification( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->classification;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_classification( void *pObjectXXXX, ev_uint8  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->classification = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_intensity( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->intensity;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_intensity( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->intensity = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_returnNumber( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->returnNumber;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_returnNumber( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->returnNumber = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_color( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->color;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_color( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->color = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_pointOfIntersection( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->pointOfIntersection;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_pointOfIntersection( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->pointOfIntersection = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_pixelPointOfIntersection( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector2 &objXXXX = ptrNativeObject->pixelPointOfIntersection;
				EarthView::World::Spatial::Math::CVector2 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_pixelPointOfIntersection( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->pixelPointOfIntersection = *(EarthView::World::Spatial::Math::CVector2*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneQuery::WorldFragment*  _stdcall Get_EarthView_World_Graphic_RaySceneQueryResultEntry_worldFragment( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjectXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragment* objXXXX = ptrNativeObject->worldFragment;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RaySceneQueryResultEntry_worldFragment( void *pObjectXXXX, EarthView::World::Graphic::CSceneQuery::WorldFragment*  value )
			{
				((EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjectXXXX)->worldFragment = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RaySceneQueryResultEntry_OperatorLessThan_ev_bool_RaySceneQueryResultEntry(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry& objXXXX = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjXXXX;
				const EarthView::World::Graphic::RaySceneQueryResultEntry& objXXXX1 = *(EarthView::World::Graphic::RaySceneQueryResultEntry*)rhs;
				return objXXXX < objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RaySceneQueryResultEntry_OperatorGreaterThan_ev_bool_RaySceneQueryResultEntry(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry& objXXXX = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjXXXX;
				const EarthView::World::Graphic::RaySceneQueryResultEntry& objXXXX1 = *(EarthView::World::Graphic::RaySceneQueryResultEntry*)rhs;
				return objXXXX > objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RaySceneQueryResult_push_back_void_RaySceneQueryResultEntry(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::RaySceneQueryResultEntry*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RaySceneQueryResult_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RaySceneQueryResult_front_RaySceneQueryResultEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				EarthView::World::Graphic::RaySceneQueryResultEntry& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::RaySceneQueryResultEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RaySceneQueryResult_back_RaySceneQueryResultEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				EarthView::World::Graphic::RaySceneQueryResultEntry& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::RaySceneQueryResultEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RaySceneQueryResult_insert_void_ev_uint32_RaySceneQueryResultEntry(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::RaySceneQueryResultEntry*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RaySceneQueryResult_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RaySceneQueryResult_swap_void_RaySceneQueryResult(void *pObjectXXXX, _inout void* res )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::RaySceneQueryResult*)res);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RaySceneQueryResult_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RaySceneQueryResult_OperatorIndex_RaySceneQueryResultEntry_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RaySceneQueryResult& objYYYY = *(EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				EarthView::World::Graphic::RaySceneQueryResultEntry& objXXXX = objYYYY[n];
				EarthView::World::Graphic::RaySceneQueryResultEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RaySceneQueryResult_at_RaySceneQueryResultEntry_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				EarthView::World::Graphic::RaySceneQueryResultEntry& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::RaySceneQueryResultEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RaySceneQueryResult_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RaySceneQueryResult_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RaySceneQueryResult_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RaySceneQueryResult_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RaySceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::RaySceneQueryResult*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance);
			typedef const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Callback)(_in const void* ray);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback)(_in ev_bool sort, _in ev_uint16 maxresults);
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Callback)(_in ev_bool sort);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Callback)(_in EarthView::World::Graphic::CRaySceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CRaySceneQueryProxy : public EarthView::World::Graphic::CRaySceneQuery
			{
			private:
				EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback* m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback;
				EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback* m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback;
				EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback* m_EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback;
				EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Callback* m_EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Callback;
				EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Callback* m_EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Callback;
				EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback* m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback;
				EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Callback* m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Callback;
				EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Callback* m_EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Callback;
				EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Callback* m_EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Callback;
				EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Callback* m_EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Callback;
				EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CRaySceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CRaySceneQuery(pList)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real(EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real(EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener(EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay(EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_getRay_CRay(EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16(EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool(EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool(EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16(EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult(EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener(EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult(EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_clearResults_void(EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback(obj, distance);
						return returnValue;
					}
					else
						return this->CRaySceneQuery::queryResult(obj, distance);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CRaySceneQuery::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout EarthView::World::Graphic::CColourValue& cv, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback(obj, distance, e, c, i, r, &cv, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CRaySceneQuery::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback(fragment, distance);
						return returnValue;
					}
					else
						return this->CRaySceneQuery::queryResult(fragment, distance);
				}
				virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* getListenerPtr()
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* returnValue = m_EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::getListenerPtr();
				}
				virtual void setRay(_in const EarthView::World::Spatial::Math::CRay& ray)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Callback(&ray);
					}
					else
						return this->CRaySceneQuery::setRay(ray);
				}
				virtual const EarthView::World::Spatial::Math::CRay& getRay() const
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRay& returnValue = *(EarthView::World::Spatial::Math::CRay*)m_EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::getRay();
				}
				virtual void setSortByDistance(_in ev_bool sort, _in ev_uint16 maxresults)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback(sort, maxresults);
					}
					else
						return this->CRaySceneQuery::setSortByDistance(sort, maxresults);
				}
				virtual void setSortByDistance(_in ev_bool sort)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Callback(sort);
					}
					else
						return this->CRaySceneQuery::setSortByDistance(sort);
				}
				virtual ev_bool getSortByDistance() const
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::getSortByDistance();
				}
				virtual ev_uint16 getMaxResults() const
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::getMaxResults();
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::execute();
				}
				virtual void execute(_in EarthView::World::Graphic::CRaySceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Callback(listener);
					}
					else
						return this->CRaySceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& getLastResults()
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Callback();
					}
					else
						return this->CRaySceneQuery::clearResults();
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CRaySceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CRaySceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CRaySceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CRaySceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CRaySceneQueryProxy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance);
			class CRaySceneQueryInternalListenerProxy : public EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener
			{
			private:
				EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_Callback* m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_Callback;
				EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_Callback* m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_Callback;
			public:
				CRaySceneQueryInternalListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRaySceneQueryInternalListener(pList)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real(EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real(EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_Callback = pCallback;
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_Callback(obj, distance);
						return returnValue;
					}
					else
						return this->CRaySceneQueryInternalListener::queryResult(obj, distance);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CRaySceneQueryInternalListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout EarthView::World::Graphic::CColourValue& cv, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback(obj, distance, e, c, i, r, &cv, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CRaySceneQueryInternalListener::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_Callback(fragment, distance);
						return returnValue;
					}
					else
						return this->CRaySceneQueryInternalListener::queryResult(fragment, distance);
				}
			};
			REGISTER_FACTORY_CLASS(CRaySceneQueryInternalListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(obj, distance);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback )
			{
				CRaySceneQueryInternalListenerProxy* ptr = dynamic_cast<CRaySceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback )
			{
				CRaySceneQueryInternalListenerProxy* ptr = dynamic_cast<CRaySceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance, e, c, i, r, *(EarthView::World::Graphic::CColourValue*)cv, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(obj, distance, e, c, i, r, *(EarthView::World::Graphic::CColourValue*)cv, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback )
			{
				CRaySceneQueryInternalListenerProxy* ptr = dynamic_cast<CRaySceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance, e, c, i, r, *(EarthView::World::Graphic::CColourValue*)cv, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(fragment, distance);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(fragment, distance);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback )
			{
				CRaySceneQueryInternalListenerProxy* ptr = dynamic_cast<CRaySceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_CRaySceneQueryInternalListener_queryResult_ev_bool_WorldFragment_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(fragment, distance);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(obj, distance);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance, e, c, i, r, *(EarthView::World::Graphic::CColourValue*)cv, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(obj, distance, e, c, i, r, *(EarthView::World::Graphic::CColourValue*)cv, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance, e, c, i, r, *(EarthView::World::Graphic::CColourValue*)cv, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector2*)pixelpoint);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::queryResult(fragment, distance);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(fragment, distance);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::queryResult(fragment, distance);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*  _stdcall EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getListenerPtr();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* objXXXX = ptrNativeObject->getListenerPtr();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*  _stdcall EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getListenerPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay(void *pObjectXXXX, _in const void* ray )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::setRay(*(EarthView::World::Spatial::Math::CRay*)ray);
				else
					ptrNativeObject->setRay(*(EarthView::World::Spatial::Math::CRay*)ray);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_NoVirtual(void *pObjectXXXX, _in const void* ray )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::setRay(*(EarthView::World::Spatial::Math::CRay*)ray);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRaySceneQuery_getRay_CRay(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CRay& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getRay();
					const EarthView::World::Spatial::Math::CRay *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CRay& objXXXX = ptrNativeObject->getRay();
					const EarthView::World::Spatial::Math::CRay *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_getRay_CRay( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_getRay_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CRay& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getRay();
				const EarthView::World::Spatial::Math::CRay *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_bool sort, _in ev_uint16 maxresults )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::setSortByDistance(sort, maxresults);
				else
					ptrNativeObject->setSortByDistance(sort, maxresults);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_bool sort, _in ev_uint16 maxresults )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::setSortByDistance(sort, maxresults);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool(void *pObjectXXXX, _in ev_bool sort )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::setSortByDistance(sort);
				else
					ptrNativeObject->setSortByDistance(sort);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool sort )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::setSortByDistance(sort);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getSortByDistance();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getSortByDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getSortByDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getMaxResults();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getMaxResults();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getMaxResults();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::execute();
					EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->execute();
					EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::execute();
				EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getLastResults();
					EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->getLastResults();
					EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::getLastResults();
				EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_clearResults_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::clearResults();
				else
					ptrNativeObject->clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySceneQuery_clearResults_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRaySceneQuery::clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CRaySceneQueryProxy* ptr = dynamic_cast<CRaySceneQueryProxy*>((EarthView::World::Graphic::CRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback)(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			class CIntersectionSceneQueryListenerProxy : public EarthView::World::Graphic::CIntersectionSceneQueryListener
			{
			private:
				EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback;
			public:
				CIntersectionSceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CIntersectionSceneQueryListener(pList)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject(EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment(EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = pCallback;
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback(first, second);
						return returnValue;
					}
					else
						return this->CIntersectionSceneQueryListener::queryResult(first, second);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback(movable, fragment);
						return returnValue;
					}
					else
						return this->CIntersectionSceneQueryListener::queryResult(movable, fragment);
				}
			};
			REGISTER_FACTORY_CLASS(CIntersectionSceneQueryListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second )
			{
				EarthView::World::Graphic::CIntersectionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryListenerProxy*>((EarthView::World::Graphic::CIntersectionSceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQueryListener::queryResult(first, second);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(first, second);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback )
			{
				CIntersectionSceneQueryListenerProxy* ptr = dynamic_cast<CIntersectionSceneQueryListenerProxy*>((EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second )
			{
				EarthView::World::Graphic::CIntersectionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQueryListener::queryResult(first, second);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CIntersectionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryListenerProxy*>((EarthView::World::Graphic::CIntersectionSceneQueryListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQueryListener::queryResult(movable, fragment);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(movable, fragment);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback )
			{
				CIntersectionSceneQueryListenerProxy* ptr = dynamic_cast<CIntersectionSceneQueryListenerProxy*>((EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQueryListener_queryResult_ev_bool_CMovableObject_WorldFragment_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CIntersectionSceneQueryListener* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQueryListener::queryResult(movable, fragment);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall Get_EarthView_World_Graphic_SceneQueryMovableObjectPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableObjectPair* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableObjectPair*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_SceneQueryMovableObjectPair_first( void *pObjectXXXX, EarthView::World::Graphic::CMovableObject*  value )
			{
				((EarthView::World::Graphic::SceneQueryMovableObjectPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall Get_EarthView_World_Graphic_SceneQueryMovableObjectPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableObjectPair* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableObjectPair*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_SceneQueryMovableObjectPair_second( void *pObjectXXXX, EarthView::World::Graphic::CMovableObject*  value )
			{
				((EarthView::World::Graphic::SceneQueryMovableObjectPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall Get_EarthView_World_Graphic_SceneQueryMovableObjectWorldFragmentPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_SceneQueryMovableObjectWorldFragmentPair_first( void *pObjectXXXX, EarthView::World::Graphic::CMovableObject*  value )
			{
				((EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneQuery::WorldFragment*  _stdcall Get_EarthView_World_Graphic_SceneQueryMovableObjectWorldFragmentPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*) pObjectXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragment* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_SceneQueryMovableObjectWorldFragmentPair_second( void *pObjectXXXX, EarthView::World::Graphic::CSceneQuery::WorldFragment*  value )
			{
				((EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_push_back_void_SceneQueryMovableObjectPair(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::SceneQueryMovableObjectPair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_front_SceneQueryMovableObjectPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectPair& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::SceneQueryMovableObjectPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_back_SceneQueryMovableObjectPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectPair& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::SceneQueryMovableObjectPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_insert_void_ev_uint32_SceneQueryMovableObjectPair(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::SceneQueryMovableObjectPair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_OperatorIndex_SceneQueryMovableObjectPair_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList& objYYYY = *(EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectPair& objXXXX = objYYYY[n];
				EarthView::World::Graphic::SceneQueryMovableObjectPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_at_SceneQueryMovableObjectPair_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectPair& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::SceneQueryMovableObjectPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableIntersectionList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_push_back_void_SceneQueryMovableObjectWorldFragmentPair(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_front_SceneQueryMovableObjectWorldFragmentPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_back_SceneQueryMovableObjectWorldFragmentPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_insert_void_ev_uint32_SceneQueryMovableObjectWorldFragmentPair(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_OperatorIndex_SceneQueryMovableObjectWorldFragmentPair_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList& objYYYY = *(EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair& objXXXX = objYYYY[n];
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_at_SceneQueryMovableObjectWorldFragmentPair_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneQueryMovableWorldFragmentIntersectionList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList* ptrNativeObject = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_IntersectionSceneQueryResult_movables2movables( void *pObjectXXXX )
			{
				EarthView::World::Graphic::IntersectionSceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::IntersectionSceneQueryResult*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryMovableIntersectionList &objXXXX = ptrNativeObject->movables2movables;
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_IntersectionSceneQueryResult_movables2movables( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::IntersectionSceneQueryResult*)pObjectXXXX)->movables2movables = *(EarthView::World::Graphic::SceneQueryMovableIntersectionList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_IntersectionSceneQueryResult_movables2world( void *pObjectXXXX )
			{
				EarthView::World::Graphic::IntersectionSceneQueryResult* ptrNativeObject = (EarthView::World::Graphic::IntersectionSceneQueryResult*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList &objXXXX = ptrNativeObject->movables2world;
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_IntersectionSceneQueryResult_movables2world( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::IntersectionSceneQueryResult*)pObjectXXXX)->movables2world = *(EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*)value;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback)(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback)(_in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CIntersectionSceneQueryProxy : public EarthView::World::Graphic::CIntersectionSceneQuery
			{
			private:
				EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CIntersectionSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CIntersectionSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject(EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment(EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener(EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult(EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult(EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void(EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback(first, second);
						return returnValue;
					}
					else
						return this->CIntersectionSceneQuery::queryResult(first, second);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback(movable, fragment);
						return returnValue;
					}
					else
						return this->CIntersectionSceneQuery::queryResult(movable, fragment);
				}
				virtual const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* getListenerPtr()
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* returnValue = m_EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback();
						return returnValue;
					}
					else
						return this->CIntersectionSceneQuery::getListenerPtr();
				}
				virtual EarthView::World::Graphic::IntersectionSceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::IntersectionSceneQueryResult& returnValue = *(EarthView::World::Graphic::IntersectionSceneQueryResult*)m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CIntersectionSceneQuery::execute();
				}
				virtual void execute(_in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback(listener);
					}
					else
						return this->CIntersectionSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::IntersectionSceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::IntersectionSceneQueryResult& returnValue = *(EarthView::World::Graphic::IntersectionSceneQueryResult*)m_EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CIntersectionSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Callback();
					}
					else
						return this->CIntersectionSceneQuery::clearResults();
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CIntersectionSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CIntersectionSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CIntersectionSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CIntersectionSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CIntersectionSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CIntersectionSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CIntersectionSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CIntersectionSceneQueryProxy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback)(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			class CIntersectionSceneQueryInternalListenerProxy : public EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener
			{
			private:
				EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback;
			public:
				CIntersectionSceneQueryInternalListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CIntersectionSceneQueryInternalListener(pList)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject(EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment(EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = pCallback;
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback(first, second);
						return returnValue;
					}
					else
						return this->CIntersectionSceneQueryInternalListener::queryResult(first, second);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback(movable, fragment);
						return returnValue;
					}
					else
						return this->CIntersectionSceneQueryInternalListener::queryResult(movable, fragment);
				}
			};
			REGISTER_FACTORY_CLASS(CIntersectionSceneQueryInternalListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener::queryResult(first, second);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(first, second);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback )
			{
				CIntersectionSceneQueryInternalListenerProxy* ptr = dynamic_cast<CIntersectionSceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener::queryResult(first, second);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener::queryResult(movable, fragment);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(movable, fragment);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback )
			{
				CIntersectionSceneQueryInternalListenerProxy* ptr = dynamic_cast<CIntersectionSceneQueryInternalListenerProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_CIntersectionSceneQueryInternalListener_queryResult_ev_bool_CMovableObject_WorldFragment_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener::queryResult(movable, fragment);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::queryResult(first, second);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(first, second);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::queryResult(first, second);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::queryResult(movable, fragment);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->queryResult(movable, fragment);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::queryResult(movable, fragment);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::getListenerPtr();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* objXXXX = ptrNativeObject->getListenerPtr();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::getListenerPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::IntersectionSceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::execute();
					EarthView::World::Graphic::IntersectionSceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::IntersectionSceneQueryResult& objXXXX = ptrNativeObject->execute();
					EarthView::World::Graphic::IntersectionSceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				EarthView::World::Graphic::IntersectionSceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::execute();
				EarthView::World::Graphic::IntersectionSceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::IntersectionSceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::getLastResults();
					EarthView::World::Graphic::IntersectionSceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::IntersectionSceneQueryResult& objXXXX = ptrNativeObject->getLastResults();
					EarthView::World::Graphic::IntersectionSceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				EarthView::World::Graphic::IntersectionSceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::getLastResults();
				EarthView::World::Graphic::IntersectionSceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::clearResults();
				else
					ptrNativeObject->clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CIntersectionSceneQuery::clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CIntersectionSceneQueryProxy* ptr = dynamic_cast<CIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
		}
	}
}
