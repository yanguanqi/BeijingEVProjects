/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dmeasureheightparam.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CAnalysis3DMeasureHeightParamProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface_Callback;
				public:
					CAnalysis3DMeasureHeightParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DMeasureHeightParam(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface(EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CAnalysis3DMeasureHeightParam::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CAnalysis3DMeasureHeightParam::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CAnalysis3DMeasureHeightParam::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CAnalysis3DMeasureHeightParam::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CAnalysis3DMeasureHeightParam::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CAnalysis3DMeasureHeightParamProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setOriginPoint_void_CVector3(void *pObjectXXXX, _inout void* cen )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam*) pObjectXXXX;
					ptrNativeObject->setOriginPoint(*(EarthView::World::Spatial::Math::CVector3*)cen);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getOriginPoint_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getOriginPoint();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CAnalysis3DMeasureHeightParamProxy* ptr = dynamic_cast<CAnalysis3DMeasureHeightParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CAnalysis3DMeasureHeightParamProxy* ptr = dynamic_cast<CAnalysis3DMeasureHeightParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CAnalysis3DMeasureHeightParamProxy* ptr = dynamic_cast<CAnalysis3DMeasureHeightParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString_Callback* pCallback )
				{
					CAnalysis3DMeasureHeightParamProxy* ptr = dynamic_cast<CAnalysis3DMeasureHeightParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CAnalysis3DMeasureHeightParamProxy* ptr = dynamic_cast<CAnalysis3DMeasureHeightParamProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureHeightParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DMeasureHeightParam_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
