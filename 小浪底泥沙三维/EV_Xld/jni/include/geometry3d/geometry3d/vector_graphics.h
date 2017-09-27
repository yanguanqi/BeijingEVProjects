#ifndef EV_VECTOR_GRAPHICS_H_
#define EV_VECTOR_GRAPHICS_H_
#pragma once
#include "geometry3d/geometry3d_config.h"
#include "core/global.h"
#include "graphic/prerequisites.h"
#include "geometry3d/geometry3d/simplerenderableex.h"
#include "graphic/colourvalue.h"
#include "graphic/patchsurface.h"
#include "graphic/mesh.h"
#include <vector>
#include <algorithm>

#define _USE_UPDATE_BUFFER_ 1

namespace EarthView
{
    namespace World
    {
        namespace Geometry3D
        {

            /*======================================================*\
             *                 矢量图元类及继承关系                 *
            \*======================================================*/
            class CGeometry3D;
            ///2D Geometry
            ///point
            class CMovablePoint;
            class CMovablePoint2;      		///可设置点的大小和符号
            class CMovablePoint3;  			///缓冲成球或立方体
            ///point collection
            class CMovablePointCollection;
            /// line
            class CMovableLine;
            class CMovableLine2;  			///可设置线的宽度和符号
            class CMovablePolyline;    		///多义线
            class CMovablePolyline2;   		///带宽度的多义线
            class CMovableCurve;
            /// plane
			
            class CMovablePolygon;      	///多边形，多边形是由多个环组成的
            class CMovableSurface;
            class CMovableEllipse;

            ///3D Geometry
            class CMovableCube;
            class CMovableCylinder;
			class CMovableEllipticalCylinder;
            class CMovableCone;
            class CMovableSphere;
			class CMovableHemisphere;
            class CMovableEllipsoid;  			///从球进行伸缩变换即可

            /// <summary>
            /// 矢量图元类型枚举
            /// <summary>
            enum DrawingType
            {
                /// <summary>
                /// 未知
                /// <summary>
                MovableUnknown = 0,
                /// <summary>
                /// 点
                /// <summary>
                MovablePoint = 1,
                /// <summary>
                /// 点集合
                /// <summary>
                MovablePointCollection,
                /// <summary>
                /// 线
                /// <summary>
                MovableLine,
                /// <summary>
                /// 多线
                /// <summary>
                MovablePolyline,
                /// <summary>
                /// 曲线
                /// <summary>
                MovableCurve,                
                /// <summary>
                /// 面
                /// <summary>
                MovablePolygon,
                /// <summary>
                /// 曲面
                /// <summary>
                MovableSurface,
                /// <summary>
                /// 椭圆
                /// <summary>
                MovableEllipse,
                /// <summary>
                /// 长方体
                /// <summary>
                MovableCube = 31,
                /// <summary>
                /// 圆柱
                /// <summary>
                MovableCylinder,
				/// <summary>
				/// 椭圆柱
				/// <summary>
				MovableEllipticalCylinder,
                /// <summary>
                /// 圆锥
                /// <summary>
                MovableCone,
                /// <summary>
                /// 球
                /// <summary>
                MovableSphere,
				/// <summary>
				/// 半球
				/// <summary>
				MovableHemisphere,
                /// <summary>
                /// 椭球
                /// <summary>
                MovableEllipsoid
            };

            /// <summary>
            /// 当绘制二维的点有大小时，采用的缓冲方式
            /// <summary>
            enum  Point2DBufferType
            {
                /// <summary>
                /// 正方形缓冲
                /// <summary>
                PointBufferQuad = 0,
                /// <summary>
                /// 圆缓冲
                /// <summary>
                PointBufferCircle
            };
            /// <summary>
            /// 当绘制三维的点有大小时，采用的缓冲方式
            /// <summary>
            enum  Point3DBufferType
            {
                /// <summary>
                /// 立方体缓冲
                /// <summary>
                PointBufferCube = 0,
                /// <summary>
                /// 球缓冲
                /// <summary>
                PointBufferSphere
            };

            /*
            		  1------2
            		 /|     /|
            		/ |    / |
            		5-----4  |
            		|  0--|--3
            		| /   | /
            		|/    |/
            		6-----7
            */
            /// <summary>
            /// 长方体点位置的枚举
            /// <summary>
            enum CubeCornerEnum
            {
                CUBE_FAR_LEFT_BOTTOM = 0,
                CUBE_FAR_LEFT_TOP = 1,
                CUBE_FAR_RIGHT_TOP = 2,
                CUBE_FAR_RIGHT_BOTTOM = 3,
                CUBE_NEAR_RIGHT_BOTTOM = 7,
                CUBE_NEAR_LEFT_BOTTOM = 6,
                CUBE_NEAR_LEFT_TOP = 5,
                CUBE_NEAR_RIGHT_TOP = 4
            } ;

			/// <summary>
			/// 绘制模式
			/// <summary>
			enum DrawingMode
			{
				DM_None = 0,//error
				DM_Frame,//边框模式
				DM_Fill,//填充模式
				DM_All  //双模式
			};

            /// <summary>
            ///         矢量图元的抽象类
            /// 1. 定义了各个矢量图元必须实现的虚函数
            /// 2. 提供了一个把矢量图元转化为网格的通用方法
            /// 3. 提供SimpleRenderable抽象函数的适配器
            /// <summary>
            class  EV_GEOMETRY3D_DLL CGeometry3D : public EarthView::World::Geometry3D::CSimpleRenderableEx
            {

            ev_private:
                CGeometry3D(_in EarthView::World::Core::CNameValuePairList  *pList);

            ev_internal:
                /// <summary>
                ///  默认构造
                /// <summary>
                CGeometry3D();
                CGeometry3D(const CGeometry3D &other) ;
            public:
                virtual ~CGeometry3D();
                /// <summary>
                /// 矢量图元转为为网格
                /// </summary>
                /// <param name="meshName">网格的名字, 不能是已经存在的网格名字</param>
                /// <param name="groupName">网格在所在资源的组名称，DEFAULT即可</param>
                /// <returns>网格的指针, Maybe Null</returns>
                virtual EarthView::World::Graphic::CMeshPtr   convertToMesh(_in const EVString &meshName,
                                                 _in const EVString &groupName/* = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME*/);


                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const ;

                /*======================================================*\
                 *          SimpleRenderable的简单适配器                *
                \*======================================================*/
            public:
                /// <summary>
                /// 当前摄像机到物体的垂直距离，用于透明物体的排序，默认返回父节点的到摄像机的垂直距离
                /// </summary>
                /// <param name="cam">当前图元所对着的摄像机</param>
                /// <returns>点到到摄像机的垂直距离</returns>
                virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                /// <summary>
                /// 矢量图元包围球的半径，默认返回包围盒的内接椭球的最大轴
                /// </summary>
                /// <returns>矢量图元包围球的半径</returns>
                virtual Real getBoundingRadius() const ;

                /// <summary>
                /// 给矢量图元提供一个世界变换矩阵，默认提供一个单位矩阵，即不变换
                /// </summary>
                /// <param name="xform">物体的世界变化矩阵，赋值</param>
                /// <returns>None</returns>
                virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const ;


				/// <summary>
				/// 渲染开始时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
				virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
				/// <summary>
				/// 渲染完成时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <returns></returns>
				virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
				/// <summary>
				/// 是否进行矩阵偏移
				/// </summary>
				/// <param name="value">是否进行矩阵偏移</param>
				/// <returns></returns>
				void setAutoDepthAlias(ev_bool value);

				private:
					EarthView::World::Spatial::Math::CMatrix4 mProjM;
					ev_bool mAutoDepthAlias;
            };

            /// <summary>
            ///           矢量图元---点
            /// 1. 提供点的结构描述(坐标，颜色，法向量，纹理)
            /// 2. 提供了绘制单个点
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovablePoint  :  public EarthView::World::Geometry3D::CGeometry3D
            {
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            ev_private:
                CMovablePoint(_in EarthView::World::Core::CNameValuePairList  *pList);
            public:
                CMovablePoint();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="x">点的x坐标</param>
                /// <param name="y">点的y坐标</param>
                /// <param name="z">点的z坐标</param>
                /// <param name="clr">点的颜色</param>
                /// <param name="normal">点的法向量</param>
                CMovablePoint(Real x, Real y, Real z, EarthView::World::Graphic::CColourValue clr /*= EarthView::World::Graphic::CColourValue::White*/, const EarthView::World::Spatial::Math::CVector3 &normal /*= EarthView::World::Spatial::Math::CVector3(0,0,-1)*/ );
				
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="point">点的坐标</param>
                /// <param name="clr">点的颜色</param>
                /// <param name="normal">点的法向量</param>
                CMovablePoint(const EarthView::World::Spatial::Math::CVector3 &point, EarthView::World::Graphic::CColourValue clr /*= EarthView::World::Graphic::CColourValue::White*/ , const EarthView::World::Spatial::Math::CVector3 &normal /*= EarthView::World::Spatial::Math::CVector3(0,0,-1)*/ );


                CMovablePoint(const CMovablePoint &point);
                virtual ~CMovablePoint();

            public:
                /// <summary>
                ///  获取点坐标
                /// <summary>
                const EarthView::World::Spatial::Math::CVector3  &getXYZ()  const
                {
                    return m_Point;
                }
                /// <summary>
                ///  获取点坐标X
                /// <summary>
                Real      getX()  const
                {
                    return m_Point.x;
                }

                /// <summary>
                ///  设置点坐标X
                /// <summary>
                /// <param name="x">设置的x坐标</param>
                void      setX(_in Real x)
                {
                    m_Point.x = x;
                }

                /// <summary>
                ///  获取点坐标Y
                /// <summary>
                Real      getY()  const
                {
                    return m_Point.y;
                }
                /// <summary>
                ///  设置点坐标Y
                /// <summary>
                /// <param name="y">设置的y坐标</param>
                void      setY(_in Real y)
                {
                    m_Point.y = y;
                }
                /// <summary>
                ///  获取点坐标Z
                /// <summary>
                Real      getZ()  const
                {
                    return m_Point.z;
                }

                /// <summary>
                ///  设置点坐标Z
                /// <summary>
                /// <param name="z">设置的z坐标</param>
                void      setZ(_in Real z)
                {
                    m_Point.z = z;
                }

                /// <summary>
                ///  获取点坐颜色信息
                /// <summary>
                EarthView::World::Graphic::CColourValue  getColor() const
                {
                    return m_Color;
                }
                /// <summary>
                ///  设置点坐颜色信息
                /// <summary>
                /// <param name="clr">点的颜色类</param>
                void	     setColor(_in EarthView::World::Graphic::CColourValue clr)
                {
                    m_Color = clr;
                }
                /// <summary>
                ///  获取点水平纹理坐标
                /// <summary>
                ev_real32    getTextureCoordU() const
                {
                    return m_TextureU;
                }
                /// <summary>
                ///  获取点垂直纹理坐标
                /// <summary>
                ev_real32    getTextureCoordV() const
                {
                    return m_TextureV;
                }
                /// <summary>
                ///  获取设置点纹理坐标
                /// <summary>
                /// <param name="u">点水平纹理坐标</param>
                /// <param name="v">点垂直纹理坐标</param>
                void         setTextureCoord( _in ev_real32 u, _in ev_real32 v )
                {
                    m_TextureU = u, m_TextureV = v;
                }
                /// <summary>
                ///  获取点法向量
                /// <summary>
                const  EarthView::World::Spatial::Math::CVector3  &getNormal() const
                {
                    return m_Normal;
                }
                /// <summary>
                ///  设置点法向量
                /// <summary>
                /// <param name="normal">法向量</param>
                void			 setNormal( _in  const EarthView::World::Spatial::Math::CVector3 &normal)
                {
                    m_Normal = normal;
                }
                /// <summary>
                ///  设置点法向量
                /// <summary>
                /// <param name="x">法向量x分量</param>
                /// <param name="y">法向量y分量</param>
                /// <param name="z">法向量z分量</param>
                void			 setNormal(_in  Real x, _in Real y, _in Real z)
                {
                    m_Normal = EarthView::World::Spatial::Math::CVector3(x, y, z);
                }
            public:
                /// <summary>
                ///  操作符重载+，只与位置有关
                /// <summary>
                EarthView::World::Geometry3D::CMovablePoint &operator+(const EarthView::World::Geometry3D::CMovablePoint &other);
                /// <summary>
                ///  操作符重载-，只与位置有关
                /// <summary>
                EarthView::World::Geometry3D::CMovablePoint &operator-(const EarthView::World::Geometry3D::CMovablePoint &other);
                /// <summary>
                ///  操作符重载*，只与位置有关
                /// <summary>
                EarthView::World::Geometry3D::CMovablePoint &operator*(const EarthView::World::Geometry3D::CMovablePoint &other);
                /// <summary>
                ///  操作符重载/，只与位置有关
                /// <summary>
                EarthView::World::Geometry3D::CMovablePoint &operator/(const EarthView::World::Geometry3D::CMovablePoint &other);
                /// <summary>
                ///  复制操作，复制所有信息，含颜色，法向量
                /// <summary>
                EarthView::World::Geometry3D::CMovablePoint &operator=(const EarthView::World::Geometry3D::CMovablePoint &other);
                /// <summary>
                ///  判断是否相等，判断所有信息，含颜色，法向量
                /// <summary>
                ev_bool     operator==(const EarthView::World::Geometry3D::CMovablePoint &other);
                /// <summary>
                ///  判断是否不相等，判断所有信息，含颜色，法向量
                /// <summary>
                ev_bool     operator!=(const EarthView::World::Geometry3D::CMovablePoint &other);

                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovablePoint;
                }

