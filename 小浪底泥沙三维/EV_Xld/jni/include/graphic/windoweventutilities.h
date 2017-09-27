#ifndef __WindowEventUtils_H__
#define __WindowEventUtils_H__
#include "graphic/graphic_config.h"
#include <core/platform.h>
#include <core/memoryallocatedobject.h>
#include "graphic_config.h"
#if EV_PLATFORM == EV_PLATFORM_WIN32
#define WIN32_LEAN_AND_MEAN
#if !defined(NOMINMAX) && defined(_MSC_VER)
#define NOMINMAX /// required to stop windows.h messing up std::min
#endif
#include <windows.h>
#elif EV_PLATFORM == EV_PLATFORM_APPLE && !defined(__LP64__)
#include <Carbon/Carbon.h>
#endif

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRenderWindow;

            class EV_GRAPHIC_DLL CWindowEventListener : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CWindowEventListener(_in EarthView::World::Core::CNameValuePairList *pList );
            public:
                CWindowEventListener();
                virtual ~CWindowEventListener();
                /**
                @Remarks
                	Window has moved position
                @param rw
                	The CRenderWindow which created this events
                */
                virtual void windowMoved(CRenderWindow *rw);
                /**
                @Remarks
                	Window has resized
                @param rw
                	The CRenderWindow which created this events
                */
                virtual void windowResized(CRenderWindow *rw);
                /**
                @Remarks
                	Window is closing (Only triggered if user pressed the [X] button)
                @param rw
                	The CRenderWindow which created this events
                @return True will close the window(default).
                */
                virtual ev_bool windowClosing(CRenderWindow *rw);
                /**
                @Remarks
                	Window has been closed (Only triggered if user pressed the [X] button)
                @param rw
                	The CRenderWindow which created this events
                @note
                	The window has not actually close yet when this event triggers. It's only closed after
                	all windowClosed events are triggered. This allows apps to deinitialise properly if they
                	have services that needs the window to exist when deinitialising.
                */
                virtual void windowClosed(CRenderWindow *rw);
                /**
                @Remarks
                	Window has lost/gained focus
                @param rw
                	The CRenderWindow which created this events
                */
                virtual void windowFocusChange(CRenderWindow *rw);
            };
            /**
            @Remarks
            	Utility class to handle Window Events/Pumping/Messages
            */
            class EV_GRAPHIC_DLL CWindowEventUtilities : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CWindowEventUtilities(_in EarthView::World::Core::CNameValuePairList *pList );
            public:
                /**
                @Remarks
                */
                CWindowEventUtilities() {}
                static void messagePump();
                /**
                @Remarks
                	Add a listener to listen to renderwindow events (multiple listener's per renderwindow is fine)
                	The same listener can listen to multiple windows, as the Window Pointer is sent along with
                	any messages.
                @param window
                	The CRenderWindow you are interested in monitoring
                @param listner
                	Your callback listener
                */
                static void addWindowEventListener( CRenderWindow *ref_window, CWindowEventListener *ref_listener );
                /**
                @Remarks
                	Remove previously added listener
                @param window
                	The CRenderWindow you registered with
                @param listner
                	The listener registered
                */
                static void removeWindowEventListener( CRenderWindow *window, CWindowEventListener *listener );
                /**

                @param window
                	The CRenderWindow to monitor
                */
                static void _addRenderWindow(CRenderWindow *ref_window);
                /**
                @param window
                	The CRenderWindow to remove from list
                */
                static void _removeRenderWindow(CRenderWindow *window);
            ev_private:
#if EV_PLATFORM == EV_PLATFORM_WIN32
                ///! Internal winProc (CRenderWindow's use this when creating the Win32 Window)
                static LRESULT CALLBACK _WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
#elif EV_PLATFORM == EV_PLATFORM_APPLE && !defined __OBJC__ && !defined(__LP64__)
                ///! Internal UPP Window Handler (CRenderWindow's use this when creating the OS X Carbon Window
                static OSStatus _CarbonWindowHandler(EventHandlerCallRef nextHandler, EventRef event, void *wnd);
