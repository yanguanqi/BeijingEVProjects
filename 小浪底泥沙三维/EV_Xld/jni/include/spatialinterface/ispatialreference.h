#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ISPATIALREFERENCE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ISPATIALREFERENCE_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"
#include "core/datastream.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{  
			namespace Utility
			{ 
				///<summary>
				///EVSpatialReferenceStrTypes
				///标识空间参考的文本描述的文本格式
				///导入 导出空间参考的文本描述的依据
				///</summary>
				enum EVSpatialReferenceStringType
				{
					EV_WKT        = 0,
					EV_ESRI       = 1,
					EV_PROJ4      = 2,
					EV_ESPG       = 3,
					EV_UNKNOWNSTR = 4
				};

			 ///<summary>
			///EarthView::World::Spatial::Utility::EVDatumType
			///标识大地水准面模型
			///一般与椭球体是一一对应的
			///</summary>
			   enum EVDatumType
			  {
				 EV_UNKNOWND   = 0,
				 EV_BEIJING54D = 6214,
				 EV_XIAN80D    = 6610,
				 EV_WGS84D     = 6326,
				 EV_CGCS2000D  = 7019, //ESPG里没对应代码，与椭球类型保持一致
				 EV_WGS72D     = 6322,
				 EV_NSWC9Z2D   = 6276
			  };
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 空间参考系类型枚举
				/// </summary>
				enum EVSpatialReferenceType
				{
					/// <summary>
					/// 位置类型
					/// </summary>
					SST_UNKNOWN                 = 0,
					/// <summary>
					/// 地理坐标系统
					/// </summary>
					SST_GEOCOORDINATESYSTEM     = 1,
					/// <summary>
					/// 投影坐标系统
					/// </summary>
					SST_PROJCOORDINATESYSTEM    = 2
				};
				class EV_INTERFACE_DLL IEllipseSpheriod :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
				   /// 默认析构函数
				   /// </summary>
				   virtual ~IEllipseSpheriod();

				   /// <summary>
				   /// 获取椭球长半轴
				   /// </summary>
				   /// <returns>const ev_real64</returns>
				   virtual const ev_real64 getSamiMajor()const;

				   /// <summary>
				   /// 获取椭球扁率倒数
				   /// </summary>
				   /// <returns>const ev_real64</returns>
				   virtual const ev_real64 getInvFlattening()const;

				   /// <summary>
				   /// 获取椭球体名称
				   /// </summary>
				   /// <returns>const string</returns>
				   virtual EVString getSphereName()const;

				   /// <summary>
				   /// 获取椭球体对应的大地水准面模型
				   /// </summary>
				   /// <returns>const EarthView::World::Spatial::Utility::EVDatumType</returns>
				   virtual const EarthView::World::Spatial::Utility::EVDatumType getDatumType()const;

				   /// <summary>
				   /// 获取椭球体起始子午面与格林威治天文子午面之间的夹角
				   /// </summary>
				   /// <returns>const ev_real64</returns>
                   virtual const ev_real64 getFromGreenWicth()const;

				   /// <summary>
				   /// 获取椭球体地理坐标单位键值对
				   /// </summary>
				   /// <param name="name">string&</param>
				   /// <param name="unitsValue">ev_real64&</param>
				   virtual ev_void  getAngularUnits(_out EVString&pszname,_out ev_real64&dfunitsValue)const;

					 ev_private:
					IEllipseSpheriod( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IEllipseSpheriod();
				private:
					IEllipseSpheriod(IEllipseSpheriod & obj);
				};

				/// <summary>
				/// 空间参考系统类，是一个基类，用于存储相关空间参考系统参数。
				/// </summary>
				class EV_INTERFACE_DLL ISpatialReference :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					virtual ~ISpatialReference();
				public:
					/// <summary>
					/// 获取空间参考系统的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间参考系统类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVSpatialReferenceType getType() const;
					/// <summary>
					/// 获取空间参考系统的EPSG值
					/// </summary>
					/// <param name=""></param>
					/// <returns>EPSG值</returns>
					virtual ev_uint32 getSRID() const;
					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间参考系统对象指针</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* clone() const;

					////by jiang guo wei 2012 12 03 
                    //{
					/// <summary>
					/// 获取椭球体指针
					/// </summary>
					///<returns>IEllipseShpere*椭球体指针</returns>
					virtual const   EarthView::World::Spatial::Geometry::IEllipseSpheriod *getCEllipseSphere() const;
					/// <summary>
					/// 将空间参考导出成指定的字符串格式
					/// </summary>
					/// <param name="type">EarthView::World::Spatial::Utility::EVSpatialReferenceStringType</param>
					/// <param name="pszText"></param>
					///<returns></returns>
					virtual ev_void  exportToString(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type,_out EVString&pszstrText)const;

					/// <summary>
					/// 获取坐标的单位名称和单位值
					/// </summary>
					/// <param name="pszunitsName"></param>
					/// <param name="dfvalue"></param>
					///<returns></returns>
					virtual ev_void  getCoordUnits( _out EVString&pszunitsName,_out ev_real64&dfvalue)const;
					
					/// <summary>
					/// 获取椭球长半轴的值
					/// </summary>
					///<returns>ev_real64</returns>
					virtual const   ev_real64 getSamiMajor()const;
                    
					/// <summary>
					/// 获取椭球扁率的倒数
					/// </summary>
					///<returns>ev_real64</returns>
					virtual const ev_real64 getInvFlattening()const;
					/// <summary>
					/// 获取椭球名称
					/// </summary>
					///<returns>ev_char*</returns>
					virtual EVString getSphereName()const;
					/// <summary>
					/// 获取空间坐标系统的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_char*坐标系统名称</returns>
					virtual EVString getCoordianteSystemName() const;
					////by jiang guo wei 2012 12 03 
					/// <summary>
					/// 将空间坐标系统 导出成流形式
					/// </summary>
					/// <param name="type">EarthView::World::Spatial::Utility::EVSpatialReferenceStringType</param>
					///<param name="objStream">流引用</param>
					/// <returns> </returns>
					virtual const ev_void  toStream(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type,_inout EarthView::World::Core::CDataStream&objStream)const;
                    //}
					/// <summary>
					/// 比较两个空间参考是否相等
					/// </summary>
					/// <param name="pref">空间参考指针</param>
					/// <returns>true ,fase</returns>
					virtual ev_bool isSameAs(const EarthView::World::Spatial::Geometry::ISpatialReference*pref)const;
					///坐标系有效计算范围
					virtual ev_void getInOutputRect(ev_bool isLatLong,ev_real64&dfLeft,
						                        ev_real64&dfTop,ev_real64&dfRight,
												ev_real64&dfDown)const;
                ev_private:
					ISpatialReference( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ISpatialReference();
				private:
					ISpatialReference(ISpatialReference & obj);
				};
			}
		}
	}
}

#endif