            public:
                /// <summary>
                ///  设置点的大小
                /// <summary>
                /// <param name="size">设置点的大小</param>
                void      setPointSize(_in Real size);
                /// <summary>
                ///  获取点的大小
                /// <summary>
                /// <returns>点的大小</returns>
                Real      getPointSize() const;
            public:
                virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                virtual Real getBoundingRadius() const;

            protected:
                EarthView::World::Spatial::Math::CVector3      m_Point;  			///点坐标
                EarthView::World::Spatial::Math::CVector3      m_Normal; 			///法向量
                EarthView::World::Graphic::CColourValue  m_Color;  			///颜色
                ev_real32    m_TextureU, m_TextureV;  			///纹理坐标,点和线不用
            };

            /// <summary>
            /// 矢量图元---可设置大小的点
            /// 提供设置点的大小和填充符号
            /// <summary>
            class  EV_GEOMETRY3D_DLL CMovablePoint2 : public EarthView::World::Geometry3D::CMovablePoint
            {
            ev_private:
                CMovablePoint2(_in EarthView::World::Core::CNameValuePairList  *pList);
            public:
                CMovablePoint2();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="x">点的x坐标</param>
                /// <param name="y">点的y坐标</param>
                /// <param name="z">点的z坐标</param>
                /// <param name="clr">点的颜色</param>
                /// <param name="normal">点的法向量</param>
                CMovablePoint2(Real x, Real y, Real z, EarthView::World::Graphic::CColourValue clr/* = EarthView::World::Graphic::CColourValue::White*/, const EarthView::World::Spatial::Math::CVector3 &normal/* = EarthView::World::Spatial::Math::CVector3(0,0,-1)*/ );
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="point">点的坐标</param>
                /// <param name="clr">点的颜色</param>
                /// <param name="normal">点的法向量</param>
                CMovablePoint2(const EarthView::World::Spatial::Math::CVector3 &point, EarthView::World::Graphic::CColourValue clr/* = EarthView::World::Graphic::CColourValue::White*/ , const EarthView::World::Spatial::Math::CVector3 &normal /*= EarthView::World::Spatial::Math::CVector3(0,0,-1)*/);

                CMovablePoint2(const CMovablePoint2 &other);
                EarthView::World::Geometry3D::CMovablePoint2  &operator=(const EarthView::World::Geometry3D::CMovablePoint2 &other);
                virtual ~CMovablePoint2();

            public:
                /// <summary>
                ///  获取点的大小信息
                /// <summary>
                /// <returns>点的大小信息</returns>
                Real      getPointSize() const
                {
                    return m_size;
                }


                /// <summary>
                ///  设置点的大小信息
                /// <summary>
                /// <param name="x">点的大小信息</param>
                void      setPointSize(_in Real size)
                {
                    m_size = size;
                }

                /// <summary>
                ///  获取是否包含纹理坐标
                /// <summary>
                /// <returns>是否包含纹理坐标,true为包含</returns>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }

                /// <summary>
                ///  设置是否包含纹理坐标
                /// <summary>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                void      setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }
                /// <summary>
                /// 获取缓冲的类型
                /// <summary>
                /// <returns>当前的缓冲类型，是球还是立方体</returns>
                EarthView::World::Geometry3D::Point2DBufferType  getBufferType() const
                {
                    return m_bufferType;
                }
                /// <summary>
                /// 设置缓冲的类型
                /// <summary>
                /// <param name="type">设置当前的缓冲类型，是球还是立方体</param>
                void		       setBufferType( _in EarthView::World::Geometry3D::Point2DBufferType type)
                {
                    m_bufferType = type;
                }
                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;

            public:
                virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                virtual Real getBoundingRadius() const;

            private:
                /// <summary>
                ///  缓冲成圆
                /// <summary>
                void   _createInCircle();
                /// <summary>
                ///  缓冲成正方形
                /// <summary>
                void     _createInQuad();

            protected:
                Real  m_size; 			///大小
                ev_bool  m_bIncludeTextureCoordinates;			///是否包含纹理坐标
                EarthView::World::Geometry3D::Point2DBufferType    m_bufferType; 			///缓冲类型
            };

            /// <summary>
            ///   矢量图元---可设置大小的三维点
            ///   提供设置点的大小和填充符号
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovablePoint3 : public EarthView::World::Geometry3D::CMovablePoint
            {
            ev_private:
                CMovablePoint3(_in EarthView::World::Core::CNameValuePairList  *pList);
            public:
                CMovablePoint3();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="x">点的x坐标</param>
                /// <param name="y">点的y坐标</param>
                /// <param name="z">点的z坐标</param>
                /// <param name="clr">点的颜色</param>
                /// <param name="normal">点的法向量</param>
                CMovablePoint3(Real x, Real y, Real z, EarthView::World::Graphic::CColourValue clr/* = EarthView::World::Graphic::CColourValue::White*/, const EarthView::World::Spatial::Math::CVector3 &normal/* = EarthView::World::Spatial::Math::CVector3(0,0,-1) */);

                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="point">点的坐标</param>
                /// <param name="clr">点的颜色</param>
                /// <param name="normal">点的法向量</param>
                CMovablePoint3(const EarthView::World::Spatial::Math::CVector3 &point, EarthView::World::Graphic::CColourValue clr/* = EarthView::World::Graphic::CColourValue::White*/ , const EarthView::World::Spatial::Math::CVector3 &normal/* = EarthView::World::Spatial::Math::CVector3(0,0,-1)*/);


                CMovablePoint3(const CMovablePoint3 &other);
                EarthView::World::Geometry3D::CMovablePoint3  &operator=(const EarthView::World::Geometry3D::CMovablePoint3 &other);
                virtual ~CMovablePoint3();

            public:
                /// <summary>
                ///  获取点的大小信息
                /// <summary>
                /// <returns>点的大小信息</returns>
                Real      getPointSize() const
                {
                    return m_size;
                }


                /// <summary>
                ///  设置点的大小信息
                /// <summary>
                /// <param name="x">点的大小信息</param>
                void      setPointSize(_in Real size)
                {
                    m_size = size;
                }

                /// <summary>
                ///  获取是否包含纹理坐标
                /// <summary>
                /// <returns>是否包含纹理坐标,true为包含</returns>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }
                /// <summary>
                ///  设置是否包含纹理坐标
                /// <summary>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                void      setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }

                /// <summary>
                /// 获取缓冲的类型
                /// <summary>
                /// <returns>当前的缓冲类型，是球还是立方体</returns>
                EarthView::World::Geometry3D::Point3DBufferType  getBufferType() const
                {
                    return m_bufferType;
                }
                /// <summary>
                /// 设置缓冲的类型
                /// <summary>
                /// <param name="type">设置当前的缓冲类型，是球还是立方体</param>
                void		       setBufferType( _in EarthView::World::Geometry3D::Point3DBufferType type)
                {
                    m_bufferType = type;
                }
                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;

            public:
                virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                virtual Real getBoundingRadius() const;

            private:
                /// <summary>
                ///  缓冲成球
                /// <summary>
                void   _createInSphere();
                /// <summary>
                ///  缓冲成正方体
                /// <summary>
                void     _createInCube();
                /// <summary>
                ///  缓冲成正方体得到8个角落点
                /// <summary>
                EarthView::World::Spatial::Math::CVector3  getCubeCorner(_in EarthView::World::Geometry3D::CubeCornerEnum corner) const;

            protected:
                Real  m_size; 			///大小
                ev_bool  m_bIncludeTextureCoordinates;			///是否包含纹理坐标
                EarthView::World::Geometry3D::Point3DBufferType  m_bufferType;
            };

