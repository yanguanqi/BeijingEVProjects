
#ifndef _SYSTERM_EUNE_COORD_H
#define _SYSTERM_EUNE_COORD_H
#undef EV_GEOMETRY_DLL
//////导出宏定义
#ifdef COORDINATESYSTEMEXPORTS
#define EV_GEOMETRY_DLL EV_DLL_EXPORT
#else
#define EV_GEOMETRY_DLL EV_DLL_IMPORT
#endif
#include "core/global.h"
#include "core/multibytestring.h"
#include "core/memoryallocatedobject.h"
#include "core/graphic_exception.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{  

			namespace Utility
			{
			 ///参考类型
			enum EVReferenceType
			{    
				RF_GAUSS     = 0, ///高斯投影参考
				RF_UTM       = 1, ///UTM参考
				RF_MERCATOR   = 2, ///mercator参考
				RF_LATLONG    = 3, ///经纬网参考
				RF_LAMBERTCC  = 4, ///兰伯特正形投影参考
				RF_UNKNOWN    = 5  ///未知参考
			};
			////计算
			enum EVTransformMethod
			{
				TR_BOOLSHA   = 0,///布尔莎
				TR_RIGOROUS  = 1  ///严格变换模型
			};
			////	
           /************************************************************************/
           /*     EVWellKnownGeoCSType                                               */
           /************************************************************************/
			///<summary>
			///EVWellKnownGeoCSType
			///枚举常见地理坐标系统
			///可根据该枚举值创建一个常见的地理坐标系，如80椭球坐标系
			///</summary>
			enum EVWellKnownGeoCSType
			{  
			   GEO_UNKNOWN   = 0,
               GEO_Beijing54 = 4214, ///应该研究使与ESPG保持一致
			   GEO_XIAN80    = 4610,
			   GEO_WGS84     = 4326,
			   GEO_CGCS2000  = 4490,
			   GEO_WGS72     = 4322,
			   GEO_NSWC9Z_2  = 4276
 			};
            /************************************************************************/
            /*  EVWellKnownProjCSType                                                */
            /************************************************************************/
			///<summary>
			///EVWellKnownProjCSType
			///枚举常见与椭球体相关的具体投影坐标系 
			///程序根据这个标识可以创建一个投影坐标系统
			///</summary>
			enum EVWellKnownProjCSType
			{
				evgsProjectedCoordinateSystemTypeUnknow				= 0,

				WGS1984_World_Mercator								= 3395,
				WGS1984_SphereWeb_Mercator							= 102113,

				//WGS_84_UTM_Grid_System_Northern_Hemisphere          = 32600,
				WGS_84_UTM_Zone_1N									= 32601,
				WGS_84_UTM_Zone_2N									= 32602,
				WGS_84_UTM_Zone_3N									= 32603,
				WGS_84_UTM_Zone_4N									= 32604,
				WGS_84_UTM_Zone_5N									= 32605,
				WGS_84_UTM_Zone_6N									= 32606,
				WGS_84_UTM_Zone_7N									= 32607,
				WGS_84_UTM_Zone_8N									= 32608,
				WGS_84_UTM_Zone_9N									= 32609,
				WGS_84_UTM_Zone_10N									= 32610,
				WGS_84_UTM_Zone_11N									= 32611,
				WGS_84_UTM_Zone_12N									= 32612,
				WGS_84_UTM_Zone_13N									= 32613,
				WGS_84_UTM_Zone_14N									= 32614,
				WGS_84_UTM_Zone_15N									= 32615,
				WGS_84_UTM_Zone_16N									= 32616,
				WGS_84_UTM_Zone_17N									= 32617,
				WGS_84_UTM_Zone_18N									= 32618,
				WGS_84_UTM_Zone_19N									= 32619,
				WGS_84_UTM_Zone_20N									= 32620,
				WGS_84_UTM_Zone_21N									= 32621,
				WGS_84_UTM_Zone_22N									= 32622,
				WGS_84_UTM_Zone_23N									= 32623,
				WGS_84_UTM_Zone_24N									= 32624,
				WGS_84_UTM_Zone_25N									= 32625,
				WGS_84_UTM_Zone_26N									= 32626,
				WGS_84_UTM_Zone_27N									= 32627,
				WGS_84_UTM_Zone_28N									= 32628,
				WGS_84_UTM_Zone_29N									= 32629,
				WGS_84_UTM_Zone_30N									= 32630,
				WGS_84_UTM_Zone_31N									= 32631,
				WGS_84_UTM_Zone_32N									= 32632,
				WGS_84_UTM_Zone_33N									= 32633,
				WGS_84_UTM_Zone_34N									= 32634,
				WGS_84_UTM_Zone_35N									= 32635,
				WGS_84_UTM_Zone_36N									= 32636,
				WGS_84_UTM_Zone_37N									= 32637,
				WGS_84_UTM_Zone_38N									= 32638,
				WGS_84_UTM_Zone_39N									= 32639,
				WGS_84_UTM_Zone_40N									= 32640,
				WGS_84_UTM_Zone_41N									= 32641,
				WGS_84_UTM_Zone_42N									= 32642,
				WGS_84_UTM_Zone_43N									= 32643,
				WGS_84_UTM_Zone_44N									= 32644,
				WGS_84_UTM_Zone_45N									= 32645,
				WGS_84_UTM_Zone_46N									= 32646,
				WGS_84_UTM_Zone_47N									= 32647,
				WGS_84_UTM_Zone_48N									= 32648,
				WGS_84_UTM_Zone_49N									= 32649,
				WGS_84_UTM_Zone_50N									= 32650,
				WGS_84_UTM_Zone_51N									= 32651,
				WGS_84_UTM_Zone_52N									= 32652,
				WGS_84_UTM_Zone_53N									= 32653,
				WGS_84_UTM_Zone_54N									= 32654,
				WGS_84_UTM_Zone_55N									= 32655,
				WGS_84_UTM_Zone_56N									= 32656,
				WGS_84_UTM_Zone_57N									= 32657,
				WGS_84_UTM_Zone_58N									= 32658,
				WGS_84_UTM_Zone_59N									= 32659,
				WGS_84_UTM_Zone_60N									= 32660,
				//WGS_84_UPS_North									= 32661,
				//WGS_84_Plate_Carree					    			= 32662,
				//WGS_84_World_Equidistant_Cylindrical				    = 32663,
				//WGS_84_BLM_14N 										= 32664,	
				//WGS_84_BLM_15N 										= 32665,	
				//WGS_84_BLM_16N 										= 32666,	
				//WGS_84_BLM_17N 										= 32667,

				WGS_84_UTM_Grid_System_Southern_Hemisphere  		= 32700,	//南半球
				WGS_84_UTM_zone_1S									= 32701,	
				WGS_84_UTM_zone_2S									= 32702,	
				WGS_84_UTM_zone_3S									= 32703,	
				WGS_84_UTM_zone_4S									= 32704,	
				WGS_84_UTM_zone_5S									= 32705,	
				WGS_84_UTM_zone_6S									= 32706,	
				WGS_84_UTM_zone_7S									= 32707,	
				WGS_84_UTM_zone_8S									= 32708,	
				WGS_84_UTM_zone_9S									= 32709,	
				WGS_84_UTM_zone_10S									= 32710,	
				WGS_84_UTM_zone_11S									= 32711,	
				WGS_84_UTM_zone_12S									= 32712,	
				WGS_84_UTM_zone_13S									= 32713,	
				WGS_84_UTM_zone_14S									= 32714,	
				WGS_84_UTM_zone_15S									= 32715,	
				WGS_84_UTM_zone_16S									= 32716,	
				WGS_84_UTM_zone_17S									= 32717,	
				WGS_84_UTM_zone_18S									= 32718,	
				WGS_84_UTM_zone_19S									= 32719,	
				WGS_84_UTM_zone_20S									= 32720,	
				WGS_84_UTM_zone_21S									= 32721,	
				WGS_84_UTM_zone_22S									= 32722,	
				WGS_84_UTM_zone_23S									= 32723,	
				WGS_84_UTM_zone_24S									= 32724,	
				WGS_84_UTM_zone_25S									= 32725,	
				WGS_84_UTM_zone_26S									= 32726,	
				WGS_84_UTM_zone_27S									= 32727,	
				WGS_84_UTM_zone_28S									= 32728,	
				WGS_84_UTM_zone_29S									= 32729,	
				WGS_84_UTM_zone_30S									= 32730,	
				WGS_84_UTM_zone_31S									= 32731,	
				WGS_84_UTM_zone_32S									= 32732,	
				WGS_84_UTM_zone_33S									= 32733,	
				WGS_84_UTM_zone_34S									= 32734,	
				WGS_84_UTM_zone_35S									= 32735,	
				WGS_84_UTM_zone_36S									= 32736,	
				WGS_84_UTM_zone_37S									= 32737,	
				WGS_84_UTM_zone_38S									= 32738,	
				WGS_84_UTM_zone_39S									= 32739,	
				WGS_84_UTM_zone_40S									= 32740,	
				WGS_84_UTM_zone_41S									= 32741,	
				WGS_84_UTM_zone_42S									= 32742,	
				WGS_84_UTM_zone_43S									= 32743,	
				WGS_84_UTM_zone_44S									= 32744,	
				WGS_84_UTM_zone_45S									= 32745,	
				WGS_84_UTM_zone_46S									= 32746,	
				WGS_84_UTM_zone_47S									= 32747,	
				WGS_84_UTM_zone_48S									= 32748,	
				WGS_84_UTM_zone_49S									= 32749,	
				WGS_84_UTM_zone_50S									= 32750,	
				WGS_84_UTM_zone_51S									= 32751,	
				WGS_84_UTM_zone_52S									= 32752,	
				WGS_84_UTM_zone_53S									= 32753,	
				WGS_84_UTM_zone_54S									= 32754,	
				WGS_84_UTM_zone_55S									= 32755,	
				WGS_84_UTM_zone_56S									= 32756,	
				WGS_84_UTM_zone_57S									= 32757,	
				WGS_84_UTM_zone_58S									= 32758,	
				WGS_84_UTM_zone_59S									= 32759,	
				WGS_84_UTM_zone_60S									= 32760,	


				Xian_1980_Gauss_Kruger_zone_13						= 2327,	//高斯-克吕格投影 6°分带 偏移含带号
				Xian_1980_Gauss_Kruger_zone_14						= 2328,	
				Xian_1980_Gauss_Kruger_zone_15						= 2329,	
				Xian_1980_Gauss_Kruger_zone_16						= 2330,	
				Xian_1980_Gauss_Kruger_zone_17						= 2331,	
				Xian_1980_Gauss_Kruger_zone_18						= 2332,	
				Xian_1980_Gauss_Kruger_zone_19						= 2333,	
				Xian_1980_Gauss_Kruger_zone_20						= 2334,	
				Xian_1980_Gauss_Kruger_zone_21						= 2335,	
				Xian_1980_Gauss_Kruger_zone_22						= 2336,	
				Xian_1980_Gauss_Kruger_zone_23						= 2337,	
				Xian_1980_Gauss_Kruger_CM_75E						= 2338,	//高斯-克吕格投影 6°分带 偏移不含带号
				Xian_1980_Gauss_Kruger_CM_81E						= 2339,	
				Xian_1980_Gauss_Kruger_CM_87E						= 2340,	
				Xian_1980_Gauss_Kruger_CM_93E						= 2341,	
				Xian_1980_Gauss_Kruger_CM_99E						= 2342,	
				Xian_1980_Gauss_Kruger_CM_105E						= 2343,	
				Xian_1980_Gauss_Kruger_CM_111E						= 2344,	
				Xian_1980_Gauss_Kruger_CM_117E						= 2345,	
				Xian_1980_Gauss_Kruger_CM_123E						= 2346,	
				Xian_1980_Gauss_Kruger_CM_129E						= 2347,	
				Xian_1980_Gauss_Kruger_CM_135E						= 2348,	

				Xian_1980_3_degree_Gauss_Kruger_zone_25 			= 2349,	//高斯克吕格3°分带，偏移含带号
				Xian_1980_3_degree_Gauss_Kruger_zone_26 			= 2350,	
				Xian_1980_3_degree_Gauss_Kruger_zone_27 			= 2351,	
				Xian_1980_3_degree_Gauss_Kruger_zone_28 			= 2352,	
				Xian_1980_3_degree_Gauss_Kruger_zone_29 			= 2353,	
				Xian_1980_3_degree_Gauss_Kruger_zone_30 			= 2354,	
				Xian_1980_3_degree_Gauss_Kruger_zone_31 			= 2355,	
				Xian_1980_3_degree_Gauss_Kruger_zone_32 			= 2356,	
				Xian_1980_3_degree_Gauss_Kruger_zone_33 			= 2357,	
				Xian_1980_3_degree_Gauss_Kruger_zone_34				= 2358,	
				Xian_1980_3_degree_Gauss_Kruger_zone_35				= 2359,	
				Xian_1980_3_degree_Gauss_Kruger_zone_36				= 2360,	
				Xian_1980_3_degree_Gauss_Kruger_zone_37				= 2361,	
				Xian_1980_3_degree_Gauss_Kruger_zone_38				= 2362,	
				Xian_1980_3_degree_Gauss_Kruger_zone_39				= 2363,	
				Xian_1980_3_degree_Gauss_Kruger_zone_40				= 2364,	
				Xian_1980_3_degree_Gauss_Kruger_zone_41				= 2365,	
				Xian_1980_3_degree_Gauss_Kruger_zone_42				= 2366,	
				Xian_1980_3_degree_Gauss_Kruger_zone_43				= 2367,	
				Xian_1980_3_degree_Gauss_Kruger_zone_44				= 2368,	
				Xian_1980_3_degree_Gauss_Kruger_zone_45				= 2369,	

				Xian_1980_3_degree_Gauss_Kruger_CM_75E				= 2370,	//高斯克吕格3°分带，偏移不含带号
				Xian_1980_3_degree_Gauss_Kruger_CM_78E				= 2371,	
				Xian_1980_3_degree_Gauss_Kruger_CM_81E				= 2372,	
				Xian_1980_3_degree_Gauss_Kruger_CM_84E				= 2373,	
				Xian_1980_3_degree_Gauss_Kruger_CM_87E				= 2374,	
				Xian_1980_3_degree_Gauss_Kruger_CM_90E				= 2375,	
				Xian_1980_3_degree_Gauss_Kruger_CM_93E				= 2376,	
				Xian_1980_3_degree_Gauss_Kruger_CM_96E				= 2377,	
				Xian_1980_3_degree_Gauss_Kruger_CM_99E				= 2378,	
				Xian_1980_3_degree_Gauss_Kruger_CM_102E				= 2379,	
				Xian_1980_3_degree_Gauss_Kruger_CM_105E				= 2380,	
				Xian_1980_3_degree_Gauss_Kruger_CM_108E				= 2381,	
				Xian_1980_3_degree_Gauss_Kruger_CM_111E				= 2382,	
				Xian_1980_3_degree_Gauss_Kruger_CM_114E				= 2383,	
				Xian_1980_3_degree_Gauss_Kruger_CM_117E				= 2384,	
				Xian_1980_3_degree_Gauss_Kruger_CM_120E				= 2385,	
				Xian_1980_3_degree_Gauss_Kruger_CM_123E				= 2386,	
				Xian_1980_3_degree_Gauss_Kruger_CM_126E				= 2387,	
				Xian_1980_3_degree_Gauss_Kruger_CM_129E				= 2388,	
				Xian_1980_3_degree_Gauss_Kruger_CM_132E				= 2389,	
				Xian_1980_3_degree_Gauss_Kruger_CM_135E				= 2390,	

				Beijing_1954_3_degree_Gauss_Kruger_zone_25			= 2401,	//高斯克吕格3°分带，偏移含带号
				Beijing_1954_3_degree_Gauss_Kruger_zone_26			= 2402,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_27			= 2403,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_28			= 2404,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_29			= 2405,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_30			= 2406,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_31			= 2407,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_32			= 2408,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_33			= 2409,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_34			= 2410,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_35			= 2411,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_36			= 2412,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_37			= 2413,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_38			= 2414,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_39			= 2415,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_40			= 2416,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_41			= 2417,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_42			= 2418,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_43			= 2419,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_44			= 2420,	
				Beijing_1954_3_degree_Gauss_Kruger_zone_45			= 2421,	

				Beijing_1954_3_degree_Gauss_Kruger_CM_75E			= 2422,	//高斯克吕格3°分带，偏移不含带号
				Beijing_1954_3_degree_Gauss_Kruger_CM_78E			= 2423,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_81E			= 2424,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_84E			= 2425,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_87E			= 2426,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_90E			= 2427,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_93E			= 2428,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_96E			= 2429,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_99E			= 2430,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_102E			= 2431,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_105E			= 2432,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_108E			= 2433,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_111E			= 2434,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_114E			= 2435,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_117E			= 2436,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_120E			= 2437,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_123E			= 2438,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_126E			= 2439,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_129E			= 2440,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_132E			= 2441,	
				Beijing_1954_3_degree_Gauss_Kruger_CM_135E			= 2442,	//

				Beijing_1954_Gauss_Kruger_Zone_13                   = 21413,//高斯克吕格投影6°分带 偏移含带号
				Beijing_1954_Gauss_Kruger_Zone_14                   = 21414,
				Beijing_1954_Gauss_Kruger_Zone_15                   = 21415,
				Beijing_1954_Gauss_Kruger_Zone_16                   = 21416,
				Beijing_1954_Gauss_Kruger_Zone_17                   = 21417,
				Beijing_1954_Gauss_Kruger_Zone_18                   = 21418,
				Beijing_1954_Gauss_Kruger_Zone_19                   = 21419,
				Beijing_1954_Gauss_Kruger_Zone_20                   = 21420,
				Beijing_1954_Gauss_Kruger_Zone_21                   = 21421,
				Beijing_1954_Gauss_Kruger_Zone_22                   = 21422,
				Beijing_1954_Gauss_Kruger_Zone_23                   = 21423,

				Beijing_1954_Gauss_Kruger_Zone_13N                  = 21473,
				Beijing_1954_Gauss_Kruger_Zone_14N                  = 21474,
				Beijing_1954_Gauss_Kruger_Zone_15N                  = 21475,
				Beijing_1954_Gauss_Kruger_Zone_16N                  = 21476,
				Beijing_1954_Gauss_Kruger_Zone_17N                  = 21477,
				Beijing_1954_Gauss_Kruger_Zone_18N                  = 21478,
				Beijing_1954_Gauss_Kruger_Zone_19N                  = 21479,
				Beijing_1954_Gauss_Kruger_Zone_20N                  = 21480,
				Beijing_1954_Gauss_Kruger_Zone_21N                  = 21481,
				Beijing_1954_Gauss_Kruger_Zone_22N                  = 21482,
				Beijing_1954_Gauss_Kruger_Zone_23N                  = 21483,



				CGCS2000_Gauss_Kruger_zone_13						= 4491,		
				CGCS2000_Gauss_Kruger_zone_14						= 4492,		
				CGCS2000_Gauss_Kruger_zone_15						= 4493,		
				CGCS2000_Gauss_Kruger_zone_16						= 4494,		
				CGCS2000_Gauss_Kruger_zone_17						= 4495,		
				CGCS2000_Gauss_Kruger_zone_18						= 4496,		
				CGCS2000_Gauss_Kruger_zone_19						= 4497,		
				CGCS2000_Gauss_Kruger_zone_20						= 4498,		
				CGCS2000_Gauss_Kruger_zone_21						= 4499,		
				CGCS2000_Gauss_Kruger_zone_22						= 4500,		
				CGCS2000_Gauss_Kruger_zone_23						= 4501,	

				CGCS2000_Gauss_Kruger_CM_75E						= 4502,		
				CGCS2000_Gauss_Kruger_CM_81E						= 4503,		
				CGCS2000_Gauss_Kruger_CM_87E						= 4504,		
				CGCS2000_Gauss_Kruger_CM_93E						= 4505,		
				CGCS2000_Gauss_Kruger_CM_99E						= 4506,		
				CGCS2000_Gauss_Kruger_CM_105E						= 4507,		
				CGCS2000_Gauss_Kruger_CM_111E						= 4508,		
				CGCS2000_Gauss_Kruger_CM_117E						= 4509,		
				CGCS2000_Gauss_Kruger_CM_123E						= 4510,		
				CGCS2000_Gauss_Kruger_CM_129E						= 4511,	
				CGCS2000_Gauss_Kruger_CM_135E						= 4512,	

				CGCS2000_3_degree_Gauss_Kruger_zone_25				= 4513,		
				CGCS2000_3_degree_Gauss_Kruger_zone_26				= 4514,		
				CGCS2000_3_degree_Gauss_Kruger_zone_27				= 4515,		
				CGCS2000_3_degree_Gauss_Kruger_zone_28				= 4516,		
				CGCS2000_3_degree_Gauss_Kruger_zone_29				= 4517,		
				CGCS2000_3_degree_Gauss_Kruger_zone_30				= 4518,		
				CGCS2000_3_degree_Gauss_Kruger_zone_31				= 4519,		
				CGCS2000_3_degree_Gauss_Kruger_zone_32				= 4520,		
				CGCS2000_3_degree_Gauss_Kruger_zone_33				= 4521,		
				CGCS2000_3_degree_Gauss_Kruger_zone_34				= 4522,		
				CGCS2000_3_degree_Gauss_Kruger_zone_35				= 4523,		
				CGCS2000_3_degree_Gauss_Kruger_zone_36				= 4524,		
				CGCS2000_3_degree_Gauss_Kruger_zone_37				= 4525,		
				CGCS2000_3_degree_Gauss_Kruger_zone_38				= 4526,		
				CGCS2000_3_degree_Gauss_Kruger_zone_39				= 4527,		
				CGCS2000_3_degree_Gauss_Kruger_zone_40				= 4528,		
				CGCS2000_3_degree_Gauss_Kruger_zone_41				= 4529,		
				CGCS2000_3_degree_Gauss_Kruger_zone_42				= 4530,		
				CGCS2000_3_degree_Gauss_Kruger_zone_43				= 4531,		
				CGCS2000_3_degree_Gauss_Kruger_zone_44				= 4532,		
				CGCS2000_3_degree_Gauss_Kruger_zone_45				= 4533,

				CGCS2000_3_degree_Gauss_Kruger_CM_75E				= 4534,		
				CGCS2000_3_degree_Gauss_Kruger_CM_78E				= 4535,		
				CGCS2000_3_degree_Gauss_Kruger_CM_81E				= 4536,		
				CGCS2000_3_degree_Gauss_Kruger_CM_84E				= 4537,		
				CGCS2000_3_degree_Gauss_Kruger_CM_87E				= 4538,		
				CGCS2000_3_degree_Gauss_Kruger_CM_90E				= 4539,		
				CGCS2000_3_degree_Gauss_Kruger_CM_93E				= 4540,		
				CGCS2000_3_degree_Gauss_Kruger_CM_96E				= 4541,		
				CGCS2000_3_degree_Gauss_Kruger_CM_99E				= 4542,		
				CGCS2000_3_degree_Gauss_Kruger_CM_102E				= 4543,		
				CGCS2000_3_degree_Gauss_Kruger_CM_105E				= 4544,		
				CGCS2000_3_degree_Gauss_Kruger_CM_108E				= 4545,		
				CGCS2000_3_degree_Gauss_Kruger_CM_111E				= 4546,		
				CGCS2000_3_degree_Gauss_Kruger_CM_114E				= 4547,		
				CGCS2000_3_degree_Gauss_Kruger_CM_117E				= 4548,		
				CGCS2000_3_degree_Gauss_Kruger_CM_120E				= 4549,		
				CGCS2000_3_degree_Gauss_Kruger_CM_123E				= 4550,		
				CGCS2000_3_degree_Gauss_Kruger_CM_126E				= 4551,		
				CGCS2000_3_degree_Gauss_Kruger_CM_129E				= 4552,		
				CGCS2000_3_degree_Gauss_Kruger_CM_132E				= 4553,		
				CGCS2000_3_degree_Gauss_Kruger_CM_135E				= 4554
			};
			/************************************************************************/
			/*  EVSpheriod                                                       */
			/************************************************************************/
			///<summary>
			///EVSpheriod
			///枚举常见椭球体
			///程序根据这个标识可以知晓该椭球相关参数
			///</summary>
			enum EVSpheriod
			{
				EV_UNKNOWN   =  0,
				EV_BEIJING54 = 7024,///ESPG保持一致
				EV_XIAN80    = 7049,
				EV_WGS84     = 7030,
				EV_CGCS2000  = 7019
				
			};
			/************************************************************************/
			/* EVSpatialReferenceStrTypes                                            */
			/************************************************************************/
			///<summary>
			///EVSpatialReferenceStrTypes
			///标识空间参考的文本描述的文本格式
			///导入 导出空间参考的文本描述的依据
			///</summary>
			// EVSpatialReferenceStringType
			//{
			//	EV_WKT        = 0,
			//	EV_ESRI       = 1,
			//	EV_PROJ4      = 2,
			//	EV_ESPG       = 3,
			//	EV_UNKNOWNSTR = 4
			//};
			/************************************************************************/
			/* EVDatumType                                                           */
			/************************************************************************/
			///<summary>
			///EVDatumType
			///标识大地水准面模型
			///一般与椭球体是一一对应的
			///</summary>
			//enum EVDatumType
			//{
			//	EV_UNKNOWND   = 0,
			//	EV_BEIJING54D = 6214,
			//	EV_XIAN80D    = 6610,
			//	EV_WGS84D     = 6326,
			//	EV_CGCS2000D  = 7019 //ESPG里没对应代码，与椭球类型保持一致
			//	
			//};
			  
            /************************************************************************/
           /*     EVProjectionType                                                 */
           /************************************************************************/
			///<summary>
			///EVProjectionType
			///目前该系统支持的投影类型
			///导出空间参考的字符串格式 目前只支持的类型
			///</summary>
			enum EVProjectionType
			{
				EV_PROJ_UNKNOWN    = 0,  //未知投影
				EV_PROJ_LATLONG    = 1,  //经纬度即未经过地理投影
				EV_PROJ_GUSSKRVGER = 2,  //高斯克吕格投影
				EV_PROJ_UTM        = 3,  //UTM投影
				EV_PROJ_MERCATOR   = 4,   //墨卡托投影 单标准纬线
				EV_PROJ_MERCATOR_2SP   = 5,   //墨卡托双标准纬线投影
				EV_PROJ_LARMBERT_COMFORMAL = 6, //lanbert正形投影,单标准纬线
				EV_PROJ_LARMBERT_COMFORMAL_2SP = 7, //lanbert正形投影,双标准纬线
			};
			/************************************************************************/
			/*     EVEVPredefinedProjection                                          */
			/************************************************************************/
			///<summary>
			///EVEVPredefinedProjection
			///预定义投影
			///</summary>
			enum EVPredefinedProjection
			{
				EV_Gauss_Kruger_6_degree_zone_13,     // 0
				EV_Gauss_Kruger_6_degree_zone_14,
				EV_Gauss_Kruger_6_degree_zone_15,
				EV_Gauss_Kruger_6_degree_zone_16,
				EV_Gauss_Kruger_6_degree_zone_17,
				EV_Gauss_Kruger_6_degree_zone_18,
				EV_Gauss_Kruger_6_degree_zone_19,
				EV_Gauss_Kruger_6_degree_zone_20,
				EV_Gauss_Kruger_6_degree_zone_21,
				EV_Gauss_Kruger_6_degree_zone_22,
				EV_Gauss_Kruger_6_degree_zone_23,      //  10

				EV_Gauss_Kruger_3_degree_zone_25,      //  11
				EV_Gauss_Kruger_3_degree_zone_26,
				EV_Gauss_Kruger_3_degree_zone_27,
				EV_Gauss_Kruger_3_degree_zone_28,
				EV_Gauss_Kruger_3_degree_zone_29,
				EV_Gauss_Kruger_3_degree_zone_30,
				EV_Gauss_Kruger_3_degree_zone_31,
				EV_Gauss_Kruger_3_degree_zone_32,
				EV_Gauss_Kruger_3_degree_zone_33,
				EV_Gauss_Kruger_3_degree_zone_34,
				EV_Gauss_Kruger_3_degree_zone_35,
				EV_Gauss_Kruger_3_degree_zone_36,
				EV_Gauss_Kruger_3_degree_zone_37,
				EV_Gauss_Kruger_3_degree_zone_38,
				EV_Gauss_Kruger_3_degree_zone_39,
				EV_Gauss_Kruger_3_degree_zone_40,
				EV_Gauss_Kruger_3_degree_zone_41,
				EV_Gauss_Kruger_3_degree_zone_42,
				EV_Gauss_Kruger_3_degree_zone_43,
				EV_Gauss_Kruger_3_degree_zone_44,
				EV_Gauss_Kruger_3_degree_zone_45,     //  31

				EV_UTM_zone_1N,       //  32
				EV_UTM_zone_2N,
				EV_UTM_zone_3N,
				EV_UTM_zone_4N,
				EV_UTM_zone_5N,
				EV_UTM_zone_6N,
				EV_UTM_zone_7N,
				EV_UTM_zone_8N,
				EV_UTM_zone_9N,
				EV_UTM_zone_10N,
				EV_UTM_zone_11N,
				EV_UTM_zone_12N,
				EV_UTM_zone_13N,
				EV_UTM_zone_14N,
				EV_UTM_zone_15N,
				EV_UTM_zone_16N,
				EV_UTM_zone_17N,
				EV_UTM_zone_18N,
				EV_UTM_zone_19N,
				EV_UTM_zone_20N,
				EV_UTM_zone_21N,
				EV_UTM_zone_22N,
				EV_UTM_zone_23N,
				EV_UTM_zone_24N,
				EV_UTM_zone_25N,
				EV_UTM_zone_26N,
				EV_UTM_zone_27N,
				EV_UTM_zone_28N,
				EV_UTM_zone_29N,
				EV_UTM_zone_30N,
				EV_UTM_zone_31N,
				EV_UTM_zone_32N,
				EV_UTM_zone_33N,
				EV_UTM_zone_34N,
				EV_UTM_zone_35N,
				EV_UTM_zone_36N,
				EV_UTM_zone_37N,
				EV_UTM_zone_38N,
				EV_UTM_zone_39N,
				EV_UTM_zone_40N,
				EV_UTM_zone_41N,
				EV_UTM_zone_42N,
				EV_UTM_zone_43N,
				EV_UTM_zone_44N,
				EV_UTM_zone_45N,
				EV_UTM_zone_46N,
				EV_UTM_zone_47N,
				EV_UTM_zone_48N,
				EV_UTM_zone_49N,
				EV_UTM_zone_50N,
				EV_UTM_zone_51N,
				EV_UTM_zone_52N,
				EV_UTM_zone_53N,
				EV_UTM_zone_54N,
				EV_UTM_zone_55N,
				EV_UTM_zone_56N,
				EV_UTM_zone_57N,
				EV_UTM_zone_58N,
				EV_UTM_zone_59N,
				EV_UTM_zone_60N,     //  91

				EV_UTM_zone_1S,      //  92
				EV_UTM_zone_2S,
				EV_UTM_zone_3S,
				EV_UTM_zone_4S,
				EV_UTM_zone_5S,
				EV_UTM_zone_6S,
				EV_UTM_zone_7S,
				EV_UTM_zone_8S,
				EV_UTM_zone_9S,
				EV_UTM_zone_10S,
				EV_UTM_zone_11S,
				EV_UTM_zone_12S,
				EV_UTM_zone_13S,
				EV_UTM_zone_14S,
				EV_UTM_zone_15S,
				EV_UTM_zone_16S,
				EV_UTM_zone_17S,
				EV_UTM_zone_18S,
				EV_UTM_zone_19S,
				EV_UTM_zone_20S,
				EV_UTM_zone_21S,
				EV_UTM_zone_22S,
				EV_UTM_zone_23S,
				EV_UTM_zone_24S,
				EV_UTM_zone_25S,
				EV_UTM_zone_26S,
				EV_UTM_zone_27S,
				EV_UTM_zone_28S,
				EV_UTM_zone_29S,
				EV_UTM_zone_30S,
				EV_UTM_zone_31S,
				EV_UTM_zone_32S,
				EV_UTM_zone_33S,
				EV_UTM_zone_34S,
				EV_UTM_zone_35S,
				EV_UTM_zone_36S,
				EV_UTM_zone_37S,
				EV_UTM_zone_38S,
				EV_UTM_zone_39S,
				EV_UTM_zone_40S,
				EV_UTM_zone_41S,
				EV_UTM_zone_42S,
				EV_UTM_zone_43S,
				EV_UTM_zone_44S,
				EV_UTM_zone_45S,
				EV_UTM_zone_46S,
				EV_UTM_zone_47S,
				EV_UTM_zone_48S,
				EV_UTM_zone_49S,
				EV_UTM_zone_50S,
				EV_UTM_zone_51S,
				EV_UTM_zone_52S,
				EV_UTM_zone_53S,
				EV_UTM_zone_54S,
				EV_UTM_zone_55S,
				EV_UTM_zone_56S,
				EV_UTM_zone_57S,
				EV_UTM_zone_58S,
				EV_UTM_zone_59S,
				EV_UTM_zone_60S,     //  151

				//EV_Mercator,     //  152

				//EV_Lambert       //153
			};
			//
           }//utility
            
		}
			
	}
}

#endif//_SYSTERM_EUNE_COORD_H
