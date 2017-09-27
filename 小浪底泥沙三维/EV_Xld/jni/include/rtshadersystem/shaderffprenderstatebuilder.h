#ifndef _ShaderFFPRenderStateBuilder_
#define _ShaderFFPRenderStateBuilder_
#include "shaderprerequisites.h"
///#ifdef RTSHADER_SYSTEM_BUILD_CORE_SHADERS
#include "singleton.h"
#include "shadergenerator.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


                /** Fixed Function Pipeline render state builder.
                This class builds RenderState from a given pass that represents the fixed function pipeline
                that the source pass describes.
                */
                class EV_RTSS_DLL CFFPRenderStateBuilder : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CFFPRenderStateBuilder(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    static EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder *ms_Singleton;
                    /// Interface.
                public:
                    CFFPRenderStateBuilder();
                    ~CFFPRenderStateBuilder();
                    /** Override standard CSingleton retrieval.
                    @remarks
                    Why do we do this? Well, it's because the CSingleton
                    implementation is in a .h file, which means it gets compiled
                    into anybody who includes it. This is needed for the
                    CSingleton template to work, but we actually only want it
                    compiled into the implementation of the class based on the
                    CSingleton, not all of them. If we don't change this, we get
                    link errors when trying to use the CSingleton-based class from
                    an outside dll.
                    @par
                    This method just delegates to the template version anyway,
                    but the implementation stays in this single compilation unit,
                    preventing link errors.
                    */
                    static EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder			&getSingleton	();

                    /** Override standard CSingleton retrieval.
                    @remarks
                    Why do we do this? Well, it's because the CSingleton
                    implementation is in a .h file, which means it gets compiled
                    into anybody who includes it. This is needed for the
                    CSingleton template to work, but we actually only want it
                    compiled into the implementation of the class based on the
                    CSingleton, not all of them. If we don't change this, we get
                    link errors when trying to use the CSingleton-based class from
                    an outside dll.
                    @par
                    This method just delegates to the template version anyway,
                    but the implementation stays in this single compilation unit,
                    preventing link errors.
                    */
                    static EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder			*getSingletonPtr	();

                    /**
                    Initialize the FFP builder instance.
                    Return true upon success.
                    */
                    ev_bool		initialize					();
                    /**
                    Finalize the FFP builder instance.
                    */
                    void		finalize					();
                    /**
                    Build render state from the given pass that emulates the fixed function pipeline behaviour.
                    @param sgPass The shader generator pass representation. Contains both source and destination pass.
                    @param renderState The target render state that will hold the given pass FFP representation.
                    */
                    void		buildRenderState			(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *sgPass, EarthView::World::Graphic::RTShaderSystem::CTargetRenderState *renderState);

                    /// Protected types.
                protected:
                    typedef vector<CSubRenderStateFactory *> 				SubRenderStateFactoryList;
                    typedef SubRenderStateFactoryList::iterator 				SubRenderStateFactoryIterator;
                    typedef SubRenderStateFactoryList::const_iterator			SubRenderStateFactoryConstIterator;
                    /// Protected methods.
                protected:
                    /**
                    Internal method that builds FFP sub render state.
                    */
                    void		buildFFPSubRenderState			(ev_int32 subRenderStateOrder, const EVString &subRenderStateType,
                            EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *sgPass, EarthView::World::Graphic::RTShaderSystem::CTargetRenderState *renderState);

                    /**
                    Internal method that resolves the colour stage flags.
                    */
                    void		resolveColourStageFlags		(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *sgPass, EarthView::World::Graphic::RTShaderSystem::CTargetRenderState *renderState);

                    /// Attributes.
                protected:
                    SubRenderStateFactoryList	mFFPSubRenderStateFactoyList;						/// All factories needed by the FFP.

                };
            }
        }
    }
}


///#endif
#endif

