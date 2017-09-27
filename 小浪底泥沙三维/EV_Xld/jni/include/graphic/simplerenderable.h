#ifndef __SimpleRenderable_H__
#define __SimpleRenderable_H__
#include "graphic/graphic_config.h"
#include <mathengine/axisalignedbox.h>
#include "movableobject.h"
#include "renderable.h"
#include "material.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CMatrix4;
			}
		}

	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 为了单独的自定义对象，简单实现EarthView::World::Graphic::CMovableObject类和EarthView::World::Graphic::CRenderable类
            /// </summary>
            class EV_GRAPHIC_DLL CSimpleRenderable : public EarthView::World::Graphic::CMovableObject
            {   
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数的键值对表</param>
                /// <returns></returns>
                CSimpleRenderable(_in EarthView::World::Core::CNameValuePairList *pList);

            public:
                class EV_GRAPHIC_DLL CSimpleRenderableInternal : public EarthView::World::Graphic::CRenderable
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数的键值对表</param>
                    /// <returns></returns>
                    CSimpleRenderableInternal(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">构造函数的键值对表</param>
                    /// <returns></returns>
                    CSimpleRenderableInternal (CSimpleRenderable *ref_parent);
                public:  
                    EarthView::World::Graphic::CSimpleRenderable* getParent()const {return mParent;}
				public:
					void setMaterial( const EVString &matName );
					virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
					virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
					virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);					
					virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const;					
					virtual const EarthView::World::Graphic::LightList &getLights() const;
					virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
					virtual EarthView::World::Graphic::CMovableObject* getMovableObject()const{return mParent;}
				protected:
                    EarthView::World::Graphic::CSimpleRenderable *mParent;
                };
                
	            virtual EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal *getRenderable()  const;
                
            private:
                EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal *mRenderable;

            protected:
                EarthView::World::Graphic::CRenderOperation mRenderOp;
                EarthView::World::Spatial::Math::CMatrix4 mWorldTransform;
                mutable EarthView::World::Spatial::Math::CAxisAlignedBox mBox;
                EVString mMatName;
                EarthView::World::Graphic::CMaterialPtr mMaterial;
                //// The scene manager for the current frame.
                CSceneManager *mParentSceneManager;
                //// The camera for the current frame.
                EarthView::World::Graphic::CCamera *mCamera;
                //// Static member used to automatically generate names for SimpleRendaerable objects.
                static ev_uint32 ms_uGenNameCount;
                

            public:
                EarthView::World::Graphic::CVertexData *getVertexData() const;
                EarthView::World::Graphic::CIndexData *getIndexData() const;
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CSimpleRenderable();
                CSimpleRenderable(const EVString &name);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CSimpleRenderable();

			public:
                void setMaterial( const EVString &matName );
                virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                virtual void setRenderOperation( const EarthView::World::Graphic::CRenderOperation &rend );
                virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);                
                virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const;                
                virtual const EarthView::World::Graphic::LightList &getLights() const;
				virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
			public:
				virtual Real  getBoundingRadius() const;
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
				virtual EVString getMovableType() const;
				virtual ev_bool getCastsShadows() const;
				virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam);
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables );

				void setBoundingBox( const EarthView::World::Spatial::Math::CAxisAlignedBox &box ); 
				void setTransform( const EarthView::World::Spatial::Math::CMatrix4 &xform );				

            };
        }
    }
}

#endif

