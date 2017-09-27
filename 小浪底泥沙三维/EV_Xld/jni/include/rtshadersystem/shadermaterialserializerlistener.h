#ifndef _ShaderMaterialSerializerListener_
#define _ShaderMaterialSerializerListener_
#include "shaderprerequisites.h"
#include "shadergenerator.h"
#include <materialserializer.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


                /** This class responsible for translating core features of the RT Shader System for
                Ogre material scripts.
                */
                class EV_RTSS_DLL CSGMaterialSerializerListener : public EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener
                {
                ev_private:
                    CSGMaterialSerializerListener(EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /**
                    @see CMaterialSerializer::Listener::materialEventRaised
                    */
                    virtual void materialEventRaised(EarthView::World::Graphic::CMaterialSerializer *ser,
                                                     EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const CMaterial *mat);
                    /**
                    @see CMaterialSerializer::Listener::techniqueEventRaised
                    */
                    virtual void techniqueEventRaised(EarthView::World::Graphic::CMaterialSerializer *ser,
                                                      EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CTechnique *tech);
                    /**
                    @see CMaterialSerializer::Listener::passEventRaised
                    */
                    virtual void passEventRaised(EarthView::World::Graphic::CMaterialSerializer *ser,
                                                 EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CPass *tech);
                    /**
                    @see CMaterialSerializer::Listener::textureUnitStateEventRaised
                    */
                    virtual void textureUnitStateEventRaised(EarthView::World::Graphic::CMaterialSerializer *ser,
                            EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CTextureUnitState *textureUnit);

                    /// Types.
                protected:
                    typedef vector<CShaderGenerator::SGPass *>	SGPassList;
                    typedef SGPassList::iterator					SGPassListIterator;
                    typedef SGPassList::const_iterator				SGPassListConstIterator;
                    /// Protected methods.
                protected:
                    /** Will be create and destroyed via ShaderGenerator interface. */
                    CSGMaterialSerializerListener();
                    ~CSGMaterialSerializerListener();
                    /** Internal method that creates list of SGPass instances composing the given material. */
                    void						createSGPassList		(EarthView::World::Graphic::CMaterial *mat, SGPassList &passList);
                    /** Internal method that returns SGPass instance from a given source pass. */
                    CShaderGenerator::SGPass	*getShaderGeneratedPass	(const EarthView::World::Graphic::CPass *srcPass);


                    /// Attributes.
                protected:
                    EarthView::World::Graphic::CMaterial		*mSourceMaterial;						/// The current source material that is being written.
                    SGPassList		mSGPassList;							/// List of SGPass instances composing this material.


                private:
                    friend class CShaderGenerator;
                };
            }
        }
    }
}


#endif