#endif
            public:
                ///These are public only so GLXProc can access them without adding Xlib headers header
                ///typedef multimap<CRenderWindow*, CWindowEventListener*> WindowEventListeners;
                class EV_GRAPHIC_DLL WindowEventListeners : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    WindowEventListeners(_in EarthView::World::Core::CNameValuePairList *pList ) {}
                public:
                    WindowEventListeners() {}
                    void push( CRenderWindow *const &key, CWindowEventListener *const &val);
                    ev_bool exist( CRenderWindow *const &key)
                    {
                        return mList.find(key) != mList.end();
                    }

                    void erase( CRenderWindow *const &key)
                    {
                        if(exist(key))
                            mList.erase(key);
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    ev_size_t count( CRenderWindow *const &key)
                    {
                        return mList.count(key);
                    }
                    ///銮峰彇鎸囧畾阌€肩殑绗嚑椤?
                    CWindowEventListener*& get( CRenderWindow *const &key, ev_size_t index)
                    {
                        iterator it = mList.find(key);
                        if(it == mList.end())
                        {
                            static CWindowEventListener *ptr = NULL;
                            return ptr;
                        }
                        ev_size_t count = mList.count(key);
                        for (ev_uint32 i = 0; i < index && index < count; i++)
                        {
                            it++;
                        }
                        return it->second;
                    }
                    ///鍒犻櫎鎸囧畾阌€肩殑绗嚑椤?
                    void erase( CRenderWindow *const &key, ev_size_t index)
                    {
                        iterator it = mList.find(key);
                        if(it == mList.end())
                        {
                            return;
                        }
                        ev_size_t count = mList.count(key);
                        for (ev_uint32 i = 0; i < index && index < count; i++)
                        {
                            it++;
                        }
                        mList.erase(it);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                ev_private:
                    typedef multimap<CRenderWindow *, CWindowEventListener *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MULTIMAP(mList);			/// 淇濈暀閮ㄥ垎瀹瑰櫒镄勫嚱鏁?涓庡弬鏁扮被鍨嫔拰杩斿洖链兼棤鍏崇殑鍑芥暟锛屽begin/end)
                    iterator insert(const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find( CRenderWindow *const &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(CRenderWindow *const &key) const
                    {
                        return mList.find(key);
                    }
                    iterator lower_bound(const key_type &_keyval)
                    {
                        return mList.lower_bound(_keyval);
                    }
                    iterator upper_bound(const key_type &_keyval)
                    {
                        return mList.upper_bound(_keyval);
                    }
                private:
                    InternalList mList;
                };
                static WindowEventListeners _msListeners;
                ///typedef vector<CRenderWindow*> Windows;
                class EV_GRAPHIC_DLL Windows : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    Windows(_in EarthView::World::Core::CNameValuePairList *pList ) {}
                ev_private:
                    typedef vector<CRenderWindow *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///淇濈暀閮ㄥ垎瀹瑰櫒镄勫嚱鏁?涓庡弬鏁扮被鍨嫔拰杩斿洖链兼棤鍏崇殑鍑芥暟锛屽begin/end)
                    iterator insert(iterator pos, CRenderWindow *const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    Windows() {}
                    void push_back(CRenderWindow *const &t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    CRenderWindow*& front()
                    {
                        return mList.front();
                    }
                    CRenderWindow*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, CRenderWindow *const &t)
                    {
                        mList.insert(begin() + pos, t);
                    }
                    void remove(ev_size_t pos)
                    {
                        iterator it = mList.begin();
                        it = it + pos;
                        mList.erase(it);
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                    CRenderWindow*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    CRenderWindow *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    CRenderWindow*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    CRenderWindow *const &at(ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void reserve(ev_size_t count)
                    {
                        mList.reserve(count);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };
                static Windows _msWindows;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif
