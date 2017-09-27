#ifndef _SELECTEDGEOMETRYSTRINGINTERFACE_H__
#define _SELECTEDGEOMETRYSTRINGINTERFACE_H__
#include "spatial3dlayer/3dlayerconfig.h"
#include "core/stringinterface.h"
#include "geometry3d/geometry3dextension/geoentity.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/ifeatureiterator.h"
#include "geometry3d/iglobelayer.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class EV_3DLAYER_DLL CSelectedGeometryStringInterface : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CSelectedGeometryStringInterface(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_geoent">地理实体对象</param>
					/// <returns></returns>	
					CSelectedGeometryStringInterface();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_geoent">地理实体对象</param>
					/// <returns></returns>	
					CSelectedGeometryStringInterface(EarthView::World::Geometry3D::CGeoEntity* ref_geoent);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_layer">三维数据库型矢量图层</param>
					/// <param name="id">记录ID</param>
					/// <returns></returns>	
					CSelectedGeometryStringInterface(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer,ev_uint32 id);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					~CSelectedGeometryStringInterface();

					/// <summary>
					/// 获取图层名
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层名</returns>	
					const EVString& getLayerName() const;

					/// <summary>
					/// 获取对象名
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回对象名</returns>	
					const EVString& getName() const;

					/// <summary>
					/// 获取图层名
					/// </summary>
					/// <param name="ref_geoent">扩展实体</param>
					/// <returns>返回是否成功</returns>	
					ev_bool updateParams(EarthView::World::Geometry3D::CGeoEntity* ref_geoent);
					/// <summary>
					/// 获取图层名
					/// </summary>
					/// <param name="ref_layer">图层</param>
					/// <param name="id">元素id</param>
					/// <returns>返回是否成功</returns>	
					ev_bool updateParams(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer,ev_uint32 id);

				protected:	
					class  CCmdName: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdID : public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdShap : public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdSpatialReferace: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdDataMinX: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdDataMinY: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdDataMaxX: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdDataMaxY: public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};

					class  CCmdLayerName : public EarthView::World::Core::CParamCommand
					{
					public:						
						EVString doGet(const void *target) const;						
						void doSet( _out void *target, const EVString &val);
					};	

					static CCmdName msCmdName;
					static CCmdID msCmdID;
					static CCmdShap msCmdShape;
					static CCmdSpatialReferace msCmdSr;
					static CCmdDataMinX msCmdMinx;
					static CCmdDataMinY msCmdMiny;
					static CCmdDataMaxX msCmdMaxx;
					static CCmdDataMaxY msCmdMaxy;					
					static CCmdLayerName msCmdLayerName;
				private:
					
					EVString msName;
					EVString msID;
					EVString msShp;
					EVString msSr;
					EVString msMinx;
					EVString msMiny;
					EVString msMaxx;
					EVString msMaxy;
					EVString msLayerName;
					void initParams();

				};
			}
		}
	}
}
#endif
