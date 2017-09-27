#ifndef _ShaderFFPTransform_
#define _ShaderFFPTransform_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_CORE_SHADERS
#include "shadersubrenderstate.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** Transform sub render state implementation of the Fixed Function Pipeline.
                @see http://msdn.microsoft.com/en-us/library/bb206269.aspx
                Derives from SubRenderState class.
                */
                class EV_RTSS_DLL CFFPTransform : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                ev_private:
                    CFFPTransform(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    /// Interface.
                public:
                    CFFPTransform() {}
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual EVString	getType					() const;
                    /**
                    @see SubRenderState::getExecutionOrder.
                    */
                    virtual int				getExecutionOrder		() const;
                    /**
                    @see SubRenderState::copyFrom.
                    */
                    virtual void			copyFrom				(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs);
                    /**
                    @see SubRenderState::createCpuSubPrograms.
                    */
                    virtual bool			createCpuSubPrograms	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);

                    static EVString Type;
                };

                /**
                A factory that enables creation of FFPTransform instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class EV_RTSS_DLL CFFPTransformFactory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                ev_private:
                    CFFPTransformFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CFFPTransformFactory() {}
                    /**
                    @see SubRenderStateFactory::getType.
                    */
                    virtual EVString	getType				() const;
                    /**
                    @see SubRenderStateFactory::createInstance.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstance		(EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CPropertyAbstractNode *prop, EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator);
                    /**
                    @see SubRenderStateFactory::writeInstance.
                    */
                    virtual void			writeInstance		(EarthView::World::Graphic::CMaterialSerializer *ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);
                ev_internal:
                    /**
                    @see SubRenderStateFactory::createInstanceImpl.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstanceImpl	();
                };
            }
        }
    }
}

#endif
#endif

