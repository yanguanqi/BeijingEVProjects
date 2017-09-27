#ifndef _ExternalTextureSource_H
#define _ExternalTextureSource_H
#include "graphic/graphic_config.h"
#include "core/stringinterface.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /***** Enum for type of texture play mode ****/
            enum eTexturePlayMode
            {
                TextureEffectPause = 0,						////! Video starts out paused
                TextureEffectPlay_ASAP = 1,					////! Video starts playing as soon as possible
                TextureEffectPlay_Looping = 2				////! Video Plays Instantly && Loops
            };
            /***** IMPORTANT: **Plugins must override default dictionary name!**
            Base class that texture plugins derive from. EarthView::World::Core::CAny specific
            requirements that the plugin needs to have defined before
            before calling create defined texture... or it will fail, though, it
            is up to the plugin to report errors to the log file, or raise an
            exception if need be. ****/
            class EV_GRAPHIC_DLL CExternalTextureSource : public EarthView::World::Core::CStringInterface
            {
            ev_private:
                CExternalTextureSource(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Constructor ****/
                CExternalTextureSource();

                /***** Virtual destructor ****/
                virtual ~CExternalTextureSource() {}
                ////------------------------------------------------------------------------------////
                /**** Command objects for specifying some base features							****/
                /**** EarthView::World::Core::CAny PlugIns wishing to add more specific params to "ExternalTextureSourcePlugins"****/
                /**** dictionary, feel free to do so, that's why this is here						****/
                class EV_GRAPHIC_PRIVATE CCmdInputFileName : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_PRIVATE CCmdFPS : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_PRIVATE CCmdPlayMode : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_PRIVATE CCmdTecPassState : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                ////--------------------------------------------------------////
                ////Base Functions that work with Command EVString Interface... Or can be called
                ////manually to create video through code
                ////! Sets an input file name - if needed by plugin
                void setInputName( EVString sIN )
                {
                    mInputFileName = sIN;
                }
                ////! Gets currently set input file name
                const EVString &getInputName( ) const
                {
                    return mInputFileName;
                }
                ////! Sets the frames per second - plugin may or may not use this
                void setFPS( ev_int32 iFPS )
                {
                    mFramesPerSecond = iFPS;
                }
                ////! Gets currently set frames per second
                const ev_int32 getFPS( ) const
                {
                    return mFramesPerSecond;
                }
                ////! Sets a play mode
                void setPlayMode( EarthView::World::Graphic::eTexturePlayMode eMode )
                {
                    mMode = eMode;
                }
                ////! Gets currently set play mode
                EarthView::World::Graphic::eTexturePlayMode getPlayMode() const
                {
                    return mMode;
                }
                ////! Used for attaching texture to CTechnique, State, and texture unit layer
                void setTextureTecPassStateLevel( ev_int32 t, ev_int32 p, ev_int32 s )
                {
                    mTechniqueLevel = t;
                    mPassLevel = p;
                    mStateLevel = s;
                }
                ////! Get currently selected Textute attribs.
                void getTextureTecPassStateLevel( ev_int32 &t, ev_int32 &p, ev_int32 &s ) const
                {
                    t = mTechniqueLevel;
                    p = mPassLevel;
                    s = mStateLevel;
                }

                /***** Call from derived classes to ensure the dictionary is setup ****/
                void addBaseParams();
                /***** Returns the string name of this PlugIn (as set by the PlugIn)****/
                const EVString &getPluginStringName( void ) const
                {
                    return mPlugInName;
                }
                /***** Returns dictionary name ****/
                const EVString &getDictionaryStringName( void ) const
                {
                    return mDictionaryName;
                }
                ////Pure virtual functions that plugins must Override
                /***** Call this function from manager to init system ****/
                virtual ev_bool initialise()
                {
                    return false;
                }
                /***** Shuts down PlugIn ****/
                virtual void shutDown() {}
                /***** Creates a texture into an already defined material or one that is created new
                (it's up to plugin to use a material or create one)
                Before calling, ensure that needed params have been defined via the stringInterface
                or regular methods ****/
                virtual void createDefinedTexture( const EVString &sMaterialName, const EVString &groupName) {}
                virtual void createDefinedTexture( const EVString &sMaterialName);
                /***** What this destroys is dependent on the plugin... See specific plugin
                doc to know what is all destroyed (normally, plugins will destroy only
                what they created, or used directly - ie. just texture unit) ****/
                virtual void destroyAdvancedTexture( const EVString &sTextureName, const EVString &groupName) {}
                virtual void destroyAdvancedTexture( const EVString &sTextureName);
            protected:
                static CCmdInputFileName msCmdInputFile;					////! Command for setting input file name
                static CCmdFPS msCmdFramesPerSecond;						////! Command for setting frames per second
                static CCmdPlayMode msCmdPlayMode;						////! Command for setting play mode
                static CCmdTecPassState msCmdTecPassState;				////! Command for setting the technique, pass, & state level

                ////! EVString Name of this PlugIn
                EVString mPlugInName;

                ////------ Vars used for setting/getting dictionary stuff -----------////
                EarthView::World::Graphic::eTexturePlayMode mMode;

                EVString mInputFileName;

                ev_bool mUpdateEveryFrame;

                ev_int32 mFramesPerSecond,
                         mTechniqueLevel,
                         mPassLevel,
                         mStateLevel;
                /////------------------------------------------------------------------////
            protected:
                /***** The string name of the dictionary name - each plugin
                must override default name ****/
                EVString mDictionaryName;
            };
        }
    }
}

#endif

