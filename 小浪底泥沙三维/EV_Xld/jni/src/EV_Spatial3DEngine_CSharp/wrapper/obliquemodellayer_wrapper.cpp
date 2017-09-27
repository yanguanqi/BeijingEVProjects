/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obliquemodellayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_Callback)(_in EarthView::World::Graphic::CEntity* entity);
				class COBQModelStateListenerProxy : public EarthView::World::Spatial3D::Atlas::COBQModelStateListener
				{
				private:
					EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_Callback* m_EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_Callback;
				public:
					COBQModelStateListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : COBQModelStateListener(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity(EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_Callback = pCallback;
					}
					virtual void modelLoaded(_in EarthView::World::Graphic::CEntity* entity)
					{
						if(m_EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_Callback(entity);
						}
						else
							return this->COBQModelStateListener::modelLoaded(entity);
					}
				};
				REGISTER_FACTORY_CLASS(COBQModelStateListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* entity )
				{
					EarthView::World::Spatial3D::Atlas::COBQModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::COBQModelStateListener*) pObjectXXXX;
					if (dynamic_cast<COBQModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::COBQModelStateListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::COBQModelStateListener::modelLoaded(entity);
					else
						ptrNativeObject->modelLoaded(entity);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_Callback* pCallback )
				{
					COBQModelStateListenerProxy* ptr = dynamic_cast<COBQModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::COBQModelStateListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_COBQModelStateListener_modelLoaded_void_CEntity_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* entity )
				{
					EarthView::World::Spatial3D::Atlas::COBQModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::COBQModelStateListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::COBQModelStateListener::modelLoaded(entity);
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* localScale, _out void* localRotate);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CObliqueModelLayerProxy : public EarthView::World::Spatial3D::Atlas::CObliqueModelLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream_Callback;
				public:
					CObliqueModelLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CObliqueModelLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CObliqueModelLayer::setSelectable(selectable);
					}
					virtual ev_bool getGotoParam(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude, altitude);
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getGotoParam(latitude, longitude, altitude);
					}
					virtual ev_real64 getAltitudeValue()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getAltitudeValue();
					}
					virtual void getPosition(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback(lat, lon, alt);
						}
						else
							return this->CObliqueModelLayer::getPosition(lat, lon, alt);
					}
					virtual void getSpatialInfo(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out EarthView::World::Spatial::Math::CVector3& localScale, _out EarthView::World::Spatial::Math::CQuaternion& localRotate)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(lat, lon, alt, &localScale, &localRotate);
						}
						else
							return this->CObliqueModelLayer::getSpatialInfo(lat, lon, alt, localScale, localRotate);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getDataset();
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::clone();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CObliqueModelLayer::setVisible(visible);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CObliqueModelLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CObliqueModelLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CObliqueModelLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CObliqueModelLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CObliqueModelLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::toXmlElement();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::toXML();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CObliqueModelLayer::toStream(stream);
					}
					virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out EarthView::World::Spatial::Math::CVector3& point)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback(&ray, viewport, &point);
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::selectBy(ray, viewport, point);
					}
					virtual void setEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CObliqueModelLayer::setEnvParam(ambient, diffuse, specular);
					}
					virtual void getEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CObliqueModelLayer::getEnvParam(ambient, diffuse, specular);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CObliqueModelLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CObliqueModelLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CObliqueModelLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CObliqueModelLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::isVisible();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::isValid();
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getMaxY();
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getSceneManager();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CObliqueModelLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CObliqueModelLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void_Callback();
						}
						else
							return this->CObliqueModelLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CObliqueModelLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getLayerSelection();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CObliqueModelLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CObliqueModelLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CObliqueModelLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CObliqueModelLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CObliqueModelLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CObliqueModelLayer::draw(display, type);
					}
				};
				REGISTER_FACTORY_CLASS(CObliqueModelLayerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::setSelectable(selectable);
					else
						ptrNativeObject->setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getGotoParam(latitude, longitude, altitude);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getGotoParam(latitude, longitude, altitude);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getGotoParam(latitude, longitude, altitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setPixelRatio_void_ev_real32(void *pObjectXXXX, _in ev_real32 ratio )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->setPixelRatio(ratio);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPixelRatio_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getPixelRatio();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getAltitudeValue();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getAltitudeValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getAltitudeValue_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getAltitudeValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getPosition(lat, lon, alt);
					else
						ptrNativeObject->getPosition(lat, lon, alt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getPosition_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getPosition(lat, lon, alt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* localScale, _out void* localRotate )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getSpatialInfo(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localRotate);
					else
						ptrNativeObject->getSpatialInfo(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localRotate);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* localScale, _out void* localRotate )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getSpatialInfo(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CQuaternion*)localRotate);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetWrapper_CObqDatasetWrapper(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* objXXXX = ptrNativeObject->getDatasetWrapper();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_stopRender_void_ev_bool(void *pObjectXXXX, _in ev_bool bClearAllObject )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->stopRender(bClearAllObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_startRender_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->startRender();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_updateSceneGraphic_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->updateSceneGraphic(camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::_notifyLayerAdd(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerAdd_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::_notifyLayerRemoved(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyLayerRemoved_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
					else
						ptrNativeObject->_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
					else
						ptrNativeObject->_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyDataChanged_void_EVString_EVString_CEvent_NoVirtual(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_selectBy_ev_bool_CRay_CViewport_CVector3_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(void *pObjectXXXX, _inout void* ambient, _inout void* diffuse, _inout void* specular )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
					else
						ptrNativeObject->setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_NoVirtual(void *pObjectXXXX, _inout void* ambient, _inout void* diffuse, _inout void* specular )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(void *pObjectXXXX, _inout void* ambient, _inout void* diffuse, _inout void* specular )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					if (dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
					else
						ptrNativeObject->getEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_NoVirtual(void *pObjectXXXX, _inout void* ambient, _inout void* diffuse, _inout void* specular )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CObliqueModelLayer::getEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_addModelStateListener_void_COBQModelStateListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::COBQModelStateListener* listener )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->addModelStateListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_removeModelStateListener_void_COBQModelStateListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::COBQModelStateListener* listener )
				{
					EarthView::World::Spatial3D::Atlas::CObliqueModelLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX;
					ptrNativeObject->removeModelStateListener(listener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CObliqueModelLayerProxy* ptr = dynamic_cast<CObliqueModelLayerProxy*>((EarthView::World::Spatial3D::Atlas::CObliqueModelLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CObliqueModelLayer_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
