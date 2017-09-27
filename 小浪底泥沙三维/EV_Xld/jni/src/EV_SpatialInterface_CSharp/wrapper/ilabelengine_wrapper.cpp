/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ilabelengine.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_Callback)(_in ev_int32 classID, _in EarthView::World::Spatial::Display::ILabelProperty* labelProperty, _in const EarthView::World::Spatial::Geometry::IGeometry* geo, _inout char*& label, _in ev_int32 featureID);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_Callback)(_in ev_int32 classID, _in EarthView::World::Spatial::Display::ILabelProperty* labelProperty, _in const EarthView::World::Spatial::Geometry::IGeometry* geo, _inout char*& label_numerator, _inout char*& label_denominator, _in ev_int32 featureID);
				typedef EarthView::World::Spatial::Display::CLabelElements*  ( _stdcall EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_Callback)(_in const EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_Callback)();
				typedef const char*  ( _stdcall EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geo);
				class ILabelEngineProxy : public EarthView::World::Spatial::Display::ILabelEngine
				{
				private:
					EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_Callback* m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_Callback;
					EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_Callback* m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_Callback;
					EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_Callback* m_EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_Callback;
					EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_Callback* m_EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_Callback;
					EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_Callback* m_EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_Callback;
					EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_Callback* m_EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_Callback;
					EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_Callback* m_EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_Callback;
				public:
					ILabelEngineProxy(EarthView::World::Core::CNameValuePairList *pList) : ILabelEngine(pList)
					{
						m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32(EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32(EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements(EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope(EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool(EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void(EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString(EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry(EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_Callback = pCallback;
					}
					virtual void addFeature(_in ev_int32 classID, _in EarthView::World::Spatial::Display::ILabelProperty* labelProperty, _in const EarthView::World::Spatial::Geometry::IGeometry* geo, _inout EVString& label, _in ev_int32 featureID)
					{
						if(m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							char* label_Char = label.makeBuffer();
							m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_Callback(classID, labelProperty, geo, label_Char, featureID);
							label = label_Char;
							if(label_Char != NULL){ delete[] label_Char;label_Char = NULL;}
						}
						else
							return this->ILabelEngine::addFeature(classID, labelProperty, geo, label, featureID);
					}
					virtual void addFeature(_in ev_int32 classID, _in EarthView::World::Spatial::Display::ILabelProperty* labelProperty, _in const EarthView::World::Spatial::Geometry::IGeometry* geo, _inout EVString& label_numerator, _inout EVString& label_denominator, _in ev_int32 featureID)
					{
						if(m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							char* label_numerator_Char = label_numerator.makeBuffer();
							char* label_denominator_Char = label_denominator.makeBuffer();
							m_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_Callback(classID, labelProperty, geo, label_numerator_Char, label_denominator_Char, featureID);
							label_numerator = label_numerator_Char;
							if(label_numerator_Char != NULL){ delete[] label_numerator_Char;label_numerator_Char = NULL;}
							label_denominator = label_denominator_Char;
							if(label_denominator_Char != NULL){ delete[] label_denominator_Char;label_denominator_Char = NULL;}
						}
						else
							return this->ILabelEngine::addFeature(classID, labelProperty, geo, label_numerator, label_denominator, featureID);
					}
					virtual EarthView::World::Spatial::Display::CLabelElements* getLabelElements()
					{
						if(m_EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CLabelElements* returnValue = m_EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_Callback();
							return returnValue;
						}
						else
							return this->ILabelEngine::getLabelElements();
					}
					virtual void initialize(_in const EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent)
					{
						if(m_EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_Callback(display, extent);
						}
						else
							return this->ILabelEngine::initialize(display, extent);
					}
					virtual ev_bool isInitialized()
					{
						if(m_EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILabelEngine::isInitialized();
					}
					virtual void releaseResources()
					{
						if(m_EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_Callback();
						}
						else
							return this->ILabelEngine::releaseResources();
					}
					virtual const EVString getEngineName()
					{
						if(m_EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_Callback != NULL && this->isCustomExtend())
						{
							const EVString returnValue = m_EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILabelEngine::getEngineName();
					}
					virtual void addBarriers(_in const EarthView::World::Spatial::Geometry::IGeometry* geo)
					{
						if(m_EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_Callback(geo);
						}
						else
							return this->ILabelEngine::addBarriers(geo);
					}
				};
				REGISTER_FACTORY_CLASS(ILabelEngineProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32(void *pObjectXXXX, _in ev_int32 classID, _in EarthView::World::Spatial::Display::ILabelProperty* labelProperty, _in const EarthView::World::Spatial::Geometry::IGeometry* geo, _inout char*& label, _in ev_int32 featureID )
				{
					EarthView::World::Core::ev_string label1 = label;
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					if (dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::addFeature(classID, labelProperty, geo, label1, featureID);
					else
						ptrNativeObject->addFeature(classID, labelProperty, geo, label1, featureID);
					label=label1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_Callback* pCallback )
				{
					ILabelEngineProxy* ptr = dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 classID, _in EarthView::World::Spatial::Display::ILabelProperty* labelProperty, _in const EarthView::World::Spatial::Geometry::IGeometry* geo, _inout char*& label, _in ev_int32 featureID )
				{
					EarthView::World::Core::ev_string label1 = label;
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::addFeature(classID, labelProperty, geo, label1, featureID);
					label=label1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32(void *pObjectXXXX, _in ev_int32 classID, _in EarthView::World::Spatial::Display::ILabelProperty* labelProperty, _in const EarthView::World::Spatial::Geometry::IGeometry* geo, _inout char*& label_numerator, _inout char*& label_denominator, _in ev_int32 featureID )
				{
					EarthView::World::Core::ev_string label_numerator1 = label_numerator;
					EarthView::World::Core::ev_string label_denominator1 = label_denominator;
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					if (dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::addFeature(classID, labelProperty, geo, label_numerator1, label_denominator1, featureID);
					else
						ptrNativeObject->addFeature(classID, labelProperty, geo, label_numerator1, label_denominator1, featureID);
					label_numerator=label_numerator1.makeBuffer();label_denominator=label_denominator1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_Callback* pCallback )
				{
					ILabelEngineProxy* ptr = dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_addFeature_void_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 classID, _in EarthView::World::Spatial::Display::ILabelProperty* labelProperty, _in const EarthView::World::Spatial::Geometry::IGeometry* geo, _inout char*& label_numerator, _inout char*& label_denominator, _in ev_int32 featureID )
				{
					EarthView::World::Core::ev_string label_numerator1 = label_numerator;
					EarthView::World::Core::ev_string label_denominator1 = label_denominator;
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::addFeature(classID, labelProperty, geo, label_numerator1, label_denominator1, featureID);
					label_numerator=label_numerator1.makeBuffer();label_denominator=label_denominator1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CLabelElements*  _stdcall EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					if (dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CLabelElements* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::getLabelElements();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CLabelElements* objXXXX = ptrNativeObject->getLabelElements();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_Callback* pCallback )
				{
					ILabelEngineProxy* ptr = dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CLabelElements*  _stdcall EarthView_World_Spatial_Display_ILabelEngine_getLabelElements_CLabelElements_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					EarthView::World::Spatial::Display::CLabelElements* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::getLabelElements();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					if (dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::initialize(display, extent);
					else
						ptrNativeObject->initialize(display, extent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_Callback* pCallback )
				{
					ILabelEngineProxy* ptr = dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_initialize_void_ISpatialDisplay_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::initialize(display, extent);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					if (dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::isInitialized();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isInitialized();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_Callback* pCallback )
				{
					ILabelEngineProxy* ptr = dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelEngine_isInitialized_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::isInitialized();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					if (dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::releaseResources();
					else
						ptrNativeObject->releaseResources();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_Callback* pCallback )
				{
					ILabelEngineProxy* ptr = dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_releaseResources_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::releaseResources();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					if (dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*)ptrNativeObject) != NULL)
					{
						const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::getEngineName();
						return objXXXX.makeBuffer();
					}
					else
					{
						const EVString objXXXX = ptrNativeObject->getEngineName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_Callback* pCallback )
				{
					ILabelEngineProxy* ptr = dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_ILabelEngine_getEngineName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::getEngineName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geo )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					if (dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::addBarriers(geo);
					else
						ptrNativeObject->addBarriers(geo);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_Callback* pCallback )
				{
					ILabelEngineProxy* ptr = dynamic_cast<ILabelEngineProxy*>((EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelEngine_addBarriers_void_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geo )
				{
					EarthView::World::Spatial::Display::ILabelEngine* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelEngine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelEngine::addBarriers(geo);
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Display_CSubLabelElement_getRatateAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSubLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getRatateAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_CSubLabelElement_getLabelText_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSubLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getLabelText();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Display_CSubLabelElement_getLocation_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSubLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getLocation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSubLabelElement_setRotateAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial::Display::CSubLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjectXXXX;
					ptrNativeObject->setRotateAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSubLabelElement_setLabelText_void_EVString(void *pObjectXXXX, _in char* label )
				{
					EarthView::World::Core::ev_string label1 = label;
					EarthView::World::Spatial::Display::CSubLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjectXXXX;
					ptrNativeObject->setLabelText(label1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSubLabelElement_setLocation_void_IGeometry(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* location )
				{
					EarthView::World::Spatial::Display::CSubLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CSubLabelElement*) pObjectXXXX;
					ptrNativeObject->setLocation(location);
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_Display_CLabelElement_getSubElementCounts_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getSubElementCounts();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLabelElement_addSubElement_void_CSubLabelElement(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CSubLabelElement* ref_subElement )
				{
					EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					ptrNativeObject->addSubElement(ref_subElement);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::CSubLabelElement*  _stdcall EarthView_World_Spatial_Display_CLabelElement_getSubElement_CSubLabelElement_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					const EarthView::World::Spatial::Display::CSubLabelElement* objXXXX = ptrNativeObject->getSubElement(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_bool  _stdcall EarthView_World_Spatial_Display_CLabelElement_getPlaced_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					const ev_bool objXXXX = ptrNativeObject->getPlaced();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_Display_CLabelElement_getFeatureID_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getFeatureID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_Display_CLabelElement_getClassID_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getClassID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_CLabelElement_getLabel_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getLabel();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLabelElement_setPlaced_void_ev_bool(void *pObjectXXXX, _in ev_bool placed )
				{
					EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					ptrNativeObject->setPlaced(placed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLabelElement_setFeatureID_void_ev_int32(void *pObjectXXXX, _in ev_int32 id )
				{
					EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					ptrNativeObject->setFeatureID(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLabelElement_setClassID_void_ev_int32(void *pObjectXXXX, _in ev_int32 id )
				{
					EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					ptrNativeObject->setClassID(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLabelElement_setLabel_void_EVString(void *pObjectXXXX, _in char* label )
				{
					EarthView::World::Core::ev_string label1 = label;
					EarthView::World::Spatial::Display::CLabelElement* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElement*) pObjectXXXX;
					ptrNativeObject->setLabel(label1);
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_Display_CLabelElements_getElementCounts_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLabelElements* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElements*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getElementCounts();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLabelElements_addElement_void_CLabelElement(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CLabelElement* ref_element )
				{
					EarthView::World::Spatial::Display::CLabelElements* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElements*) pObjectXXXX;
					ptrNativeObject->addElement(ref_element);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CLabelElement*  _stdcall EarthView_World_Spatial_Display_CLabelElements_getElement_CLabelElement_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial::Display::CLabelElements* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElements*) pObjectXXXX;
					EarthView::World::Spatial::Display::CLabelElement* objXXXX = ptrNativeObject->getElement(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void  _stdcall EarthView_World_Spatial_Display_CLabelElements_releaseResources_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CLabelElements* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelElements*) pObjectXXXX;
					ptrNativeObject->releaseResources();
				}
			}
		}
	}
}
