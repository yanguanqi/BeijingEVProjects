#ifndef __SELECTION_RENDERABLE_H__
#define __SELECTION_RENDERABLE_H__
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include "common.h"
#include "core/ev_string.h"
#include "simplerenderable.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            class EV_GRAPHIC_DLL CSelectionRenderable : public EarthView::World::Graphic::CSimpleRenderable
            {
            public:
                CSelectionRenderable();
                CSelectionRenderable(const EVString &name);
                virtual ~CSelectionRenderable();

            ev_private:
                CSelectionRenderable(EarthView::World::Core::CNameValuePairList* pList);

            public:
                virtual EVString getMovableType() const;
                void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

				/// <summary>
				/// 设置材质                
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_void setMaterial( const EVString &matName );
				ev_void setMaterial(EarthView::World::Graphic::CMaterialPtr mat);

				/// <summary>
				/// 设置顶点数据                
				/// </summary>
				/// <param name="ref_vdata">顶点数据</param>
				/// <param name="bCopyData">是否拷贝数据</param>
				/// <returns></returns>
                ev_void setVertexData(EarthView::World::Graphic::CVertexData* ref_vdata,ev_bool bCopyData);

				/// <summary>
				/// 设置索引数据                
				/// </summary>
				/// <param name="ref_idata">索引数据</param>
				/// <param name="bCopyData">是否拷贝数据</param>
				/// <returns></returns>
                ev_void setIndexData(EarthView::World::Graphic::CIndexData* ref_idata,ev_bool bCopyData);

				ev_void setRenderOperationType(EarthView::World::Graphic::CRenderOperation::OperationType type);
				ev_void setLinkedRenderable(EarthView::World::Graphic::CRenderable* renderbale);
			public:
				virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const; 
				virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
				virtual const EarthView::World::Graphic::LightList &getLights() const;
            protected:
                ev_bool mbVertexCopy;
                ev_bool mbIndexCopy;
                EarthView::World::Graphic::CVertexData* mpVertexData;
                EarthView::World::Graphic::CIndexData* mpIndexData;

				EarthView::World::Graphic::CRenderable* mpLinkedRenderable;
            protected:
                static EarthView::World::Graphic::CMaterialPtr createDefaultMaterial();
            };
        }
    }
}

#endif
