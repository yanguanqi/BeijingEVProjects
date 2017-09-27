/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dmeasurepointparam.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CAnalysis3DMeasurePointParamProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface_Callback;
				public:
					CAnalysis3DMeasurePointParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DMeasurePointParam(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CAnalysis3DMeasurePointParam::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CAnalysis3DMeasurePointParam::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CAnalysis3DMeasurePointParam::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CAnalysis3DMeasurePointParam::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CAnalysis3DMeasurePointParam::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CAnalysis3DMeasurePointParamProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setLocationPoint_void_CVector3(void *pObjectXXXX, _inout void* cen )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam*) pObjectXXXX;
					ptrNativeObject->setLocationPoint(*(EarthView::World::Spatial::Math::CVector3*)cen);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getLocationPoint_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getLocationPoint();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CAnalysis3DMeasurePointParamProxy* ptr = dynamic_cast<CAnalysis3DMeasurePointParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CAnalysis3DMeasurePointParamProxy* ptr = dynamic_cast<CAnalysis3DMeasurePointParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CAnalysis3DMeasurePointParamProxy* ptr = dynamic_cast<CAnalysis3DMeasurePointParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString_Callback* pCallback )
				{
					CAnalysis3DMeasurePointParamProxy* ptr = dynamic_cast<CAnalysis3DMeasurePointParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CAnalysis3DMeasurePointParamProxy* ptr = dynamic_cast<CAnalysis3DMeasurePointParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasurePointParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasurePointParam_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
