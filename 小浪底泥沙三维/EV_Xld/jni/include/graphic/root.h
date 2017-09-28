#ifndef __ROOT__
#define __ROOT__
#include "graphic/graphic_config.h"
#include "scenemanagerenumerator.h"
#include "defaultworkqueue.h"
#include "core/workqueue.h"
#include "core/stringinterface.h"
#include "timer.h"

#include "locker/license.h"
#ifndef GRAPHIC_UNWARP_EXPORT
#define GRAPHIC_UNWARP_EXPORT EV_GRAPHIC_DLL
#endif

namespace EarthView
{
    namespace World
    {
        namespace Core
        {
			class CDynLib;
			class CPlugin;
			class CDynLibManager;
            class CLogger;
        }
    }
}


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
			class CSyncCommand;
            class EV_GRAPHIC_DLL CRenderSystemThread : EarthView::World::Core::CBaseObject
            {
            ev_private:
                CRenderSystemThread(EarthView::World::Core::CNameValuePairList *pList);
            public:
                static void  registerRenderSystemThread(EarthView::World::Core::CDefaultWorkQueue *workQueue);
            public:
                static void preExtraThreadsStarted();
                static void postExtraThreadsStarted();
                static void registerThread();
				static void unregisterThread();
				static void flushRenderSystem();
			private:
				static CSyncCommand *mPostExtraThreadsCommand;
				static EarthView::World::Core::CMutex mMtx;
            };
        }
    }
}

namespace EarthView
{
    namespace World
    {

        namespace Graphic
        {

            class CLodStrategyManager;
            
            class CMaterialManager;
            class CMeshManager;
            class CModelSerializerFactoryEnum;
            class CParticleSystemManager;
            class CSkeletonManager;
            class COverlayElementFactory;
            class COverlayManager;
            class CFontManager;
            class CResourceGroupManager;
            class CResourceBackgroundQueue;
            class CShadowTextureManager;
            class CRenderSystemCapabilitiesManager;
            class CScriptCompilerManager;
            class CLodStrategyManager;
           // class CTimer;
            class CRenderWindow;
            class CProfiler;
            class CHighLevelGpuProgramManager;
            class CExternalTextureSourceManager;
            class CCompositorManager;
           
            class CFrameListener;
            struct FrameEvent;
            class CControllerManager;
			class CSyncCommandProcessor;
			class GRAPHIC_UNWARP_EXPORT CSyncCommand
			{
			public:
				CSyncCommand(ev_bool needSync = true);
				virtual ~CSyncCommand();
				CSyncCommand *mNext;
			protected:
				virtual ev_bool doCommand();
				EarthView::World::Core::CMutex *mSyncMutex;
				friend class CSyncCommandProcessor;
			};
			class GRAPHIC_UNWARP_EXPORT CSyncCommandProcessor : public EarthView::World::Core::CEventObject
			{
			public:
				CSyncCommandProcessor();
				static EarthView::World::Graphic::CSyncCommandProcessor* getSingleton();
				void exec(EarthView::World::Graphic::CSyncCommand *command);
				void exec(EarthView::World::Graphic::CSyncCommand *command, ev_bool uiThread);
				void processAllCommands();
				static EarthView::World::Graphic::CSyncCommandProcessor* instance;
ev_internal:
				/// <summary>
				/// 事件处理函数，可重载
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns>已处理返回true，否则返回false</returns>
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
			protected:
				void addCommand_internal(EarthView::World::Graphic::CSyncCommand *command);
				EarthView::World::Graphic::CSyncCommand *peekCommand(); 
				list<EarthView::World::Graphic::CSyncCommand *> mCommands;
				EarthView::World::Core::CMutex mMtx;
			private:
				ev_bool isWebApp;
			};
			class GRAPHIC_UNWARP_EXPORT CRenderer
			{
			public:
				/// <summary>
				/// 初始化三维环境，例如初始化root，可重写
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_bool init();
				/// <summary>
				/// 真正渲染一帧需要执行的操作，可重写
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 render();
			};
			class GRAPHIC_UNWARP_EXPORT CGraphicRenderer : public CRenderer
			{
			public:
				virtual ev_bool init();
				virtual ev_int32 render();
			};
			class GRAPHIC_UNWARP_EXPORT CRenderTimer
			{
			public:
				CRenderTimer();
				static EarthView::World::Graphic::CRenderTimer* getSingleton();
				/// <summary>
				/// 开始三维渲染循环，可重写，渲染循环可能在主线程，也可能在后台线程，取决于CRoot::getBackgroundRendering()的取值
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				virtual void startRendering();
				/// <summary>
				/// 结束三维渲染循环，可重写
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				virtual void stopRendering();
				/// <summary>
				/// 渲染一帧
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				void renderOneFrame();

				/// <summary>
				/// 设置三维渲染器，默认有一个渲染器
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				void setRenderer(EarthView::World::Graphic::CRenderer *renderer);
				/// <summary>
				/// 获得三维渲染器，默认有一个渲染器
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				CRenderer *getRenderer();
				static EarthView::World::Graphic::CRenderTimer* instance;
			protected:
				CRenderer *mRenderer;
			};
			class GRAPHIC_UNWARP_EXPORT CRenderTimerFactory
			{
			public:
				CRenderTimerFactory();
				virtual EarthView::World::Graphic::CRenderTimer *create();
			};

