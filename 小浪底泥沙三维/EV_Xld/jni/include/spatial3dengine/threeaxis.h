#ifndef THREEAXISProxy_H
#define THREEAXISProxy_H
#include "spatial3dengine/spatial3dengineconfig.h"
#include "graphic/movableobject.h"


// namespace EarthView{
// 	namespace World{
// 		namespace Graphic{
// 			class CLatticeMovableText;
// 			class CTextureTextStyle;
// 		}
// 	}
// }

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			class EV_Spatial3DEngine_DLL CThreeAxis:public EarthView::World::Graphic::CMovableObject
			{
ev_private:
				CThreeAxis(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				class EV_Spatial3DEngine_DLL CThreeAxisInternalRenderable : public EarthView::World::Graphic::CRenderable
				{
ev_private:
					CThreeAxisInternalRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CThreeAxisInternalRenderable(CThreeAxis* parent);
					~CThreeAxisInternalRenderable();
					virtual Real getSquaredViewDepth( const EarthView::World::Graphic::CCamera *cam ) const;
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const ;
					virtual void getRenderOperation( _inout EarthView::World::Graphic::CRenderOperation &op );
					virtual void getWorldTransforms(  EarthView::World::Spatial::Math::CMatrix4 *xform ) const;
					virtual const EarthView::World::Graphic::LightList &getLights() const;

					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr getVertexBuffer() const;

					EarthView::World::Graphic::CMovableObject* getMovableObject()const{return mParent;}
				private:
					EarthView::World::Graphic::CRenderOperation mRenderOp;	
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr vbuf;
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr ibuf;
					EarthView::World::Spatial3D::CThreeAxis* mParent;				
					EarthView::World::Graphic::LightList mLList;
					
				};
			public:
				CThreeAxis();
				virtual ~CThreeAxis();
// 				CLatticeMovableText* mPixMovableX;
// 				CLatticeMovableText* mPixMovableY;
// 				CLatticeMovableText* mPixMovableZ;
// 				CTextureTextStyle*   mTextStyle;
			private:
				mutable EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
			public:
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
				/// <returns></returns>
				virtual ev_uint32 getTypeFlags() const;

				/// <summary>
				/// 获取当前对象的平行轴边框盒
				/// 边框盒在当地坐标系中
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框盒</returns>
				virtual const  EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const ;

				/// <summary>
				/// 获取当前对象的球体限定半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框盒</returns>
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
				/// <param name="visitor"></param>
				/// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
				/// <returns></returns>
				void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor,
					ev_bool debugRenderables );

				/// <summary>
				/// 访问可渲染对象
				/// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
				/// </summary>
				/// <param name="visitor"></param>
				/// <returns></returns>
				void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor);

				/// <summary>
				/// 唤醒移动对象的摄像机线程用于下一次渲染操作
				/// 内部方法
				/// </summary>
				/// <param name="cam">摄像机</param>
				/// <returns></returns>
				virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam);

				EarthView::World::Spatial3D::CThreeAxis::CThreeAxisInternalRenderable *mRenderable;
				EarthView::World::Graphic::CMaterialPtr mMaterialPtr;
				EarthView::World::Graphic::CCamera* mCam;
				bool mautoScale;

			};
		}
	}
}
#endif
