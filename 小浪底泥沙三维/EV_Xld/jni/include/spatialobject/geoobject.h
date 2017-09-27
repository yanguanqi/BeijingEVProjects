#ifndef _GEO_OBJECT_H_
#define _GEO_OBJECT_H_

#include <spatialinterface/igeometry.h>
#include <spatialinterface/isymbol.h>

#include "spatialobject/config.h"

// using namespace EarthView::World::Spatial;
// using namespace EarthView::World::Spatial::Display;
// using namespace EarthView::World::Spatial::Geometry;

namespace EarthView{
	namespace World{
		namespace Spatial{

			/// <summary>				
			/// 硬件缓冲区索引
			/// </summary>
			class EV_GEOMETRY_DLL GeoIndex: public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				GeoIndex(_in EarthView::World::Core::CNameValuePairList * pList);

			public:
				GeoIndex();
				GeoIndex(const GeoIndex& geoIndex );


				virtual ~GeoIndex();

				ev_uint32 HardwareBufferNO;         //在Mesh的硬件缓冲区的序号
				ev_uint32 HardwareBufferBeginIndex; //在硬件缓冲区的开始位置
				ev_uint32 HardwareBufferEndIndex;   //在硬件缓冲区的结束位置
			};

			/// <summary>				
			/// 管理地理对象类
			/// </summary>
			class EV_GEOMETRY_DLL CGeoObject : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeoObject(_in EarthView::World::Core::CNameValuePairList * pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGeoObject();
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pGeometry">geometry</param>
				/// <param name="pSymbol">符号</param>
				/// <param name="bCloneGeometry">是否clone geometry</param>
				/// <param name="bCloneSymbol">是否clone符号</param>
				/// <returns></returns>
				CGeoObject(EarthView::World::Spatial::Geometry::IGeometry* ref_pGeometry,EarthView::World::Spatial::Display::ISymbol* ref_pSymbol);
				CGeoObject(EarthView::World::Spatial::Geometry::IGeometry* ref_pGeometry,EarthView::World::Spatial::Display::ISymbol* ref_pSymbol,bool bCloneGeometry , bool bCloneSymbol);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CGeoObject();
			public:
				/// <summary>				
				/// 管理相机的参数
				/// </summary>
				class EV_GEOMETRY_DLL CLookAt:public EarthView::World::Core::CBaseObject//赵飞添加
				{
ev_private:
					CLookAt(_in EarthView::World::Core::CNameValuePairList *pList)
						:LatitudeAttr(0),
						LongitudeAttr(0),
						HeadingAttr(0),
						TiltAttr(0),
						AltitudeAttr(0),
						AltitudeModeAttr(-1),
						ModitifAltitudeAttr(0),//add by zk
						IsDirtyAttr(false),
						RangeAttr(0),
						IsCameraAltComputedAttr(false)
					{

					};
				public:
					CLookAt():LatitudeAttr(0),
						LongitudeAttr(0),
						HeadingAttr(0),
						TiltAttr(0),
						AltitudeAttr(0),
						AltitudeModeAttr(-1),
						ModitifAltitudeAttr(0),//add by zk
						IsDirtyAttr(false),
						RangeAttr(0),
						IsCameraAltComputedAttr(false)
					{

					};
					~CLookAt(){};
					///纬度
					ev_real64 LatitudeAttr;
					///经度
					ev_real64 LongitudeAttr;
					///行偏角
					ev_real64 HeadingAttr;
					///倾角
					ev_real64 TiltAttr;
					///高度
					ev_real64 AltitudeAttr;
					ev_int32 AltitudeModeAttr; 

					//add by zk
					ev_real64 ModitifAltitudeAttr;

					///是否改变
					ev_bool IsDirtyAttr;
					///only for Google Range,distance from camera to target
					ev_real64 RangeAttr;
					ev_bool IsCameraAltComputedAttr;

					inline ev_bool operator == (_in const EarthView::World::Spatial::CGeoObject::CLookAt &rkLookAt ) const
					{
						//return ( x == rkVector.x && y == rkVector.y && z == rkVector.z );
						return (fuzzyCompare(LatitudeAttr,rkLookAt.LatitudeAttr)
							&& fuzzyCompare(LongitudeAttr,rkLookAt.LongitudeAttr)
							&& fuzzyCompare(HeadingAttr,rkLookAt.HeadingAttr)
							&& fuzzyCompare(TiltAttr,rkLookAt.TiltAttr)
							&& fuzzyCompare(AltitudeAttr,rkLookAt.AltitudeAttr)
							&& fuzzyCompare(AltitudeModeAttr,rkLookAt.AltitudeModeAttr)
							&& fuzzyCompare(ModitifAltitudeAttr,rkLookAt.ModitifAltitudeAttr)
							&& fuzzyCompare(RangeAttr,rkLookAt.RangeAttr)
							&& IsDirtyAttr == rkLookAt.IsDirtyAttr );
					}

					inline ev_bool operator != (_in const EarthView::World::Spatial::CGeoObject::CLookAt &rkLookAt ) const
					{
						//return ( x == rkVector.x && y == rkVector.y && z == rkVector.z );
						return (!fuzzyCompare(LatitudeAttr,rkLookAt.LatitudeAttr)
							|| !fuzzyCompare(LongitudeAttr,rkLookAt.LongitudeAttr)
							|| !fuzzyCompare(HeadingAttr,rkLookAt.HeadingAttr)
							|| !fuzzyCompare(TiltAttr,rkLookAt.TiltAttr)
							|| !fuzzyCompare(AltitudeAttr,rkLookAt.AltitudeAttr)
							|| !fuzzyCompare(AltitudeModeAttr,rkLookAt.AltitudeModeAttr)
							|| !fuzzyCompare(ModitifAltitudeAttr,rkLookAt.ModitifAltitudeAttr)
							|| !fuzzyCompare(RangeAttr,rkLookAt.RangeAttr)
							|| IsDirtyAttr != rkLookAt.IsDirtyAttr );
					}
				};
				EarthView::World::Spatial::CGeoObject::CLookAt LookAtAttr;

				/// <summary>
				/// 获得geometry
				/// </summary>
				/// <param name=""></param>
				/// <returns>geometry</returns>
				EarthView::World::Spatial::Geometry::IGeometry* getGeometry()const;
				/// <summary>
				/// 获取符号
				/// </summary>
				/// <param name=""></param>
				/// <returns>符号</returns>
				EarthView::World::Spatial::Display::ISymbol* getSymbol()const;
				/// <summary>
				/// 设置geometry
				/// </summary>
				/// <param name="pGeometry">geometry</param>
				/// <param name="bResetGeoIndex">是否重置索引</param>
				/// <param name="bClone">是否clone</param>
				/// <returns></returns>
				void setGeometry(EarthView::World::Spatial::Geometry::IGeometry* ref_pGeometry,ev_bool bResetGeoIndex);
				void setGeometry(EarthView::World::Spatial::Geometry::IGeometry* ref_pGeometry,ev_bool bResetGeoIndex,bool bClone);
				/// <summary>
				/// 设置符号
				/// </summary>
				/// <param name="pSymbol">符号</param>
				/// <param name="bClone">是否clone</param>
				/// <returns></returns>
				void setSymbol(EarthView::World::Spatial::Display::ISymbol* ref_pSymbol,ev_bool bResetGeoIndex);
				void setSymbol(EarthView::World::Spatial::Display::ISymbol* ref_pSymbol,ev_bool bResetGeoIndex,bool bClone);
				/// <summary>
				/// 获取硬件缓冲索引数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>硬件缓冲索引数量</returns>
				ev_uint32 getGeoIndexCount() const;
				/// <summary>
				/// 增加硬件缓冲索引
				/// </summary>
				/// <param name="geoIndex">硬件缓冲索引</param>
				/// <returns></returns>
				ev_void addGeoIndex(const GeoIndex& geoIndex);
				/// <summary>
				/// 删除硬件缓冲索引
				/// </summary>
				/// <param name="index">硬件缓冲索引位置</param>
				/// <returns></returns>
				ev_bool removeGeoIndex(ev_uint32 index);
				/// <summary>
				/// 获取硬件缓冲索引
				/// </summary>
				/// <param name="index">位置</param>
				/// <returns>硬件缓冲索引</returns>
				const EarthView::World::Spatial::GeoIndex& getGeoIndex(ev_uint32 index) const;
				/// <summary>
				/// 设置硬件缓冲索引
				/// </summary>
				/// <param name="index">位置</param>
				/// <param name="geoIndex">硬件缓冲索引</param>
				/// <returns></returns>
				ev_bool setGeoIndex(ev_uint32 index,const GeoIndex& geoIndex);
				/// <summary>
				/// 清除硬件缓冲索引
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clearGeoIndex();
				/// <summary>
				/// 增加属性
				/// </summary>
				/// <param name="key">键</param>
				/// <param name="val">值</param>
				/// <returns></returns>
				ev_void addProperty(const EVString& key,const EarthView::World::Core::CVariant& val);
				/// <summary>
				/// 获取属性
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>值</returns>
				const EarthView::World::Core::CVariant& getProperty(const EVString& key);
				/// <summary>
				/// 获取属性
				/// </summary>
				/// <param name="index">位置</param>
				/// <returns>值</returns>
				const EarthView::World::Core::CVariant& getProperty(ev_uint32 index);
				/// <summary>
				/// 删除属性
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>是否成</returns>
				ev_bool removeProperty(const EVString& key);
				/// <summary>
				/// 删除属性
				/// </summary>
				/// <param name="index">位置</param>
				/// <returns>是否成</returns>
				ev_bool removeProperty(ev_uint32 index);
				/// <summary>
				/// 清除属性
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clearPropertys();
				/// <summary>
				/// 获取属性数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>属性数量</returns>
				ev_uint32 getPropertyCount();
				/// <summary>
				/// 获取id
				/// </summary>
				/// <param name=""></param>
				/// <returns>id</returns>
				const EVString& getID() const;
				/// <summary>
				/// 设置id
				/// </summary>
				/// <param name="id">id</param>
				/// <returns></returns>
				ev_void setID(const EVString& id);

				/// <summary>
				/// 获取index
				/// </summary>
				/// <param name=""></param>
				/// <returns>id</returns>
				ev_int32 getIndex() const;
				/// <summary>
				/// 设置id
				/// </summary>
				/// <param name="id">id</param>
				/// <returns></returns>
				ev_void setIndex(ev_int32 index);
			protected:
				EarthView::World::Spatial::Geometry::IGeometry* mpGeometry;
				EarthView::World::Spatial::Display::ISymbol* mpSymbol;

				typedef vector<EarthView::World::Spatial::GeoIndex> GeoIndics;
				GeoIndics mGeoIndics;

				typedef map<EVString,EarthView::World::Core::CVariant> MapPropertys;
				MapPropertys mPropertySet; 

				ev_bool mbCloneGeometry;
				ev_bool mbCloneSymbol;

				EVString msID;

				ev_int32 mdIndex;
			};

		}
	}
}


#endif
