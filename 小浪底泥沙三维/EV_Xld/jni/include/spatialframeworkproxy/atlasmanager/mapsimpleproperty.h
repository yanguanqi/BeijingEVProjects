#ifndef _MAPSIMPLEPROPERTY_H__
#define _MAPSIMPLEPROPERTY_H__
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "core/stringinterface.h"
#include "spatialinterface/imap.h"


namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace AtlasManager{

				class EV_FRAMEWORKPROXY_DLL CMapSimpleProperty : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CMapSimpleProperty(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_map">关联地图</param>
					/// <returns></returns>	
					CMapSimpleProperty(const EarthView::World::Spatial::Atlas::IMap* ref_map);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>	
					~CMapSimpleProperty();

					/// <summary>
					/// 获取地图
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回地图</returns>
					/// <memo></memo>
					const EarthView::World::Spatial::Atlas::IMap* getMap() const;

					ev_void setMap(EarthView::World::Spatial::Atlas::IMap* ref_map);

				protected:	
					class  CCmdName: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const ev_void *target) const;						
						ev_void doSet( _out ev_void *target, const EVString &val);

						// 在doSet之前测试一次值是否有效。
						virtual ev_bool trySet(void *target, const EVString &val, EVString& reason);
					};

					class  CCmdDescription : public  EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const ev_void *target) const;						
						ev_void doSet( _out ev_void *target, const EVString &val);
					};
					class  CCmdUnit: public  EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const ev_void *target) const;						
						ev_void doSet( _out ev_void *target, const EVString &val);
					private:
						EVString fromENum(const ev_uint8 type) const;
						EarthView::World::Spatial::Atlas::EVMapUnits fromString(const EVString& type) const;
					};
					class  CCmdMinSCale: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const ev_void *target) const;						
						ev_void doSet( _out ev_void *target, const EVString &val);
					};
					static CCmdName msCmdName;
					static CCmdDescription msCmdDescription;
					static CCmdUnit msCmdUnit;
					static CCmdMinSCale msCmdMinSCale;
				private:
					const EarthView::World::Spatial::Atlas::IMap* mpMap;
					ev_void initParams();
					
				};

			

			}//namespace
		}
	}
}
#endif
