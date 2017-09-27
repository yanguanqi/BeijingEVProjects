#ifndef EARTHVIEW_WORLD_CHART_ICHARTOPTION_H
#define EARTHVIEW_WORLD_CHART_ICHARTOPTION_H
#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				/// <summary>
				/// 海图查询表类型
				/// </summary>
				enum EVChartLookUpType
				{
					/// <summary>
					/// 传统点描述
					/// </summary>
					EVChartLookUpTypePaperChart = 1,//////
					/// <summary>
					/// 简单点描述
					/// </summary>
					EVChartLookUpTypeSimplified = 2,/////////简化，点一般情况
					/// <summary>
					/// 线描述
					/// </summary>
					EVChartLookUpTypeLine = 3,
					/// <summary>
					/// 简单边界描述
					/// </summary>
					EVChartLookUpTypePlainBoundary = 4,///////面一般情况
					/// <summary>
					/// 符号化边界描述
					/// </summary>
					EVChartLookUpTypeSymbolizedBoundary = 5///////////应用于大比例尺海图
				};
	
				/// <summary>
				/// 简单线的类型
				/// </summary>
				enum EVChartSimpleLineType
				{
					/// <summary>
					/// 未知
					/// </summary>
					EVChartSimpleLineTypeUnknown = 0,
					/// <summary>
					/// 实体线
					/// </summary>
					EVChartSimpleLineTypeSold  = 1,
					/// <summary>
					/// 虚线
					/// </summary>
					EVChartSimpleLineTypeDash  = 2,
					/// <summary>
					/// 点线
					/// </summary>
					EVChartSimpleLineTypeDott  = 3
				};

				/// <summary>
				/// 颜色显示模式
				/// </summary>
				enum EVChartColorType
				{
					/// <summary>
					/// 晴朗
					/// </summary>
					CCT_DAY_BRIGHT = 1,/////设为默认
					/// <summary>
					/// 傍晚
					/// </summary>
					CCT_DAY_BLACKBACK = 2,
					/// <summary>
					/// 白天
					/// </summary>
					CCT_DAY_WHITEBACK = 3,
					/// <summary>
					/// 有雾
					/// </summary>
					CCT_DAY_DUSK = 4,
					/// <summary>
					/// 夜晚
					/// </summary>
					CCT_DAY_NIGHT = 5
				};
		
				/// <summary>
				/// 海图显示类
				/// </summary>
				enum EVChartDisplayCategory
				{
					CDC_Unknown = 0,
					/// <summary>
					/// 显示基础物标
					/// </summary>
					CDC_Base = 1,
					/// <summary>
					/// 显示标准物标
					/// </summary>
					CDC_Standard = 2,
					/// <summary>
					/// 其他
					/// </summary>
					CDC_Other = 3
				};

				/// <summary>
				/// 雷达压盖标识
				/// </summary>
				enum EVChartRadarFlag
				{
					/// <summary>
					/// 未知
					/// </summary>
					EVChartRadarFlagUnknown = 0,
					/// <summary>
					/// 压盖雷达,默认 
					/// </summary>
					EVChartRadarFlagOver = 1,
					/// <summary>
					/// 被雷达压盖
					/// </summary>
					EVChartRadarFlagUnder = 2
				};
				/// <summary>
				/// 海图选择参数类接口
				/// </summary>
				class EV_INTERFACE_DLL IChartOption
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					IChartOption();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~IChartOption();

					/*ev_void copyTo(CChartOption& option);
					ev_bool equalTo(CChartOption& option);*/

					/// <summary>
					/// 获取点状物标的类型
					/// </summary>
					/// <returns>类型</returns>
					virtual EarthView::World::Spatial::Display::EVChartLookUpType getChartPointType() const;

					/// <summary>
					/// 设置点状物标的类型
					/// </summary>
					/// <param name="type">类型</param>
					/// <returns>类型</returns>
					virtual ev_void setChartPointType(EarthView::World::Spatial::Display::EVChartLookUpType type);
				
					/// <summary>
					/// 获取面状物标的类型
					/// </summary>
					/// <returns>类型</returns>
					virtual EarthView::World::Spatial::Display::EVChartLookUpType getChartAreaType() const;
					
					/// <summary>
					/// 设置面状物标的类型
					/// </summary>
					/// <param name="type">类型</param>
					/// <returns></returns>
					virtual ev_void setChartAreaType(EarthView::World::Spatial::Display::EVChartLookUpType type);

					/// <summary>
					/// 获取辅助线补充部分类型
					/// </summary>
					/// <returns>类型</returns>
					virtual EarthView::World::Spatial::Display::EVChartSimpleLineType getCartoAssistLineType() const;
					
					/// <summary>
					/// 设置辅助线补充部分类型
					/// </summary>
					/// <param name="type">显示类型</param>
					/// <returns></returns>
					virtual ev_void setCartoAssistLineType(EarthView::World::Spatial::Display::EVChartSimpleLineType type);

					/// <summary>
					/// 设置颜色模式
					/// </summary>
					/// <param name="type">颜色模式</param>
					/// <returns></returns>
					virtual ev_void setColorType(EarthView::World::Spatial::Display::EVChartColorType type);
					
					/// <summary>
					/// 获取颜色模式
					/// </summary>
					/// <returns>获取颜色模式</returns>
					virtual EarthView::World::Spatial::Display::EVChartColorType getColorType() const;

					/// <summary>
					/// 获取显示类型
					/// </summary>
					/// <returns>显示类型</returns>
					virtual EarthView::World::Spatial::Display::EVChartDisplayCategory getDisplayCategory() const;
					
					/// <summary>
					/// 设置显示类型
					/// </summary>
					/// <param name="category">显示类型</param>
					/// <returns></returns>
					virtual ev_void setDisplayCategory(EarthView::World::Spatial::Display::EVChartDisplayCategory category);

					/// <summary>
					/// 获取安全深度，单位：米
					/// </summary>
					/// <returns>安全深度</returns>
					virtual ev_real64 getSafetyDeep() const;
					
					/// <summary>
					/// 设置安全深度
					/// </summary>
					/// <param name="value">安全深度</param>
					/// <returns></returns>
					virtual ev_void setSafetyDeep(ev_real64 value);

					/// <summary>
					/// 获取安全等深线，单位：米
					/// </summary>
					/// <returns>安全等深线值</returns>
					virtual ev_real64 getSafetyContour() const;
					
					/// <summary>
					/// 设置安全等深线，单位：米
					/// </summary>
					/// <param name="value">安全等深线值</param>
					/// <returns></returns>
					virtual ev_void setSafetyContour(ev_real64 value);

					/// <summary>
					/// 获取浅水等深线，单位：米
					/// </summary>
					/// <returns>潜水等深线值</returns>
					virtual ev_real64 getShallowContour() const;
					
					/// <summary>
					/// 设置浅水等深线，单位：米
					/// </summary>
					/// <param name="value">浅水等深线值</param>
					/// <returns></returns>
					virtual ev_void setShallowContour(ev_real64 value);

					/// <summary>
					/// 获取深水等深线，单位：米
					/// </summary>
					/// <returns>深水等深线值</returns>
					virtual ev_real64 getDeepContour() const;
					
					/// <summary>
					/// 设置深水等深线，单位：米
					/// </summary>
					/// <param name="value">深水等深线值</param>
					/// <returns></returns>
					virtual ev_void setDeepContour(ev_real64 value);

					/// <summary>
					/// 获取双阴影模式是否开启
					/// </summary>
					/// <returns>开启返回ture，否则返回false</returns>
					virtual ev_bool isTwoShadesOn() const;
					
					/// <summary>
					/// 设置双阴影模式是否开启
					/// </summary>
					/// <param name="value">true开启/false关闭</param>
					/// <returns></returns>
					virtual ev_void setTwoShadesValue(ev_bool value);

					/// <summary>
					/// 获取潜水模式是否开启
					/// </summary>
					/// <returns>true开启/flase关闭</returns>
					virtual ev_bool isShallowPatternOn() const;
					
					/// <summary>
					/// 设置潜水模式是否开启
					/// </summary>
					/// <param name="value">true开启/flase关闭</param>
					/// <returns></returns>
					virtual ev_void setShallowPatternValue(ev_bool value);

					/// <summary>
					/// 获取是否渲染船轮廓
					/// </summary>
					/// <returns>true渲染轮廓/false点符号表示</returns>
					virtual ev_bool isShipOutlineOn() const;
					
					/// <summary>
					/// 设置是否渲染船轮廓
					/// </summary>
					/// <param name="value">true渲染轮廓/false点符号表示</param>
					/// <returns></returns>
					virtual ev_void setShipOutlineValue(ev_bool value);

					/// <summary>
					/// 获取是否显示完整长度的光照线
					/// </summary>
					/// <returns>true开启/false关闭</returns>
					virtual ev_bool isFullSectorsOn() const;
					
					/// <summary>
					/// 设置是否显示完整长度的光照线
					/// </summary>
					/// <param name="value">true开启/false关闭</param>
					/// <returns></returns>
					virtual ev_void setFullSectorsValue(ev_bool value);

					/// <summary>
					/// 获取航线上需要航行的距离，单位：海里
					/// </summary>
					/// <returns>距离</returns>
					virtual ev_real64 getDistanceTag() const;
					
					/// <summary>
					/// 设置航线上需要航行的距离，单位：海里
					/// </summary>
					/// <param name="value">距离</param>
					/// <returns></returns>
					virtual ev_void setDistanceTag(ev_real64 value);

					/// <summary>
					/// 获取船舶航迹的时间标记
					/// </summary>
					/// <returns>时间间隔，单位：分</returns>
					virtual ev_int32 getTimeTags() const;
					
					/// <summary>
					/// 设置船舶航迹的时间标记
					/// </summary>
					/// <param name="value">时间间隔，单位：分</param>
					/// <returns></returns>
					virtual ev_void setTimeTages(ev_int32 value);

					/// <summary>
					/// 获取显示符号组
					/// </summary>
					/// <returns>显示符号组代码</returns>
					virtual ev_int32 getSymbolGroup() const;
					
					/// <summary>
					/// 设置显示符号组
					/// </summary>
					/// <param name="value">显示符号组代码</param>
					/// <returns></returns>
					virtual ev_void setSymbolGroup(ev_int32 value);
					
					/// <summary>
					/// 获取显示注记组
					/// </summary>
					/// <returns>显示注记组代码</returns>
					virtual ev_int32 getTextGroup() const;
					
					/// <summary>
					/// 设置显示注记组
					/// </summary>
					/// <param name="group">显示注记组代码</param>
					/// <returns></returns>
					virtual ev_void setTextGroup(ev_int32 group);

					/// <summary>
					/// 获取海图比例尺
					/// </summary>
					/// <returns>海图比例尺</returns>
					virtual ev_real64 getChartScale() const;
					
					/// <summary>
					/// 设置海图比例尺
					/// </summary>
					/// <param name="scale">海图比例尺</param>
					/// <returns></returns>
					virtual ev_void setChartScale(ev_real64 scale);

					/// <summary>
					/// 获取是否显示其他船只
					/// </summary>
					/// <returns>true显示其他船只/false不显示</returns>
					virtual ev_bool isShowOtherVessel() const;
					
					/// <summary>
					/// 设置是否显示其他船只
					/// </summary>
					/// <param name="value">true显示/false不显示</param>
					/// <returns></returns>
					virtual ev_void setShowOtherVesselValue(ev_bool value);

					/// <summary>
					/// 获取是否显示路线及速度矢量
					/// </summary>
					/// <returns>true显示/false不显示</returns>
					virtual ev_bool isShowCourseSpeedVessel() const;
					
					/// <summary>
					/// 设置是否显示路线及速度矢量
					/// </summary>
					/// <returns>true显示/false不显示</returns>
					virtual ev_void setShowCourseSpeedVesselValue(ev_bool value);

					/// <summary>
					/// 获取是否显示船宽度轴线
					/// </summary>
					/// <returns>true显示/不显示</returns>
					virtual ev_bool isShowBeamBearingLine() const;
					
					/// <summary>
					/// 设置是否显示船的宽度轴线
					/// </summary>
					/// <param name="value">true显示/不显示</param>
					/// <returns></returns>
					virtual ev_void setShowBeamBearingLineValue(ev_bool value);

					/// <summary>
					/// 获取是否显示速度矢量稳定性
					/// </summary>
					/// <returns>true显示/false不显示</returns>
					virtual ev_bool isShowStabilization() const;
					
					/// <summary>
					/// 设置是否显示速度矢量稳定性
					/// </summary>
					/// <param name="value">true显示/false不显示</param>
					/// <returns></returns>
					virtual ev_void setShowStabilizationValue(_in ev_bool value);

					/// <summary>
					/// 获取是否在速度矢量上做时间标记
					/// </summary>
					/// <returns>true显示时间标记/false不显示</returns>
					virtual ev_bool isShowTimeMarks() const;
					
					/// <summary>
					/// 设置是否在速度矢量上做时间标记
					/// </summary>
					/// <param name="value">true显示时间标记/false不显示</param>
					/// <returns></returns>
					virtual ev_void setShowTimeMarksValue(_in ev_bool value);

					/// <summary>
					/// 获取是否显示航向线
					/// </summary>
					/// <returns>true显示，false不显示</returns>
					virtual ev_bool isShowHeadingLine() const;
					
					/// <summary>
					/// 设置是否显示航向线
					/// </summary>
					/// <param name="value">true显示，false不显示</param>
					/// <returns></returns>
					virtual ev_void setShowHeadingLineValue(_in ev_bool value);

					/// <summary>
					/// 获取船宽度线的长度，单位：毫米
					/// </summary>
					/// <returns>长度，默认值：10</returns>
					virtual ev_int32 getShipBeamLengthValue() const;
					
					/// <summary>
					/// 设置船宽度线的长度单位：毫米，默认值10
					/// </summary>
					/// <param name="value">线的长度</param>
					/// <returns></returns>
					virtual ev_void setShipBeamLengthValue(_in ev_int32 value);

					
					/// <summary>
					/// 插入可变距离标识的半径
					/// </summary>
					/// <param name="radius">标识的半径，单位：海里</param>
					/// <returns></returns>
					virtual ev_void insertVRMRadius(_in ev_real64 radius);
					
					/// <summary>
					/// 获取可变距离标识的总数
					/// </summary>
					/// <returns>标识总数</returns>
					virtual ev_uint32 getVRMRadiusNum() const;
					
					/// <summary>
					/// 获取指定索引的标识半径
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>标识的半径，单位：海里</returns>
					virtual ev_real64 getVRMRadiusValue(_in ev_uint32 index) const;
					
					/// <summary>
					/// 移除指定索引的标识半径
					/// </summary>
					/// <param name="index">标识半径</param>
					/// <returns></returns>
					virtual ev_void removeVRMRadius(_in ev_uint32 index);
					
					/// <summary>
					/// 清空已设的标识半径
					/// </summary>
					/// <returns></returns>
					virtual ev_void clearVRMRadius();

					/// <summary>
					/// 获取渲染可变距离标识和电子方位线时采用的符号
					/// </summary>
					/// <returns>true采用ERBLNA01,false采用ERBLNB01</returns>
					virtual ev_bool isUseVRMEBLSymbolA() const;
					
					/// <summary>
					/// 设置渲染可变距离标识和电子方位线时采用的符号
					/// </summary>
					/// <param name="value">true采用ERBLNA01,false采用ERBLNB01</param>
					/// <returns></returns>
					virtual ev_void setUseVRMEBLSymbolAValue(_in ev_bool value);

					/// <summary>
					/// 获取电子方位线的长度
					/// </summary>
					/// <returns>长度，单位：海里</returns>
					virtual ev_real64 getEBLLength() const;

					/// <summary>
					/// 设置电子方位线的长度
					/// </summary>
					/// <param name="length">长度，单位：海里</param>
					/// <returns></returns>
					virtual ev_void setEBLLength(_in ev_real64 length);

					/// <summary>
					/// 获取电子方位线的角度
					/// </summary>
					/// <returns>电子方位线的角度</returns>
					virtual ev_real64 getEBLAngle() const;
					
					/// <summary>
					/// 设置电子方位线的角度
					/// </summary>
					/// <param name="angle">电子方位线的角度</param>
					/// <returns></returns>
					virtual ev_void setEBLAngle(_in ev_real64 angle);

					/// <summary>
					/// 设置是否显示英语
					/// </summary>
					/// <param name="value">true用英语/用其他语言</param>
					/// <returns></returns>
					virtual ev_void setUseEnglishValue(_in ev_bool value);
					
					/// <summary>
					/// 注记是否显示英语
					/// </summary>
					/// <returns>true用英语/用其他语言</returns>
					virtual ev_bool getUseEnglishValue() const;
				
					/// <summary>
					/// 设置是否模糊查询空间关系，默认为true
					/// </summary>
					/// <param name="value">true表示模糊查询/false表示精确查询</param>
					/// <returns></returns>
					virtual ev_void setUseBlurSpatialRelation(_in ev_bool value);
					
					/// <summary>
					/// 获取是否模糊查询空间关系，默认为true
					/// </summary>
					/// <returns>true表示模糊查询/false表示精确查询</returns>
					virtual ev_bool isUseBlurSpatialRelation() const;

					/// <summary>
					/// 设置渲染时是否对水深注记进行综合，默认为false
					/// </summary>
					/// <param name="value">true对水深注记进行制图综合，false按原始状态渲染</param>
					/// <returns></returns>
					virtual ev_void setGeneralizeSoundgPoints(_in ev_bool value);
					
					/// <summary>
					/// 获取渲染时是否对水深注记进行综合
					/// </summary>
					/// <returns>true对水深注记进行制图综合，false按原始状态渲染，默认为false</returns>
					virtual ev_bool isGeneralizeSoundgPoints()const;

					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>克隆结果指针</returns>
					virtual EarthView::World::Spatial::Display::IChartOption* clone();
				ev_private:
					IChartOption( EarthView::World::Core::CNameValuePairList *pList );
				};
			}
		}
	}
}
#endif

