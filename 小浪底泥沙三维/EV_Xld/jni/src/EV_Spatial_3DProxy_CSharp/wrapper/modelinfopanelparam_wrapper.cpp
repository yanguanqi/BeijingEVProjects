/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/modelinfopanelparam.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace ModelDB
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CModelInfoPanelParamProxy : public EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam
				{
				private:
					EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString_Callback;
					EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface_Callback;
				public:
					CModelInfoPanelParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelInfoPanelParam(pList)
					{
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString(EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList(EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString(EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface(EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CModelInfoPanelParam::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CModelInfoPanelParam::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CModelInfoPanelParam::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CModelInfoPanelParam::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CModelInfoPanelParam::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CModelInfoPanelParamProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setModelLongitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 longdegree )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setModelLongitude(longdegree);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getModelLongitude_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getModelLongitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setModelLatitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 ladegree )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setModelLatitude(ladegree);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getModelLatitude_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getModelLatitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setAltitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 altitude )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setAltitude(altitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getAltitude_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setAltitudeMode_void_ev_int32(void *pObjectXXXX, _in ev_int32 mode )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setAltitudeMode(mode);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getAltitudeMode_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getAltitudeMode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setAltitudeValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 alvalue )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setAltitudeValue(alvalue);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getAltitudeValue_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAltitudeValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setAngleX_void_ev_real64(void *pObjectXXXX, _in ev_real64 angleX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setAngleX(angleX);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getAngleX_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAngleX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setAngleY_void_ev_real64(void *pObjectXXXX, _in ev_real64 angleY )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setAngleY(angleY);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getAngleY_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAngleY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setAngleZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 angleZ )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setAngleZ(angleZ);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getAngleZ_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAngleZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setZoomX_void_ev_real64(void *pObjectXXXX, _in ev_real64 zoomX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setZoomX(zoomX);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getZoomX_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getZoomX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setZoomY_void_ev_real64(void *pObjectXXXX, _in ev_real64 zoomY )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setZoomY(zoomY);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getZoomY_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getZoomY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setZoomZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 zoomZ )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setZoomZ(zoomZ);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getZoomZ_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getZoomZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setID(id);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setComponentID_void_EVString(void *pObjectXXXX, _in const char* id )
				{
					EarthView::World::Core::ev_string id1 = id;
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setComponentID(id1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getComponentID_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getComponentID();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getLayer_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CModelInfoPanelParamProxy* ptr = dynamic_cast<CModelInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CModelInfoPanelParamProxy* ptr = dynamic_cast<CModelInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CModelInfoPanelParamProxy* ptr = dynamic_cast<CModelInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString_Callback* pCallback )
				{
					CModelInfoPanelParamProxy* ptr = dynamic_cast<CModelInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CModelInfoPanelParamProxy* ptr = dynamic_cast<CModelInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_ModelDB_CModelInfoPanelParam_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
