#ifndef CRADARTYPE_H
#define CRADARTYPE_H

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				/// <summary>
				/// 雷达类型
				/// </summary>
				enum CRadarType
				{
					/// <summary>
					/// 未知
					/// </summary>
					RT_UnKnown = 0,
					/// <summary>
					/// 相控阵雷达
					/// </summary>
					RT_PhasedArray = 1,
					/// <summary>
					/// 机械扫描式雷达
					/// </summary>
					RT_MechanicalScanning = 2
				};
			}
		}
	}
}
#endif

