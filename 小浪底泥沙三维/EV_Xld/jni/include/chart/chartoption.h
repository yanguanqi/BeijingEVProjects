#ifndef EARTHVIEW_WORLD_CHART_CCHARTOPTION_H
#define EARTHVIEW_WORLD_CHART_CCHARTOPTION_H
#include "chartsymbol_exports.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ichartoption.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{			
			namespace Atlas
			{
				class CChartLayer;
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
			namespace Display
			{
				//////////////////////////////////////////////////
				/*				CChartVRMRange					*/
				/*			某一条件符号程序所需参数				*/
				//////////////////////////////////////////////////
				//class EVCHART_DLL CChartVRMRange
				//	:	public CAllocatedObject
				//{
				//public:
				//	~CChartVRMRange();
				//	ev_void insertRadius(ev_real64 radius);
				//	ev_uint32 getRadiusNum();
				//	ev_real64 getRadiusValue(ev_uint32 i);
				//	ev_void removeRadius(ev_uint32 i);
				//	ev_void clearAll();
				//protected:
				//	CChartVRMRange();
				//private:
				//	set<ev_real64> m_dfRadius;

				//	friend class CChartOption;
				//};

				//////////////////////////////////////////////////
				/*					CChartOption				*/
				/*					海图显示条件					*/
				//////////////////////////////////////////////////
				class EVCHART_DLL CChartOption
					:	public EarthView::World::Spatial::Display::IChartOption
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CChartOption();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CChartOption();

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
				protected:
					
					///条件是否变化，如果变化，进行进一步判断
					ev_bool isConditionChanged();
							
					ev_bool isLabelNeedToChange();
					ev_bool isALlLabelNeedRecreate();
					ev_bool isAllConditionLabelNeedToChange();
					///符号是否变化，如果是，符号重新生成并重绘
				

					ev_bool isSymbolNeedToChange();
					ev_bool isAllSymbolNeedRecreate();////全部销毁，重新生成
					ev_bool isAllConditionSymbolNeedToChange();
					///以下二者表示传统符号和简单符号的变化
					///是否点要素类型变化，如果是，点符号重新生成，点符号注记重新生成
					ev_bool isPointTypeChanged();
					///是否面要素类型变化，如果是，点符号重新生成，点符号注记重新生成
					ev_bool isAreaTypeChanged();

					ev_bool isScaleChange();
					///清除所有变化状态
					ev_void clearChangeStatus();
				ev_private:
					CChartOption(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_bool m_bUseBlurRelation;
					ev_bool m_bUseBlurRelationLastTime;///在Render中生成符号时会变化
					/* 用户设置的点物标的显示类型 */
					EVChartLookUpType m_enumChartPointType;
					/* 用户设置的面物标的显示类型 */
					EVChartLookUpType m_enumChartAreaType;
					/* 辅助线补充部分类型 */
					EVChartSimpleLineType m_enumCartoAssistLineType;
					EVChartColorType m_enumColorType;
					EVChartDisplayCategory m_enumDisplayCategory;
					ev_real64 m_dfSafetyDepth;		////安全深度
					ev_real64 m_dfShallowContour;  ////selected shallow water contour (meters)
					ev_real64 m_dfSafetyContour;	//// selected safety contour (meters)
					ev_real64 m_dfDeepContour;		////selected deep water contour (meters) 
					ev_bool m_bTwoShades;			//// flag indicating selection of two depth shades (on/off)
					ev_bool m_bShallowPattern;	 	////flag indicating selection of shallow water highlight (on/off)
					ev_bool m_bShipOutline;		////flag indicating selection of ship’s scale symbol (on/off )
					ev_real64 m_dfDistanceTag;			////selected spacing of "distance to run" tags at a route (nm)
					ev_int32 m_nTimeTags;			//// selected spacing of time tags at the pasttrack (min)
					ev_bool m_bFullSectors;			////show full length light sector lines
					ev_int32 m_nTextGroup;             //////注记显示组
					ev_int32 m_nSymbolGroup;
					ev_real64 m_dfScale;

					/* 关于显示其他船舶信息 */
					ev_bool m_bShowOtherVesselOnly;
					ev_bool m_bShowOtherCourseSpeedVessel;
					/* 上面两参数显示时才有效 */
					ev_bool m_bShowStabilization;
					ev_bool m_bShowTimeMarks;
					ev_bool m_bShowHeadingLine;
					ev_int32 m_nBeamLength;
					ev_bool m_bShowBeamBearingLine;

					set<ev_real64> m_dfRadius;
					ev_bool m_bUseVRMEBLSymbolA;
					ev_real64 m_dfEBLLength;
					ev_real64 m_dfEBLAngle;
					/*CChartVRMRange m_listRadiusRange;*/

					ev_bool m_bUseEnglish;

					ev_bool m_bConditionChanged;///
					ev_bool m_bLabelChanged;///注记重新生成
					ev_bool m_bSymbolChanged;///符号重新生成,同时注记也要重新生成
					ev_bool m_bPointTypeChanged;///点符号类型变化，重新生成点符号
					ev_bool m_bAreaTypeChanged;///面符号类型变化，重新生成面符号
					ev_bool m_bSymbolRecreate;
					ev_bool m_bLabelRecreate;
					ev_bool m_bConditionLabelChanged;
					ev_bool m_bConditionSymbolChanged;
					ev_bool m_bScaleChange;

					ev_bool m_bGeneralizePoint;
					friend class CChartVectorRender;
					friend class CChartLabelRender;
					friend class EarthView::World::Spatial::Atlas::CChartLayer;
				};
			}
		}
	}
}
#endif


