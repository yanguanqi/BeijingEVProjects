#ifndef _SIMPLE_VERTEX_H_
#define _SIMPLE_VERTEX_H_
#pragma  once

#include "geometry3d/geometry3d_config.h"
#include <core/global.h>
#include <graphic/colourvalue.h>
#include <mathengine/vector4.h>
#include <mathengine/vector2.h>


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// </summary>
			///  EarthView::World::Geometry3D::CVertex是一个顶点缓冲单位的结构，包含了位置，法向量，切线，纹理和颜色信息
			///  纹理的信息可以有2，3，4三种不同的情况，具体见纹理设置说明
			/// </summary>
			class EV_GEOMETRY3D_DLL CVertex : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CVertex( _in EarthView::World::Core::CNameValuePairList* pList) ;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CVertex()  ;
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CVertex() ;

			public:
				/// </summary>
				///  获取点坐标
				/// </summary>
				/// <returns>点坐标</returns>
				const EarthView::World::Spatial::Math::CVector3& getPostion() const
				{
					return m_position;
				}
				/// </summary>
				/// 设置点坐标
				/// </summary>
				/// <param name="position">点坐标</param>
				/// <returns>None</returns>
				void setPostion( _in const EarthView::World::Spatial::Math::CVector3& position)
				{
					m_position = position;
				}

				/// </summary>
				/// 获取法向量
				/// </summary>
				/// <returns>法向量</returns>
				const EarthView::World::Spatial::Math::CVector3& getNormal() const
				{
					return m_normal;
				}
				/// </summary>
				/// 设置法向量
				/// </summary>
				/// <param name="normal">法向量</param>
				/// <returns>None</returns>
				void setNormal( _in const EarthView::World::Spatial::Math::CVector3& normal)
				{
					m_normal = normal;
				}
				/// </summary>
				/// 获取切线
				/// </summary>
				/// <returns>切线</returns>
				const EarthView::World::Spatial::Math::CVector3& getTangent() const
				{
					return m_tangent;
				}
				/// </summary>
				/// 设置切线
				/// </summary>
				/// <param name="tangent">切线</param>
				/// <returns>None</returns>
				void setTangent( _in const EarthView::World::Spatial::Math::CVector3& tangent)
				{
					m_tangent = tangent;
				}
				/// </summary>
				///  获取纹理坐标
				///  纹理坐标声明的格式有   VET_FLOAT2 ,VET_FLOAT3 ,VET_FLOAT4 三种元素类型，分别对应EarthView::World::Spatial::Math::CVector2，EarthView::World::Spatial::Math::CVector3，EarthView::World::Spatial::Math::CVector4
				///  当声明为VET_FLOAT4时，存储的值为m_texCoord的x,y,z,w四位
				///  当声明为VET_FLOAT3时，存储的值为m_texCoord的x,y,z三位
				///  当声明为VET_FLOAT2时，存储的值为m_texCoord的x,y两位
				/// </summary>
				/// <returns>纹理坐标</returns>
				const EarthView::World::Spatial::Math::CVector4& getTexCoord() const
				{
					return m_texCoord;
				}
				/// </summary>
				/// 设置0号纹理坐标
				/// </summary>
				/// <param name="texCoord">纹理坐标</param>
				/// <returns>None</returns>
				void setTexCoord( _in const EarthView::World::Spatial::Math::CVector4& texCoord)
				{
					m_texCoord = texCoord;
				}
				///<summary>
				///按索引设置纹理坐标
				///</summary>
				///<param name = "texCoord">纹理坐标</param>
				///<return>None</returns>
				/// </summary>
				void setTexCoord(_in const EarthView::World::Spatial::Math::CVector4& texCoord,int index)
				{
					switch(index)
					{
					case 0:
						m_texCoord = texCoord;
						break;
					case 1:
						m_texCoord1 = texCoord;
						break;
					case 2:
						m_texCoord2 = texCoord;
						break;
					case 3:
						m_texCoord3 = texCoord;
						break;
					case 4:
						m_texCoord4 = texCoord;
						break;
					case 5:
						m_texCoord5 = texCoord;
						break;
					case 6:
						m_texCoord6 = texCoord;
						break;
					case 7:
						m_texCoord7 = texCoord;
						break;
					default:
						break;
					}
				}
				/// </summary>
				/// 获取颜色
				/// </summary>
				/// <returns>颜色</returns>
				const EarthView::World::Graphic::CColourValue& getColour() const
				{
					return m_colour;
				}
				/// </summary>
				/// 设置颜色
				/// </summary>
				/// <param name="colour">颜色</param>
				/// <returns>None</returns>
				void setColour( _in const EarthView::World::Graphic::CColourValue& colour)
				{
					m_colour = colour;
				}
				/// </summary>
				/// 构造函数
				/// </summary>
				/// <param name="vp">位置</param>
				/// <param name="colour">颜色</param>
				/// <param name="u">纹理坐标水平分量</param>
				/// <param name="v">纹理坐标垂直分量</param>
				/// <returns>None</returns>
				CVertex(const EarthView::World::Spatial::Math::CVector3& vp,EarthView::World::Graphic::CColourValue& colour,ev_real32 u, ev_real32 v)
				{
					m_position = vp;
					m_colour = colour;
					m_texCoord.x = u;
					m_texCoord.y = v;
				}
				/// </summary>
				/// 构造函数
				/// </summary>
				/// <param name="vp">位置</param>
				/// <param name="norm">法线</param>
				/// <param name="colour">颜色</param>
				/// <param name="u">纹理坐标</param>
				/// <returns>None</returns>
				CVertex(const EarthView::World::Spatial::Math::CVector3& vp,const EarthView::World::Spatial::Math::CVector3& norm,EarthView::World::Graphic::CColourValue& colour,EarthView::World::Spatial::Math::CVector2 uv)
				{
					m_position = vp;
					m_colour = colour;
					m_texCoord.x = uv.x;
					m_texCoord.y = uv.y;
					m_normal = norm;
				}

				CVertex(const EarthView::World::Spatial::Math::CVector3& vp,EarthView::World::Graphic::CColourValue& colour,EarthView::World::Spatial::Math::CVector2 uv)
				{
					m_position = vp;
					m_colour = colour;
					m_texCoord.x = uv.x;
					m_texCoord.y = uv.y;
				}

				CVertex(const EarthView::World::Spatial::Math::CVector3& vp,EarthView::World::Graphic::CColourValue& colour)
				{
					m_position = vp;
					m_colour = colour;
				}

				/// <summary>
				/// 转换成为坐标数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>单精度数据数据</returns>
				inline operator EarthView::World::Spatial::Math::CVector3() const
				{
					return m_position;
				}
			public: 			///这是个结构体性质的类，数据公有
				EarthView::World::Spatial::Math::CVector3 m_position;  			///点坐标
				EarthView::World::Spatial::Math::CVector3 m_normal;    			///法向量
				EarthView::World::Spatial::Math::CVector3 m_tangent;   			///切线
				EarthView::World::Spatial::Math::CVector4 m_texCoord;   			///  纹理坐标
				EarthView::World::Spatial::Math::CVector4 m_texCoord1;
				EarthView::World::Spatial::Math::CVector4 m_texCoord2;
				EarthView::World::Spatial::Math::CVector4 m_texCoord3;
				EarthView::World::Spatial::Math::CVector4 m_texCoord4;
				EarthView::World::Spatial::Math::CVector4 m_texCoord5;
				EarthView::World::Spatial::Math::CVector4 m_texCoord6;
				EarthView::World::Spatial::Math::CVector4 m_texCoord7;

				EarthView::World::Graphic::CColourValue m_colour; 			///颜色
			};


			/// </summary>
			///  CVertexVector是顶点的集合
			/// </summary>
			class EV_GEOMETRY3D_DLL CVertexVector : public EarthView::World::Core::CBaseObject
			{
				typedef vector<EarthView::World::Geometry3D::CVertex>  VertexBuffer;  			///内部的数组
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CVertexVector( _in EarthView::World::Core::CNameValuePairList* pList) ;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CVertexVector() ;
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CVertexVector();

			public:
				/// </summary>
				/// 获取顶点数据
				/// </summary>
				/// <param name="index">顶点数据索引</param>
				/// <returns>顶点数据的引用</returns>
				const EarthView::World::Geometry3D::CVertex& operator[](_in ev_size_t index) const;
				/// </summary>
				/// 获取顶点数据
				/// </summary>
				/// <param name="index">顶点数据索引</param>
				/// <returns>顶点数据的引用</returns>
				EarthView::World::Geometry3D::CVertex& operator[](_in ev_size_t index);
				/// </summary>
				/// 获取顶点数据
				/// </summary>
				/// <param name="pos">顶点数据索引</param>
				/// <returns>顶点数据的引用</returns>
				EarthView::World::Geometry3D::CVertex& getVertex( _in ev_size_t pos);
				/// </summary>
				///  增加顶点
				/// </summary>
				void addVertex(const EarthView::World::Geometry3D::CVertex& vertex) ;
				/// </summary>
				///  插入顶点
				/// </summary>
				void insertVertex( _in ev_size_t pos,  _in const EarthView::World::Geometry3D::CVertex& vertex)  ;
				/// </summary>
				/// 删除顶点
				/// </summary>
				void removeVertex( _in ev_size_t pos) ;
				/// </summary>
				/// 删除所有顶点
				/// </summary>
				void removeAllVertexs()  ;
				/// </summary>
				/// 获取可容纳大小
				/// </summary>
				ev_size_t getCapacity() const ;
				/// </summary>
				/// 申请空间，设置可容纳大小
				/// </summary>
				void setCapacity( _in ev_size_t count)  ;

				/// </summary>
				/// 获取元素数目
				/// </summary>
				ev_size_t getCount() const;

			protected:
				VertexBuffer  m_vertexBuffer; 			///顶点集合
			};
			
			/// </summary>
			///  CIndexVector是索引的集合
			/// </summary>
			class EV_GEOMETRY3D_DLL CIndexVector : public  EarthView::World::Core::CBaseObject
			{
				typedef vector<ev_uint32> IndexBuffer;  			///内部的数组
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CIndexVector( _in EarthView::World::Core::CNameValuePairList* pList) ;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CIndexVector();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CIndexVector();

			public:
				/// </summary>
				/// 获取索引数据
				/// </summary>
				/// <param name="index">索引数据索引</param>
				/// <returns>索引数据的引用</returns>
				ev_uint32 operator[](ev_size_t index) const;
				/// </summary>
				/// 获取索引数据
				/// </summary>
				/// <param name="pos">索引数据索引</param>
				/// <returns>索引数据的引用</returns>
				ev_uint32 getIndices( _in ev_size_t pos)  ;
				/// </summary>
				/// 增加索引数据
				/// </summary>
				void addIndices( _in ev_uint32 indices) ;
				/// </summary>
				///  插入索引数据
				/// </summary>
				void insertIndices( _in ev_size_t pos, _in  ev_uint16 indices)  ;
				/// </summary>
				/// 删除索引数据
				/// </summary>
				void removeIndices( _in ev_size_t pos) ;
				/// </summary>
				/// 删除所有索引数据
				/// </summary>
				void removeAllIndices()  ;
				/// </summary>
				/// 获取可容纳大小
				/// </summary>
				ev_size_t getCapacity() const;
				/// </summary>
				/// 申请空间，设置可容纳大小
				/// </summary>
				void setCapacity( _in ev_size_t count)  ;
				/// </summary>
				/// 获取元素数目
				/// </summary>
				ev_size_t getCount() const;
			protected:
				IndexBuffer m_indexBuffer;
			};

		}
	}
}

#endif 
