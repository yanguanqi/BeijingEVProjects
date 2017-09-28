#ifndef _SIMPLE_REDNERABLE_EX_H_
#define _SIMPLE_REDNERABLE_EX_H_
#pragma  once

#include "geometry3d/geometry3d_config.h"
#include <core/global.h>
#include <mathengine/matrix4.h>
#include <spatialobject/geometry/coordinate.h>
#include <spatialobject/geometry/coordinatesequence.h>
#include <graphic/prerequisites.h>
#include <graphic/renderoperation.h>
#include <graphic/hardwarevertexbuffer.h>
#include <graphic/simplerenderable.h>
#include <graphic/colourvalue.h>
#include <graphic/framelistener.h>

#include "geometry3d/vertex.h"

// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial::Math;
// using namespace EarthView::World::Graphic;

#if EV_PLATFORM == EV_PLATFORM_ANDROID
typedef unsigned char byte;
#endif

namespace carve
{
	namespace poly
	{
		class Polyhedron;
		template<unsigned ndim>
		class Face;
	}
	namespace geom
	{
		template<unsigned ndim>
		struct vector;
	}
	namespace geom3d
	{
		typedef carve::geom::vector<3> Vector;
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				class CCurve;
				class CPoint;
				class CCoordinateSequence;
			}

			namespace Display
			{
				class IColor;
			}
		}
		namespace Graphic
		{
			class CEditBoundingBox;
		}
	}
}

// using namespace EarthView::World::Spatial::Geometry;
// using namespace EarthView::World::Spatial::Display;

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class CGeometry3DFactory;

			enum EVPointWithinType
			{
				POINT_UNK = 0,//-2,
				POINT_OUT = 1,//-1,
				POINT_ON = 2,//0,
				POINT_IN = 3,//1,
				POINT_VERTEX = 4,//2,
				POINT_EDGE = 5//3
			};

			/// <summary>
			/// 面与几何体的空间关系
			/// </summary>
			enum EVFaceWithinType
			{
				/// <summary>
				/// 未知
				/// </summary>
				FACE_UNCLASSIFIED = 0,//-3,
				/// <summary>
				/// 指定方向外部
				/// </summary>
				FACE_ON_ORIENT_OUT = 1,//-2,
				/// <summary>
				/// 外部
				/// </summary>
				FACE_OUT = 2,//-1,
				/// <summary>
				/// 重合
				/// </summary>
				FACE_ON = 3,//0,
				/// <summary>
				/// 内部
				/// </summary>
				FACE_IN = 4,//1,
				/// <summary>
				/// 指定方向的内部
				/// </summary>
				FACE_ON_ORIENT_IN = 5//2
			};

			class CSimpleRenderableEx;
            class EV_GEOMETRY3D_DLL CFaceWithSimpleRenderableEx : public EarthView::World::Core::CBaseObject
            {
ev_private:
                CFaceWithSimpleRenderableEx( _in EarthView::World::Core::CNameValuePairList* pList) ;

            public:
                CFaceWithSimpleRenderableEx();
                ~CFaceWithSimpleRenderableEx();

                EarthView::World::Geometry3D::EVFaceWithinType FaceType;
                EarthView::World::Geometry3D::CSimpleRenderableEx* Polyhedron;
            };


			class EV_GEOMETRY3D_DLL CFaceWithSimpleRenderableExSet : public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef vector<EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;

				RESERVE_CONTAINER_FUNCTION(mList);

				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* const &t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CFaceWithSimpleRenderableExSet(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CFaceWithSimpleRenderableExSet();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* &front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* &back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* const &t);
				/// <summary>
				/// 容器中间位置插入列表
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="other">列表</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet other);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				void remove(_in ev_size_t pos);
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* &operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* &at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* const &at(_in ev_size_t n) const;
				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};

			/// </summary>
			///   EarthView::World::Geometry3D::CSimpleRenderableEx扩展了CSimpleRenderable，可以直接操作顶点和索引缓存
			/// </summary>
			class EV_GEOMETRY3D_DLL CSimpleRenderableEx : public EarthView::World::Graphic::CSimpleRenderable
			{
				friend class CGeometry3DFactory;
ev_private:
				CSimpleRenderableEx( _in EarthView::World::Core::CNameValuePairList* pList) ;
				///=====================================================
				///        构造析构
				///=====================================================
			public:
				CSimpleRenderableEx();
				CSimpleRenderableEx(const EVString &name);

				CSimpleRenderableEx(_in const CSimpleRenderableEx& other);
				CSimpleRenderableEx(_in const CSimpleRenderableEx& other, const EVString& name);
				EarthView::World::Geometry3D::CSimpleRenderableEx& operator=( _in const EarthView::World::Geometry3D::CSimpleRenderableEx& other);
				virtual ~CSimpleRenderableEx();

				///=====================================================
				///        对顶点声明的操作
				///=====================================================
			public:
				/// </summary>
				/// 在顶点声明的尾部增加一个单独的元素，注意增加元素的语言（EarthView::World::Graphic::VertexElementSemantic）
				/// 顺序是非常重要的，和D3D里FVF声明顺序一致
				/// </summary>
				/// <param name="theType">增加元素的类型</param>
				/// <param name="semantic">增加元素的语义</param>
				/// <returns>None</returns>
				void  appendVertexElement( _in EarthView::World::Graphic::VertexElementType theType, _in EarthView::World::Graphic::VertexElementSemantic semantic);

				/// </summary>
				/// 在顶点声明里插入一个单独的元素，注意增加元素的语言（EarthView::World::Graphic::VertexElementSemantic）
				/// 顺序是非常重要的，和D3D里FVF声明顺序一致
				/// </summary>
				/// <param name="atPosition">插入的位置，表示前面已经有了多少元素</param>
				/// <param name="theType">插入元素的类型</param>
				/// <param name="semantic">插入元素的语义</param>
				/// <returns>None</returns>
				void  insertVertexElement( _in ev_int16 atPosition, _in EarthView::World::Graphic::VertexElementType theType, _in EarthView::World::Graphic::VertexElementSemantic semantic);

				/// </summary>
				/// 在顶点声明里移除一个单独的元素
				/// </summary>
				/// <param name="elem_index">移除的位置</param>
				/// <returns>None</returns>
				void removeVertexElement( _in  ev_int16 elem_index);

				/// </summary>
				/// 在顶点声明里移除相应语义
				/// </summary>
				/// <param name="semantic">移除的语义</param>
				/// <returns>None</returns>
				void removeVertexElement( _in EarthView::World::Graphic::VertexElementSemantic semantic);
				/// </summary>
				/// 在顶点声明里移除所有的的元素
				/// </summary>
				/// <returns>None</returns>
				void removeAllVertexElements();

				/// </summary>
				/// 修改在顶点声明里的单独的元素
				/// </summary>
				/// <param name="elem_index">修改的索引</param>
				/// <param name="theType">修改后的类型</param>
				/// <param name="semantic">修改后的语义</param>
				/// <returns>None</returns>
				void updateVertexElement( _in ev_int16 elem_index,  _in EarthView::World::Graphic::VertexElementType theType, _in EarthView::World::Graphic::VertexElementSemantic semantic);

				/// </summary>
				///  查找语义绑定的的元素
				/// </summary>
				/// <param name="semantic">元素的语义</param>
				/// <returns>元素的类型</returns>
				const EarthView::World::Graphic::CVertexElement* findVertexElementBySemantic( _in EarthView::World::Graphic::VertexElementSemantic sem);

				/// </summary>
				/// 获取现有声明元素的个数
				/// </summary>
				/// <returns>现有声明元素的个数</returns>
				ev_size_t getVertexElementCount();
				/// </summary>
				/// 对现有的声明元素按照D3D里顶点声明的标准顺序进行排序，在不确定D3D里FVF顺序的情况下，
				/// 调用这个确保顺序正确，不过需要计算
				/// </summary>
				/// <returns>None</returns>
				void sortVertexElements();
				/// </summary>
				/// 关闭顶点数据的空隙，因为顶点数据里是不能有空隙的，当你修改了顶点声明后
				/// 可以移除顶点数据里对应的数据，如果当你对定带你数据进行了绑定，你需要重新
				/// 对其进行绑定声明
				/// </summary>
				/// <returns>None</returns>
				void closeGapsInSource();

				///=====================================================
				///        绘制类型
				///=====================================================
			public:
				/// </summary>
				///  设置绘制的类型，点，点串，线，三角面，三角扇等
				/// </summary>
				/// <param name="type">绘制的类型</param>
				/// <returns>None</returns>
				void setOperationType( _in EarthView::World::Graphic::CRenderOperation::OperationType type);

				/// </summary>
				/// 获取绘制的类型，点，点串，线，三角面，三角扇等
				/// </summary>
				/// <returns>绘制的类型</returns>
				EarthView::World::Graphic::CRenderOperation::OperationType getOperationType( ) const ;

				///=====================================================
				///        是否使用索引缓存
				///=====================================================
			public:
				/// </summary>
				/// 是否使用了索引缓存
				/// </summary>
				/// <returns>是否使用了索引缓存,true为使用</returns>
				ev_bool indexesUsed() const;
				/// </summary>
				/// 设置是否使用了索引缓存
				/// </summary>
				/// <param name="bUse">true为使用</param>
				/// <returns>None</returns>
				void useIndexes(ev_bool bUse);

				///=====================================================
				///        顶点索引数据的读写（需要加锁解锁）
				///=====================================================
			public:

				/// </summary>
				///  创建一块顶点缓冲区
				/// </summary>
				/// <param name="count">缓冲区元素的个数，即点的个数</param>
				/// <param name="usage">缓冲区的类型</param>
				/// <returns>None</returns>
				void createVertexBuffer(_in ev_int32 count, _in EarthView::World::Graphic::CHardwareBuffer::Usage  usage);
				/// </summary>
				///  设置顶点缓冲区写满时自动扩充的数量,不调用类的write方法写buf此接口无效
				/// </summary>
				/// <param name="count">自动扩充的数量</param>
				/// <returns>None</returns>
				void setIncreaseVertexBuffer(_in ev_int32 count);

				/// </summary>
				///  锁定一块顶点缓冲区，缓冲区必须创建
				/// </summary>
				/// <param name="lockOptions">锁定缓冲区的形式</param>
				/// <returns>None</returns>
				void* lockVertexBuffer(_in  EarthView::World::Graphic::CHardwareBuffer::LockOptions lockOptions);

				/// </summary>
				///  重新锁定一块顶点缓冲区，缓冲区必须创建
				/// </summary>
				/// <param name="lockOptions">锁定缓冲区的形式</param>
				/// <param name="offset">重新锁定的偏移量</param>
				/// <param name="autoCalcDeclaration">自动计算偏移量，true为offset乘以Declaration的大小,false直接偏移offset</param>
				/// <returns>None</returns>
				void* lockVertexBuffer(_in  EarthView::World::Graphic::CHardwareBuffer::LockOptions lockOptions,  _in ev_size_t offset, _in ev_bool autoCalcDeclaration);

				/// </summary>
				///  写入顶点坐标
				/// </summary>
				/// <param name="index">顶点坐标</param>
				/// <returns>None</returns>
				void writeVertexDataPosition(_in const  EarthView::World::Spatial::Math::CVector3& position);
				/// </summary>
				///  写入顶点法向量
				/// </summary>
				/// <param name="index">顶点法向量</param>
				/// <returns>None</returns>
				void writeVertexDataNormal( _in  const EarthView::World::Spatial::Math::CVector3& normal );
				/// </summary>
				///  写入顶点切线
				/// </summary>
				/// <param name="index">顶点切线</param>
				/// <returns>None</returns>
				void writeVertexDataTangle( _in const EarthView::World::Spatial::Math::CVector3& tangent );

				/// </summary>
				///  写入顶点纹理坐标
				///  当声明为VET_FLOAT4时，存储的值为texCoord的x,y,z,w四位
				///  当声明为VET_FLOAT3时，存储的值为texCoord的x,y,z三位
				///  当声明为VET_FLOAT2时，存储的值为texCoord的x,y两位
				/// </summary>
				/// <param name="index">顶点纹理坐标</param>
				/// <returns>None</returns>
				void writeVertexDataTexCoord(_in const EarthView::World::Spatial::Math::CVector4& texCoord );
				/// </summary>
				///  写入顶点颜色
				/// </summary>
				/// <param name="index">顶点颜色</param>
				/// <returns>None</returns>
				void writeVertexDataColour( _in const EarthView::World::Graphic::CColourValue& colour );
				/// </summary>
				///  写入顶点数据数据，注意此时一定是要lockVertexBuffer的
				/// </summary>
				/// <param name="index">顶点数据</param>
				/// <returns>None</returns>
				void writeVertexData( _in const EarthView::World::Geometry3D::CVertex& vertex);

				/// </summary>
				///  写入一批顶点数据数据集合，注意此时一定是要lockVertexBuffer的
				/// </summary>
				/// <param name="index">一批顶点数据集合</param>
				/// <returns>None</returns>
				void writeVertexDataBuffer( _in const EarthView::World::Geometry3D::CVertexVector& vertexBuffer );
				void writeVertexDataBuffer( _in ev_byte* vertexBuffer , ev_uint32 count);
				/// </summary>
				///  读取缓冲区内容，缓冲区的锁定方式为可读方行
				/// </summary>
				/// <param name="start">读取的起始位置</param>
				/// <param name="count">读取的数量，为vertexBuffer的数量</param>
				/// <param name="vertexBuffer">读取缓冲区的内容</param>
				/// <returns>None</returns>
				void readVertexBuffer(_in  ev_uint32 start, _in ev_uint32 count, _out EarthView::World::Geometry3D::CVertexVector& vertexBuffer);
				/// </summary>
				///  读取缓冲区内容到结尾，缓冲区的锁定方式为可读方行
				/// </summary>
				/// <param name="start">读取的起始位置</param>
				/// <param name="vertexBuffer">读取缓冲区的内容</param>
				/// <returns>None</returns>
				void readVertexBufferToEnd(_in  ev_uint32 start, _out EarthView::World::Geometry3D::CVertexVector& vertexBuffer);
				/// </summary>
				///  为顶点缓冲区解锁，与lockVertexBuffer成对使用
				/// </summary>
				/// <returns>None</returns>
				void unlockVertexBuffer();

				/// </summary>
				///  移到顶点缓冲区读写指针到指定位置
				/// </summary>
				/// <returns>None</returns>
				ev_bool seekVertexBuffer(ev_uint32 offset);
				/// </summary>
				///  获取顶点缓冲区读写指针的当前位置
				/// </summary>
				/// <returns>None</returns>
				ev_uint32 tellVertexBuffer();

				/// </summary>
				///  查看顶点缓存是否被lock
				/// </summary>
				/// <returns>true为锁定</returns>
				ev_bool getVertexBufferLocked() const;

				/// </summary>
				///  创建一块索引缓冲区
				/// </summary>
				/// <param name="count">缓冲区元素的个数，即索引的个数</param>
				/// <param name="usage">缓冲区的类型</param>
				/// <returns>None</returns>
				void createIndexBuffer(_in EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, _in ev_uint32 count , _in EarthView::World::Graphic::CHardwareBuffer::Usage  usage);
				/// </summary>
				///  设置索引缓冲区写满时自动扩充的数量,不调用类的write方法写buf此接口无效
				/// </summary>
				/// <param name="count">自动扩充的数量</param>
				/// <returns>None</returns>
				void setIncreaseIndexBuffer(_in ev_int32 count);

				/// </summary>
				///  锁定一块索引缓冲区，缓冲区是创建了的，必须是已经解锁
				/// </summary>
				/// <param name="lockOptions">锁定缓冲区的形式</param>
				/// <returns>None</returns>
				void* lockIndexBuffer(_in  EarthView::World::Graphic::CHardwareBuffer::LockOptions lockOptions);

				/// </summary>
				///  重新锁定一块索引缓冲区，缓冲区是创建了的，必须是已经解锁
				/// </summary>
				/// <param name="lockOptions">锁定缓冲区的形式</param>
				/// <param name="offset">重新锁定后的偏移量</param>
				/// <returns>None</returns>
				void* lockIndexBuffer(_in  EarthView::World::Graphic::CHardwareBuffer::LockOptions lockOptions, _in ev_size_t offset );

				/// </summary>
				///  写入一个索引数据
				/// </summary>
				/// <param name="index">一个索引数据</param>
				/// <returns>None</returns>
				void writeIndexData( _in ev_uint16  index );
				void writeIndexData( _in ev_uint32  index );
				/// </summary>
				///  写入一批索引数据，注意此时一定是要lockIndexBuffer的
				/// </summary>
				/// <param name="index">一批索引数据</param>
				/// <returns>None</returns>
				void writeIndexDataBuffer( _in const EarthView::World::Geometry3D::CIndexVector& indexBuffer );
				void writeIndexDataBuffer( _in ev_byte* indexBuffer , ev_uint32 count);
				/// </summary>
				///  读取缓冲区内容，缓冲区的锁定方式为可读方行
				/// </summary>
				/// <param name="start">读取的起始位置</param>
				/// <param name="count">读取的数量，为indexBuffer的数量</param>
				/// <param name="vertexBuffer">读取缓冲区的内容</param>
				/// <returns>None</returns>
				void readIndexBuffer(_in  ev_uint32 start, _in ev_uint32 count, _out EarthView::World::Geometry3D::CIndexVector& indexBuffer);
				/// </summary>
				///  读取缓冲区内容到结尾，缓冲区的锁定方式为可读方行
				/// </summary>
				/// <param name="start">读取的起始位置</param>
				/// <param name="vertexBuffer">读取缓冲区的内容</param>
				/// <returns>None</returns>
				void readIndexBufferToEnd(_in  ev_uint32 start, _out EarthView::World::Geometry3D::CIndexVector& indexBuffer);

				/// </summary>
				///  为索引缓冲区解锁，与lockIndexBuffer成对使用
				/// </summary>
				/// <returns>None</returns>
				void unlockIndexBuffer();

				/// </summary>
				///  移到索引缓冲区读写指针到指定位置
				/// </summary>
				/// <returns>None</returns>
				ev_bool seekIndexBuffer(ev_uint32 offset);
				/// </summary>
				///  获取索引缓冲区读写指针的当前位置
				/// </summary>
				/// <returns>None</returns>
				ev_uint32 tellIndexBuffer();

				/// </summary>
				///  查看索引缓存是否被lock
				/// </summary>
				/// <returns>true为锁定</returns>
				ev_bool getIndexBufferLocked() const;

				/*======================================================*\
				*          SimpleRenderable的简单适配器                *
				\*======================================================*/
			public:
				/// <summary>
				/// 当前摄像机到物体的垂直距离，用于透明物体的排序，默认返回父节点的到摄像机的垂直距离
				/// </summary>
				/// <param name="cam">当前图元所对着的摄像机</param>
				/// <returns>点到到摄像机的垂直距离</returns>
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const;
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
				virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4* xform ) const ;

			public:

				/// <summary>
				/// 进行（A ∪ B）的操作
				/// <param name="geom3d">待操作几何体</param>
				/// </summary>
				/// <returns>结果几何体 </returns>	
				virtual _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* unions(EarthView::World::Geometry3D::CSimpleRenderableEx* another, EarthView::World::Spatial::Display::IColor* pNewColor,EarthView::World::Spatial::Math::CVector3& offset);

				/// <summary>
				/// 进行（A ∩ B）的操作
				/// <param name="another">待操作几何体</param>
				/// </summary>
				/// <returns>结果几何体 </returns>	
				virtual _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* intersect(EarthView::World::Geometry3D::CSimpleRenderableEx* another, EarthView::World::Spatial::Display::IColor* pNewColor,EarthView::World::Spatial::Math::CVector3& offset);

				/// <summary>
				/// 进行（A - B）的操作，即去除A中包含的B的部分
				/// <param name="another">待操作几何体</param>
				/// </summary>
				/// <returns>结果几何体 </returns>	
				virtual _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* minus(EarthView::World::Geometry3D::CSimpleRenderableEx* another, EarthView::World::Spatial::Display::IColor* pNewColor,EarthView::World::Spatial::Math::CVector3& offset);

				/// <summary>
				/// 进行（（A ∪ B) -（A ∩ B））的操作
				/// 对称差分（其结果是：两几何体求并的结果差分
				/// 这两个几何体求交的结果所得到的几何体）
				/// <param name="another">待操作几何体</param>
				/// </summary>
				/// <returns>结果几何体 </returns>	
				virtual _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* difference(EarthView::World::Geometry3D::CSimpleRenderableEx* another, EarthView::World::Spatial::Display::IColor* pNewColor,EarthView::World::Spatial::Math::CVector3& offset);

				/// <summary>
				/// 判断指定几何体与该几何体是否相交
				/// <param name="another">待操作几何体</param>
				/// </summary>
				/// <returns>是否相交的布尔值</returns>	
				virtual bool isIntersected(EarthView::World::Geometry3D::CSimpleRenderableEx* another);

				/// <summary>
				/// 判断线与体是否相交
				/// <param name="gc">线对象</param>
				/// </summary>
				/// <returns>返回是否相交的布尔值</returns>
				virtual bool isIntersected(EarthView::World::Spatial::Geometry::CCurve* curve);

				/// <summary>
				/// 判断点与体的关系
				/// <param name="x">点的x坐标</param>
				/// <param name="y">点的y坐标</param>
				/// <param name="z">点的z坐标</param>
				/// </summary>
				/// <returns>返回关系枚举</returns>
				virtual EarthView::World::Geometry3D::EVPointWithinType contains(const EarthView::World::Spatial::Geometry::CPoint& point);
				/// <summary>
				/// 用非封闭几何体对封闭几何体进行切片操作，并且对结果进行分类
				/// <param name="another">待操作几何体，非封闭的几何体</param>
				/// <param name="faceMap">返回处理结果</param>
				/// <param name="sharedEdges">切片共边顶点序列</param>
				/// <param name="pNewColor">新赋予的颜色</param>
				/// </summary>
				/// <returns>处理是否成功</returns>
				virtual ev_bool sliceAndClassify(EarthView::World::Geometry3D::CSimpleRenderableEx* another, EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& faceMap, EarthView::World::Spatial::Geometry::CCoordinateSequence& sharedEdges, EarthView::World::Spatial::Display::IColor* pNewColor);
				/// <summary>
				/// 用封闭几何体对封闭进行切片操作，并且对结果进行分类：
				/// <param name="another">待操作几何体，封闭的几何体</param>
				/// <param name="sliceA">返回处理结果</param>
				/// <param name="sliceB">返回处理结果</param>
				/// <param name="sharedEdges">切片共边顶点序列</param>
				/// <param name="pNewColor">新赋予的颜色</param>
				/// </summary>
				/// <returns>处理是否成功</returns>
				virtual ev_bool slice(EarthView::World::Geometry3D::CSimpleRenderableEx* another, EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& sliceA, EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& sliceB, EarthView::World::Spatial::Geometry::CCoordinateSequence& sharedEdges, EarthView::World::Spatial::Display::IColor* pNewColor);

				/// <summary>
				/// 设置选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				virtual ev_void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour);
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
				/// <summary>
				/// 设置选中的对象				
				/// <param name="objIndics">选中的对象集合</param>				
				/// <returns></returns>
				virtual ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics);
				
				/// <summary>
				/// 开始编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool startEditing(ev_uint32 objectIndex);
				/// <summary>
				/// 结束编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void endEditing();
				/// <summary>
				/// 获得编辑包围盒
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox();

				/// <summary>
				/// 获得选中对象的世界变换矩阵
				/// </summary>
				/// <param name="objectIndex">选中对象在EarthView::World::Graphic::CMovableObject中的序号</param>
				/// <param name="matrix">世界变换矩阵</param>
				/// <returns></returns>
				virtual ev_bool getSelectedObjectWorldMatrix(ev_uint32 objectIndex,EarthView::World::Spatial::Math::CMatrix4& matrix);
				/// <summary>
				/// 设置选中对象的世界变换矩阵
				/// </summary>
				/// <param name="objectIndex">选中对象在EarthView::World::Graphic::CMovableObject中的序号</param>
				/// <param name="matrix">世界变换矩阵</param>
				/// <returns></returns>
				virtual ev_bool setSelectedObjectWorldMatrix(ev_uint32 objectIndex,const EarthView::World::Spatial::Math::CMatrix4& matrix);
				
				/// <summary>
				/// 闪烁
				/// <param name="color">高亮颜色</param>
				/// <param name="hightLight_ms">高亮时长(单位：毫秒)</param>
				/// <param name="normally_ms">非高亮时长(单位：毫秒)</param>
				/// <param name="flashCount">闪烁次数</param>
				/// </summary>
				/// <returns></returns>
				virtual void flash(const EarthView::World::Graphic::CColourValue& color, ev_uint32 hightLight_ms, ev_uint32 normally_ms,ev_uint32 flashCount);
				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();
           protected:
				virtual void* toPolyhedron();

				EarthView::World::Geometry3D::CSimpleRenderableEx* boolOperator(ev_int32 op, EarthView::World::Geometry3D::CSimpleRenderableEx* another, EarthView::World::Spatial::Display::IColor* pNewColor,EarthView::World::Spatial::Math::CVector3& offset);

				static EarthView::World::Geometry3D::CSimpleRenderableEx* fromPolyhedron(carve::poly::Polyhedron* polyhedron, EarthView::World::Spatial::Display::IColor* colour,ev_bool calRelativePos,EarthView::World::Spatial::Math::CVector3& offset);                
				static EarthView::World::Geometry3D::CSimpleRenderableEx* fromTriangleList(const list<EarthView::World::Spatial::Math::CVector3>& vertexList, const list<ev_uint32>& indexList, EarthView::World::Spatial::Display::IColor* colour,ev_bool calRelativePos,EarthView::World::Spatial::Math::CVector3& offset);

				static void polyhedronTessellation(carve::poly::Face<3>* face, list<EarthView::World::Spatial::Math::CVector3>& vertexList, list<ev_uint32>& indexList);
				static void addPolyhedronIndex(const std::vector<carve::geom3d::Vector>& vertices, list<EarthView::World::Spatial::Math::CVector3>& vertexList, list<ev_uint32>& indexList);

				static const EVString& createOrGetDefaultMaterial();

				ev_void tranformPolyhedron(const EarthView::World::Spatial::Math::CMatrix4& mat);

				EarthView::World::Graphic::CMaterialPtr createSelectedMaterialFrom(EarthView::World::Graphic::CMaterialPtr mat,const EarthView::World::Graphic::CColourValue& colour);
				EarthView::World::Graphic::CMaterialPtr createFlashMaterialFrom(EarthView::World::Graphic::CMaterialPtr mat,const EarthView::World::Graphic::CColourValue& colour);
				void destroyMaterial(EarthView::World::Graphic::CMaterialPtr& mat);

				void increaseVertexBuffer(ev_uint32 increaseCount);
				void increaseIndexBuffer(ev_uint32 increaseCount);

			protected:
				class CSimpleRenderExFlashFrameListener : public EarthView::World::Graphic::CFrameListener
				{
				private:
					CSimpleRenderableEx* mpParent;
					EarthView::World::Core::CTime mLastTime;

					ev_uint32 mHightLight_ms;
					ev_uint32 mNormally_ms;

					ev_uint32 mRequestFlashCount;

					ev_uint32 mCurrentFlashCount;
					ev_bool mbHeighting;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSimpleRenderExFlashFrameListener(CSimpleRenderableEx* pParent, ev_uint32 hightLight_ms, ev_uint32 normally_ms, ev_uint32 flashCount);

					/// <summary>
					/// 帧渲染之后被调用
					/// </summary>
					/// <param name="evt"></param>
					/// <returns></returns>
					ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
				};

				virtual void beginFlash(const EarthView::World::Graphic::CColourValue& color);
				virtual void startFlash();
				virtual void stopFlash();				

				CSimpleRenderExFlashFrameListener* mFrameListener;

				friend class CSimpleRenderExFlashFrameListener;
			protected:  
				///
				///   这两个指针是使用来做暂时存储的介质,做拷贝构造和赋值的时候据均设置为NULL
				///   在unlock后也设置为NULL
				///
				 			
				ev_void* m_vertexBufferStart;		///顶点缓存lock后的指针
				ev_void* m_vertexBuffer;  
				ev_void* m_indexBufferStart;		///索引缓存lock后的指针
				ev_void* m_indexBuffer;    			

				ev_bool mPolyDirty;
				carve::poly::Polyhedron*  mPolyhedron;
				EarthView::World::Spatial::Math::CMatrix4 mPolyMatrix;
				EarthView::World::Graphic::CEditBoundingBox* mpEditBox;

				ev_bool mbSelected;

				EarthView::World::Graphic::CMaterialPtr mNormalMaterial;
				EarthView::World::Graphic::CMaterialPtr mFlashMaterial;

				ev_uint32 mMaxVertexCount;//最大顶点数
				ev_uint32 mCurrentVertexCount;//当前顶点数
				ev_uint32 mMaxIndexCount;//最大索引数
				ev_uint32 mCurrentIndexCount;//当前索引数

				ev_uint32 mIncreaseVertexCount;//顶点缓存写满时增加的数量
				ev_uint32 mIncreaseIndexCount;//索引缓存写满时增加的数量

				EarthView::World::Graphic::CHardwareBuffer::LockOptions mVertexLockOptions;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions mIndexLockOptions;
			};

		}
	}
}

#endif  ///EV_SIMPLE_REDNERABLE_EX_H_