            /// <summary>
            /// 渲染系统列表
            /// </summary>
            class EV_GRAPHIC_DLL RenderSystemList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::CRenderSystem *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::CRenderSystem *const &t);
            ev_private:
                RenderSystemList(_in EarthView::World::Core::CNameValuePairList *pList);
            private:
                InternalList mList;
            public:
                RenderSystemList();
                void push_back(EarthView::World::Graphic::CRenderSystem  *const &ref_t);
                void pop_back();

                EarthView::World::Graphic::CRenderSystem*& front();
                EarthView::World::Graphic::CRenderSystem*& back();
                void insert(ev_uint32 pos, EarthView::World::Graphic::CRenderSystem *const &ref_t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                EarthView::World::Graphic::CRenderSystem*& operator[](ev_size_t n);
                EarthView::World::Graphic::CRenderSystem *const &operator[](ev_size_t n) const;
                EarthView::World::Graphic::CRenderSystem*& at(ev_size_t n);
                EarthView::World::Graphic::CRenderSystem *const &at(ev_size_t n) const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                void clear();
            };

            /// <summary>
            /// 根类
            /// 根类是三维渲染引擎的入口，可帮助配置渲染系统，获取其他对象的指针
            /// </summary>
            class EV_GRAPHIC_DLL CRoot : public EarthView::World::Core::CEventObject
            {
                friend class CRenderSystem;
            private:
                static EarthView::World::Graphic::CRoot *ms_Singleton;
				static EVString ms_LicServerIP;
				static ev_uint16 ms_LicServerPort;
            protected:
                EarthView::World::Graphic::RenderSystemList mRenderers;
                EarthView::World::Graphic::CRenderSystem *mActiveRenderer;
                EVString mVersion;
                EVString mConfigFileName;
                ev_bool mQueuedEnd;
                /// In case multiple render windows are created, only once are the resources loaded.
                ev_bool mFirstTimePostWindowInit;
                /// Singletons
                ///zxt 2012.3.27
                EarthView::World::Core::CLogger *mLogManager;
                CControllerManager *mControllerManager;
                CSceneManagerEnumerator *mSceneManagerEnum;
                typedef deque<EarthView::World::Graphic::CSceneManager *> SceneManagerStack;
                SceneManagerStack mSceneManagerStack;
                EarthView::World::Core::CDynLibManager *mDynLibManager;
                EarthView::World::Core::CArchiveManager *mArchiveManager;
                CMaterialManager *mMaterialManager;
                EarthView::World::Graphic::CMeshManager *mMeshManager;
                CModelSerializerFactoryEnum *mModelSerializerFactoryEnum;
                CParticleSystemManager *mParticleManager;
                CSkeletonManager *mSkeletonManager;
                COverlayElementFactory *mPanelFactory;
                COverlayElementFactory *mBorderPanelFactory;
                COverlayElementFactory *mTextAreaFactory;
				COverlayElementFactory *mTextAreaFactoryInstanced;
				COverlayElementFactory *mCharElementFactory;
                COverlayManager *mOverlayManager;
                CFontManager *mFontManager;
                EarthView::World::Core::CArchiveFactory *mZipArchiveFactory;
				EarthView::World::Core::CArchiveFactory *mStreamArchiveFactory;
				EarthView::World::Core::CArchiveFactory *mDbmlArchiveFactory;
                ///zxt updatefor v1.8
				EarthView::World::Core::CArchiveFactory *mEmbeddedZipArchiveFactory;
				EarthView::World::Core::CArchiveFactory *mFileSystemArchiveFactory;
                CResourceGroupManager *mResourceGroupManager;
                CResourceBackgroundQueue* mResourceBackgroundQueue;
                CShadowTextureManager *mShadowTextureManager;
                CRenderSystemCapabilitiesManager *mRenderSystemCapabilitiesManager;
                CScriptCompilerManager *mCompilerManager;
                CLodStrategyManager *mLodStrategyManager;
                CTimer *mTimer;
                EarthView::World::Graphic::CRenderWindow *mAutoWindow;
                CProfiler *mProfiler;
                CHighLevelGpuProgramManager *mHighLevelGpuProgramManager;
                CExternalTextureSourceManager *mExternalTextureSourceManager;
                CCompositorManager *mCompositorManager;
                mutable ev_uint32 mNextFrame;
                Real mFrameSmoothingTime;
                ev_bool mRemoveQueueStructuresOnClear;
                Real mDefaultMinPixelSize;
ev_internal:
				/// <summary>
				/// 事件处理函数，可重载
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns>已处理返回true，否则返回false</returns>
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
            public:
                /// <summary>
                /// 插件接口列表
                /// </summary>
                class EV_GRAPHIC_DLL PluginLibList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Core::CDynLib *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Core::CDynLib *const &ref_t);
                ev_private:
                    PluginLibList(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    InternalList mList;
                public:
                    PluginLibList();
                    void push_back(EarthView::World::Core::CDynLib  *const &ref_t);
                    void pop_back();

                    EarthView::World::Core::CDynLib*& front();
                    EarthView::World::Core::CDynLib*& back();
                    void insert(ev_uint32 pos, EarthView::World::Core::CDynLib *const &ref_t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Core::CDynLib*& operator[](ev_size_t n);
                    EarthView::World::Core::CDynLib *const &operator[](ev_size_t n) const;
                    EarthView::World::Core::CDynLib*& at(ev_size_t n);
                    EarthView::World::Core::CDynLib *const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
                class EV_GRAPHIC_DLL PluginInstanceList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Core::CPlugin *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Core::CPlugin *const &ref_t);
                ev_private:
                    PluginInstanceList(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    InternalList mList;
                public:
                    PluginInstanceList();
                    void push_back(EarthView::World::Core::CPlugin  *const &ref_t);
                    void pop_back();

                    EarthView::World::Core::CPlugin*& front();
                    EarthView::World::Core::CPlugin*& back();
                    void insert(ev_uint32 pos, EarthView::World::Core::CPlugin *const &ref_t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Core::CPlugin*& operator[](ev_size_t n);
                    EarthView::World::Core::CPlugin *const &operator[](ev_size_t n) const;
                    EarthView::World::Core::CPlugin*& at(ev_size_t n);
                    EarthView::World::Core::CPlugin *const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
            public:
                /*typedef map<EVString, EarthView::World::Graphic::CMovableObjectFactory*> EarthView::World::Graphic::CRoot::MovableObjectFactoryMap;*/
                class EV_GRAPHIC_DLL MovableObjectFactoryMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    MovableObjectFactoryMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    MovableObjectFactoryMap() {}
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CMovableObjectFactory *const &ref_val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::CMovableObjectFactory *)ref_val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(const EVString &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    EarthView::World::Graphic::CMovableObjectFactory*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::CMovableObjectFactory*& get(const EVString &key)
                    {
                        return mList[key];
                    }
                    void erase(const EVString &key)
                    {
                        if(exist(key))
                            mList.erase(key);
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
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
                    typedef map<EVString, EarthView::World::Graphic::CMovableObjectFactory *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);
                    _Pairib insert(const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find(const EVString &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(const EVString &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };
            protected:
                //// List of plugin DLLs loaded
                PluginLibList mPluginLibs;
                //// List of EarthView::World::Core::CPlugin instances registered
                EarthView::World::Graphic::CRoot::PluginInstanceList mPlugins;
                /*typedef map<EVString, EarthView::World::Graphic::CMovableObjectFactory*> EarthView::World::Graphic::CRoot::MovableObjectFactoryMap;*/
                EarthView::World::Graphic::CRoot::MovableObjectFactoryMap mMovableObjectFactoryMap;
                ev_uint32 mNextMovableObjectTypeFlag;
                /// stock movable factories
                EarthView::World::Graphic::CMovableObjectFactory *mEntityFactory;
                EarthView::World::Graphic::CMovableObjectFactory *mLightFactory;
                EarthView::World::Graphic::CMovableObjectFactory *mBillboardSetFactory;
                EarthView::World::Graphic::CMovableObjectFactory *mManualObjectFactory;
                EarthView::World::Graphic::CMovableObjectFactory *mBillboardChainFactory;
                EarthView::World::Graphic::CMovableObjectFactory *mRibbonTrailFactory;
                typedef map<EVString, EarthView::World::Graphic::CRenderQueueInvocationSequence *> RenderQueueInvocationSequenceMap;
                RenderQueueInvocationSequenceMap mRQSequenceMap;
                //// Are we initialised yet?
                ev_bool mIsInitialised;
                EarthView::World::Core::CWorkQueue *mWorkQueue;

                ///zxt updatefor v1.8
                ///#if EV_PLATFORM==EV_PLATFORM_APPLE_IOS
                ///		EVString getMacCachePath();
                ///#endif


                ////Tells whether blend indices information needs to be passed to the GPU
                ev_bool mIsBlendIndicesGpuRedundant;
                ////Tells whether blend weights information needs to be passed to the GPU
                ev_bool mIsBlendWeightsGpuRedundant;
                /** Method reads a plugins configuration file and instantiates all
                    plugins.
                    @param
                        pluginsfile The file that contains plugins information.
                        Defaults to "plugins.cfg".
                */
                void loadPlugins( const EVString &pluginsfile = "plugins.cfg" );
                /** Initialise all loaded plugins - allows plugins to perform actions
                	once the renderer is initialised.
                */
                void initialisePlugins();
                /** Shuts down all loaded plugins - allows things to be tidied up whilst
                	all plugins are still loaded.
                */
                void shutdownPlugins();
                /** Unloads all loaded plugins.
                */
                void unloadPlugins();
                /// Internal method for one-time tasks after first window creation
                void oneTimePostWindowInit();
                /** Set of registered frame listeners */
                set<EarthView::World::Graphic::CFrameListener *> mFrameListeners;
                /** Set of frame listeners marked for removal*/
                set<EarthView::World::Graphic::CFrameListener *> mRemovedFrameListeners;
                /** Indicates the type of event to be considered by calculateEventTime(). */
				EarthView::World::Core::CRecursiveMutex mFrameListenerMutex;
                enum FrameEventTimeType
                {
                    FETT_ANY = 0,
                    FETT_STARTED = 1,
                    FETT_QUEUED = 2,
                    FETT_ENDED = 3,
                    FETT_COUNT = 4
                };
                //// Contains the times of recently fired events
                typedef deque<ev_uint32> EventTimesQueue;
                EventTimesQueue mEventTimes[FETT_COUNT];
                /** Internal method for calculating the average time between recently fired events.
                @param now The current time in ms.
                @param type The type of event to be considered.
                */
                Real calculateEventTime(ev_uint32 now, FrameEventTimeType type);
                /** Update a set of event times (note, progressive, only call once for each type per frame) */
                void populateFrameEvent(FrameEventTimeType type, FrameEvent &evtToUpdate);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pluginFileName">需要加载的插件的配置文件，默认为 "plugins.cfg"</param>
                /// <param name="configFileName">3D渲染相关配置信息，默认为"ev3d.cfg"</param>
                /// <param name="logFileName">日志文件，默认为"ev3d.log"</param>
                /// <returns></returns>
                CRoot(const EVString &pluginFileName , const EVString &configFileName , const EVString &logFileName );
                CRoot(const EVString &pluginFileName , const EVString &configFileName );
                CRoot(const EVString &pluginFileName);
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRoot();

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CRoot();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRoot(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 保存当前配置文件的信息
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void saveConfig();

				/// <summary>
				/// 设置渲染系统并保存设置。
				/// </summary>
				/// <param name="ref_system">渲染系统</param>
				/// <returns></returns>
				void saveConfigWithActiveRenderSystem(EarthView::World::Graphic::CRenderSystem *ref_system);

                /// <summary>
                /// 从配置文件中读取配置               
                /// </summary>
                /// <param name=""></param>
                /// <returns>发现有效配置信息，返回true，如果没有保存配置信息或系统最后一次配置错误，返回false</returns>
                ev_bool restoreConfig();
                /// <summary>
                /// 显示对话框让用户选择系统配置
                /// </summary>
                /// <param name=""></param>
                /// <returns>用户点击OK，返回true，点击Cancel，返回false</returns>
                ev_bool showConfigDialog();
                /// <summary>
                /// 添加一个新的子渲染系统
                /// </summary>
                /// <param name="newRend"></param>
                /// <returns></returns>
                void addRenderSystem(EarthView::World::Graphic::CRenderSystem *ref_newRend);
                /// <summary>
                /// 获得有效的渲染系统列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::RenderSystemList &getAvailableRenderers();
                /// <summary>
                /// 通过指定名称检索渲染系统
                /// </summary>
                /// <param name="name">要检索的渲染系统名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderSystem *getRenderSystemByName(const EVString &name);
                /// <summary>
                /// 设置当前渲染系统
                /// </summary>
                /// <param name="system">渲染系统</param>
                /// <returns></returns>
                void setRenderSystem(EarthView::World::Graphic::CRenderSystem *ref_system);
				/// <summary>
				/// 获取当前渲染系统
				/// </summary>
				/// <param name="system">渲染系统</param>
				/// <returns></returns>
                EarthView::World::Graphic::CRenderSystem *getRenderSystem();
                
				/// <summary>
				/// 初始化渲染系统
				/// 仅在选择了渲染系统之后调用，用来初始化渲染系统
				/// </summary>
				/// <param name="autoCreateWindow">是否自动创建渲染窗体</param>
				/// <param name="windowTitle">窗体标题</param>
				/// <param name="customCapabilitiesConfig">自定义的窗体支持的能力列表</param>
				/// <returns></returns>
                EarthView::World::Graphic::CRenderWindow *initialise(ev_bool autoCreateWindow, const EVString &windowTitle , const EVString &customCapabilitiesConfig );
                EarthView::World::Graphic::CRenderWindow *initialise(ev_bool autoCreateWindow, const EVString &windowTitle );
                EarthView::World::Graphic::CRenderWindow *initialise(ev_bool autoCreateWindow);

				/// <summary>
				/// 获取渲染系统是否已经初始化			
				/// </summary>
				/// <returns></returns>
                ev_bool isInitialised() const;
                
				/// <summary>
				/// 让渲染系统使用自定义的能力
				/// 如果要调用，请在创建第一个渲染窗体前调用此函数
				/// </summary>
				/// <returns></returns>
                void useCustomRenderSystemCapabilities(EarthView::World::Graphic::CRenderSystemCapabilities *ref_capabilities);
                
				/// <summary>
				/// 获取当渲染对象被清空时，渲染队列本身是否被移除				
				/// </summary>
				/// <returns></returns>
                ev_bool getRemoveRenderQueueStructuresOnClear() const;
				/// <summary>
				/// 设置当渲染对象被清空时，渲染队列本身是否被移除				
				/// </summary>
				/// <returns></returns>
                void setRemoveRenderQueueStructuresOnClear(ev_bool r);
                
				/// <summary>
				/// 添加场景管理器工厂				
				/// </summary>
				/// <returns></returns>
                ev_bool addSceneManagerFactory(EarthView::World::Graphic::CSceneManagerFactory *ref_fact);
				/// <summary>
				/// 移除场景管理器工厂				
				/// </summary>
				/// <returns></returns>
                ev_bool removeSceneManagerFactory(EarthView::World::Graphic::CSceneManagerFactory *fact);

				/// <summary>
				/// 获取场景管理器元数据信息				
				/// </summary>
				/// <returns></returns>
                const EarthView::World::Graphic::SceneManagerMetaData *getSceneManagerMetaData(const EVString &typeName) const;
				/// <summary>
				/// 获取场景管理器元数据信息的迭代器	
				/// </summary>
				/// <returns></returns>
                EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator getSceneManagerMetaDataIterator() const;
                
				/// 创建一个指定类型的场景管理实例
                /// 如果没有指定类型的场景管理器工厂，则返回空
                /// </summary>
                /// <param name="typeName">类型名称</param>
				/// <param name="typeMask">类型标识</param>
                /// <param name="instanceName">新实例的名称,默认为CStringUtil::BLANK</param>
                /// <returns>场景管理</returns>
                EarthView::World::Graphic::CSceneManager *createSceneManager(const EVString &typeName, const EVString &instanceName );
                EarthView::World::Graphic::CSceneManager *createSceneManager(const EVString &typeName);                
                EarthView::World::Graphic::CSceneManager *createSceneManager(SceneTypeMask typeMask, const EVString &instanceName );
				EarthView::World::Graphic::CSceneManager *createSceneManager(SceneTypeMask typeMask);

				/// <summary>
				/// 重命名场景管理器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool renameSceneManager(const EVString& oldName,const EVString& newName);
                /// <summary>
                /// 销毁场景管理器
                /// </summary>
                /// <param name="sm">场景管理</param>
                /// <returns></returns>
                void destroySceneManager(EarthView::World::Graphic::CSceneManager *sm);

                /// <summary>
                /// 获取一个场景管理实例
                /// </summary>
                /// <param name="instanceName">检索实例的名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CSceneManager *getSceneManager(const EVString &instanceName) const;
                /// <summary>
                /// 判断是否存在指定名称的场景管理器
                /// </summary>
                /// <param name="instanceName">检索实例的名称</param>
                /// <returns></returns>
                ev_bool hasSceneManager(const EVString &instanceName) const;

                /// <summary>
                /// 获取一个遍历所有场景管理器实例的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator getSceneManagerIterator();                

				/// <summary>
				/// 获取当前的纹理管理器
				/// 与CTextureManager::getSingletonPtr功能类似
				/// 当未设置当前渲染系统时，此函数返回空;
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                EarthView::World::Graphic::CTextureManager *getTextureManager();
                
				/// <summary>
				/// 获取当前的模型管理器
				/// 与CMeshManager::getSingletonPtr功能类似
				/// 当未设置当前渲染系统时，此函数返回空;
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                EarthView::World::Graphic::CMeshManager *getMeshManager();
                
				/// <summary>
				/// 通过错误码返回错误描述信息				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                EVString getErrorDescription(ev_int32 errorNumber);
                
				/// <summary>
				/// 添加帧监听者				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void addFrameListener(EarthView::World::Graphic::CFrameListener *ref_newListener);
				/// <summary>
				/// 移除帧监听者				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void removeFrameListener(EarthView::World::Graphic::CFrameListener *oldListener);
                
				/// <summary>
				/// 停止渲染				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void queueEndRendering();
                
				/// <summary>
				/// 开始渲染的循环				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void startRendering();
               
				/// <summary>
				/// 渲染一帧				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_bool renderOneFrame();                
                ev_bool renderOneFrame(Real timeSinceLastFrame);
                
				/// <summary>
				/// 关闭				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void shutdown();
                
				/// <summary>
				/// 添加资源文件定位
				/// 参照CResourceGroupManager的addResourceLocation方法
				/// </summary>				
				/// <returns></returns>
                void addResourceLocation(const EVString &name, const EVString &locType, const EVString &groupName , ev_bool recursive);
                void addResourceLocation(const EVString &name, const EVString &locType, const EVString &groupName);
                void addResourceLocation(const EVString &name, const EVString &locType);
				/// <summary>
				/// 移除资源文件定位
				/// 参照CResourceGroupManager的addResourceLocation方法
				/// </summary>				
				/// <returns></returns>
                void removeResourceLocation(const EVString &name, const EVString &groupName);
                void removeResourceLocation(const EVString &name);
                
				/// <summary>
				/// 创建可写资源文件流				
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Core::DataStreamPtr createFileStream(const EVString &filename, const EVString &groupName, ev_bool overwrite , const EVString &locationPattern);
                EarthView::World::Core::DataStreamPtr createFileStream(const EVString &filename, const EVString &groupName, ev_bool overwrite );
                EarthView::World::Core::DataStreamPtr createFileStream(const EVString &filename, const EVString &groupName);
                EarthView::World::Core::DataStreamPtr createFileStream(const EVString &filename);
                
				/// <summary>
				/// 打开资源文件流				
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Core::DataStreamPtr openFileStream(const EVString &filename, const EVString &groupName, const EVString &locationPattern);
                EarthView::World::Core::DataStreamPtr openFileStream(const EVString &filename, const EVString &groupName);
                EarthView::World::Core::DataStreamPtr openFileStream(const EVString &filename);
                
				/// <summary>
				/// 使用当前渲染系统将ColourValue颜色值转换到指定数组中				
				/// </summary>				
				/// <returns></returns>
                void convertColourValue(const EarthView::World::Graphic::CColourValue &colour, ev_uint32 *pDest);
				/// <summary>
				/// 使用当前渲染系统将32-bit颜色转换成ColourValue颜色值				
				/// </summary>				
				/// <returns></returns>
				void toColourValue(ev_uint32 srcColor,EarthView::World::Graphic::CColourValue &colour);
				/// <summary>
				/// 获取自动创建的渲染窗体			
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::CRenderWindow *getAutoCreatedWindow();
                
				/// <summary>
				/// 创建一个新的渲染窗体			
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::CRenderWindow *createRenderWindow(const EVString &name, ev_uint32 width, ev_uint32 height,
                                                  ev_bool fullScreen, const EarthView::World::Core::NameValuePairList *miscParams);                
                EarthView::World::Graphic::CRenderWindow *createRenderWindow(const EVString &name, ev_uint32 width, ev_uint32 height,
                                                  ev_bool fullScreen) ;
                
				/// <summary>
				/// 创建多个新的渲染窗体			
				/// </summary>				
				/// <returns></returns>
                ev_bool createRenderWindows(const EarthView::World::Graphic::RenderWindowDescriptionList &renderWindowDescriptions,
                                            EarthView::World::Graphic::RenderWindowList &createdWindows);

               
				/// <summary>
				/// 从当前渲染窗体中分离渲染目标			
				/// </summary>				
				/// <returns>被分离的渲染目标</returns>
                EarthView::World::Graphic::CRenderTarget *detachRenderTarget( EarthView::World::Graphic::CRenderTarget *pWin );
                EarthView::World::Graphic::CRenderTarget *detachRenderTarget( const EVString &name );
                
				/// <summary>
				/// 销毁给定的渲染目标			
				/// </summary>				
				/// <returns></returns>
                void destroyRenderTarget(EarthView::World::Graphic::CRenderTarget *target);
                void destroyRenderTarget(const EVString &name);

                /// <summary>
                /// 通过名称获取渲染目标
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns>渲染目标</returns>
                EarthView::World::Graphic::CRenderTarget *getRenderTarget(const EVString &name);
                
				/// <summary>
				/// 加载插件(加载动态库)
				/// 插件应该事先注册在插件配置文件中中
				/// </summary>
				/// <param name="pluginName">插件名称</param>
				/// <returns></returns>
                void loadPlugin(const EVString &pluginName);
                
				/// <summary>
				/// 卸载插件(卸载动态库)
				/// </summary>
				/// <param name="pluginName">插件名称</param>
				/// <returns></returns>
                void unloadPlugin(const EVString &pluginName);
                
				/// <summary>
				/// 安装插件(执行插件的初始化)				
				/// </summary>
				/// <param name="plugin">插件</param>
				/// <returns></returns>
                void installPlugin(EarthView::World::Core::CPlugin *ref_plugin);
				/// <summary>
				/// 卸载插件(执行插件的反初始化)				
				/// </summary>
				/// <param name="plugin">插件</param>
				/// <returns></returns>
                void uninstallPlugin(EarthView::World::Core::CPlugin *plugin);                

				/// <summary>
				/// 获取已经安装的插件列表			
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                const EarthView::World::Graphic::CRoot::PluginInstanceList &getInstalledPlugins() const;

				enum GPUPerformanceLevel
				{
					GPU_PERFORMANCE_LOW = 0,
					GPU_PERFORMANCE_NORMAL = 1,
					GPU_PERFORMANCE_HIGH = 2
				};

				GPUPerformanceLevel getGraphicCardPerformanceLevel();

				void setAutoQualityLevel(bool isAutoQualityLevel);

				bool getAutoQualityLevel();

				void setQualityLevel(GPUPerformanceLevel performanceLevel);

				GPUPerformanceLevel getQualityLevel();

            ev_private :
                /** Gets a pointer to the central timer used for all EV_World timings */
                CTimer *getTimer();
				
				GPUPerformanceLevel mPerformanceLevel;

				bool mIsAutoQualityLevel;

            public :
				/// <summary>
				/// 向帧监听者通报帧开始事件				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_bool _fireFrameStarted(EarthView::World::Graphic::FrameEvent &evt);
                ev_bool _fireFrameStarted();

				/// <summary>
				/// 向帧监听者通报帧渲染结束事件(所有视口更新完毕后、交换帧缓冲前)			
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_bool _fireFrameRenderingQueued(EarthView::World::Graphic::FrameEvent &evt);
                ev_bool _fireFrameRenderingQueued();

				/// <summary>
				/// 向帧监听者通报帧结束事件				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_bool _fireFrameEnded(EarthView::World::Graphic::FrameEvent &evt);
				ev_bool _fireFrameEnded();
                
				/// <summary>
				/// 获取下一帧的流水号				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_uint32 getNextFrameNumber() const;
                
				/// <summary>
				/// 获取当前场景管理器(处于当前场景管理器栈顶的实例)
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                EarthView::World::Graphic::CSceneManager *_getCurrentSceneManager() const;
				/// <summary>
				/// 向当前场景管理器栈顶压入一个场景管理器实例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void _pushCurrentSceneManager(EarthView::World::Graphic::CSceneManager *ref_sm);
				/// <summary>
				/// 从当前场景管理器栈顶取出一个场景管理器实例
				/// </summary>
				/// <param name="sm">栈顶实例</param>
				/// <returns></returns>
                void _popCurrentSceneManager(EarthView::World::Graphic::CSceneManager *sm);

				/// <summary>
				/// 更新所有渲染目标
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_bool _updateAllRenderTargets();                
                ev_bool _updateAllRenderTargets(EarthView::World::Graphic::FrameEvent &evt);

                /** Create a new EarthView::World::Graphic::CRenderQueueInvocationSequence, useful for linking to
                	CViewport instances to perform custom rendering.
                @param name The name to give the new sequence
                */
                EarthView::World::Graphic::CRenderQueueInvocationSequence *createRenderQueueInvocationSequence(
                    const EVString &name);
                /** Get a EarthView::World::Graphic::CRenderQueueInvocationSequence.
                @param name The name to identify the sequence
                */
                EarthView::World::Graphic::CRenderQueueInvocationSequence *getRenderQueueInvocationSequence(
                    const EVString &name);
                /** Destroy a EarthView::World::Graphic::CRenderQueueInvocationSequence.
                @remarks
                @param name The name to identify the sequence
                */
                void destroyRenderQueueInvocationSequence(
                    const EVString &name);
                /** Destroy all RenderQueueInvocationSequences.
                @remarks
                @param name The name to identify the sequence
                */
                void destroyAllRenderQueueInvocationSequences();
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
                static EarthView::World::Graphic::CRoot &getSingleton();
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
                static EarthView::World::Graphic::CRoot *getSingletonPtr();

				static void getLicServer(EVString& ip,ev_uint16& port);
				static void setLicServer(const EVString& ip,ev_uint16 port);

				/// <summary>
				/// 检测SDK许可(根据是否处于调试状态，检测运行版或开发版许可)
				/// </summary>
				/// <param name=""></param>
				/// <returns>许可状态</returns>
				static EarthView::World::License::EVLicenseStatusType checkLic();

				/// <summary>
				/// 检测SDK运行版许可
				/// </summary>
				/// <param name=""></param>
				/// <returns>许可状态</returns>
				static EarthView::World::License::EVLicenseStatusType checkRuntimeLic();

				/// <summary>
				/// 检测SDK开发版许可
				/// </summary>
				/// <param name=""></param>
				/// <returns>许可状态</returns>
				static EarthView::World::License::EVLicenseStatusType checkDevelopeLic();

				/// <summary>
				/// 检测桌面版许可
				/// </summary>
				/// <param name=""></param>
				/// <returns>许可状态</returns>
				static EarthView::World::License::EVLicenseStatusType checkDesktopLic();

                /** Clears the history of all event times.
                @remarks
                	EV_World stores a history of the last few event times in order to smooth
                	out any inaccuracies and temporary fluctuations. However, if you
                	pause or don't render for a little while this can cause a lurch, so
                	if you're resuming rendering after a break, call this method to reset
                	the stored times
                */
                void clearEventTimes();
                /** Sets the period over which EV_World smooths out fluctuations in frame times.
                @remarks
                	EV_World by default gives you the raw frame time, but can optionally
                	smooths it out over several frames, in order to reduce the
                	noticeable effect of occasional hiccups in framerate.
                	These smoothed values are passed back as parameters to EarthView::World::Graphic::CFrameListener
                	calls.
                @par
                	This method allow you to tweak the smoothing period, and is expressed
                	in seconds. Setting it to 0 will result in completely unsmoothed
                	frame times (the default).
                */
                void setFrameSmoothingPeriod(Real period);
                /** Gets the period over which EV_World smooths out fluctuations in frame times. */
                Real getFrameSmoothingPeriod() const;
                /** Register a new EarthView::World::Graphic::CMovableObjectFactory which will create new CMovableObject
                	instances of a particular type, as identified by the getType() method.
                @remarks
                	CPlugin creators can create subclasses of CMovableObjectFactory which
                	construct custom subclasses of CMovableObject for insertion in the
                	scene. This is the primary way that plugins can make custom objects
                	available.
                @param fact Pointer to the factory instance
                @param overrideExisting Set this to true to override any existing
                	factories which are registered for the same type. You should only
                	change this if you are very sure you know what you're doing.
                */
                void addMovableObjectFactory(EarthView::World::Graphic::CMovableObjectFactory *ref_fact, ev_bool overrideExisting);
                ///void addMovableObjectFactory(EarthView::World::Graphic::CMovableObjectFactory* fact, ev_bool overrideExisting = false);
                void addMovableObjectFactory(EarthView::World::Graphic::CMovableObjectFactory *ref_fact);
                /** Removes a previously registered EarthView::World::Graphic::CMovableObjectFactory.
                @remarks
                	All instances of objects created by this factory will be destroyed
                	before removing the factory (by calling back the factories
                	'destroyInstance' method). The plugin writer is responsible for actually
                	destroying the factory.
                */
                void removeMovableObjectFactory(EarthView::World::Graphic::CMovableObjectFactory *fact);
                //// Checks whether a factory is registered for a given CMovableObject type
                ev_bool hasMovableObjectFactory(const EVString &typeName) const;
                //// Get a EarthView::World::Graphic::CMovableObjectFactory for the given type
                EarthView::World::Graphic::CMovableObjectFactory *getMovableObjectFactory(const EVString &typeName);
                /** Allocate the next CMovableObject type flag.
                @remarks
                	This is done automatically if CMovableObjectFactory::requestTypeFlags
                	returns true; don't call this manually unless you're sure you need to.
                */
                ev_uint32 _allocateNextMovableObjectTypeFlag();

                /// <summary>
                /// 移动对象工厂类迭代器
                ///typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CRoot::MovableObjectFactoryMap> EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator;
                /// </summary>
                class EV_GRAPHIC_DLL MovableObjectFactoryPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    MovableObjectFactoryPair();
                    EVString first;
                    EarthView::World::Graphic::CMovableObjectFactory *second;
                ev_private:
                    MovableObjectFactoryPair(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                class EV_GRAPHIC_DLL MovableObjectFactoryIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CRoot::MovableObjectFactoryMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    MovableObjectFactoryIterator(const_iterator first, const_iterator last);
                    ~MovableObjectFactoryIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();

                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator &operator=(_in const EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator &other);

                ev_private:
                    MovableObjectFactoryIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    MovableObjectFactoryIterator(EarthView::World::Graphic::CRoot::MovableObjectFactoryMap &lst);
                    MovableObjectFactoryIterator(const MovableObjectFactoryIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    ev_uint16 nextKey() const;
                    EarthView::World::Graphic::CMovableObjectFactory *nextValue() const;
                    EarthView::World::Graphic::CMovableObjectFactory **nextValuePtr();
                    EarthView::World::Graphic::CMovableObjectFactory *next();
                    const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair &getBegin();
                    const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair &getEnd();
                    const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CRoot::MovableObjectFactoryPair mBeginPair;
                    EarthView::World::Graphic::CRoot::MovableObjectFactoryPair mCurrentPair;
                    EarthView::World::Graphic::CRoot::MovableObjectFactoryPair mEndPair;
                    EarthView::World::Graphic::CMovableObjectFactory *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 获取一个迭代器遍历当前注册的所有可移动对象工厂类实例
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator getMovableObjectFactoryIterator() const;
                /// <summary>
                /// 获取监视器数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 getDisplayMonitorCount() const;
                /// <summary>
                /// 获取后台工作队列
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Core::CWorkQueue *getWorkQueue() const;
				/// <summary>
				/// 设置后台工作队列
				/// </summary>
				/// <param name="ref_queue"></param>
				/// <param name="forceStart">是否强制启动工作队列</param>
				/// <returns></returns>
                void setWorkQueue(EarthView::World::Core::CWorkQueue *ref_queue, bool forceStart);
                void setWorkQueue(EarthView::World::Core::CWorkQueue *ref_queue);
                ///zxt updatefor v1.8
                /** Sets whether blend indices information needs to be passed to the GPU.
                	When entities use software animation they remove blend information such as
                	indices and weights from the vertex buffers sent to the graphic card. This function
                	can be used to limit which information is removed.
                @param redundant Set to true to remove blend indices information.
                */
                ev_void setBlendIndicesGpuRedundant(ev_bool redundant)
                {
                    mIsBlendIndicesGpuRedundant = redundant;
                }
                /** Returns whether blend indices information needs to be passed to the GPU
                see setBlendIndicesGpuRedundant() for more information
                */
                ev_bool isBlendIndicesGpuRedundant() const
                {
                    return mIsBlendIndicesGpuRedundant;
                }
                /** Sets whether blend weights information needs to be passed to the GPU.
                When entities use software animation they remove blend information such as
                indices and weights from the vertex buffers sent to the graphic card. This function
                can be used to limit which information is removed.
                @param redundant Set to true to remove blend weights information.
                */
                ev_void setBlendWeightsGpuRedundantev_(bool redundant)
                {
                    mIsBlendWeightsGpuRedundant = redundant;
                }
                /** Returns whether blend weights information needs to be passed to the GPU
                see setBlendWeightsGpuRedundant() for more information
                */
                ev_bool isBlendWeightsGpuRedundant() const
                {
                    return mIsBlendWeightsGpuRedundant;
                }

                /** Set the default minimum pixel size for object to be rendered by
                @note
                	To use this feature see Camera::setUseMinPixelSize()
                */
                ev_void setDefaultMinPixelSize(Real pixelSize)
                {
                    mDefaultMinPixelSize = pixelSize;
                }
                /** Get the default minimum pixel size for object to be rendered by
                */
                Real getDefaultMinPixelSize()
                {
                    return mDefaultMinPixelSize;
                }
				/// <summary>
				/// 设置是否在后台线程执行三维渲染循环，该方法只能在程序启动时调用（在CApplication构造前），不能在运行过程中调用。CApplication会根据该取值使用不同的渲染循环工厂。
				/// </summary>
				/// <param name="backgroundRendering">是否在后台渲染三维场景</param>
				/// <returns></returns>
				/// <memo></memo>
				static void setBackgroundRendering(ev_bool backgroundRendering);
				/// <summary>
				/// 获取是否在后台线程执行三维渲染循环
				/// </summary>
				/// <returns>是否在后台线程执行三维渲染循环</returns>
				/// <memo></memo>
				static ev_bool getBackgroundRendering();

				/// <summary>
				/// 设置是否异步加载贴地特征图层
				/// </summary>
				/// <param name="flag">true为异步加载，false为同步加载(默认值)</param>
				/// <returns></returns>
				static ev_void setAsyncLoadClampSceneLayer(ev_bool flag=false);
				
				/// <summary>
				/// 获取是否异步加载贴地特征图层
				/// </summary>
				/// <returns>true为异步加载，false为同步加载</returns>
				static ev_bool getAsyncLoadClampSceneLayer();
            private:
                void init(const EVString &pluginFileName, const EVString &configFileName, const EVString &logFileName);
				static map<EVString, CRenderTimerFactory *> mRenderTimerFactories;
				static ev_bool mbBackgroundRendering;
				static ev_bool mbAsyncLoadClampSceneLayer;
ev_private:
				/// <summary>
				/// 注册渲染循环工厂，渲染循环工厂用以创建三维渲染循环
				/// </summary>
				/// <param name="name">工厂的名字</param>
				/// <param name="factory">工厂对象的指针</param>
				/// <returns></returns>
				/// <memo></memo>
				static void addRenderTimerFactory(EVString name, EarthView::World::Graphic::CRenderTimerFactory *factory);
				/// <summary>
				/// 反注册渲染循环工厂
				/// </summary>
				/// <param name="name">工厂的名字</param>
				/// <returns></returns>
				/// <memo></memo>
				static void removeRenderTimerFactory(EVString name);
				/// <summary>
				/// 获取渲染循环工厂
				/// </summary>
				/// <param name="name">工厂的名字</param>
				/// <returns></returns>
				/// <memo></memo>
				static CRenderTimerFactory *getRenderTimerFactory(EVString name);
            };
        }
    }
}

#endif

