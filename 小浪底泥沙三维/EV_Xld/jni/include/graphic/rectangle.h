#ifndef _Rectangle_H__
#define _Rectangle_H__
#pragma once
#include <mathengine/ev_math.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 矩形类
            /// 定义了矩形操作
            /// </summary>
            class EV_GRAPHIC_DLL Rectangle : public EarthView::World::Core::CBaseObject
            {
            public:
                Real left;
                Real top;
                Real right;
                Real bottom;
                /// <summary>
                /// 判断二维坐标是否在矩形内
                /// </summary>
                /// <param name="x">x坐标</param>
                /// <param name="y">y坐标</param>
                /// <returns>在矩形内返回true，否则false</returns>
                inline ev_bool inside(_in Real x, _in Real y) const
                {
                    return x >= left && x <= right && y >= top && y <= bottom;
                }

                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Rectangle();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~Rectangle();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                Rectangle(_in EarthView::World::Core::CNameValuePairList *pList);
            };
			/// <summary>
			/// 求矩形相交
			/// </summary>
			/// <param name="lhs">矩形对象1</param>
			/// <param name="rhs">矩形对象2</param>
			/// <returns>结果矩形</returns>
			inline Rectangle intersect(const Rectangle &lhs, const Rectangle &rhs)
			{
				Rectangle r;
				r.left   = lhs.left   > rhs.left   ? lhs.left   : rhs.left;
				r.top    = lhs.top    > rhs.top    ? lhs.top    : rhs.top;
				r.right  = lhs.right  < rhs.right  ? lhs.right  : rhs.right;
				r.bottom = lhs.bottom < rhs.bottom ? lhs.bottom : rhs.bottom;
				return r;
			}
        }
    }
}

#endif

