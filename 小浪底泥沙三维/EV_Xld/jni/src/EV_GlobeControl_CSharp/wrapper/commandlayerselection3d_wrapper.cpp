/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/commandlayerselection3d.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_Callback)(_in char*& datasetname);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CCommandLayerSelection3DProxy : public EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D
				{
				private:
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_Callback;
				public:
					CCommandLayerSelection3DProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommandLayerSelection3D(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CCommandLayerSelection3DProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent(EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::isCheckable();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CCommandLayerSelection3D::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CCommandLayerSelection3D::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_Callback(ctrl);
						}
						else
							return this->CCommandLayerSelection3D::create(ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::update(e);
					}
					virtual ev_uint32 getEntryCount() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getEntryCount();
					}
					virtual EVString getEntry(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getEntry(index);
					}
					virtual void currentIndexChanged(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_Callback(index);
						}
						else
							return this->CCommandLayerSelection3D::currentIndexChanged(index);
					}
					virtual void setEditDataSetName(_in const EVString& datasetname)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* datasetname_Char = datasetname.makeBuffer();
							m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_Callback(datasetname_Char);
						}
						else
							return this->CCommandLayerSelection3D::setEditDataSetName(datasetname);
					}
					virtual ev_uint32 getWidth() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getWidth();
					}
					virtual ev_int32 getCurrentIndex() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CCommandLayerSelection3D::getCurrentIndex();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void_Callback();
						}
						else
							return this->CCommandLayerSelection3D::onClicked();
					}
				};
				REGISTER_FACTORY_CLASS(CCommandLayerSelection3DProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::setChecked(checked);
					else
						ptrNativeObject->setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::setEnabled(enabled);
					else
						ptrNativeObject->setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::create(ctrl);
					else
						ptrNativeObject->create(ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::create(ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getEntryCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getEntryCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntryCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getEntryCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getEntry(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getEntry(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getEntry_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::getEntry(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::currentIndexChanged(index);
					else
						ptrNativeObject->currentIndexChanged(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_currentIndexChanged_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::currentIndexChanged(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString(void *pObjectXXXX, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::setEditDataSetName(datasetname1);
					else
						ptrNativeObject->setEditDataSetName(datasetname1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_setEditDataSetName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D::setEditDataSetName(datasetname1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_findLayer_void_CFeatureGroupLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* gl )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ptrNativeObject->findLayer(gl);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_mDataSetName( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mDataSetName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_mDataSetName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)pObjectXXXX)->mDataSetName = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_mbEnabled( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mbEnabled;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_mbEnabled( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)pObjectXXXX)->mbEnabled = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeControl*  _stdcall Get_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_mpGlobeControl( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeControl* objXXXX = ptrNativeObject->mpGlobeControl;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_mpGlobeControl( void *pObjectXXXX, EarthView::World::Spatial3D::Controls::CGlobeControl*  value )
				{
					((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)pObjectXXXX)->mpGlobeControl = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_mnCurrentIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mnCurrentIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_mnCurrentIndex( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)pObjectXXXX)->mnCurrentIndex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_m_bEnabled( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_bEnabled;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_m_bEnabled( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*)pObjectXXXX)->m_bEnabled = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getWidth_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_getCurrentIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void_Callback* pCallback )
				{
					CCommandLayerSelection3DProxy* ptr = dynamic_cast<CCommandLayerSelection3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandLayerSelection3D_onClicked_void(pCallback);
					}
				}
			}
		}
	}
}
