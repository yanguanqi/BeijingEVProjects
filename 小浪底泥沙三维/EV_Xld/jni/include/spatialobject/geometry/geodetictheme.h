#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GEODETICTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GEODETICTHEME_H
#include "spatialobject/config.h"
namespace EarthView
{////EarthView
	namespace World
	{////World
		namespace Spatial
		{  

			namespace Utility
			{
				//求解大地主题
				class EV_GEOMETRY_DLL CGeodeticTheme: public EarthView::World::Core::CAllocatedObject
				{

				public:
					///<summary>
					///构造函数
					///</summary>
					/// <param name="dfSemiMajor">椭球长半轴</param>
					/// <param name="dfInvFlattening">椭球偏率倒数</param>
					/// <returns></returns>
					CGeodeticTheme(ev_real64 dfSemiMajor, ev_real64 dfInvFlattening);
					///<summary>
					///析构函数
					///</summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CGeodeticTheme();
					///<summary>
					///大地主题正算:已知椭球体，点A，AB距离，AB连线A处方位角，求点B及点B处方位角
					///</summary>
					/// <param name="lon1"> 点A经度</param>
					/// <param name="lat1"> 点A纬度</param>
					/// <param name="pazi1">点A处方位角</param>
					/// <param name="s12">  AB距离</param>
					/// <param name="lon2"> 输出：点B经度</param>
					/// <param name="lat2"> 输出：点B纬度</param>
					/// <param name="pazi2">输出：点B处方位角</param>
					/// <returns></returns>
					ev_void gaussSeriesForward(ev_real64 lon1, ev_real64 lat1, ev_real64 pazi1, ev_real64 s12, 
						ev_real64& lon2, ev_real64& lat2, ev_real64& pazi2);
					///<summary>
					///大地主题反算：已知椭球体，点A，点B，求AB距离，AB连线上A、B处方位角
					///</summary>
					/// <param name="lon1"> 点A经度</param>
					/// <param name="lat1"> 点A纬度</param>
					/// <param name="lon2"> 点B经度</param>
					/// <param name="lat2"> 点B纬度</param>
					/// <param name="pazi1">输出：点A处方位角</param>
					/// <param name="pazi2">输出：点B处方位角</param>
					/// <param name="s12">  输出：AB距离</param>
					/// <returns></returns>
					ev_void gaussSeriesBackward(ev_real64 lon1, ev_real64 lat1, ev_real64 lon2, ev_real64 lat2, 
						ev_real64& pazi1, ev_real64& pazi2, ev_real64& s12);
ev_private:
					CGeodeticTheme(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					C_DISABLE_COPY(CGeodeticTheme);
				private:
					void * mpGeodesic;
				};
				
			}}}}
#endif