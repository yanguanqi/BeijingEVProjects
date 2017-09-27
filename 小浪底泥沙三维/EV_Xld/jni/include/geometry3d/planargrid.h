#ifndef PLANARGRID_H
#define PLANARGRID_H
#include "geometry3d_config.h"
#include "graphic/movableobject.h"


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{	

			/// <summary>
			/// 网格类
			/// </summary>
			class EV_GEOMETRY3D_DLL CPlanargrid:public EarthView::World::Graphic::CMovableObject
			{
			public:
				/// <summary>
				/// 网格内部渲染类
				/// </summary>
				class  EV_GEOMETRY3D_DLL CPlanargridInternalRenderable : public EarthView::World::Graphic::CRenderable
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">网格</param>
					/// <param name="gridScale">网格个数X(x*x)</param>
					/// <param name="lineLength">网格线长</param>
					/// <returns></returns>	
					CPlanargridInternalRenderable(CPlanargrid* ref_parent,ev_uint32 gridScale,ev_uint32 lineLength);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">网格</param>
					/// <returns></returns>	
					CPlanargridInternalRenderable(CPlanargrid* ref_parent);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CPlanargridInternalRenderable();

					/// <summary>
					/// 设置中十字线颜色
					/// </summary>
					/// <param name="colorValue">颜色的值</param>
					/// <returns></returns>
					void setColor(const EarthView::World::Graphic::CColourValue &colorValue);

					/// <summary>
					/// 设置网格大小(scale*scale)
					/// </summary>
					/// <param name="scale">网格大小</param>
					/// <returns></returns>
					void setPlanargridScale(ev_uint32 scale);

					/// <summary>
					/// 设置网格线长
					/// </summary>
					/// <param name="lineLength">网格线长</param>
					/// <returns></returns>
					void setPlanargridLineLength(ev_uint32 lineLength);

					/// <summary>
					/// 获得当前网格大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>网格大小</returns>
					ev_uint32 getPlanargridScale();

					/// <summary>
					/// 获得当前网格线长
					/// </summary>
					/// <param name=""></param>
					/// <returns>网格线长</returns>
					ev_uint32 getPlanargridLineLength();

					/// <summary>
					/// 获得当前网格中十字线颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色的值</returns>
					EarthView::World::Graphic::CColourValue getPlanargridCentreColor() const;
					
					// Overridden from Renderable

					/// <summary>
					/// 返回渲染实体相对虚拟相机的直角深度
					/// </summary>
					/// <param name="cam">相机</param>
					/// <returns>直角深度</returns>
					virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;

					/// <summary>
					/// 重新获得渲染实体使用的材质的弱相关性
					/// </summary>
					/// <param name=""></param>
					/// <returns>材质</returns>
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const ;

					/// <summary>
					/// 获得要求对象到帧缓冲的渲染操作
					/// </summary>
					/// <param name="op">渲染操作</param>
					/// <returns></returns>
					virtual void getRenderOperation( _inout EarthView::World::Graphic::CRenderOperation &op );

					/// <summary>
					/// 获得渲染对象的转换矩阵
					/// </summary>
					/// <param name="xform">渲染对象的转换矩阵</param>
					/// <returns></returns>
					virtual void getWorldTransforms(  EarthView::World::Spatial::Math::CMatrix4 *xform ) const;

					/// <summary>
					/// 获得光照的列表，按照相对于渲染实体的远近排列
					/// </summary>
					/// <param name=""></param>
					/// <returns>光照列表</returns>
					virtual const EarthView::World::Graphic::LightList &getLights() const;
					EarthView::World::Graphic::CColourValue mColorValue;

					EarthView::World::Graphic::CMovableObject* getMovableObject()const{return mParent;}
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CPlanargridInternalRenderable(_in EarthView::World::Core::CNameValuePairList *pList);

				protected:
					/// <summary>
					/// 创建缓存
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void _createBuffers();

					/// <summary>
					/// 销毁缓存
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void _destroyBuffers();
#ifdef EV_OS_LINUX64
					ev_uint64 mGridScale;
					ev_uint64 mLineLength;
#else
					ev_uint32 mGridScale;
					ev_uint32 mLineLength;
#endif
					int mMiddleLineB1;
					int mMiddleLineE1;
					int mMiddleLineB2;
					int mMiddleLineE2;

				private:
					EarthView::World::Graphic::CRenderOperation mRenderOp;	
					EarthView::World::Graphic::CMaterialPtr mpMaterial;
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr vbuf;
					EarthView::World::Geometry3D::CPlanargrid* mParent;
					EarthView::World::Graphic::CVertexData* mVertexData;
					EarthView::World::Graphic::CIndexData* mIndexData;
					ev_bool isInit;
				};

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				CPlanargrid();

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="gridScale">网格大小(gridScale*gridScale)</param>
				/// <param name="lineLength">网格线长</param>
				/// <returns></returns>	
				CPlanargrid(ev_uint32 gridScale,ev_uint32 lineLength);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				~CPlanargrid();

				/// <summary>
				/// 设置网格大小(scale*scale)
				/// </summary>
				/// <param name="scale">网格大小</param>
				/// <returns></returns>
				void setPlanargridScale(ev_uint32 scale);

				/// <summary>
				/// 设置网格线长
				/// </summary>
				/// <param name="lineLength">网格线长</param>
				/// <returns></returns>
				void setPlanargridLineLength(ev_uint32 lineLength);

				/// <summary>
				/// 获得当前网格中十字线颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色的值</returns>
				void setPlanargridCentreColor(const EarthView::World::Graphic::CColourValue &colorValue);

				/// <summary>
				/// 获得当前网格大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>网格大小</returns>
				ev_uint32 getPlanargridScale();

				/// <summary>
				/// 获得当前网格线长
				/// </summary>
				/// <param name=""></param>
				/// <returns>网格线长</returns>
				ev_uint32 getPlanargridLineLength();

				/// <summary>
				/// 获得当前网格中十字线颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色的值</returns>
				EarthView::World::Graphic::CColourValue getPlanargridCentreColor() const;

				// Overridden from MovableObject

				/// <summary>
				/// 获取移动对象类型的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>名称</returns>
				virtual EVString getMovableType() const;

				/// <summary>
				/// 获取当前对象的平行轴边框盒
				/// 边框盒在当地坐标系中
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框盒</returns>
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const;

				/// <summary>
				/// 获取当前对象的球体限定半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>半径</returns>
				virtual Real getBoundingRadius() const;

				/// <summary>
				/// 更新渲染队列
				/// 移动对象必须添加到EarthView::World::Graphic::CRenderable
				/// 内部方法
				/// </summary>
				/// <param name="queue">渲染队列</param>
				/// <returns></returns>
				virtual void _updateRenderQueue( EarthView::World::Graphic::CRenderQueue* queue);

				/// <summary>
				/// 访问可渲染对象
				/// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
				/// </summary>
				/// <param name="visitor">visitor迭代集合类</param>
				/// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
				/// <returns></returns>
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables = false);

				/// <summary>
				/// 设置材质名字
				/// </summary>
				/// <param name="name">材质名称</param>
				/// <param name="groupName">组名</param>
				/// <returns></returns>
				void setMaterialName(const EVString& name, const EVString& groupName /*= EarthView::World::Graphic::CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME*/);
				

			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CPlanargrid(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				EarthView::World::Geometry3D::CPlanargrid::CPlanargridInternalRenderable *mRenderable;
				Real mBoundingRadius;
				EarthView::World::Graphic::CMaterialPtr mpMaterialPtr;
			
			protected:
				EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
			};
		}
	}
}
#endif
