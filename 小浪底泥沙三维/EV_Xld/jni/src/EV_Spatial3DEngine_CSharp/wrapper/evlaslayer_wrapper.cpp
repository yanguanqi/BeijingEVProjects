/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/evlaslayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_geoPosition( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->geoPosition;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_geoPosition( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->geoPosition = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_elevation( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->elevation;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_elevation( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->elevation = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_classification( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->classification;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_classification( void *pObjectXXXX, ev_uint8  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->classification = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_intensity( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->intensity;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_intensity( void *pObjectXXXX, ev_uint16  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->intensity = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_returnNumber( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->returnNumber;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_returnNumber( void *pObjectXXXX, ev_uint16  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->returnNumber = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_color( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->color;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_color( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjectXXXX)->color = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_OperatorLessThan_ev_bool_CLasQueryResultEntry(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjXXXX;
					const EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX1 = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)rhs;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResultEntry_OperatorGreaterThan_ev_bool_CLasQueryResultEntry(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjXXXX;
					const EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX1 = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)rhs;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_push_back_void_CLasQueryResultEntry(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_push_front_void_CLasQueryResultEntry(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->push_front(*(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_pop_front_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->pop_front();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_front_CLasQueryResultEntry(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_back_CLasQueryResultEntry(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_at_CLasQueryResultEntry_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& objXXXX = ptrNativeObject->at(pos);
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_insert_void_ev_uint32_CLasQueryResultEntry(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLasQueryResult_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_Callback)(_in ev_real64 altitudeValue);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localRotate);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* localScale, _out void* localRotate);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CEVLasLayerProxy : public EarthView::World::Spatial3D::Atlas::CEVLasLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream_Callback;
				public:
					CEVLasLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVLasLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3(EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::clone();
					}
					virtual void setAltitudeValue(_in ev_real64 altitudeValue)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_Callback(altitudeValue);
						}
						else
							return this->CEVLasLayer::setAltitudeValue(altitudeValue);
					}
					virtual void setPosition(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback(lat, lon, alt);
						}
						else
							return this->CEVLasLayer::setPosition(lat, lon, alt);
					}
					virtual void setSpatialInfo(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const EarthView::World::Spatial::Math::CVector3& localScale, _in const EarthView::World::Spatial::Math::CQuaternion& localRotate)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(lat, lon, alt, &localScale, &localRotate);
						}
						else
							return this->CEVLasLayer::setSpatialInfo(lat, lon, alt, localScale, localRotate);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CEVLasLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_Callback();
						}
						else
							return this->CEVLasLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CEVLasLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getLayerSelection();
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CEVLasLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CEVLasLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::toXmlElement();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CEVLasLayer::setSelectable(selectable);
					}
					virtual ev_bool getGotoParam(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude, altitude);
							return returnValue;
						}
						else
							return this->CEVLasLayer::getGotoParam(latitude, longitude, altitude);
					}
					virtual ev_real64 getAltitudeValue()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getAltitudeValue();
					}
					virtual void getPosition(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback(lat, lon, alt);
						}
						else
							return this->CEVLasLayer::getPosition(lat, lon, alt);
					}
					virtual void getSpatialInfo(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out EarthView::World::Spatial::Math::CVector3& localScale, _out EarthView::World::Spatial::Math::CQuaternion& localRotate)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(lat, lon, alt, &localScale, &localRotate);
						}
						else
							return this->CEVLasLayer::getSpatialInfo(lat, lon, alt, localScale, localRotate);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getDataset();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CEVLasLayer::setVisible(visible);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CEVLasLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CEVLasLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CEVLasLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::toXML();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEVLasLayer::toStream(stream);
					}
					virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out EarthView::World::Spatial::Math::CVector3& point)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback(&ray, viewport, &point);
							return returnValue;
						}
						else
							return this->CEVLasLayer::selectBy(ray, viewport, point);
					}
					virtual void setEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CEVLasLayer::setEnvParam(ambient, diffuse, specular);
					}
					virtual void getEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CEVLasLayer::getEnvParam(ambient, diffuse, specular);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CEVLasLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CEVLasLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CEVLasLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CEVLasLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::isVisible();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::isValid();
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getMaxY();
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CEVLasLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getSceneManager();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEVLasLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getDataSource();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CEVLasLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CEVLasLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CEVLasLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CEVLasLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CEVLasLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CEVLasLayer::draw(display, type);
					}
				};
				REGISTER_FACTORY_CLASS(CEVLasLayerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setColorType_void_LASCOLORTYPE(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setColorType((EarthView::World::Spatial3D::Atlas::LASCOLORTYPE)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getColorType_LASCOLORTYPE(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::LASCOLORTYPE objXXXX = ptrNativeObject->getColorType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setUseDefaultColor_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setUseDefaultColor(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getUseDefaultColor_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getUseDefaultColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setGeneralColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setGeneralColor(color);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGeneralColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getGeneralColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultGeneralColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getDefaultGeneralColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setElevationColor_void_ev_real32_IColor(void *pObjectXXXX, _in ev_real32 value, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setElevationColor(value, color);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getElevationColor_IColor_ev_real32(void *pObjectXXXX, _in ev_real32 value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getElevationColor(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getElevationColor_IColor_ev_uint32_ev_real32(void *pObjectXXXX, _in ev_uint32 index, _inout ev_real32& value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getElevationColor(index, value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getElevationColorCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getElevationColorCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearElevationColor_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->clearElevationColor();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultElevationColor_IColor_ev_real32(void *pObjectXXXX, _in ev_real32 value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getDefaultElevationColor(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultElevationColor_IColor_ev_uint32_ev_real32(void *pObjectXXXX, _in ev_uint32 index, _inout ev_real32& value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getDefaultElevationColor(index, value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultElevationColorCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getDefaultElevationColorCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIntensityColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setIntensityColor(color);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getIntensityColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getIntensityColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultIntensityColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getDefaultIntensityColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setClassificationColor_void_ev_int32_IColor(void *pObjectXXXX, _in ev_int32 value, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setClassificationColor(value, color);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getClassificationColor_IColor_ev_int32(void *pObjectXXXX, _in ev_int32 value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getClassificationColor(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getClassificationColor_IColor_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_uint32 index, _inout ev_int32& value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getClassificationColor(index, value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getClassificationColorCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getClassificationColorCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearClassificationColor_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->clearClassificationColor();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultClassificationColor_IColor_ev_int32(void *pObjectXXXX, _in ev_int32 value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getDefaultClassificationColor(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultClassificationColor_IColor_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_uint32 index, _inout ev_int32& value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getDefaultClassificationColor(index, value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultClassificationColorCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getDefaultClassificationColorCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setReturnNumberColor_void_ev_int32_IColor(void *pObjectXXXX, _in ev_int32 value, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setReturnNumberColor(value, color);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getReturnNumberColor_IColor_ev_int32(void *pObjectXXXX, _in ev_int32 value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getReturnNumberColor(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getReturnNumberColor_IColor_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_uint32 index, _inout ev_int32& value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getReturnNumberColor(index, value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getReturnNumberColorCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getReturnNumberColorCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearReturnNumberColor_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->clearReturnNumberColor();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultReturnNumberColor_IColor_ev_int32(void *pObjectXXXX, _in ev_int32 value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getDefaultReturnNumberColor(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultReturnNumberColor_IColor_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_uint32 index, _inout ev_int32& value )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getDefaultReturnNumberColor(index, value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDefaultReturnNumberColorCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getDefaultReturnNumberColorCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPointSize_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 size )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setPointSize(size);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPointSize_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getPointSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::setAltitudeValue(altitudeValue);
					else
						ptrNativeObject->setAltitudeValue(altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setAltitudeValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::setAltitudeValue(altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::setPosition(lat, lon, alt);
					else
						ptrNativeObject->setPosition(lat, lon, alt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::setPosition(lat, lon, alt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localRotate )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::setSpatialInfo(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localRotate);
					else
						ptrNativeObject->setSpatialInfo(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localRotate);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localRotate )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::setSpatialInfo(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localRotate);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setHighLight_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setHighLight(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHighLight_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getHighLight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearHightLight_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->clearHightLight();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setComponentHighLight_void_EVString_ev_bool(void *pObjectXXXX, _in const char* compName, _in ev_bool flag )
				{
					EarthView::World::Core::ev_string compName1 = compName;
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->setComponentHighLight(compName1, flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getComponentHighLight_ev_bool_EVString(void *pObjectXXXX, _in const char* compName )
				{
					EarthView::World::Core::ev_string compName1 = compName;
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getComponentHighLight(compName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearComponentHightLight_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->clearComponentHightLight();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSelectedComponent_ev_bool_ev_uint64_ev_int32_ev_int32_ev_int32_CComponent(void *pObjectXXXX, _in ev_uint64 objectHandle, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _out void* outComp )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSelectedComponent(objectHandle, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial3D::CComponent*)outComp);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSelectedObjectName_ev_bool_ev_uint64_EVString(void *pObjectXXXX, _in ev_uint64 objectHandle, _out char*& name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSelectedObjectName(objectHandle, name1);
					name=name1.makeBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSelectedObjectPosition_ev_bool_ev_uint64_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _in ev_uint64 objectHandle, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* localScale, _out void* localOrientation )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSelectedObjectPosition(objectHandle, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localOrientation);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::setLayerSelection(selection);
					else
						ptrNativeObject->setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_setLayerSelection_void_ILayerSelection_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_getRecordFeatureClass_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getRecordFeatureClass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::_notifyLayerAdd(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerAdd_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_updateLasImage_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					ptrNativeObject->updateLasImage();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayer_queryResult_CLasQueryResult_ev_real32_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 minLon, _in ev_real32 maxLon, _in ev_real32 minLat, _in ev_real32 maxLat )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResult objXXXX = ptrNativeObject->queryResult(minLon, maxLon, minLat, maxLat);
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pXXXX = new EarthView::World::Spatial3D::Atlas::CLasQueryResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getAltitudeValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CEVLasLayerProxy* ptr = dynamic_cast<CEVLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback)(_in char*& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CEVLasLayerFactoryProxy : public EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CEVLasLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVLasLayerFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset(EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer(EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback(name_Char, ds);
							return returnValue;
						}
						else
							return this->CEVLasLayerFactory::createInstance(name, ds);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CEVLasLayerFactory::createInstance(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CEVLasLayerFactory::createInstance();
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CEVLasLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CEVLasLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getSingletonPtr_CEVLasLayerFactory( )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* objXXXX = EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_releaseSingletonPtr_void( )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::releaseSingletonPtr();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CEVLasLayerFactoryProxy* ptr = dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::createInstance(name1, ds);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(name1, ds);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback )
				{
					CEVLasLayerFactoryProxy* ptr = dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_IDataset_NoVirtual(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::createInstance(name1, ds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CEVLasLayerFactoryProxy* ptr = dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CEVLasLayerFactoryProxy* ptr = dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CEVLasLayerFactoryProxy* ptr = dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_msLasLayerFactoryName()
				{
					const EVString objXXXX = EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory::msLasLayerFactoryName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CEVLasLayerFactoryProxy* ptr = dynamic_cast<CEVLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEVLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEVLasLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64_Callback)(_in ev_real64 altitudeValue);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* localScale, _in const void* localRotate);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* localScale, _out void* localRotate);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CWebLasLayerProxy : public EarthView::World::Spatial3D::Atlas::CWebLasLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream_Callback;
				public:
					CWebLasLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebLasLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3(EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::clone();
					}
					virtual void setAltitudeValue(_in ev_real64 altitudeValue)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64_Callback(altitudeValue);
						}
						else
							return this->CWebLasLayer::setAltitudeValue(altitudeValue);
					}
					virtual void setPosition(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback(lat, lon, alt);
						}
						else
							return this->CWebLasLayer::setPosition(lat, lon, alt);
					}
					virtual void setSpatialInfo(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const EarthView::World::Spatial::Math::CVector3& localScale, _in const EarthView::World::Spatial::Math::CQuaternion& localRotate)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(lat, lon, alt, &localScale, &localRotate);
						}
						else
							return this->CWebLasLayer::setSpatialInfo(lat, lon, alt, localScale, localRotate);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CWebLasLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void_Callback();
						}
						else
							return this->CWebLasLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CWebLasLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getLayerSelection();
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CWebLasLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CWebLasLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::toXmlElement();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CWebLasLayer::setSelectable(selectable);
					}
					virtual ev_bool getGotoParam(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude, altitude);
							return returnValue;
						}
						else
							return this->CWebLasLayer::getGotoParam(latitude, longitude, altitude);
					}
					virtual ev_real64 getAltitudeValue()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getAltitudeValue();
					}
					virtual void getPosition(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback(lat, lon, alt);
						}
						else
							return this->CWebLasLayer::getPosition(lat, lon, alt);
					}
					virtual void getSpatialInfo(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out EarthView::World::Spatial::Math::CVector3& localScale, _out EarthView::World::Spatial::Math::CQuaternion& localRotate)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(lat, lon, alt, &localScale, &localRotate);
						}
						else
							return this->CWebLasLayer::getSpatialInfo(lat, lon, alt, localScale, localRotate);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getDataset();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CWebLasLayer::setVisible(visible);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CWebLasLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CWebLasLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CWebLasLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::toXML();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CWebLasLayer::toStream(stream);
					}
					virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out EarthView::World::Spatial::Math::CVector3& point)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback(&ray, viewport, &point);
							return returnValue;
						}
						else
							return this->CWebLasLayer::selectBy(ray, viewport, point);
					}
					virtual void setEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CWebLasLayer::setEnvParam(ambient, diffuse, specular);
					}
					virtual void getEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CWebLasLayer::getEnvParam(ambient, diffuse, specular);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CWebLasLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CWebLasLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CWebLasLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CWebLasLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::isVisible();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::isValid();
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getMaxY();
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CWebLasLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getSceneManager();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CWebLasLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getDataSource();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CWebLasLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CWebLasLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CWebLasLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CWebLasLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CWebLasLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CWebLasLayer::draw(display, type);
					}
				};
				REGISTER_FACTORY_CLASS(CWebLasLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX;
					if (dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX;
					if (dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebLasLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setAltitudeValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setPosition_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getAltitudeValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getPosition_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_selectBy_ev_bool_CRay_CViewport_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CWebLasLayerProxy* ptr = dynamic_cast<CWebLasLayerProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback)(_in char*& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CWebLasLayerFactoryProxy : public EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CWebLasLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebLasLayerFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset(EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer(EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback(name_Char, ds);
							return returnValue;
						}
						else
							return this->CWebLasLayerFactory::createInstance(name, ds);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CWebLasLayerFactory::createInstance(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CWebLasLayerFactory::createInstance();
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CWebLasLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CWebLasLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getSingletonPtr_CWebLasLayerFactory( )
				{
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* objXXXX = EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_releaseSingletonPtr_void( )
				{
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::releaseSingletonPtr();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CWebLasLayerFactoryProxy* ptr = dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::createInstance(name1, ds);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(name1, ds);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback )
				{
					CWebLasLayerFactoryProxy* ptr = dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_IDataset_NoVirtual(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::createInstance(name1, ds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CWebLasLayerFactoryProxy* ptr = dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CWebLasLayerFactoryProxy* ptr = dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CWebLasLayerFactoryProxy* ptr = dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_msWebLasLayerFactoryName()
				{
					const EVString objXXXX = EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory::msWebLasLayerFactoryName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CWebLasLayerFactoryProxy* ptr = dynamic_cast<CWebLasLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CWebLasLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CWebLasLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