            /// <summary>
            ///      矢量图元---点集合
            /// 1. 提供点集合的结构描述和操纵
            /// 2. 提供了绘制方法
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovablePointCollection : public  EarthView::World::Geometry3D::CGeometry3D
            {

                ///内部的向量描述点集合
                typedef vector<EarthView::World::Geometry3D::CMovablePoint>  EvPoints;
            ev_private:
                CMovablePointCollection(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovablePointCollection();
                CMovablePointCollection(const CMovablePointCollection &other);
                EarthView::World::Geometry3D::CMovablePointCollection &operator=(const EarthView::World::Geometry3D::CMovablePointCollection &other);
                virtual ~CMovablePointCollection();

            public:
                /// <summary>
                /// 向点集合增加一个点，设计成虚函数主要让子类对数据可以检查
                /// </summary>
                /// <param name="point">点信息</param>
                virtual void addPoint(_in const EarthView::World::Geometry3D::CMovablePoint &point);
                /// <summary>
                /// 向点集合插入一个点，设计成虚函数主要让子类对数据可以检查
                /// </summary>
                /// <param name="pos">插入的位置索引，在集合大小范围内，否则出错</param>
                /// <param name="point">点信息</param>
                virtual void insertPoint(_in ev_size_t pos, _in const EarthView::World::Geometry3D::CMovablePoint &point);
                /// <summary>
                /// 删除集合中的一个点
                /// </summary>
                /// <param name="pos">删除的位置索引，在集合大小范围内，否则出错</param>
                void         removePoint(_in ev_size_t pos);
                /// <summary>
                ///  删除集合中的所有点
                /// </summary>
                void         removeAllPoints()
                {
                    m_Points.clear();
                }
                /// <summary>
                ///  获取一个点
                /// </summary>
                /// <param name="pos">获取点的位置索引，在集合大小范围内，否则出错</param>
                /*const*/ EarthView::World::Geometry3D::CMovablePoint		 &getPoint(_in ev_size_t pos) /*const*/ ;
                const EarthView::World::Geometry3D::CMovablePoint  &getPoint(ev_size_t pos) const;
                /// <summary>
                ///  获取一个点
                /// </summary>
                /// <param name="pos">获取点的位置索引，在集合大小范围内，否则出错</param>
                const EarthView::World::Geometry3D::CMovablePoint  &operator[](_in ev_size_t pos) const
                {
                    return m_Points.operator[](pos);
                }
                /// <summary>
                /// 获取点的个数
                /// </summary>
                ev_size_t            getPointNum() const
                {
                    return m_Points.size();
                }
                /// <summary>
                /// 获取现在集合的实际内存大小
                /// </summary>
                ev_size_t     getCapacity() const
                {
                    return m_Points.capacity();
                }
                /// <summary>
                /// 设置现在集合的实际内存大小
                /// </summary>
                /// <param name="size">一次性使集合的大小变为size,这是一种有效提高效率的方法</param>
                void          setCapacity(_in ev_size_t size)
                {
                    m_Points.reserve(size);
                }
                /// <summary>
                ///  将集合逆序
                /// </summary>
                void       reverse()
                {
                    std::reverse( m_Points.begin(), m_Points.end() );
                }

                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                ///  设置每个点的颜色，绘制点都将用这个颜色
                /// <summary>
                /// <param name="line">颜色值</param>
                void setColor(EarthView::World::Graphic::CColourValue color);
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovablePointCollection;
                }

            public:
                virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                virtual Real getBoundingRadius() const;

            protected:
                /// <summary>
                ///  重新计算点集合外包盒的大小
                /// <summary>
                void  recaAxisAlignedBox();
            protected:
                EvPoints  m_Points; 			///点集合
            };

            /// <summary>
            ///         矢量图元---简单线
            /// 1. 简单线是点集合有序连接起来，描述同点集合
            /// 2. 提供了绘制方法
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableLine : public EarthView::World::Geometry3D::CMovablePointCollection
            {

            ev_private:
                CMovableLine(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableLine();
                CMovableLine(const CMovableLine &other);
                EarthView::World::Geometry3D::CMovableLine &operator=(const EarthView::World::Geometry3D::CMovableLine &other);
                virtual ~CMovableLine();

                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;
                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableLine;
                }
            };

            /// <summary>
            ///            矢量图元---可设置宽度的线
            ///  对线进行做平头缓冲（比较简单的缓冲操作）
            ///  提供设置线的宽度和填充符号(未实现)
            /// <summary>
            class  EV_GEOMETRY3D_DLL CMovableLine2 : public EarthView::World::Geometry3D::CMovableLine
            {
            ev_private:
                CMovableLine2(_in EarthView::World::Core::CNameValuePairList  *pList);
            public:
                CMovableLine2();
                CMovableLine2(const CMovableLine2 &other);
                EarthView::World::Geometry3D::CMovableLine2 &operator=(const EarthView::World::Geometry3D::CMovableLine2 &other);
                virtual ~CMovableLine2();
            public:
                /// <summary>
                ///  设置线宽
                /// <summary>
                void  setLineWidth(_in Real width)
                {
                    m_width = width;
                }

                /// <summary>
                ///  获取线宽
                /// <summary>
                Real  getLineWidth() const
                {
                    return m_width;
                }
                /// <summary>
                ///  获取是否包含纹理坐标,true为包含
                /// <summary>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }
                /// <summary>
                ///  设置是否包含纹理坐标,true为包含
                /// <summary>
                void   setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }

                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;

            protected:
                Real  m_width; 			///大小
                ev_bool  m_bIncludeTextureCoordinates;			///是否包含纹理坐标
            };

            /// </summary>
            ///           矢量图元---多义线
            /// 多义线是简单线的集合，可以一次性绘制
            /// </summary>
            class EV_GEOMETRY3D_DLL CMovablePolyline : public EarthView::World::Geometry3D::CGeometry3D
            {
                typedef vector<EarthView::World::Geometry3D::CMovableLine> LineList;
            ev_private:
                CMovablePolyline(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *					 构造析构函数                         *
                \*======================================================*/

            public:
                CMovablePolyline();
                CMovablePolyline(const EarthView::World::Geometry3D::CMovableLine &line);
                CMovablePolyline(const CMovablePolyline &other);
                EarthView::World::Geometry3D::CMovablePolyline &operator=(const EarthView::World::Geometry3D::CMovablePolyline &other);
                virtual ~CMovablePolyline();

            public:
                /// <summary>
                ///  增加一条线
                /// <summary>
                /// <param name="line">增加的简单线</param>
                void       addLine(const EarthView::World::Geometry3D::CMovableLine &line);
                /// <summary>
                ///  获取包含简单线的个数
                /// <summary>
                /// <returns>简单线的个数</returns>
                ev_size_t  getLineCount() const ;
                /// <summary>
                ///  获取简单线
                /// <summary>
                /// <returns>获取的简单线</returns>
                EarthView::World::Geometry3D::CMovableLine  &getLine(_in ev_size_t index);
                const EarthView::World::Geometry3D::CMovableLine  &getLine(_in ev_size_t index) const;
                /// <summary>
                ///  设置多义线的颜色，绘制每条多义线都将用这个颜色
                /// <summary>
                /// <param name="line">颜色值</param>
                void       setColor(_in EarthView::World::Graphic::CColourValue color);

                /*======================================================*\
                 *              父类的（纯）虚函数                         *
                \*======================================================*/
            public:
                /// <summary>
                /// 矢量图元包围球的半径，默认返回包围盒的内接椭球的最大轴
                /// </summary>
                /// <returns>矢量图元包围球的半径</returns>
                virtual Real getBoundingRadius() const ;
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovablePolyline;
                }

            protected:
                LineList  m_LineList;
            };

