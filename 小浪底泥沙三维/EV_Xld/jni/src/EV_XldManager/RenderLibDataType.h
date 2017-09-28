#ifndef RENDERLIBDATATYPE_H_
#define RENDERLIBDATATYPE_H_

namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib
		{
			/// <summary>
			/// 该枚举类型指示鼠标采点状态
			/// </summary>
			enum CMousePickState
			{
				/// <summary>
				/// 准备采第一个点
				/// </summary>
				ToFirst = 1,
				/// <summary>
				/// 准备采第二个点
				/// </summary>
				ToSecond = 2,
				/// <summary>
				/// 准备采第三个点
				/// </summary>
				ToThird = 3,
				/// <summary>
				/// 连续采点中
				/// </summary>
				Picking = 4,
				/// <summary>
				/// 采点结束
				/// </summary>
				Over = 5,
			};

			enum CMoveLineType
			{
				/// <summary>
				/// 直线形
				/// </summary>
				Line,
				/// <summary>
				/// 圆形
				/// </summary>
				Circle,
				/// <summary>
				/// 模型量算，两点直线
				/// </summary>
				StraightLine,
				/// <summary>
				/// 矩形
				/// </summary>
				Rectangle,
				/// <summary>
				/// 多边形
				/// </summary>
				Polygon
			};
		}
	}
}
#endif
