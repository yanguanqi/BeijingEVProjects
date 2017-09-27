#ifndef ORTHAXIS_H
#define ORTHAXIS_H
#include "geometry3d/geometry3d_config.h"
#include "graphic/movableobject.h"


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{	
			/// <summary>
			/// 坐标轴类
			/// </summary>
			class EV_GEOMETRY3D_DLL COrthaxis:public EarthView::World::Graphic::CMovableObject
			{
			public:
				/// <summary>
				/// 坐标轴内部渲染类
				/// </summary>
				class EV_GEOMETRY3D_DLL COrthaxisInternalRenderable : public EarthView::World::Graphic::CRenderable
				{
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					COrthaxisInternalRenderable(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">坐标轴</param>
					/// <returns></returns>	
					COrthaxisInternalRenderable(COrthaxis* ref_parent);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="parent">坐标轴</param>
					/// <param name="length">坐标轴长度</param>
					/// <returns></returns>	
					COrthaxisInternalRenderable(COrthaxis* ref_parent,ev_uint64 length);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					~COrthaxisInternalRenderable();

					/// <summary>
					/// 设置坐标轴长度
					/// </summary>
					/// <param name="length">坐标轴长度</param>
					/// <returns></returns>	
					void setOrthaxisLength(ev_uint64 length);

					/// <summary>
					/// 获取坐标轴长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标轴长度</returns>	
					ev_uint32 getOrthaxisLength();
					
					/// <summary>
					/// 返回渲染实体相对虚拟相机的直角深度
					/// </summary>
					/// <param name="cam">相机</param>
					/// <returns>直角深度</returns>
					virtual Real getSquaredViewDepth( const EarthView::World::Graphic::CCamera *cam ) const;

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

					EarthView::World::Graphic::CMovableObject* getMovableObject()const{return mParent;}
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
					ev_uint32 mLength;

				private:
					EarthView::World::Graphic::CRenderOperation mRenderOp;	
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr vbuf;
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr ibuf;
					EarthView::World::Geometry3D::COrthaxis* mParent;				
					EarthView::World::Graphic::LightList mLList;
					ev_bool isInit;
				};

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				COrthaxis();

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				COrthaxis(ev_uint64 length);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				~COrthaxis();

			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				COrthaxis(_in EarthView::World::Core::CNameValuePairList *pList);

			private:
				mutable EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
				
			public:
				/// <summary>
				/// 设置坐标轴长度
				/// </summary>
				/// <param name="length">坐标轴长度</param>
				/// <returns></returns>
				void setOrthaxisLength(ev_uint32 length);
				
				/// <summary>
				/// 获得坐标轴长度
				/// </summary>
				/// <param name=""></param>
				/// <returns>坐标轴长度</returns>
				ev_uint32 getOrthaxisLength();

				/// <summary>
				/// 获取当前对象的平行轴边框盒
				/// 边框盒在当地坐标系中
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框盒</returns>
				virtual const  EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const ;

				/// <summary>
				/// 获取移动对象类型的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>名称</returns>
				EVString getMovableType() const;

				/// <summary>
				/// 获得专门的类型标识
				/// </summary>
				/// <param name=""></param>
				/// <returns>类型标识</returns>
				virtual ev_uint32 getTypeFlags() const;

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
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

				/// <summary>
				/// 访问可渲染对象
				/// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
				/// </summary>
				/// <param name="visitor">visitor迭代集合类</param>
				/// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
				/// <returns></returns>
				void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor,
					ev_bool debugRenderables );

				/// <summary>
				/// 访问可渲染对象
				/// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
				/// </summary>
				/// <param name="visitor">visitor迭代集合类</param>
				/// <returns></returns>
				void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor);
								
			protected:
				COrthaxisInternalRenderable *mRenderable;
				EarthView::World::Graphic::CMaterialPtr mMaterialPtr;

			};
		}
	}
}
#endif