            class EV_GEOMETRY3D_DLL CMovablePolyline2 : public EarthView::World::Geometry3D::CGeometry3D
            {
                typedef vector<EarthView::World::Geometry3D::CMovableLine2> WidthLineList;
            ev_private:
                CMovablePolyline2(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *					 构造析构函数                         *
                \*======================================================*/
            public:
                CMovablePolyline2();
                CMovablePolyline2(const CMovablePolyline2 &other);
                CMovablePolyline2(const EarthView::World::Geometry3D::CMovableLine2 &line);
                EarthView::World::Geometry3D::CMovablePolyline2 &operator=(const EarthView::World::Geometry3D::CMovablePolyline2 &other);
                virtual ~CMovablePolyline2();

            public:
                void       addWidthLine(const EarthView::World::Geometry3D::CMovableLine2 &line);
                ev_size_t  getWidthLineCount() const ;
                EarthView::World::Geometry3D::CMovableLine2  &getWidthLine(_in ev_size_t index);
                const EarthView::World::Geometry3D::CMovableLine2  &getWidthLine(_in ev_size_t index) const;
                void       setColor(_in EarthView::World::Graphic::CColourValue color);
                void       setWidth(_in Real width);
                void       setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates) ;
                /*======================================================*\
                 *              父类的（纯）虚函数                         *
                \*======================================================*/
            public:
                /// <summary>
                /// 矢量图元包围球的半径，默认返回包围盒的内接椭球的最大轴
                /// </summary>
                /// <returns>矢量图元包围球的半径</returns>
                virtual Real getBoundingRadius() const ;
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovablePolyline;
                }
            private:
                void recaAxisAlignedBox();
            protected:
                WidthLineList  m_WidthLineList;
            };

            /// </summary>
            ///           矢量图元---样条线
            /// 1. 样条线是对简单线进行三次贝塞尔插值计算
            /// 2. 提供了绘制方法
            /// Note: 点数必须为4的倍数，否则后面的余数绘制为直线
            /// </summary>
            class EV_GEOMETRY3D_DLL CMovableCurve : public EarthView::World::Geometry3D::CMovableLine
            {
            ev_private:
                CMovableCurve(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableCurve();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="factor">插值点的密集度,值越大点越密集</param>
                CMovableCurve(Real factor /*= 0.5*/ );
                CMovableCurve(const CMovableCurve &other);
                EarthView::World::Geometry3D::CMovableCurve &operator=(const EarthView::World::Geometry3D::CMovableCurve &other);
                virtual ~CMovableCurve();

            public:
                /// <summary>
                ///  获取插值点的密集度,值越大点越密集
                /// <summary>
                Real getSubdivisionFactor() const
                {
                    return m_SubdivisionFactor;
                }
                /// <summary>
                ///  设置插值点的密集度,值越大点越密集
                /// <summary>
                void setSubdivisionFactor(_in  Real factor )
                {
                    m_SubdivisionFactor = factor;
                }
                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableCurve;
                }
            protected:
                Real    m_SubdivisionFactor;  			///插值的系数,控制曲线的平滑度
            };			

            class EV_GEOMETRY3D_DLL CMovablePolygon : public EarthView::World::Geometry3D::CGeometry3D
            {
                typedef vector<EarthView::World::Geometry3D::CMovablePointCollection> RingList;
            ev_private:
                CMovablePolygon(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovablePolygon();
                CMovablePolygon(const CMovablePolygon &other);
                CMovablePolygon(const EarthView::World::Geometry3D::CMovablePointCollection &ring);
                EarthView::World::Geometry3D::CMovablePolygon &operator=(const EarthView::World::Geometry3D::CMovablePolygon &other);
                virtual ~CMovablePolygon();

            public:
                /// <summary>
                /// 增加一个环
                /// </summary>
                void       addRing(const EarthView::World::Geometry3D::CMovablePointCollection &ring);
                /// <summary>
                /// 环的个数
                /// </summary>
                ev_size_t  getRingCount() const ;
                /// <summary>
                /// 获取外环
                /// </summary>
                EarthView::World::Geometry3D::CMovablePointCollection  &getExteriorRing();
                const EarthView::World::Geometry3D::CMovablePointCollection  &getExteriorRing() const;
                /// <summary>
                /// 获取内环
                /// </summary>
                EarthView::World::Geometry3D::CMovablePointCollection  &getInteriorRing(_in ev_size_t index);
                const EarthView::World::Geometry3D::CMovablePointCollection  &getInteriorRing(_in ev_size_t index) const;
				/// <summary>
				///  获取圆柱体颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFillColor() const
				{
					return m_Fillcolor;
				}
				/// <summary>
				///  设置圆柱体颜色
				/// <summary>
				void setFillColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_Fillcolor = clr;
				}

				/// <summary>
				///  获取圆柱体边框颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFrameColor() const
				{
					return m_Framecolor;
				}
				/// <summary>
				///  设置圆柱体边框颜色
				/// <summary>
				void setFrameColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_Framecolor = clr;
				}
				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();

            public:
                /// <summary>
                ///  获取是否为绘制为填充的多边形,true为绘制成填充多边形
                /// <summary>
                EarthView::World::Geometry3D::DrawingMode  getDrawingMode()  const
                {
                    return m_eDrawingMode;
                }
                /// <summary>
                ///  设置是否为绘制为填充的多边形,true为绘制成填充多边形
                /// <summary>
                void   setDrawMode(_in EarthView::World::Geometry3D::DrawingMode drawingMode)
                {
                    m_eDrawingMode = drawingMode;
                }
                /// <summary>
                ///  获取是否包含纹理坐标,true为包含
                /// <summary>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }
                /// <summary>
                ///  设置是否包含纹理坐标,true为包含
                /// <summary>
                void   setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }
				/// <summary>
				/// 设置边框材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				/// <returns></returns>
				void setFrameMaterial( const EVString &matName );
				/// <summary>
				/// 获取边框材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr &getFrameMaterial() const;

                /*======================================================*\
                 *              父类的（纯）虚函数                         *
                \*======================================================*/
            public:
                /// <summary>
                /// 矢量图元包围球的半径，默认返回包围盒的内接椭球的最大轴
                /// </summary>
                /// <returns>矢量图元包围球的半径</returns>
                virtual Real getBoundingRadius() const ;
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovablePolygon;
                }

				/// <summary>
				/// 矢量图元转为为网格
				/// </summary>
				/// <param name="meshName">网格的名字, 不能是已经存在的网格名字</param>
				/// <param name="groupName">网格在所在资源的组名称，DEFAULT即可</param>
				/// <returns>网格的指针, Maybe Null</returns>
				virtual EarthView::World::Graphic::CMeshPtr   convertToMesh(_in const EVString &meshName,_in const EVString &groupName);

				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);				
				virtual void setFrameRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
				virtual void getFrameRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
            private:
                void recaAxisAlignedBox(EarthView::World::Spatial::Math::CAxisAlignedBox& box);
                /// if return null, not exist
                const EarthView::World::Geometry3D::CMovablePoint  *getExistPoint(Real x, Real y);
                const EarthView::World::Geometry3D::CMovablePoint  *getInterpolationPoint(Real x, Real y);
            private:
                /// <summary>
                ///  绘制为填充模式的实现
                /// <summary>
                void   _createInFillMode();
                /// <summary>
                ///  绘制为非填充模式的实现
                /// <summary>
                void   _createInLineMode();

				void   setColor(_in EarthView::World::Graphic::CColourValue color);
            protected:

				virtual void beginFlash(const EarthView::World::Graphic::CColourValue& color);
				virtual void startFlash();
				virtual void stopFlash();
				
				class CSimpleRenderableInternal2 : public CSimpleRenderableInternal
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">构造函数的键值对表</param>
					/// <returns></returns>
					CSimpleRenderableInternal2 (CSimpleRenderable *parent);
				public:
					void setMaterial( const EVString &matName );
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
					virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				};

                ev_bool    m_bFill;   			///是否填充
				ev_bool    m_bFrame;   			///是否绘制线框
                ev_bool    m_bIncludeTextureCoordinates; 			///是否包含纹理顶点
                RingList  m_RingList;

				EarthView::World::Geometry3D::DrawingMode m_eDrawingMode;

				EarthView::World::Graphic::CColourValue  m_Fillcolor;				///颜色
				EarthView::World::Graphic::CColourValue  m_Framecolor;				///颜色

				CSimpleRenderableInternal2 *mRenderable2;

				EarthView::World::Graphic::CRenderOperation mRenderOp2;
				EVString mMatName2;
				EarthView::World::Graphic::CMaterialPtr mMaterial2;

				EarthView::World::Graphic::CMaterialPtr mNormalMaterial2;
				EarthView::World::Graphic::CMaterialPtr mFlashMaterial2;
            };

			/// <summary>
            ///            矢量图元---样条面
            ///1. 样条面是对简单面进行二次贝塞尔曲面插值计算
            ///2. 提供了绘制方法
            ///Note: 点数必须为9的倍数，否则后面的余数绘制为直线
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableSurface : public EarthView::World::Geometry3D::CMovablePointCollection
            {

            ev_private:
                CMovableSurface(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableSurface();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="width">水平方向控制点的数量</param>
                /// <param name="height">垂直方向控制点的数量</param>
                /// <param name="uMax">水平方向最大的插值级别</param>
                /// <param name="vMax">垂直方向最大插值级别</param>
                CMovableSurface( ev_int32 width/* = 3*/, ev_int32 height/* = 3*/, ev_int32 uMax/* = 5*/, ev_int32 vMax /*= 5*/ );


                CMovableSurface(const CMovableSurface &other);
                EarthView::World::Geometry3D::CMovableSurface &operator=(const EarthView::World::Geometry3D::CMovableSurface &other);
                virtual ~CMovableSurface();
            public:
                /// <summary>
                ///  获取插值点的密集度，值越大点越密集
                /// <summary>
                Real    getSubdivisionFactor( ) const
                {
                    return m_SubdivisionFactor;
                }
                /// <summary>
                ///  设置插值点的密集度，值越大点越密集
                /// <summary>
                void    setSubdivisionFactor(_in  Real factor )
                {
                    m_SubdivisionFactor = factor;
                }

                /// <summary>
                ///  设置水平方向最大的插值级别
                /// <summary>
                ev_int32     getUmaxSubdivisionLevel() const
                {
                    return m_uMaxSubdivisionLevel;
                }
                /// <summary>
                ///  设置水平方向最大的插值级别，默认为-1，自动选择级别
                /// <summary>
                void    setUmaxSubdivisionLevel( _in ev_int32 uMax )
                {
                    m_uMaxSubdivisionLevel = uMax;
                }
                /// <summary>
                ///  获取垂直方向最大插值级别
                /// <summary>
                ev_int32     getVmaxSubdivisionLevel() const
                {
                    return m_vMaxSubdivisionLevel;
                }
                /// <summary>
                ///  设置垂直方向最大插值级别，默认为-1，自动选择级别
                /// <summary>
                void         setVmaxSubdivisionLevel(_in ev_int32 vMax)
                {
                    m_vMaxSubdivisionLevel = vMax;
                }

                /// <summary>
                ///  获取水平方向控制点的数量
                /// <summary>
                ev_int32     getSurfaceWidth() const
                {
                    return m_width;
                }
                /// <summary>
                ///  设置水平方向控制点的数量，至少>3
                /// <summary>
                void         setSurfaceWidth(_in ev_int32 width)
                {
                    m_width = width;
                }
                /// <summary>
                ///  获取垂直方向控制点的数量
                /// <summary>
                ev_int32     getSurfaceHeight() const
                {
                    return m_height;
                }
                /// <summary>
                ///  设置垂直方向控制点的数量，至少>3
                /// <summary>
                void    setSurfaceHeight(_in int height)
                {
                    m_height = height;
                }
                /// <summary>
                ///  获取是否包含纹理坐标,true为包含
                /// <summary>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }
                /// <summary>
                ///  设置是否包含纹理坐标,true为包含
                /// <summary>
                void	   setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }


                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableSurface;
                }

            protected:
                Real    m_SubdivisionFactor;  			///插值的系数,控制曲面的平滑度
                ev_int32     m_uMaxSubdivisionLevel;  			///U方向插值的级别,默认为-1
                ev_int32     m_vMaxSubdivisionLevel;  			///V方向插值的级别,默认为-1
                ev_int32     m_width;  			///宽度方向上控制点个数，至少》=3。级别越大越密集
                ev_int32     m_height; 			///高度方向上控制点个数，至少》=3。级别越大越密集

                ev_bool    m_bIncludeTextureCoordinates; 			///是否包含纹理顶点

            private:
                //// Internal surface definition
                EarthView::World::Graphic::CPatchSurface mSurface;
            };

            /// <summary>
            ///   矢量图元---椭圆
            /// 1. 椭圆直接继承EarthView::World::Geometry3D::CGeometry3D，设置椭圆的属性即可
            /// 2. 提供了绘制方法
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableEllipse : public EarthView::World::Geometry3D::CGeometry3D
            {
            ev_private:
                CMovableEllipse(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableEllipse();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="centerPoint">椭圆中心点</param>
                /// <param name="lRadius">椭圆X方向轴长</param>
                /// <param name="sRadius">椭圆Y方向轴长</param>
                /// <param name="clr">椭圆的颜色</param>
                /// <param name="drawingMode">绘制模式</param>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                CMovableEllipse(const EarthView::World::Spatial::Math::CVector3 &centerPoint, Real lRadius, Real sRadius ,
                            const EarthView::World::Graphic::CColourValue& fillClr,const EarthView::World::Graphic::CColourValue& frameClr, EarthView::World::Geometry3D::DrawingMode drawingMode,ev_bool includeTextureCoordinates);

                CMovableEllipse(const CMovableEllipse &other);
                EarthView::World::Geometry3D::CMovableEllipse &operator=(const EarthView::World::Geometry3D::CMovableEllipse &other);
                virtual ~CMovableEllipse();
            public:
                /// <summary>
                ///  获取是绘制模式
                /// <summary>
                ev_bool  getDrawingMode()  const
                {
                    return m_eDrawingMode;
                }
                /// <summary>
                ///  设置绘制模式
                /// <summary>
                void setDrawingMode(_in DrawingMode drawingMode)
                {
                    m_eDrawingMode = drawingMode;
                }

				/// <summary>
				///  获取圆柱体颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFillColor() const
				{
					return m_FillColor;
				}
				/// <summary>
				///  设置圆柱体颜色
				/// <summary>
				void setFillColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_FillColor = clr;
				}

				/// <summary>
				///  获取圆柱体边框颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFrameColor() const
				{
					return m_FrameColor;
				}
				/// <summary>
				///  设置圆柱体边框颜色
				/// <summary>
				void setFrameColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_FrameColor = clr;
				}
                /// <summary>
                ///  获取是否包含纹理坐标,true为包含
                /// <summary>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }
                /// <summary>
                ///  设置是否包含纹理坐标,true为包含
                /// <summary>
                void      setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }

                /// <summary>
                ///  获取椭圆中心点
                /// <summary>
                const EarthView::World::Spatial::Math::CVector3      &getCenterPoint( )  const
                {
                    return m_CenterPoint ;
                }
                /// <summary>
                ///  设置椭圆中心点
                /// <summary>
                void      setCenterPoint( EarthView::World::Spatial::Math::CVector3 centerPoint)
                {
                    m_CenterPoint = centerPoint;
                }

                /// <summary>
                ///  获取椭圆X方向轴长
                /// <summary>
                Real      getXRadius( )  const
                {
                    return m_LRadius ;
                }
                /// <summary>
                ///  设置椭圆X方向轴长
                /// <summary>
                void      setXRadius(Real lRadius)
                {
                    m_LRadius = lRadius;
                }

                /// <summary>
                ///  获取椭圆Y方向轴长
                /// <summary>
                Real      getYRadius( )  const
                {
                    return m_SRadius ;
                }
                /// <summary>
                ///  设置椭圆Y方向轴长
                /// <summary>
                void      setYRadius(Real sRadius)
                {
                    m_SRadius = sRadius;
                }

				/// <summary>
				///  获取网格密度
				/// <summary>
				ev_uint32 getGranularity() const
				{
					return mGranularity;
				}
				/// <summary>
				///  设置网格密度
				/// <summary>
				ev_void setGranularity(ev_uint32 granularity)
				{
					mGranularity = granularity;
				}

				/// <summary>
				/// 设置边框材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				/// <returns></returns>
				void setFrameMaterial( const EVString &matName );
				/// <summary>
				/// 获取边框材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr &getFrameMaterial() const;
				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();

            private:
                ///<summary>
                ///  绘制为填充模式的实现
                /// <summary>
                void   _createInFillMode();

                /// <summary>
                ///  绘制为非填充模式的实现
                /// <summary>
                void   _createInLineMode();

            public:
                /// <summary>
                ///  得到外包盒
                /// <summary>
                const EarthView::World::Spatial::Math::CAxisAlignedBox   getAxisBox() const;


                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableEllipse;
                }
				/// <summary>
				/// 矢量图元转为为网格
				/// </summary>
				/// <param name="meshName">网格的名字, 不能是已经存在的网格名字</param>
				/// <param name="groupName">网格在所在资源的组名称，DEFAULT即可</param>
				/// <returns>网格的指针, Maybe Null</returns>
				virtual EarthView::World::Graphic::CMeshPtr   convertToMesh(_in const EVString &meshName,_in const EVString &groupName);
            public:
                virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const ;
                virtual Real getBoundingRadius() const;
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

				virtual void setFrameRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
				virtual void getFrameRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
            protected:

				virtual void beginFlash(const EarthView::World::Graphic::CColourValue& color);
				virtual void startFlash();
				virtual void stopFlash();
				
				class CSimpleRenderableInternal2 : public CSimpleRenderableInternal
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">构造函数的键值对表</param>
					/// <returns></returns>
					CSimpleRenderableInternal2 (CSimpleRenderable *parent);
				public:
					void setMaterial( const EVString &matName );
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
					virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				};

                EarthView::World::Spatial::Math::CVector3  m_CenterPoint; 			///中心点
                Real     m_LRadius; 			///长轴长
                Real     m_SRadius;  			///短轴长
                EarthView::World::Geometry3D::DrawingMode    m_eDrawingMode; 			///绘制模式
                EarthView::World::Graphic::CColourValue  m_FillColor; 			///颜色
				EarthView::World::Graphic::CColourValue  m_FrameColor; 			///颜色
                ev_bool      m_bIncludeTextureCoordinates; 			///是否包含纹理坐标

				ev_uint32 mGranularity;
				CSimpleRenderableInternal2 *mRenderable2;

				EarthView::World::Graphic::CRenderOperation mRenderOp2;
				EVString mMatName2;
				EarthView::World::Graphic::CMaterialPtr mMaterial2;

				EarthView::World::Graphic::CMaterialPtr mNormalMaterial2;
				EarthView::World::Graphic::CMaterialPtr mFlashMaterial2;
            };

            /// <summary>
            ///            矢量图元---长方体
            /// 1. 长方体直接继承EarthView::World::Geometry3D::CGeometry3D，设置长方体的属性即可
            /// 2. 提供了绘制方法
            /// Note：若绘制成实心不加纹理，则是8个顶点和36个索引，若
            /// 含有纹理，则绘制成6个面
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableCube : public  EarthView::World::Geometry3D::CGeometry3D
            {
            ev_private:
                CMovableCube(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableCube();

                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="min">最小的顶点</param>
                /// <param name="max">最大的顶点</param>
                /// <param name="drawingMode">绘制模式</param>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                CMovableCube( const EarthView::World::Spatial::Math::CVector3 &min, const EarthView::World::Spatial::Math::CVector3 &max ,EarthView::World::Geometry3D::DrawingMode drawingMode , ev_bool bIncludeTextureCoordinates /*= false */);

                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="mx">最小的顶点x</param>
                /// <param name="my">最小的顶点y</param>
                /// <param name="mz">最小的顶点z</param>
                /// <param name="Mx">最大的顶点x</param>
                /// <param name="My">最大的顶点y</param>
                /// <param name="Mz">最大的顶点z</param>
                /// <param name="drawingMode">绘制模式</param>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                CMovableCube(Real mx, Real my, Real mz, Real Mx, Real My, Real Mz ,EarthView::World::Geometry3D::DrawingMode drawingMode , ev_bool bIncludeTextureCoordinates /*= false*/);

                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="EarthView::World::Spatial::Math::CAxisAlignedBox">包围盒</param>
                CMovableCube(const EarthView::World::Spatial::Math::CAxisAlignedBox &box);

                CMovableCube(const CMovableCube &other);
                EarthView::World::Geometry3D::CMovableCube &operator=(const EarthView::World::Geometry3D::CMovableCube &other);
                virtual ~CMovableCube();

            public:
                /// <summary>
                ///  设置长方体范围
                /// <summary>
                /// <param name="min">最小的顶点</param>
                /// <param name="max">最大的顶点</param>
                void setExtents( _in const EarthView::World::Spatial::Math::CVector3 &min, _in const EarthView::World::Spatial::Math::CVector3 &max );
                /// <summary>
                ///  设置长方体范围
                /// <summary>
                /// <param name="mx">最小的顶点x</param>
                /// <param name="my">最小的顶点y</param>
                /// <param name="mz">最小的顶点z</param>
                /// <param name="Mx">最大的顶点x</param>
                /// <param name="My">最大的顶点y</param>
                /// <param name="Mz">最大的顶点z</param>
                void setExtents(_in Real mx, _in Real my, _in  Real mz, _in Real Mx, _in  Real My, _in  Real Mz );
                /// <summary>
                ///  获取顶点信息
                /// <summary>
                /// <param name="corner">长方体点位置信息枚举</param>
                EarthView::World::Spatial::Math::CVector3  getCorner(_in EarthView::World::Geometry3D::CubeCornerEnum corner) const ;

            public:
                /// <summary>
                ///  获取最小点位置信息
                /// <summary>
                const EarthView::World::Spatial::Math::CVector3 &getMinimum() const
                {
                    return m_minPoint;
                }
                /// <summary>
                ///  设置最小点位置信息
                /// <summary>
                void setMinimum( _in const EarthView::World::Spatial::Math::CVector3 &vec )
                {
                    m_minPoint  = vec;
                }
                /// <summary>
                ///  获取最大点位置信息
                /// <summary>
                const EarthView::World::Spatial::Math::CVector3 &getMaximum() const
                {
                    return m_maxPoint;
                }
                /// <summary>
                ///  设置最大点位置信息
                /// <summary>
                void setMaximum( _in const EarthView::World::Spatial::Math::CVector3 &vec )
                {
                    m_maxPoint  = vec;
                }
				/// <summary>
				///  获取是绘制模式
				/// <summary>
				ev_bool  getDrawingMode()  const
				{
					return m_eDrawingMode;
				}
				/// <summary>
				///  设置绘制模式
				/// <summary>
				void setDrawingMode(_in DrawingMode drawingMode)
				{
					m_eDrawingMode = drawingMode;
				}
                /// <summary>
                ///  获取顶点颜色信息
                /// <summary>
				/// <param name="fillColor">获取填充颜色或线颜色</param>
                /// <param name="corner">长方体点位置信息枚举</param>
                const EarthView::World::Graphic::CColourValue  &getCornerColor(ev_bool fillColor,_in EarthView::World::Geometry3D::CubeCornerEnum corner) const ;
                /// <summary>
                ///  设置顶点颜色信息
                /// <summary>
				/// <param name="fillColor">设置填充颜色或线颜色</param>
                /// <param name="corner">长方体点位置信息枚举</param>
                /// <param name="clr">设置的颜色类</param>
                void  setCornerColor(ev_bool fillColor,_in EarthView::World::Geometry3D::CubeCornerEnum corner, _in const EarthView::World::Graphic::CColourValue &clr );
                /// <summary>
                ///  获取是否包含纹理,true为包含
                /// <summary>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }
                /// <summary>
                ///  设置是否包含纹理,true为包含
                /// <summary>
                void   setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }
				/// <summary>
				/// 设置边框材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				/// <returns></returns>
				void setFrameMaterial( const EVString &matName );
				/// <summary>
				/// 获取边框材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr &getFrameMaterial() const;
				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();
                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableCube;
                }

				/// <summary>
				/// 矢量图元转为为网格
				/// </summary>
				/// <param name="meshName">网格的名字, 不能是已经存在的网格名字</param>
				/// <param name="groupName">网格在所在资源的组名称，DEFAULT即可</param>
				/// <returns>网格的指针, Maybe Null</returns>
				virtual EarthView::World::Graphic::CMeshPtr   convertToMesh(_in const EVString &meshName,_in const EVString &groupName);
            public:
                virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const ;
                virtual Real getBoundingRadius() const ;
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

				virtual void setFrameRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
				virtual void getFrameRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
            private:
                /// <summary>
                ///  绘制为填充模式的实现，不含纹理坐标，8个顶点
                /// <summary>
                void   _createInFillMode();

                /// <summary>
                ///  绘制为非填充模式的实现
                /// <summary>
                void   _createInLineMode();
                /// <summary>
                ///  绘制为填充模式的实现，含纹理坐标，24个顶点，6个面
                /// <summary>
                void   _createInSixQuads();

            protected:

				virtual void beginFlash(const EarthView::World::Graphic::CColourValue& color);
				virtual void startFlash();
				virtual void stopFlash();
				
				class CSimpleRenderableInternal2 : public CSimpleRenderableInternal
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">构造函数的键值对表</param>
					/// <returns></returns>
					CSimpleRenderableInternal2 (CSimpleRenderable *parent);
				public:
					void setMaterial( const EVString &matName );
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
					virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				};

                ///斜对角线（0，4）点
                EarthView::World::Spatial::Math::CVector3   m_minPoint;
                EarthView::World::Spatial::Math::CVector3   m_maxPoint;
                EarthView::World::Geometry3D::DrawingMode    m_eDrawingMode;  			///是否绘成面
                ev_bool    m_bIncludeTextureCoordinates;								///是否包含纹理坐标
                EarthView::World::Graphic::CColourValue    m_FillColor[8];				///8个顶点所用的颜色
				EarthView::World::Graphic::CColourValue    m_LineColor[8];				///8个顶点所用的颜色

				CSimpleRenderableInternal2 *mRenderable2;

				EarthView::World::Graphic::CRenderOperation mRenderOp2;
				EVString mMatName2;
				EarthView::World::Graphic::CMaterialPtr mMaterial2;

				EarthView::World::Graphic::CMaterialPtr mNormalMaterial2;
				EarthView::World::Graphic::CMaterialPtr mFlashMaterial2;
            };

			/// <summary>
            ///           矢量图元--- 椭圆柱体
            /// 1. 椭圆柱体直接继承EarthView::World::Geometry3D::CGeometry3D，设置椭圆柱体的属性即可
            /// 2. 提供了绘制方法
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableEllipticalCylinder: public EarthView::World::Geometry3D::CGeometry3D
	            {
            ev_private:
                CMovableEllipticalCylinder(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableEllipticalCylinder();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="centerPoint">圆柱体底部圆中心点</param>
                /// <param name="radius">圆柱体的底部圆半径</param>
                /// <param name="height">圆柱体的高</param>
                /// <param name="clr">圆柱体颜色</param>
				/// <param name="drawingMode">绘制模式</param>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                CMovableEllipticalCylinder(const EarthView::World::Spatial::Math::CVector3  &centerPoint, Real xRadius, Real yRadius, Real height,
                           const EarthView::World::Graphic::CColourValue& fillClr,const EarthView::World::Graphic::CColourValue& frameClr,EarthView::World::Geometry3D::DrawingMode drawingMode, ev_bool includeTextureCoordinates);

                CMovableEllipticalCylinder(const CMovableEllipticalCylinder &other);
                EarthView::World::Geometry3D::CMovableEllipticalCylinder &operator=(const EarthView::World::Geometry3D::CMovableEllipticalCylinder &other);
                virtual ~CMovableEllipticalCylinder();
            public:
                /// <summary>
                ///   获取圆柱体的高
                /// <summary>
                Real getHeight() const
                {
                    return m_Height;
                }
                /// <summary>
                ///   设置圆柱体的高
                /// <summary>
                void setHeight(Real height)
                {
                    m_Height = height;
                }
                /// <summary>
                ///  获取圆柱体的底部圆半径
                /// <summary>
                Real getXRadius() const
                {
                    return m_XRadius;
                }
                /// <summary>
                ///  设置圆柱体的底部圆半径
                /// <summary>
                void setXRadius(Real radius)
                {
                    m_XRadius = radius;
                }
				/// <summary>
				///  获取圆柱体的底部圆半径
				/// <summary>
				Real getYRadius() const
				{
					return m_YRadius;
				}
				/// <summary>
				///  设置圆柱体的底部圆半径
				/// <summary>
				void setYRadius(Real radius)
				{
					m_YRadius = radius;
				}
                /// <summary>
                ///  获取圆柱体底部圆中心点
                /// <summary>
                const EarthView::World::Spatial::Math::CVector3 &getCenter() const
                {
                    return m_CenterPoint;
                }
                /// <summary>
                ///  设置圆柱体底部圆中心点
                /// <summary>
                void setCenter(_in const EarthView::World::Spatial::Math::CVector3 &center)
                {
                    m_CenterPoint = center;
                }
                /// <summary>
                ///  获取是否包含纹理信息,true为包含
                /// <summary>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }
                /// <summary>
                ///  设置是否包含纹理信息,true为包含
                /// <summary>
                void   setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }

				ev_bool   getClosed() const
				{
					return m_bClosed;
				}
				
				void   setClosed(_in ev_bool closed)
				{
					m_bClosed = closed;
				}

                /// <summary>
                ///  获取圆柱体颜色
                /// <summary>
                EarthView::World::Graphic::CColourValue  getFillColor() const
                {
                    return m_Fillcolor;
                }
                /// <summary>
                ///  设置圆柱体颜色
                /// <summary>
                void setFillColor(_in EarthView::World::Graphic::CColourValue clr)
                {
                    m_Fillcolor = clr;
                }

				/// <summary>
				///  获取圆柱体边框颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFrameColor() const
				{
					return m_Framecolor;
				}
				/// <summary>
				///  设置圆柱体边框颜色
				/// <summary>
				void setFrameColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_Framecolor = clr;
				}

				/// <summary>
				///  获取是绘制模式
				/// <summary>
				ev_bool  getDrawingMode()  const
				{
					return m_eDrawingMode;
				}
				/// <summary>
				///  设置绘制模式
				/// <summary>
				void setDrawingMode(_in DrawingMode drawingMode)
				{
					m_eDrawingMode = drawingMode;
				}

				/// <summary>
				///  获取网格密度
				/// <summary>
				ev_uint32 getGranularity() const
				{
					return mGranularity;
				}
				/// <summary>
				///  设置网格密度
				/// <summary>
				ev_void setGranularity(ev_uint32 granularity)
				{
					mGranularity = granularity;
				}

				/// <summary>
				/// 设置边框材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				/// <returns></returns>
				void setFrameMaterial( const EVString &matName );
				/// <summary>
				/// 获取边框材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr &getFrameMaterial() const;
				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();
                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableEllipticalCylinder;
                }
				/// <summary>
				/// 矢量图元转为为网格
				/// </summary>
				/// <param name="meshName">网格的名字, 不能是已经存在的网格名字</param>
				/// <param name="groupName">网格在所在资源的组名称，DEFAULT即可</param>
				/// <returns>网格的指针, Maybe Null</returns>
				virtual EarthView::World::Graphic::CMeshPtr   convertToMesh(_in const EVString &meshName,_in const EVString &groupName);
            public:
                virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                virtual Real getBoundingRadius() const;
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

				virtual void setFrameRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
				virtual void getFrameRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);

			protected:
				void _drawFill(ev_real32 fDeltaBaseAngle,list<EarthView::World::Spatial::Math::CVector3>& topVerts,list<EarthView::World::Spatial::Math::CVector3>& bottomVerts);
				void _drawFrame(ev_real32 fDeltaBaseAngle,list<EarthView::World::Spatial::Math::CVector3>& topVerts,list<EarthView::World::Spatial::Math::CVector3>& bottomVerts);
            protected:

				virtual void beginFlash(const EarthView::World::Graphic::CColourValue& color);
				virtual void startFlash();
				virtual void stopFlash();

				class CSimpleRenderableInternal2 : public CSimpleRenderableInternal
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">构造函数的键值对表</param>
					/// <returns></returns>
					CSimpleRenderableInternal2 (CSimpleRenderable *parent);
				public:
					void setMaterial( const EVString &matName );
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
					virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				};

                EarthView::World::Spatial::Math::CVector3  m_CenterPoint;  			///底部圆的中心点
                Real  m_XRadius;          			///底部圆半径
				Real  m_YRadius;          			///底部圆半径
                Real  m_Height;           			///高
                ev_bool    m_bIncludeTextureCoordinates;   			///包含纹理坐标
                EarthView::World::Graphic::CColourValue  m_Fillcolor;				///颜色
				EarthView::World::Graphic::CColourValue  m_Framecolor;				///颜色
				ev_uint32 mGranularity;
				ev_bool m_bClosed;

				EarthView::World::Geometry3D::DrawingMode m_eDrawingMode;

				CSimpleRenderableInternal2 *mRenderable2;

				EarthView::World::Graphic::CRenderOperation mRenderOp2;
				EVString mMatName2;
				EarthView::World::Graphic::CMaterialPtr mMaterial2;

				EarthView::World::Graphic::CMaterialPtr mNormalMaterial2;
				EarthView::World::Graphic::CMaterialPtr mFlashMaterial2;
            };

			/// <summary>
            ///           矢量图元--- 圆柱体
            /// 1. 圆柱体直接继承EarthView::World::Geometry3D::CGeometry3D，设置圆柱体的属性即可
            /// 2. 提供了绘制方法
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableCylinder: public EarthView::World::Geometry3D::CMovableEllipticalCylinder
            {
            ev_private:
                CMovableCylinder(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableCylinder();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="centerPoint">圆柱体底部圆中心点</param>
                /// <param name="radius">圆柱体的底部圆半径</param>
                /// <param name="height">圆柱体的高</param>
                /// <param name="clr">圆柱体颜色</param>
				/// <param name="drawingMode">绘制模式</param>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                CMovableCylinder(const EarthView::World::Spatial::Math::CVector3  &centerPoint, Real radius, Real height,
                           const EarthView::World::Graphic::CColourValue& fillClr,const EarthView::World::Graphic::CColourValue& frameClr,EarthView::World::Geometry3D::DrawingMode drawingMode, ev_bool includeTextureCoordinates);
            public:               
                /// <summary>
                ///  获取圆柱体的底部圆半径
                /// <summary>
                Real getCircleRadius() const
                {
                    return m_XRadius;
                }
                /// <summary>
                ///  设置圆柱体的底部圆半径
                /// <summary>
                void setCircleRadius(Real radius)
                {
                    m_XRadius = radius;
					m_YRadius = radius;
                }
            };

            /// <summary>
            ///           矢量图元--- 圆锥体
            /// 1. 圆锥体直接继承EarthView::World::Geometry3D::CGeometry3D，设置圆锥体的属性即可
            /// 2. 提供了绘制方法
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableCone: public  EarthView::World::Geometry3D::CGeometry3D
            {

            ev_private:
                CMovableCone(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableCone();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="centerPoint">圆柱体底部圆中心点</param>
                /// <param name="radius">圆柱体的底部圆半径</param>
                /// <param name="height">圆柱体的高</param>
                /// <param name="clr">圆柱体颜色</param>
				/// <param name="drawingMode">绘制模式</param>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                CMovableCone(const EarthView::World::Spatial::Math::CVector3  &centerPoint, Real radius, Real height,
                         const EarthView::World::Graphic::CColourValue& fillClr,const EarthView::World::Graphic::CColourValue& frameClr, EarthView::World::Geometry3D::DrawingMode drawingMode,ev_bool includeTextureCoordinates );
                CMovableCone(const CMovableCone &other);
                EarthView::World::Geometry3D::CMovableCone &operator=(const EarthView::World::Geometry3D::CMovableCone &other);
                virtual ~CMovableCone();
            public:
                /// <summary>
                ///   获取圆柱体的高
                /// <summary>
                Real getHeight() const
                {
                    return m_Height;
                }
                /// <summary>
                ///   设置圆柱体的高
                /// <summary>
                void setHeight(Real height)
                {
                    m_Height = height;
                }
                /// <summary>
                ///  获取圆柱体的底部圆半径
                /// <summary>
                Real getTopCircleRadius() const
                {
                    return m_TopRadius;
                }
                /// <summary>
                ///  设置圆柱体的底部圆半径
                /// <summary>
                void setTopCircleRadius(Real radius)
                {
                    m_TopRadius = radius;
                }

				/// <summary>
				///  获取圆柱体的底部圆半径
				/// <summary>
				Real getBottomCircleRadius() const
				{
					return m_BottomRadius;
				}
				/// <summary>
				///  设置圆柱体的底部圆半径
				/// <summary>
				void setBottomCircleRadius(Real radius)
				{
					m_BottomRadius = radius;
				}

                /// <summary>
                ///  获取圆柱体底部圆中心点
                /// <summary>
                const EarthView::World::Spatial::Math::CVector3 &getCircleCenter() const
                {
                    return m_CenterPoint;
                }
                /// <summary>
                ///  设置圆柱体底部圆中心点
                /// <summary>
                void setCircleCenter(_in const EarthView::World::Spatial::Math::CVector3 &center)
                {
                    m_CenterPoint = center;
                }
                /// <summary>
                ///  获取是否包含纹理信息,true为包含
                /// <summary>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }
                /// <summary>
                ///  设置是否包含纹理信息,true为包含
                /// <summary>
                void   setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }
                
				/// <summary>
				///  获取圆柱体颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFillColor() const
				{
					return m_Fillcolor;
				}
				/// <summary>
				///  设置圆柱体颜色
				/// <summary>
				void setFillColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_Fillcolor = clr;
				}

				/// <summary>
				///  获取圆柱体边框颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFrameColor() const
				{
					return m_Framecolor;
				}
				/// <summary>
				///  设置圆柱体边框颜色
				/// <summary>
				void setFrameColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_Framecolor = clr;
				}

				/// <summary>
				///  获取是绘制模式
				/// <summary>
				ev_bool  getDrawingMode()  const
				{
					return m_eDrawingMode;
				}
				/// <summary>
				///  设置绘制模式
				/// <summary>
				void setDrawingMode(_in DrawingMode drawingMode)
				{
					m_eDrawingMode = drawingMode;
				}
				/// <summary>
				/// 设置边框材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				/// <returns></returns>
				void setFrameMaterial( const EVString &matName );
				/// <summary>
				/// 获取边框材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr &getFrameMaterial() const;
                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableCone;
                }

				/// <summary>
				///  获取圆柱体颜色
				/// <summary>
				ev_bool  getClosed() const
				{
					return mbClosed;
				}
				/// <summary>
				///  设置圆柱体颜色
				/// <summary>
				void setClosed(ev_bool closed)
				{
					mbClosed = closed;
				}
				/// <summary>
				///  获取网格密度
				/// <summary>
				ev_uint32 getGranularity() const
				{
					return mGranularity;
				}
				/// <summary>
				///  设置网格密度
				/// <summary>
				ev_void setGranularity(ev_uint32 granularity)
				{
					mGranularity = granularity;
				}

				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();

				/// <summary>
				/// 矢量图元转为为网格
				/// </summary>
				/// <param name="meshName">网格的名字, 不能是已经存在的网格名字</param>
				/// <param name="groupName">网格在所在资源的组名称，DEFAULT即可</param>
				/// <returns>网格的指针, Maybe Null</returns>
				virtual EarthView::World::Graphic::CMeshPtr   convertToMesh(_in const EVString &meshName,_in const EVString &groupName);
            public:
                virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                virtual Real getBoundingRadius() const;
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

				virtual void setFrameRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
				virtual void getFrameRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);

			private:
				void _drawFill(ev_real32 fDeltaBaseAngle,list<EarthView::World::Spatial::Math::CVector3>& topVerts,list<EarthView::World::Spatial::Math::CVector3>& bottomVerts);
				void _drawFrame(ev_real32 fDeltaBaseAngle,list<EarthView::World::Spatial::Math::CVector3>& topVerts,list<EarthView::World::Spatial::Math::CVector3>& bottomVerts);
            protected:

				virtual void beginFlash(const EarthView::World::Graphic::CColourValue& color);
				virtual void startFlash();
				virtual void stopFlash();				

				class CSimpleRenderableInternal2 : public CSimpleRenderableInternal
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">构造函数的键值对表</param>
					/// <returns></returns>
					CSimpleRenderableInternal2 (CSimpleRenderable *parent);
				public:
					void setMaterial( const EVString &matName );
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
					virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				};

                EarthView::World::Spatial::Math::CVector3  m_CenterPoint;  			///底部圆的中心点
                Real  m_TopRadius;          			///底部圆半径
				Real  m_BottomRadius;          			///底部圆半径
                Real  m_Height;           			///高
                ev_bool    m_bIncludeTextureCoordinates;   			///包含纹理坐标
               
				EarthView::World::Graphic::CColourValue  m_Fillcolor;				///颜色
				EarthView::World::Graphic::CColourValue  m_Framecolor;				///颜色

				ev_uint32 mGranularity;

				ev_bool mbClosed;

				EarthView::World::Geometry3D::DrawingMode m_eDrawingMode;

				CSimpleRenderableInternal2 *mRenderable2;
				EarthView::World::Graphic::CRenderOperation mRenderOp2;
				EVString mMatName2;
				EarthView::World::Graphic::CMaterialPtr mMaterial2;

				EarthView::World::Graphic::CMaterialPtr mNormalMaterial2;
				EarthView::World::Graphic::CMaterialPtr mFlashMaterial2;
            };

			/// <summary>
            ///            矢量图元--- 半球
            /// 1. 球直接继承EarthView::World::Geometry3D::CGeometry3D，设置球的属性即可
            /// 2. 提供了绘制方法
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableHemisphere: public  EarthView::World::Geometry3D::CGeometry3D
            {
            ev_private:
                CMovableHemisphere(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableHemisphere();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="centerPoint">球心</param>
                /// <param name="radius">球径</param>
                /// <param name="clr">球颜色</param>
				/// <param name="drawingMode">绘制模式</param>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                CMovableHemisphere(const EarthView::World::Spatial::Math::CVector3  &centerPoint, Real radius,
                           const EarthView::World::Graphic::CColourValue& fillClr,const EarthView::World::Graphic::CColourValue& frameClr,EarthView::World::Geometry3D::DrawingMode drawingMode, ev_bool closed,ev_bool includeTextureCoordinates );

                CMovableHemisphere(const CMovableHemisphere &other);
                EarthView::World::Geometry3D::CMovableHemisphere &operator=(const EarthView::World::Geometry3D::CMovableHemisphere &other);
                virtual ~CMovableHemisphere();
            public:
                /// <summary>
                ///  获取球径
                /// <summary>
                Real getRadius() const
                {
                    return m_xRadius;
                }
                /// <summary>
                ///  设置球径
                /// <summary>
                void setRadius(_in Real radius)
                {
                    m_xRadius = radius;
                }
                /// <summary>
                ///  获取球心
                /// <summary>
                const EarthView::World::Spatial::Math::CVector3 &getCenter() const
                {
                    return m_CenterPoint;
                }
                /// <summary>
                ///  设置球心
                /// <summary>
                void setCenter(_in const EarthView::World::Spatial::Math::CVector3 &center)
                {
                    m_CenterPoint = center;
                }

				/// <summary>
				///  获取球心
				/// <summary>
				const ev_bool getBottomClosed() const
				{
					return m_bBottomClosed;
				}
				/// <summary>
				///  设置球心
				/// <summary>
				void setBottomClosed(ev_bool closed)
				{
					m_bBottomClosed = closed;
				}

                /// <summary>
                ///  获取是否包含纹理坐标,true为包含
                /// <summary>
                ev_bool   getTextureCoordinatesIncluded() const
                {
                    return m_bIncludeTextureCoordinates;
                }
                /// <summary>
                ///  设置是否包含纹理坐标,true为包含
                /// <summary>
                void   setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
                {
                    m_bIncludeTextureCoordinates = includeTextureCoordinates;
                }
				/// <summary>
				///  获取圆柱体颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFillColor() const
				{
					return m_FillColor;
				}
				/// <summary>
				///  设置圆柱体颜色
				/// <summary>
				void setFillColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_FillColor = clr;
				}

				/// <summary>
				///  获取圆柱体颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getClosedColor() const
				{
					return m_ClosedColor;
				}
				/// <summary>
				///  设置圆柱体颜色
				/// <summary>
				void setClosedColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_ClosedColor = clr;
				}

				/// <summary>
				///  获取圆柱体边框颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFrameColor() const
				{
					return m_FrameColor;
				}
				/// <summary>
				///  设置圆柱体边框颜色
				/// <summary>
				void setFrameColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_FrameColor = clr;
				}

				/// <summary>
				///  获取是绘制模式
				/// <summary>
				EarthView::World::Geometry3D::DrawingMode  getDrawingMode()  const
				{
					return m_eDrawingMode;
				}
				/// <summary>
				///  设置绘制模式
				/// <summary>
				void setDrawingMode(_in DrawingMode drawingMode)
				{
					m_eDrawingMode = drawingMode;
				}

				/// <summary>
				///  获取经度方向网格密度
				/// <summary>
				ev_uint32 getLongitudeGranularity() const
				{
					return m_LongitudeGranularity;
				}
				/// <summary>
				///  设置经度方向网格密度
				/// <summary>
				ev_void setLatitudeGranularity(ev_uint32 latitudeGranularity)
				{
					m_LatitudeGranularity = latitudeGranularity;
				}
				/// <summary>
				///  获取纬度方向网格密度
				/// <summary>
				ev_uint32 getLatitudeGranularity() const
				{
					return m_LatitudeGranularity;
				}
				/// <summary>
				///  设置纬度方向网格密度
				/// <summary>
				ev_void setLongitudeGranularity(ev_uint32 longitudeGranularity)
				{
					m_LongitudeGranularity = longitudeGranularity;
				}

				/// <summary>
				/// 设置边框材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				/// <returns></returns>
				void setFrameMaterial( const EVString &matName );
				/// <summary>
				/// 获取边框材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr &getFrameMaterial() const;
				/// <summary>
				/// 设置底部填充材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				/// <returns></returns>
				void setBottomMaterial( const EVString &matName );
				/// <summary>
				/// 获取底部填充材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr &getBottomMaterial() const;
				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();

                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableHemisphere;
                }
				/// <summary>
				/// 矢量图元转为为网格
				/// </summary>
				/// <param name="meshName">网格的名字, 不能是已经存在的网格名字</param>
				/// <param name="groupName">网格在所在资源的组名称，DEFAULT即可</param>
				/// <returns>网格的指针, Maybe Null</returns>
				virtual EarthView::World::Graphic::CMeshPtr   convertToMesh(_in const EVString &meshName,_in const EVString &groupName);
            public:
                virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                virtual Real getBoundingRadius() const;
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
				
				virtual void setBottomRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
				virtual void getBottomRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				
				virtual void setFrameRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
				virtual void getFrameRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);
				/// <summary>
				/// 绘制选择对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void renderSelection();
				/// <summary>
				/// 清除选择
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clearSelection();
			private:
				void _drawFill();
				void _drawFrame();
            protected:
				virtual void* toPolyhedron();

				virtual void beginFlash(const EarthView::World::Graphic::CColourValue& color);
				virtual void startFlash();
				virtual void stopFlash();

				class CSimpleRenderableInternal2 : public CSimpleRenderableInternal
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">构造函数的键值对表</param>
					/// <returns></returns>
					CSimpleRenderableInternal2 (CSimpleRenderable *parent);
				public:
					void setMaterial( const EVString &matName );
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
					virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				};

				class CSimpleRenderableInternal1 : public CSimpleRenderableInternal
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">构造函数的键值对表</param>
					/// <returns></returns>
					CSimpleRenderableInternal1 (CSimpleRenderable *parent);
				public:
					void setMaterial( const EVString &matName );
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
					virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				};

                EarthView::World::Spatial::Math::CVector3  m_CenterPoint;
                Real     m_xRadius;
				EarthView::World::Geometry3D::DrawingMode m_eDrawingMode;
				ev_bool m_bBottomClosed;
                ev_bool    m_bIncludeTextureCoordinates;     			///包含纹理坐标
                EarthView::World::Graphic::CColourValue  m_FillColor;				///颜色
				EarthView::World::Graphic::CColourValue  m_ClosedColor;
				EarthView::World::Graphic::CColourValue  m_FrameColor;				///颜色

				ev_uint32 m_LongitudeGranularity;
				ev_uint32 m_LatitudeGranularity;
                friend class CMovableEllipsoid;

				CSimpleRenderableInternal2 *mRenderable2;
				CSimpleRenderableInternal1 *mRenderable1;

				EarthView::World::Graphic::CRenderOperation mRenderOp2;
				EVString mMatName2;
				EarthView::World::Graphic::CMaterialPtr mMaterial2;

				EarthView::World::Graphic::CRenderOperation mRenderOp1;
				EVString mMatName1;
				EarthView::World::Graphic::CMaterialPtr mMaterial1;

				EarthView::World::Graphic::CMaterialPtr mNormalMaterial1;
				EarthView::World::Graphic::CMaterialPtr mNormalMaterial2;
				EarthView::World::Graphic::CMaterialPtr mFlashMaterial2;
            };

            /// <summary>
            ///            矢量图元--- 椭球
            /// 1. 在球的基础上进行世界坐标系的缩放
            /// 2. 提供了绘制方法
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableEllipsoid: public  EarthView::World::Geometry3D::CGeometry3D
            {
            ev_private:
                CMovableEllipsoid(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableEllipsoid();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="centerPoint">椭球心</param>
                /// <param name="xRadius">椭球X轴长</param>
                /// <param name="yRadius">椭球Y轴长</param>
                /// <param name="zRadius">椭球Z轴长</param>
                /// <param name="clr">球颜色</param>
				/// <param name="drawingMode">绘制模式</param>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                CMovableEllipsoid(const EarthView::World::Spatial::Math::CVector3  &centerPoint, Real xRadius, Real yRadius, Real zRadius,
                                  const EarthView::World::Graphic::CColourValue& fillClr,const EarthView::World::Graphic::CColourValue& frameClr,EarthView::World::Geometry3D::DrawingMode drawingMode, ev_bool includeTextureCoordinates);

                CMovableEllipsoid(const CMovableEllipsoid &other);
                EarthView::World::Geometry3D::CMovableEllipsoid &operator=(const EarthView::World::Geometry3D::CMovableEllipsoid &other);
                virtual ~CMovableEllipsoid();
            public:
                /// <summary>
                ///  获取X方向轴长
                /// <summary>
                Real getXRadius() const
                {
                    return m_xRadius;
                }
                /// <summary>
                ///  获取Y方向轴长
                /// <summary>
                Real getYRadius() const
                {
                    return m_yRadius;
                }
                /// <summary>
                ///  获取Z方向轴长
                /// <summary>
                Real getZRadius() const
                {
                    return m_zRadius;
                }
                /// <summary>
                ///  设置X方向轴长
                /// <summary>
                void setXRadius(_in Real radius)
                {
                    m_xRadius = radius;
                }
                /// <summary>
                ///  设置Y方向轴长
                /// <summary>
                void setYRadius(_in Real radius)
                {
                    m_yRadius = radius;
                }
                /// <summary>
                ///  设置Z方向轴长
                /// <summary>
                void setZRadius(_in Real radius)
                {
                    m_zRadius = radius;
                }

                /// <summary>
                ///  设置X,Y,Z三个方向轴长
                /// <summary>
                void setRadius(_in Real x, _in Real y, _in Real z )
                {
                    m_xRadius = x;
                    m_yRadius = y;
                    m_zRadius = z;
                }

				/// <summary>
				///  获取球心
				/// <summary>
				const EarthView::World::Spatial::Math::CVector3 &getCenter() const
				{
					return m_CenterPoint;
				}
				/// <summary>
				///  设置球心
				/// <summary>
				void setCenter(_in const EarthView::World::Spatial::Math::CVector3 &center)
				{
					m_CenterPoint = center;
				}
				/// <summary>
				///  获取是否包含纹理坐标,true为包含
				/// <summary>
				ev_bool   getTextureCoordinatesIncluded() const
				{
					return m_bIncludeTextureCoordinates;
				}
				/// <summary>
				///  设置是否包含纹理坐标,true为包含
				/// <summary>
				void   setTextureCoordinatesInclude(_in ev_bool includeTextureCoordinates)
				{
					m_bIncludeTextureCoordinates = includeTextureCoordinates;
				}
				/// <summary>
				///  获取圆柱体颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFillColor() const
				{
					return m_FillColor;
				}
				/// <summary>
				///  设置圆柱体颜色
				/// <summary>
				void setFillColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_FillColor = clr;
				}

				/// <summary>
				///  获取圆柱体边框颜色
				/// <summary>
				EarthView::World::Graphic::CColourValue  getFrameColor() const
				{
					return m_FrameColor;
				}
				/// <summary>
				///  设置圆柱体边框颜色
				/// <summary>
				void setFrameColor(_in EarthView::World::Graphic::CColourValue clr)
				{
					m_FrameColor = clr;
				}

				/// <summary>
				///  获取是绘制模式
				/// <summary>
				EarthView::World::Geometry3D::DrawingMode  getDrawingMode()  const
				{
					return m_eDrawingMode;
				}
				/// <summary>
				///  设置绘制模式
				/// <summary>
				void setDrawingMode(_in DrawingMode drawingMode)
				{
					m_eDrawingMode = drawingMode;
				}
				/// <summary>
				///  获取经度方向网格密度
				/// <summary>
				ev_uint32 getLongitudeGranularity() const
				{
					return m_LongitudeGranularity;
				}
				/// <summary>
				///  设置经度方向网格密度
				/// <summary>
				ev_void setLatitudeGranularity(ev_uint32 latitudeGranularity)
				{
					m_LatitudeGranularity = latitudeGranularity;
				}
				/// <summary>
				///  获取纬度方向网格密度
				/// <summary>
				ev_uint32 getLatitudeGranularity() const
				{
					return m_LatitudeGranularity;
				}
				/// <summary>
				///  设置纬度方向网格密度
				/// <summary>
				ev_void setLongitudeGranularity(ev_uint32 longitudeGranularity)
				{
					m_LongitudeGranularity = longitudeGranularity;
				}

				/// <summary>
				/// 设置边框材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				/// <returns></returns>
				void setFrameMaterial( const EVString &matName );
				/// <summary>
				/// 获取边框材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr &getFrameMaterial() const;
				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();

                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableEllipsoid;
                }
				/// <summary>
				/// 矢量图元转为为网格
				/// </summary>
				/// <param name="meshName">网格的名字, 不能是已经存在的网格名字</param>
				/// <param name="groupName">网格在所在资源的组名称，DEFAULT即可</param>
				/// <returns>网格的指针, Maybe Null</returns>
				virtual EarthView::World::Graphic::CMeshPtr   convertToMesh(_in const EVString &meshName,_in const EVString &groupName);

			public:
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
				virtual Real getBoundingRadius() const;
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

				virtual void setFrameRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
				virtual void getFrameRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
			private:
				void _drawFill();
				void _drawFrame();
			protected:

				virtual void beginFlash(const EarthView::World::Graphic::CColourValue& color);
				virtual void startFlash();
				virtual void stopFlash();

				class CSimpleRenderableInternal2 : public CSimpleRenderableInternal
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">构造函数的键值对表</param>
					/// <returns></returns>
					CSimpleRenderableInternal2 (CSimpleRenderable *parent);
				public:
					void setMaterial( const EVString &matName );
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
					virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				};

				EarthView::World::Spatial::Math::CVector3  m_CenterPoint;
				Real     m_xRadius;
				Real     m_yRadius;
				Real     m_zRadius;

				EarthView::World::Geometry3D::DrawingMode m_eDrawingMode;
				ev_bool    m_bIncludeTextureCoordinates;     			///包含纹理坐标
				EarthView::World::Graphic::CColourValue  m_FillColor;				///颜色
				EarthView::World::Graphic::CColourValue  m_FrameColor;				///颜色

				ev_uint32 m_LongitudeGranularity;
				ev_uint32 m_LatitudeGranularity;

				CSimpleRenderableInternal2 *mRenderable2;

				EarthView::World::Graphic::CRenderOperation mRenderOp2;
				EVString mMatName2;
				EarthView::World::Graphic::CMaterialPtr mMaterial2;

				EarthView::World::Graphic::CMaterialPtr mNormalMaterial2;
				EarthView::World::Graphic::CMaterialPtr mFlashMaterial2;
            };

			 /// <summary>
            ///            矢量图元--- 球
            /// 1. 球直接继承EarthView::World::Geometry3D::CGeometry3D，设置球的属性即可
            /// 2. 提供了绘制方法
            /// <summary>
            class EV_GEOMETRY3D_DLL CMovableSphere: public EarthView::World::Geometry3D::CMovableEllipsoid
            {
            ev_private:
                CMovableSphere(_in EarthView::World::Core::CNameValuePairList  *pList);
                /*======================================================*\
                 *                  构造析构函数                        *
                \*======================================================*/
            public:
                CMovableSphere();
                /// <summary>
                ///  构造函数
                /// <summary>
                /// <param name="centerPoint">球心</param>
                /// <param name="radius">球径</param>
                /// <param name="clr">球颜色</param>
				/// <param name="drawingMode">绘制模式</param>
                /// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
                CMovableSphere(const EarthView::World::Spatial::Math::CVector3  &centerPoint, Real radius,
                           const EarthView::World::Graphic::CColourValue& fillClr,const EarthView::World::Graphic::CColourValue& frameClr,EarthView::World::Geometry3D::DrawingMode drawingMode, ev_bool includeTextureCoordinates );

                CMovableSphere(const CMovableSphere &other);
                EarthView::World::Geometry3D::CMovableSphere &operator=(const EarthView::World::Geometry3D::CMovableSphere &other);
                virtual ~CMovableSphere();
            public:
                /// <summary>
                ///  获取球径
                /// <summary>
                Real getRadius() const
                {
                    return m_xRadius;
                }
                /// <summary>
                ///  设置球径
                /// <summary>
                void setRadius(_in Real radius)
                {
                    m_xRadius = radius;
                }
                
                /*======================================================*\
                 *            父类的（纯）虚函数                        *
                \*======================================================*/
            public:
                /// <summary>
                /// 复制一个实体，相当调用赋值函数
                /// </summary>
                /// <returns>另一个实体的指针</returns>
                virtual _extfree EarthView::World::Geometry3D::CGeometry3D   *clone() const;

                /// <summary>
                /// 创建矢量图元的抽象函数，各个矢量图元必须实现
                /// </summary>
                /// <returns>None</returns>
                virtual void      create() ;
                /// <summary>
                /// 获取创建矢量图元的类型
                /// </summary>
                /// <returns>矢量图元类型的枚举</returns>
                virtual EarthView::World::Geometry3D::DrawingType   getDrawingType() const
                {
                    return MovableSphere;
                }
            };

            class EV_GEOMETRY3D_DLL CMercatorSphere : public EarthView::World::Geometry3D::CMovableSphere
            {
            protected:
                ev_uint16 m_nLonSepDegree;   			///经度方向划分度数
                ev_uint16 m_nLatSepDegree;				///纬度方向划分度数
                ev_uint16 m_nStripNum; 			///条带数
                ev_uint16 m_nLonPntsEveryStrip;  			///每圈经度点数
                ev_uint16 m_nLatPntsEveryStrip;				///每圈纬度点数
                Real *m_ptVertex;  			///顶点数组
                ev_uint16 *m_ptIndex; 			///索引数组
                Real *m_ptTexture; 			///纹理数组
                ev_uint16 m_nVertexNum;
                ev_uint16 m_nIndexNum;
                ev_uint16 m_nTextureNum;
            private:
                ///初始化存储与基本参数
                void Init();
                ///纹理坐标
                void GenTexture();
                ///索引坐标
                void GenIndex();
                ///顶点坐标
                void GenVertex();
            public:
                CMercatorSphere(const EarthView::World::Spatial::Math::CVector3  &centerPoint, Real radius);

                ~CMercatorSphere();
                ///创建对象
                virtual void create();
            ev_private:
                CMercatorSphere(EarthView::World::Core::CNameValuePairList *pList);
            };
            class EV_GEOMETRY3D_DLL CMercatorPole : public EarthView::World::Geometry3D::CMercatorSphere
            {
            private:
                ///初始化存储与基本参数
                void Init();
                ///纹理坐标
                void GenTexture();
                ///索引坐标
                void GenIndex();
                ///顶点坐标
                void GenVertex();
            public:
                CMercatorPole(const EarthView::World::Spatial::Math::CVector3  &centerPoint, Real radius);
                ~CMercatorPole();
                ///创建对象
                virtual void	create();
            ev_private:
                CMercatorPole(EarthView::World::Core::CNameValuePairList *pList);
            };
        }
    }
}
/// namespace EarthView_World_Graphic
#endif ///EV_VECTOR_GRAPHICS_H_
