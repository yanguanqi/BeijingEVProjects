#ifndef __RotationalSpline_H__
#define __RotationalSpline_H__
#pragma once
#include "graphic/graphic_config.h"
#include <mathengine/quaternion.h>


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 旋转样条类
            /// 定义了旋转样条操作
            /// </summary>
            class EV_GRAPHIC_DLL CRotationalSpline: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRotationalSpline(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRotationalSpline();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CRotationalSpline();
                /// <summary>
                /// 在曲线末端增加控制点
                /// </summary>
                /// <param name="p">控制点对象</param>
                /// <returns></returns>
                void addPoint( _in const EarthView::World::Spatial::Math::CQuaternion &p);
                /// <summary>
                /// 获得曲线中某控制点的详细信息
                /// </summary>
                /// <param name="index">控制点索引</param>
                /// <returns>四元数</returns>
                const EarthView::World::Spatial::Math::CQuaternion &getPoint(_in ev_uint16 index) const;
                /// <summary>
                /// 获得曲线中控制点总数
                /// </summary>
                /// <param name=""></param>
                /// <returns>控制点总数</returns>
                ev_uint16 getNumPoints() const;
                /// <summary>
                /// 清除曲线所有控制点
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 更新曲线中某点坐标
                /// </summary>
                /// <param name="index">控制点索引</param>
                /// <param name="value">控制点坐标</param>
                /// <returns></returns>
                void updatePoint(_in ev_uint16 index, _in const EarthView::World::Spatial::Math::CQuaternion &value);
                /// <summary>
                /// 插值生成曲线上某点坐标
                /// </summary>
                /// <param name="t">参变量t</param>
                /// <param name="useShortestPath">是否利用最短路径</param>
                /// <returns>点坐标</returns>
                EarthView::World::Spatial::Math::CQuaternion interpolate(_in Real t, _in ev_bool useShortestPath);
                /// <summary>
                /// 插值生成曲线上某点坐标
                /// </summary>
                /// <param name="t">参变量t</param>
                /// <returns>点坐标</returns>
                EarthView::World::Spatial::Math::CQuaternion interpolate(_in Real t);
                /// <summary>
                /// 插值生成曲线上某点坐标
                /// </summary>
                /// <param name="fromIndex">控制点索引</param>
                /// <param name="t">参变量t</param>
                /// <param name="useShortestPath">是否利用最短路径</param>
                /// <returns>点坐标</returns>
                EarthView::World::Spatial::Math::CQuaternion interpolate(_in ev_uint32 fromIndex, _in Real t, _in ev_bool useShortestPath);
                /// <summary>
                /// 插值生成曲线上某点坐标
                /// </summary>
                /// <param name="fromIndex">控制点索引</param>
                /// <param name="t">参变量t</param>
                /// <returns>点坐标</returns>
                EarthView::World::Spatial::Math::CQuaternion interpolate(_in ev_uint32 fromIndex, _in Real t);
                /// <summary>
                /// 设置养条曲线在增加控制点时是否自动计算其切线
                /// </summary>
                /// <param name="autoCalc">标识是否自动计算切线</param>
                /// <returns></returns>
                void setAutoCalculate(_in ev_bool autoCalc);
                /// <summary>
                /// 重新计算曲线中控制点切线
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void recalcTangents();
            protected:
                ev_bool mAutoCalc;

                vector<EarthView::World::Spatial::Math::CQuaternion> mPoints;
                vector<EarthView::World::Spatial::Math::CQuaternion> mTangents;
            };
        }
    }
}


#endif

