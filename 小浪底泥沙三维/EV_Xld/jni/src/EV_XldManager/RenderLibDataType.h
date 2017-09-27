#ifndef RENDERLIBDATATYPE_H_
#define RENDERLIBDATATYPE_H_

namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib
		{
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
