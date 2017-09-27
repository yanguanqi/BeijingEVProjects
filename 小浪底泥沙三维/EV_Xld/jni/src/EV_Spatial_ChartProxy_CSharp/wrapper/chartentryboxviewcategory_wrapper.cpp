/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialchartproxy/chartentryboxviewcategory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CChartEntryBoxViewCategoryProxy : public EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory
				{
				private:
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_Callback;
				public:
					CChartEntryBoxViewCategoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartEntryBoxViewCategory(pList)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent(EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_Callback();
						}
						else
							return this->CChartEntryBoxViewCategory::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CChartEntryBoxViewCategory::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CChartEntryBoxViewCategory::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_Callback(ctrl);
						}
						else
							return this->CChartEntryBoxViewCategory::create(ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::update(e);
					}
					virtual ev_uint32 getEntryCount() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getEntryCount();
					}
					virtual EVString getEntry(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getEntry(index);
					}
					virtual ev_int32 getCurrentIndex() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getCurrentIndex();
					}
					virtual void currentIndexChanged(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_Callback(index);
						}
						else
							return this->CChartEntryBoxViewCategory::currentIndexChanged(index);
					}
					virtual ev_uint32 getWidth() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxViewCategory::getWidth();
					}
				};
				REGISTER_FACTORY_CLASS(CChartEntryBoxViewCategoryProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::setChecked(checked);
					else
						ptrNativeObject->setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::setEnabled(enabled);
					else
						ptrNativeObject->setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::create(ctrl);
					else
						ptrNativeObject->create(ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::create(ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getEntryCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getEntryCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntryCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getEntryCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getEntry(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getEntry(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getEntry_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getEntry(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getCurrentIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getCurrentIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getCurrentIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::getCurrentIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::currentIndexChanged(index);
					else
						ptrNativeObject->currentIndexChanged(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_currentIndexChanged_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory::currentIndexChanged(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxViewCategoryProxy* ptr = dynamic_cast<CChartEntryBoxViewCategoryProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxViewCategory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxViewCategory_getWidth_ev_uint32(pCallback);
					}
				}
			}
		}
	}
}
