#ifndef __Profiler_H__
#define __Profiler_H__
#pragma once
#include "graphic/graphic_config.h"
#include <core/stringdefines.h>
#include <mathengine/ev_math.h>

#if EV_PROFILING == 1
#define GraphicProfile( a ) CProfile _GraphicProfileInstance( (a) )
#define GraphicProfileBegin( a ) CProfiler::getSingleton().beginProfile( (a) )
#define GraphicProfileEnd( a ) CProfiler::getSingleton().endProfile( (a) )
#define GraphicProfileGroup( a, g ) CProfile _GraphicProfileInstance( (a), (g) )
#define GraphicProfileBeginGroup( a, g ) CProfiler::getSingleton().beginProfile( (a), (g) )
#define GraphicProfileEndGroup( a, g ) CProfiler::getSingleton().endProfile( (a), (g) )
#else
#define GraphicProfile( a )
#define GraphicProfileBegin( a )
#define GraphicProfileEnd( a )
#define GraphicProfileGroup( a, g )
#define GraphicProfileBeginGroup( a, g )
#define GraphicProfileEndGroup( a, g )
#endif
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CTimer;
            class COverlay;
            class COverlayElement;
            class COverlayContainer;
            enum ProfileGroupMask
            {
                //// User default profile
                PROF_USER_DEFAULT = 1,			///0x00000001,
                //// All in-built EV_World profiling will match this mask
                PROF_ALL = 267386880,			///0x0FF00000,//0xFF000000,
                //// General processing
                PROF_GENERAL = 134217728,			///0x08000000,//0x80000000,
                //// Culling
                PROF_CULLING = 1073741824,			///0x40000000,
                //// Rendering
                PROF_RENDERING = 536870912			///0x20000000
            };
            /***** An individual profile that will be processed by the EarthView::World::Graphic::CProfiler
                @remarks
                    Use the macro GraphicProfile(name) instead of instantiating this profile directly
                @remarks
                    We use this CProfile to allow scoping rules to signify the beginning and end of
                    the profile. Use the EarthView::World::Graphic::CProfiler singleton (through the macro GraphicProfileBegin(name)
                    and GraphicProfileEnd(name)) directly if you want a profile to last
                    outside of a scope (i.e. the main game loop).
                @author Amit Mathew (amitmathew (at) yahoo (dot) com)
            ****/
            class EV_GRAPHIC_DLL CProfile : public EarthView::World::Core::CAllocatedObject
            {
            public:
                CProfile(_in const EVString &profileName);
                CProfile(_in const EVString &profileName, _in ev_uint32 groupID);
            ev_private:
                CProfile( _in EarthView::World::Core::CNameValuePairList *pList );
            public:
                ~CProfile();
            protected:
                //// The name of this profile
                EVString mName;
                //// The group ID
                ev_uint32 mGroupID;


            };
            /***** The profiler allows you to measure the performance of your code
                @remarks
                    Do not create profiles directly from this unless you want a profile to last
                    outside of its scope (i.e. the main game loop). For most cases, use the macro
                    GraphicProfile(name) and braces to limit the scope. You must enable the CProfile
                    before you can used it with setEnabled(true). If you want to disable profiling
                    in EV_World, simply set the macro EV_PROFILING to 0.
                @author Amit Mathew (amitmathew (at) yahoo (dot) com)
                @todo resolve artificial cap on number of profiles displayed
                @todo fix display ordering of profiles not called every frame
            ****/
            class EV_GRAPHIC_DLL CProfiler : public EarthView::World::Core::CAllocatedObject
            {
            private:
                static EarthView::World::Graphic::CProfiler  *ms_Singleton;
            public:
                CProfiler();
            ev_private:
                CProfiler(_in EarthView::World::Core::CNameValuePairList *pList);
                /***** Sets the timer for the profiler ****/
                void setTimer(_in CTimer *ref_t);
                /***** Retrieves the timer for the profiler ****/
                CTimer *getTimer();
            public:
                ~CProfiler();
                static EarthView::World::Graphic::CProfiler &getSingleton();
                static EarthView::World::Graphic::CProfiler *getSingletonPtr();



                /***** Begins a profile
                @remarks
                    Use the macro GraphicProfileBegin(name) instead of calling this directly
                    so that profiling can be ignored in the release version of your app.
                @remarks
                    You only use the macro (or this) if you want a profile to last outside
                    of its scope (i.e. the main game loop). If you use this function, make sure you
                    use a corresponding GraphicProfileEnd(name). Usually you would use the macro
                    GraphicProfile(name). This function will be ignored for a profile that has been
                    disabled or if the profiler is disabled.
                @param profileName Must be unique and must not be an empty string
                @param groupID A profile group identifier, which can allow you to mask profiles
                ****/
                void beginProfile(_in const EVString &profileName);
                void beginProfile(_in const EVString &profileName, _in ev_uint32 groupID);
                /***** Ends a profile
                @remarks
                    Use the macro GraphicProfileEnd(name) instead of calling this directly so that
                    profiling can be ignored in the release version of your app.
                @remarks
                    This function is usually not called directly unless you want a profile to
                    which will call this function automatically when it goes out of scope. Make
                    sure the name of this profile matches its corresponding beginProfile name.
                    This function will be ignored for a profile that has been disabled or if the
                    profiler is disabled.
                @param profileName Must be unique and must not be an empty string
                @param groupID A profile group identifier, which can allow you to mask profiles
                ****/
                void endProfile(_in const EVString &profileName);
                void endProfile(_in const EVString &profileName, _in ev_uint32 groupID);
                /***** Sets whether this profiler is enabled. Only takes effect after the
                    the frame has ended.
                    @remarks When this is called the first time with the parameter true,
                    it initializes the GUI for the EarthView::World::Graphic::CProfiler
                ****/
                void setEnabled(_in ev_bool enabled);
                /***** Gets whether this profiler is enabled ****/
                ev_bool getEnabled() const;
                /***** Enables a previously disabled profile
                @remarks Only enables the profile if this function is not
                called during the profile it is trying to enable.
                ****/
                void enableProfile(_in const EVString &profileName);
                /***** Disables a profile
                @remarks Only disables the profile if this function is not called during
                the profile it is trying to disable.
                ****/
                void disableProfile(_in const EVString &profileName);
                /***** Set the mask which all profiles must pass to be enabled.
                ****/
                void setProfileGroupMask(_in ev_uint32 mask);
                /***** Get the mask which all profiles must pass to be enabled.
                ****/
                ev_uint32 getProfileGroupMask() const;
                /***** Returns true if the specified profile reaches a new frame time maximum
                @remarks If this is called during a frame, it will be reading the results
                from the previous frame. Therefore, it is best to use this after the frame
                has ended.
                ****/
                ev_bool watchForMax(_in const EVString &profileName);
                /***** Returns true if the specified profile reaches a new frame time minimum
                @remarks If this is called during a frame, it will be reading the results
                from the previous frame. Therefore, it is best to use this after the frame
                has ended.
                ****/
                ev_bool watchForMin(_in const EVString &profileName);
                /***** Returns true if the specified profile goes over or under the given limit
                    frame time
                @remarks If this is called during a frame, it will be reading the results
                from the previous frame. Therefore, it is best to use this after the frame
                has ended.
                @param limit A number between 0 and 1 representing the percentage of frame time
                @param greaterThan If true, this will return whether the limit is exceeded. Otherwise,
                it will return if the frame time has gone under this limit.
                ****/
                ev_bool watchForLimit(_in const EVString &profileName, _in Real limit);
                ev_bool watchForLimit(_in const EVString &profileName, _in Real limit, _in ev_bool greaterThan);
                /***** Outputs current profile statistics to the log ****/
                void logResults();
                /***** Clears the profiler statistics ****/
                void reset();
                enum DisplayMode
                {
                    //// Display % frame usage on the overlay
                    DISPLAY_PERCENTAGE,
                    //// Display milliseconds on the overlay
                    DISPLAY_MILLISECONDS
                };
                /***** Set the display mode for the overlay.
                ****/
                void setDisplayMode(_in DisplayMode d);
                /***** Get the display mode for the overlay.
                ****/
                EarthView::World::Graphic::CProfiler::DisplayMode getDisplayMode() const;
                /***** Sets the EarthView::World::Graphic::CProfiler so the display of results are updated every n frames****/
                void setUpdateDisplayFrequency(_in ev_uint32 freq);
                /***** Gets the frequency that the EarthView::World::Graphic::CProfiler display is updated ****/
                ev_uint32 getUpdateDisplayFrequency() const;
                /***** Set the size of the profiler overlay, in pixels. ****/
                void setOverlayDimensions(_in Real width, _in Real height);
                /***** Set the position of the profiler overlay, in pixels. ****/
                void setOverlayPosition(_in Real left, _in Real top);
                Real getOverlayWidth() const;
                Real getOverlayHeight() const;
                Real getOverlayLeft() const;
                Real getOverlayTop() const;
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
                /***** Initializes the profiler's GUI elements ****/
                void initialize();
                /***** Prints the profiling results of each frame ****/
                void displayResults();
                /***** Processes the profiler data after each frame ****/
                void processFrameStats();
                /***** Handles a change of the profiler's enabled state****/
                void changeEnableState();
                /***** An internal function to create the container which will hold our display elements****/
                COverlayContainer *createContainer();
                /***** An internal function to create a text area ****/
                COverlayElement *createTextArea(_in const EVString &name, _in Real width, _in Real height, _in Real top, _in Real left,
                                                _in	ev_uint32 fontSize, _in const EVString &caption);
                COverlayElement *createTextArea(_in const EVString &name, _in Real width, _in Real height, _in Real top, _in Real left,
                                                _in ev_uint32 fontSize, _in const EVString &caption, _in ev_bool show );
                /***** An internal function to create a panel ****/
                COverlayElement *createPanel(_in const EVString &name, _in Real width, _in Real height, _in Real top, _in Real left,
                                             _in	const EVString &materialName);
                COverlayElement *createPanel(_in const EVString &name, _in Real width, _in Real height, _in Real top, _in Real left,
                                             _in const EVString &materialName, _in ev_bool show);
                //// Represents an individual profile call
                struct ProfileInstance
                {
                    //// The name of the profile
                    EVString		name;
                    //// The name of the parent, empty string if root
                    EVString		parent;
                    //// The time this profile was started
                    ev_uint32		currTime;
                    //// Represents the total time of all child profiles to subtract
                    //// from this profile
                    ev_uint32		accum;
                    //// The hierarchical level of this profile, 0 being the root profile
                    ev_uint32		hierarchicalLvl;
                };
                //// Represents the total timing information of a profile
                //// since profiles can be called more than once each frame
                struct ProfileFrame
                {

                    //// The name of the profile
                    EVString	name;
                    //// The total time this profile has taken this frame
                    ev_uint32	frameTime;
                    //// The number of times this profile was called this frame
                    ev_uint32	calls;
                    //// The hierarchical level of this profile, 0 being the main loop
                    ev_uint32	hierarchicalLvl;
                };

                //// Represents a history of each profile during the duration of the app
                struct ProfileHistory
                {
                    //// The name of the profile
                    EVString	name;
                    //// The current percentage of frame time this profile has taken
                    Real	currentTimePercent;
                    //// The current frame time this profile has taken in milliseconds
                    Real	currentTimeMillisecs;
                    //// The maximum percentage of frame time this profile has taken
                    Real	maxTimePercent;
                    //// The maximum frame time this profile has taken in milliseconds
                    Real	maxTimeMillisecs;

                    //// The minimum percentage of frame time this profile has taken
                    Real	minTimePercent;
                    //// The minimum frame time this profile has taken in milliseconds
                    Real	minTimeMillisecs;

                    //// The number of times this profile has been called each frame
                    ev_uint32	numCallsThisFrame;
                    //// The total percentage of frame time this profile has taken
                    Real	totalTimePercent;
                    //// The total frame time this profile has taken in milliseconds
                    Real	totalTimeMillisecs;
                    //// The total number of times this profile was called
                    //// (used to calculate average)
                    ev_uint32	totalCalls;

                    //// The hierarchical level of this profile, 0 being the root profile
                    ev_uint32	hierarchicalLvl;
                };

                typedef list<ProfileInstance> ProfileStack;
                typedef list<ProfileFrame> ProfileFrameList;
                typedef list<ProfileHistory> ProfileHistoryList;
                typedef map<EVString, ProfileHistoryList::iterator> ProfileHistoryMap;
                typedef map<EVString, ev_bool> DisabledProfileMap;
                typedef list<COverlayElement *> ProfileBarList;
                //// A stack for each individual profile per frame
                ProfileStack mProfiles;
                //// Accumulates the results of each profile per frame (since a profile can be called
                //// more than once a frame)
                ProfileFrameList mProfileFrame;
                //// Keeps track of the statistics of each profile
                ProfileHistoryList mProfileHistory;
                //// We use this for quick look-ups of profiles in the history list
                ProfileHistoryMap mProfileHistoryMap;
                //// Holds the names of disabled profiles
                DisabledProfileMap mDisabledProfiles;
                //// Holds the display bars for each profile results
                ProfileBarList mProfileBars;
                //// Whether the GUI elements have been initialized
                ev_bool mInitialized;
                //// The max number of profiles we can display
                ev_uint32 mMaxDisplayProfiles;
                //// The overlay which contains our profiler results display
                COverlay *mOverlay;
                //// The window that displays the profiler results
                COverlayContainer *mProfileGui;
                //// The height of each bar
                Real mBarHeight;
                //// The height of the stats window
                Real mGuiHeight;
                //// The width of the stats window
                Real mGuiWidth;
                //// The horz position of the stats window
                Real mGuiLeft;
                //// The vertical position of the stats window
                Real mGuiTop;
                //// The size of the indent for each profile display bar
                Real mBarIndent;
                //// The width of the border between the profile window and each bar
                Real mGuiBorderWidth;
                //// The width of the min, avg, and max lines in a profile display
                Real mBarLineWidth;
                //// The distance between bars
                Real mBarSpacing;
                //// The number of frames that must elapse before the current
                //// frame display is updated
                ev_uint32 mUpdateDisplayFrequency;
                //// The number of elapsed frame, used with mUpdateDisplayFrequency
                ev_uint32 mCurrentFrame;
                //// The timer used for profiling
                CTimer *mTimer;
                //// The total time each frame takes
                ev_uint32 mTotalFrameTime;
                //// Whether this profiler is enabled
                ev_bool mEnabled;
                //// Keeps track of whether this profiler has
                //// received a request to be enabled/disabled
                ev_bool mEnableStateChangePending;
                //// Keeps track of the new enabled/disabled state that the user has requested
                //// which will be applied after the frame ends
                ev_bool mNewEnableState;
                //// Mask to decide whether a type of profile is enabled or not
                ev_uint32 mProfileMask;
                //// How to display the overlay
                EarthView::World::Graphic::CProfiler::DisplayMode mDisplayMode;
                //// The max frame time recorded
                ev_uint32 mMaxTotalFrameTime;
                //// Rolling average of millisecs
                Real mAverageFrameTime;
                ev_bool mResetExtents;

            }; 			//// end class

        }
    }
}

#endif

