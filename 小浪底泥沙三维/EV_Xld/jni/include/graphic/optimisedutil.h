#ifndef __OptimisedUtil_H__
#define __OptimisedUtil_H__
#pragma once
#include "graphic/graphic_config.h"
#include "edgelistbuilder.h"
#include <cstddef>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            /// <summary>
            /// 优化功能类
            /// 主要用于功能的优化
            /// </summary>
            class EV_GRAPHIC_DLL COptimisedUtil : public EarthView::World::Core::CBaseObject
            {
            private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::COptimisedUtil类的引用</param>
                /// <returns></returns>
                COptimisedUtil(_in const COptimisedUtil &rhs);
                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::COptimisedUtil类的引用</param>
                /// <returns>返回EarthView::World::Graphic::COptimisedUtil类的引用</returns>
                EarthView::World::Graphic::COptimisedUtil &operator=(_in const EarthView::World::Graphic::COptimisedUtil &rhs);
            protected:
                static EarthView::World::Graphic::COptimisedUtil *msImplementation;
                /// <summary>
                /// 检测类的实现（针对其运行速度的检测）
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回指向EarthView::World::Graphic::COptimisedUtil类的指针</returns>
                static EarthView::World::Graphic::COptimisedUtil *_detectImplementation();
            public:

                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                COptimisedUtil();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                COptimisedUtil(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~COptimisedUtil();
                /// <summary>
                /// 得到类的实现
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回指向EarthView::World::Graphic::COptimisedUtil类的指针</returns>
                static EarthView::World::Graphic::COptimisedUtil *getImplementation();
                /// <summary>
                /// 顶点修饰
                /// </summary>
                /// <param name="srcPosPtr">来源位置的缓冲器</param>
                /// <param name="destPosPtr">目标位置的缓冲器</param>
                /// <param name="srcNormPtr">来源的法线的缓冲器</param>
                /// <param name="destNormPtr">目标的法线的缓冲器</param>
                /// <param name="blendWeightPtr">混合权重缓冲器</param>
                /// <param name="blendIndexPtr">混合索引缓冲器</param>
                /// <param name="blendMatrices">混合矩阵</param>
                /// <param name="srcPosStride">来源位置的跨度</param>
                /// <param name="destPosStride">目标位置的跨度</param>
                /// <param name="srcNormStride">来源法线的跨度</param>
                /// <param name="destNormStride">目标法线的跨度</param>
                /// <param name="blendWeightStride">混合权重的跨度</param>
                /// <param name="blendIndexStride">混合索引的跨度</param>
                /// <param name="numWeightsPerVertex">每个顶点的混合权重个数</param>
                /// <param name="numVertices">混合顶点个数</param>
                /// <returns></returns>
                virtual void softwareVertexSkinning(
                    _in const ev_real32 *srcPosPtr, _in ev_real32 *destPosPtr,
                    _in const ev_real32 *srcNormPtr, _in ev_real32 *destNormPtr,
                    _in const ev_real32 *blendWeightPtr, _in const ev_uchar *blendIndexPtr,
                    _in const EarthView::World::Spatial::Math::CMatrix4 *const *blendMatrices,
                    _in ev_size_t srcPosStride, _in ev_size_t destPosStride,
                    _in	ev_size_t srcNormStride, _in ev_size_t destNormStride,
                    _in	ev_size_t blendWeightStride, _in ev_size_t blendIndexStride,
                    _in	ev_size_t numWeightsPerVertex,
                    _in	ev_size_t numVertices);
                /// <summary>
                /// 顶点变换
                /// </summary>
                /// <param name="t">起始位置与终点位置的距离</param>
                /// <param name="srcPos1">指向开始位置的缓冲器指针</param>
                /// <param name="srcPos2">指向结束位置的缓冲器指针</param>
                /// <param name="dstPos">指向目标位置的缓冲器指针</param>
                /// <param name="numVertices">变换顶点的个数</param>
                /// <returns></returns>
                virtual void softwareVertexMorph(
                    _in Real t,
                    _in const ev_real32 *srcPos1, _in const ev_real32 *srcPos2,
                    _in ev_real32 *dstPos,
                    _in ev_size_t pos1VSize,  _in ev_size_t pos2VSize,  _in ev_size_t dstVSize,
                    _in  ev_size_t numVertices,
                    _in  ev_bool morphNormals);
                /// <summary>
                /// 将一个仿射矩阵连接到一个仿射矩阵组阵列中
                /// </summary>
                /// <param name="baseMatrix">作为第一个操作数使用的矩阵</param>
                /// <param name="srcMatrices">作为第二个操作数使用的矩阵阵列</param>
                /// <param name="dstMatrices">存放矩阵连接结果的矩阵阵列</param>
                /// <param name="numMatrices">阵列中矩阵个数</param>
                /// <returns></returns>
                virtual void concatenateAffineMatrices(
                    _in const EarthView::World::Spatial::Math::CMatrix4 &baseMatrix,
                    _in const EarthView::World::Spatial::Math::CMatrix4 *srcMatrices,
                    _in EarthView::World::Spatial::Math::CMatrix4 *dstMatrices,
                    _in ev_size_t numMatrices);
                /// <summary>
                /// 计算某一位置上三角形的平面的法线
                /// </summary>
                /// <param name="positions">，三角形的位置信息，指向三角形平面的指针（通过三角形顶点索引来找到平面）</param>
                /// <param name="triangles">需要计算平面法线的三角形</param>
                /// <param name="faceNormals">存放三角形平面法线的阵列</param>
                /// <param name="numTriangles">需要计算面法线的三角形的个数</param>
                /// <returns></returns>
                virtual void calculateFaceNormals(
                    _in const ev_real32 *positions,
                    _in const EarthView::World::Graphic::CEdgeData::CTriangle *triangles,
                    _in EarthView::World::Spatial::Math::CVector4 *faceNormals,
                    _in	ev_size_t numTriangles);
                /// <summary>
                /// 计算光源面上三角形平面的法线
                /// </summary>
                /// <param name="lightPos">光源的空间位置（光源位置是4D的，包括x、y、z（分别对应三维坐标）和w，w值为0.0f或者1.0f，w=0.0f，则光源为定向光源，w=1.0f，则光源是点光源）</param>
                /// <param name="faceNormals">三角形的面法线（面法线是单位正交向量加上到起点的距离）</param>
                /// <param name="lightFacings">存放光源面的信息标记阵列，如果面法线朝向光源则标记是true，否则标记是false</param>
                /// <param name="numFaces">需要计算的面法线的个数</param>
                /// <returns></returns>
                virtual void calculateLightFacing(
                    _in const EarthView::World::Spatial::Math::CVector4 &lightPos,
                    _in const EarthView::World::Spatial::Math::CVector4 *faceNormals,
                    _in ev_char *lightFacings,
                    _in	ev_size_t numFaces);
                /// <summary>
                /// 在距离光源固定的距离处拉伸顶点
                /// </summary>
                /// <param name="lightPos">光源的空间位置（光源位置是4D的，包括x、y、z（分别对应三维坐标）和w，w值为0.0f或者1.0f，w=0.0f，则光源为定向光源，w=1.0f，则光源是点光源）</param>
                /// <param name="extrudeDist">拉伸距离</param>
                /// <param name="srcPositions">指向顶点来源位置缓冲器的指针</param>
                /// <param name="destPositions">指向顶点目标位置缓冲器的指针</param>
                /// <param name="numVertices">需要拉伸的顶点个数</param>
                /// <returns></returns>
                virtual void extrudeVertices(
                    _in const EarthView::World::Spatial::Math::CVector4 &lightPos,
                    _in Real extrudeDist,
                    _in const ev_real32 *srcPositions,
                    _in ev_real32 *destPositions,
                    _in ev_size_t numVertices);
            };
        }
    }
}

#endif

