#ifndef _ExternalTextureSourceManager_H
#define _ExternalTextureSourceManager_H
#include "graphic/graphic_config.h"
#include "externaltexturesource.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /*****
            CSingleton Class which handles the registering and control of texture plugins. The plugins
            will be mostly controlled via a string interface. ****/
            class EV_GRAPHIC_DLL CExternalTextureSourceManager : public EarthView::World::Core::CAllocatedObject
            {
            private:
                static EarthView::World::Graphic::CExternalTextureSourceManager *ms_Singleton;
            ev_private:
                CExternalTextureSourceManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Constructor ****/
                CExternalTextureSourceManager();

                /***** Destructor ****/
                ~CExternalTextureSourceManager();
                static EarthView::World::Graphic::CExternalTextureSourceManager &getSingleton();
                static EarthView::World::Graphic::CExternalTextureSourceManager *getSingletonPtr();
                /***** Sets active plugin (ie. "video", "effect", "generic", etc..) ****/
                void setCurrentPlugin( const EVString &sTexturePlugInType );
                /***** Returns currently selected plugin, may be null if none selected ****/
                EarthView::World::Graphic::CExternalTextureSource *getCurrentPlugin( void ) const
                {
                    return mpCurrExternalTextureSource;
                }

                /***** Calls the destroy method of all registered plugins...
                Only the owner plugin should perform the destroy action. ****/
                void destroyAdvancedTexture( const EVString &sTextureName, const EVString &groupName );
                void destroyAdvancedTexture( const EVString &sTextureName);
                /***** Returns the plugin which registered itself with a specific name
                (eg. "video"), or null if specified plugin not found ****/
                EarthView::World::Graphic::CExternalTextureSource *getExternalTextureSource( const EVString &sTexturePlugInType );
                /***** Called from plugin to register itself ****/
                void setExternalTextureSource( const EVString &sTexturePlugInType, EarthView::World::Graphic::CExternalTextureSource *ref_pTextureSystem );
                /***** Override standard CSingleton retrieval.
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
                ****/

            protected:
                ////The current texture controller selected
                EarthView::World::Graphic::CExternalTextureSource *mpCurrExternalTextureSource;

                //// Collection of loaded texture System PlugIns, keyed by registered type
                typedef map< EVString, EarthView::World::Graphic::CExternalTextureSource *> TextureSystemList;
                TextureSystemList mTextureSystems;
            };
        }
    }
}

#endif

