#ifndef _LAYERSIMPLEPROPERTY_H__
#define _LAYERSIMPLEPROPERTY_H__
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "core/stringinterface.h"
#include "spatialinterface/ilayer.h"

namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace AtlasManager{

				class CLayerSimplePropertyEventHandler;

				class EV_FRAMEWORKPROXY_DLL CLayerSimpleProperty : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CLayerSimpleProperty(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_layer">关联图层</param>
					/// <returns></returns>
					/// <memo></memo>
					CLayerSimpleProperty(const EarthView::World::Spatial::Atlas::ILayer* ref_layer);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					~CLayerSimpleProperty();

					/// <summary>
					/// 更新图层可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void updateLayerVisible();

					/// <summary>
					/// 获取图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层</returns>
					/// <memo></memo>
					const EarthView::World::Spatial::Atlas::ILayer* getLayer() const;
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);

				protected:	
					class  CCmdName: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdDescription : public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdCanEdit : public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdIsVisible : public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};	

					class  CCmdIsSelectable : public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdEnvelope: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdDataSetName: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdImageDataTime: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					static CCmdName msCmdName;
					static CCmdDescription msCmdDescription;
					static CCmdCanEdit msCmdCanEdit;
					static CCmdIsVisible msCmdIsVisible;
					static CCmdIsSelectable msCmdIsSelectable;
					static CCmdEnvelope msCmdEnvelope;
					static CCmdDataSetName msCmdDataSetName;
					static CCmdImageDataTime msCmdDataTime;
				private:
					const EarthView::World::Spatial::Atlas::ILayer* mpLayer;
					CLayerSimplePropertyEventHandler* eventHandler;
					void initParams();
					
				};

			

			}//namespace
		}
	}
}
#endif
