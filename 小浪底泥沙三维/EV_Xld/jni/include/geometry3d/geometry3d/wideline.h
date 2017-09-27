#ifndef _WIDE_LINE_H_
#define _WIDE_LINE_H_
#pragma  once

#include "geometry3d/geometry3d_config.h"
#include "core/memoryallocatedobject.h"
#include <mathengine/vector3.h>
#include <mathengine/axisalignedbox.h>
#include <mathengine/matrix4.h>
#include <graphic/colourvalue.h>
#include <graphic/movableobject.h>
#include <graphic/renderable.h>
#include <graphic/texture.h>
#include <graphic/material.h>
#include <graphic/renderoperation.h>
#include <geometry3d/vertex.h>


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class EV_GEOMETRY3D_DLL CWideLine : public EarthView::World::Graphic::CMovableObject
			{
			public:
				class EV_GEOMETRY3D_DLL CWideLineRenderable : public EarthView::World::Graphic::CRenderable
				{
				public:
					CWideLineRenderable(CWideLine* ref_parent) : mParent(ref_parent)
					{

					}

				ev_private:
					CWideLineRenderable(EarthView::World::Core::CNameValuePairList* pList) : mParent( (CWideLine*)pList->GetAt("parent") )
					{

					}

				public:
					virtual void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
					virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;
					virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera* cam) const;
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
					virtual const EarthView::World::Graphic::LightList& getLights() const;
					virtual EarthView::World::Graphic::CMovableObject* getMovableObject()const{return mParent;}
				protected:
					CWideLine* mParent;
				};

				friend class CWideLineRenderable;

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="estimatedVertexCount">预估的点数(不要求非常精准)</param>
				/// <param name="pixelWidth">宽线的像素宽度</param>				
				/// <returns></returns>
				CWideLine(ev_uint32 estimatedVertexCount, ev_uint32 pixelWidth);

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="estimatedVertexCount">预估的点数(不要求非常精准)</param>
				/// <param name="pixelWidth">宽线的像素宽度</param>
				/// <param name="texture">纹理</param>
				/// <param name="joint">接头处是否封闭</param>
				/// <returns></returns>
				CWideLine(ev_uint32 estimatedVertexCount, ev_uint32 pixelWidth, EarthView::World::Graphic::CTexturePtr texture, ev_bool joint);

				~CWideLine();

			ev_private:
				CWideLine(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 获取材质				
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				const EarthView::World::Graphic::CMaterialPtr& getMaterial()const{return mMaterial;}

				/// <summary>
				/// 开始一条分段线
				/// 在渲染时也可以调用此函数
				/// </summary>
				/// <param name="colour">线的颜色(没有纹理时起作用)</param>				
				/// <returns></returns>
				ev_bool beginSegment(const EarthView::World::Graphic::CColourValue& colour);
				ev_bool beginSegment();

				/// <summary>
				/// 往当前分段线中追加点
				/// 在渲染时也可以调用此函数(即可在渲染时追加点)
				/// </summary>
				/// <param name="position">点坐标</param>		
				/// <param name="colour">颜色</param>	
				/// <returns></returns>
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector3& position);			
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector3& position,const EarthView::World::Graphic::CColourValue& colour);	

				/// <summary>
				/// 往当前分段线中批量追加点
				/// 在渲染时也可以调用此函数(即可在渲染时追加点)
				/// </summary>
				/// <param name="points">点集</param>
				/// <param name="colour">颜色</param>	
				/// <returns></returns>
				ev_void appendPoints(const EarthView::World::Spatial::Math::VertexList& points);
				ev_void appendPoints(const EarthView::World::Spatial::Math::VertexList& points,const EarthView::World::Graphic::CColourValue& colour);

				/// <summary>
				/// 往当前分段线中批量追加点
				/// 在渲染时也可以调用此函数(即可在渲染时追加点)
				/// </summary>
				/// <param name="points">点集,其中只有位置和颜色会被写入顶点buffer</param>
				/// <returns></returns>
				ev_void appendPoints(const EarthView::World::Geometry3D::CVertexVector& points);

				/// <summary>
				/// 结束一条分段线(下次调用beginSegment则会另起一段线)
				/// 在渲染时也可以调用此函数
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				ev_bool endSegment();

				/// <summary>
				/// 结束一条分段线(下次调用beginSegment则会另起一段线)
				/// 在渲染时也可以调用此函数
				/// </summary>
				/// <param name="closed">是否连接起点与终点</param>				
				/// <returns></returns>
				ev_bool endSegment(ev_bool closed);

				/// <summary>
				/// 设置局部坐标系下的包围盒(如果不调用此函数，内部会自动计算所有顶点的边界作为包围盒)
				/// </summary>
				/// <param name="box">包围盒</param>				
				/// <returns></returns>
				ev_void setBoundingBox( const EarthView::World::Spatial::Math::CAxisAlignedBox& box);

				/// <summary>
				/// 设置线宽(立即生效)
				/// </summary>
				/// <param name="pixelWidth">线宽</param>				
				/// <returns></returns>
				ev_void setPixelWidth(ev_uint32 pixelWidth);

				/// <summary>
				/// 获取线宽
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				ev_uint32 getPixelWidth()const;

				/// <summary>
				/// 设置纹理是否平铺(立刻生效)
				/// </summary>
				/// <param name="wrapper">true:纹理沿线平铺;false:纹理沿线拉伸</param>				
				/// <returns></returns>
				ev_void setTextureWrapper(ev_bool wrapper);	

				/// <summary>
				/// 获取纹理是否平铺
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				ev_bool getTextureWrapper()const;

				/// <summary>
				/// 清空所有顶点
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				ev_void clear();

				CWideLineRenderable* getRenderable()const{return mRenderable;}

			public:
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue);
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables);
				virtual EVString getMovableType() const
				{
					return "CWideLine";
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					return mBoundingBox;
				}
				virtual Real getBoundingRadius() const
				{
					return mRadius;
				}

			protected:
				void initial(ev_uint32 vertexCount);

				void write(void*& pBuf, ev_real32 x , ev_real32 y , ev_real32 z , ev_real32 w);
				void write(void*& pBuf, ev_real32 x , ev_real32 y , ev_real32 z );
				void write(void*& pBuf, ev_real32 x , ev_real32 y );
				void write(void*& pBuf, const EarthView::World::Graphic::CColourValue& colour);
				void write(void*& pBuf, ev_uint32 index1,ev_uint32 index2,ev_uint32 index3);

				void writePoint(const EarthView::World::Spatial::Math::CVector3& position,const EarthView::World::Graphic::CColourValue& colour,void*& pVBuf,void*& pIBuf);

			private:
				C_DISABLE_COPY(CWideLine);

			protected:
				CWideLineRenderable* mRenderable;
				EarthView::World::Graphic::CMaterialPtr mMaterial;
				ev_bool mHasTexture;
				EarthView::World::Graphic::CColourValue mCurrentColor;

				EarthView::World::Spatial::Math::CVector3 mLastPoint;//最后一个点
				EarthView::World::Graphic::CColourValue mLastColor;

				EarthView::World::Spatial::Math::CVector3 mLastSecondPoint;//倒数第二个点
				EarthView::World::Graphic::CColourValue mLastSecondColor;

				EarthView::World::Spatial::Math::CVector3 mFirstPoint;//第一个点
				EarthView::World::Graphic::CColourValue mFirstColor;

				ev_bool mJoint;

				EarthView::World::Graphic::CRenderOperation mRenderOperation;

				ev_uint32 mMaxVertexCountInBuffer;		//顶点buffer中允许的最大顶点数目
				ev_uint32 mVertexCountInBuffer;			//顶点buffer中已写入的顶点数目
				ev_uint32 mIndexCountInBuffer;			//索引buffer中已写入的索引数目
				ev_uint32 mVertexCountOnCurrentSegment; //当前分段线上的顶点数目
				ev_int32  mLastPointIndexInBuffer;		//上一个顶点在顶点buffer里的索引
				ev_uint32 mFirstPointIndexInBuffer;		//当前分段线上的第一个顶点在顶点buffer里的索引

				EarthView::World::Spatial::Math::CAxisAlignedBox mBoundingBox;
				Real mRadius;

				ev_real64	mCurrentSegmentLength;
				ev_bool mTextureWrapper;
			};
		}
	}
}

#endif