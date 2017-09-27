#ifndef SPATIALUNITCONVERTER_H
#define SPATIALUNITCONVERTER_H

#include "spatialinterface/imap.h"
#include "spatialdisplay/spatialdisplayconfig.h"
#include "spatialinterface/ispatialreference.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{ 
				enum  LengthUnitType
				{
					LUT_KILOMETERS		= 0,	//千米，公里
					LUT_METERS			= 1,	//米
					LUT_DECIMETERS		= 2,	//分米
					LUT_CENTIMETERS		= 3,	//厘米
					LUT_MILLIMETER		= 4,	//毫米
					LUT_LI		        = 5,	//里
					LUT_ZHANG	        = 6,	//丈
					LUT_CHI				= 7,	//尺
					LUT_CUN				= 8,	//寸
					LUT_FEET			= 9,	//英尺
					LUT_INCHES			= 10,	//英寸
					LUT_YARDS			= 11,	//码
					LUT_MILES			= 12,	//英里
					LUT_NAUTICALMILES	= 13,	//海里
					LUT_DECIMALDEGREES	= 14,	//十进制度	
					LUT_POINTS			= 15,	//磅	
					LUT_UNKNOWN			= 16,	//未知单位
				};

				enum  AreaUnitType
				{
					AUT_SQUARE_KILOMETERS		= 0,	//平方公里,平方千米
					AUT_SQUARE_METERS			= 1,	//平方米
					AUT_SQUARE_DECIMETERS		= 2,	//平方分米
					AUT_SQUARE_CENTIMETERS		= 3,	//平方厘米
					AUT_SQUARE_MILLIMETER		= 4,	//平方毫米
					AUT_HECTARE                 = 5,    //公顷 
					AUT_ARE                     = 6,    //公亩
					AUT_QING					= 7,    //顷 
					AUT_MU						= 8,    //亩
					AUT_SQUARE_ZHANG			= 9,	//平方丈
					AUT_SQUARE_CHI			    = 10,	//平方尺
					AUT_SQUARE_CUN	            = 11,	//平方寸
					AUT_ACRE			        = 12,	//英亩
					AUT_SQUARE_MILES			= 13,	//平方英里
					AUT_SQUARE_FEET				= 14,	//平方英尺
					AUT_SQUARE_INCHES			= 15,	//平方英寸
					AUT_SQUARE_YARDS			= 16,	//平方码
					AUT_UNKNOWN			        = 17,	//未知单位
				};

				class EV_SPATIALDISPLAY_DLL CSpatialUnitConverter : public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					CSpatialUnitConverter();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					~CSpatialUnitConverter();

					/// <summary>
					/// 其他长度单位转化为千米
					/// </summary>
					/// <param name="defaultUnitValue">地图默认单位值</param>
					/// <param name="mapUnit">地图默认单位</param>
					/// <returns> 转化为千米后所对应的值</returns>
					ev_real64  otherLengthUnitTokm(_in ev_real64 defaultUnitValue, _in EarthView::World::Spatial::Atlas::EVMapUnits mapUnit);

					/// <summary>
					/// 千米转化为其他长度单位
					/// </summary>
					/// <param name="kiloValuve ">单位为千米的值</param>
					/// <param name="uintType ">需要转化成的长度单位类型</param>
					/// <returns>转化后的单位对应的值</returns>
					ev_real64  kmToOtherLengthUnit(_in ev_real64 kiloValuve, _in EarthView::World::Spatial::Display::LengthUnitType uintType);

					/// <summary>
					/// 其他面积单位转化为平方千米
					/// </summary>
					/// <param name="defaultUnitValue">地图默认面积单位的值</param>
					/// <param name="mapUnit">地图默认的面积单位类型</param>
					/// <returns>转化为平方千米后所对应的值</returns>
					ev_real64  otherAreaUnitTokm2(_in ev_real64 defaultUnitValue, _in EarthView::World::Spatial::Atlas::EVMapUnits mapUnit);

					/// <summary>
					/// 平方千米转化为其他面积单位
					/// </summary>
					/// <param name="squareKiloValuve">单位为平方千米的值</param>
					/// <param name="uintType ">需要转化成的面积单位类型</param>
					/// <returns>转化后的面积单位类型所对应的值</returns>
					ev_real64  km2ToOtherAreaUnit(_in ev_real64 squareKiloValuve, _in EarthView::World::Spatial::Display::AreaUnitType unitType);

					/// <summary>
					/// 获取地图单位字符
					/// </summary>
					/// <param name="mapUnit">地图单位类型</param>
					/// <returns>地图单位字符</returns>
					EVString getMapUnitString(_in EarthView::World::Spatial::Atlas::EVMapUnits mapUnit);
					
					/// <summary>
					/// 获取地图单位类型
					/// </summary>
					/// <param name="strUnit">地图单位字符</param>
					/// <returns>地图单位类型</returns>
					EarthView::World::Spatial::Atlas::EVMapUnits getMapUnitType(_in const EVString& strUnit);

					/// <summary>
					/// 获取长度单位字符
					/// </summary>
					/// <param name="mapUnit">长度单位类型</param>
					/// <returns>长度单位字符</returns>
					EVString getLengthUnitString(_in EarthView::World::Spatial::Display::LengthUnitType lengthUnit);

					/// <summary>
					/// 获取长度单位类型
					/// </summary>
					/// <param name="strUnit">长度单位字符</param>
					/// <returns>长度单位类型</returns>
					EarthView::World::Spatial::Display::LengthUnitType getLengthUnitType(_in const EVString& strUnit);

					/// <summary>
					/// 获取面积单位字符
					/// </summary>
					/// <param name="mapUnit">面积单位类型</param>
					/// <returns>面积单位字符</returns>
					EVString getAreaUnitString(_in EarthView::World::Spatial::Display::AreaUnitType areaUnit);

					/// <summary>
					/// 获取面积单位类型
					/// </summary>
					/// <param name="strUnit">面积单位字符</param>
					/// <returns>面积单位类型</returns>
					EarthView::World::Spatial::Display::AreaUnitType getAreaUnitType(_in const EVString& strUnit);

					/// <summary>
					/// 由十进制度格式转化成度分秒
					/// </summary>
					/// <param name="dDecimal">十进制度的值</param>
					/// <param name="nDgr">度</param>
					/// <param name="nMin">分</param>
					/// <param name="dSec">秒</param>
					/// <returns></returns>
					void toDMS(_in ev_real64 dDecimal, _out int &nDeg, _out int &nMin, _out ev_real64 &dSec);
				
					/// <summary>
					/// 由度分秒格式转化成十进制度
					/// </summary>
					/// <param name="nDgr">度</param>
					/// <param name="nMin">分</param>
					/// <param name="dSec">秒</param>
					/// <param name="dDecimal">十进制度的值</param>
					/// <returns></returns>
					void toDecimal(_in  int nDgr, _in  int nMin, _in ev_real64 dSec, _out ev_real64 &dDecimal);

					/// <summary>
					/// 获取经纬所在的半球
					/// </summary>
					/// <param name="bXCoord">如果是X坐标，输入true,如果为Y坐标，输入false</param>
					/// <param name="dCoordinate">十进制度的值</param>
					/// <returns>坐标值所在的半球</returns>
					EVString getOrientationString(_in ev_bool bXCoord, _in ev_real64 dCoordinate);

					/// <summary>
					/// 转化为WGS84坐标系的点
					/// </summary>
					/// <param name="pPointRef">当前点对应的坐标系</param>
					/// <param name="dPX">点的X坐标值</param>
					/// <param name="dPY">点的Y坐标值</param>
					/// <param name="nCount">进行转化的点的个数</param>
					/// <returns>坐标值所在的半球</returns>
					void toWGS84Point(_in EarthView::World::Spatial::Geometry::ISpatialReference* pPointRef, _out ev_real64 *dPX, _out ev_real64 *dPY, _in ev_int32 nCount);
				};
			}
		}
	}
}


#endif // SPATIALDATAEXCHANGE_H

