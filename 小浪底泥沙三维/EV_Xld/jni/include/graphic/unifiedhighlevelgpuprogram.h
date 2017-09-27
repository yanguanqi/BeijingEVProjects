#ifndef __UnifiedHighLevelGpuProgram_H__
#define __UnifiedHighLevelGpuProgram_H__
#include "graphic/graphic_config.h"
#include "highlevelgpuprogram.h"
#include "highlevelgpuprogrammanager.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 执行高级GPU编程
            /// </summary>
            class EV_GRAPHIC_DLL CUnifiedHighLevelGpuProgram : public EarthView::World::Graphic::CHighLevelGpuProgram
            {
            public:
                ///设置委托命令对象
                class EV_GRAPHIC_DLL CUnifiedHighLevelGpuProgramCmdDelegate : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CUnifiedHighLevelGpuProgramCmdDelegate(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CUnifiedHighLevelGpuProgramCmdDelegate();
                    /// <summary>
                    /// 得到委托对象
                    /// </summary>
                    /// <param name="target">委托目标</param>
                    /// <returns>返回委托对象</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置委托对象
                    /// </summary>
                    /// <param name="target">委托对象</param>
                    /// <param name="val">值</param>
                    void doSet(void *target, const EVString &val);
                };
            protected:
                static CUnifiedHighLevelGpuProgramCmdDelegate msCmdDelegate;
                //// Ordered list of potential delegates
                EarthView::World::Core::StringVector mDelegateNames;
                //// The chosen delegate 选择的委托
                mutable EarthView::World::Graphic::CHighLevelGpuProgramPtr mChosenDelegate;
                //// Choose the delegate to use
                /// <summary>
                /// 选择委托
                /// </summary>
                void chooseDelegate() const;
            ev_internal:
                void createLowLevelImpl();
                void unloadHighLevelImpl();
                void buildConstantDefinitions() const;
                void loadFromSource();
            ev_private:
                CUnifiedHighLevelGpuProgram( _in EarthView::World::Core::CNameValuePairList *pList);
            public:                
                /// <summary>
                /// 带参数的构造函数
                /// </summary>
                /// <param name="creator"></param>
                /// <param name="name"></param>
                /// <param name="handle"></param>
                /// <param name="group"></param>
                /// <param name="isManual"></param>
                /// <param name="loader"></param>
                /// <returns></returns>
                CUnifiedHighLevelGpuProgram(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                                            const EVString &group, ev_bool isManual,  EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                CUnifiedHighLevelGpuProgram(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                                            const EVString &group, ev_bool isManual);
                CUnifiedHighLevelGpuProgram(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                                            const EVString &group);
            public:
                ~CUnifiedHighLevelGpuProgram();
                /// <summary>
                /// 在列表上增加委托程序
                /// </summary>
                /// <param name="name">名称</param>
                void addDelegateProgram(const EVString &name);
                /// <summary>
                /// 清除所有的委托编程
                /// </summary>
                void clearDelegatePrograms();
                /// <summary>
                /// 获得已经选择的委托
                /// </summary>
                const EarthView::World::Graphic::CHighLevelGpuProgramPtr &_getDelegate() const;
                /// <summary>
                /// 获得语言
                /// </summary>
                /// <returns>返回语言名称</returns>
                EVString getLanguage() const;
                /// <summary>
                /// 定义参数
                /// </summary>
                /// <returns></returns>
                EarthView::World::Graphic::GpuProgramParametersSharedPtr createParameters();
                /// <summary>
                /// 获得绑定委托
                /// </summary>
                /// <returns></returns>
                EarthView::World::Graphic::CGpuProgram *_getBindingDelegate();
                /// <summary>
                /// CGpuProgram::isSupported
                /// </summary>
                /// <returns>是否得到委托</returns>
                ev_bool isSupported() const;

                /// @copydoc CGpuProgram::isSkeletalAnimationIncluded
                ev_bool isSkeletalAnimationIncluded() const;
                ev_bool isMorphAnimationIncluded() const;
                ev_bool isPoseAnimationIncluded() const;
                ev_bool isVertexTextureFetchRequired() const;
                /// <summary>
                /// 获得默认参数
                /// </summary>
                /// <returns></returns>
                EarthView::World::Graphic::GpuProgramParametersSharedPtr getDefaultParameters();
                /// <summary>
                /// 是否有默认参数
                /// </summary>
                /// <returns>返回是否有默认参数的布尔值</returns>
                ev_bool hasDefaultParameters() const;
                ev_bool getPassSurfaceAndLightStates() const;
                ev_bool getPassFogStates() const;
                ev_bool getPassTransformStates() const;
                /// <summary>
                /// 是否有编译错误
                /// </summary>
                /// <returns>返回是否有编译错误的布尔值</returns>
                ev_bool hasCompileError() const;
                /// <summary>
                /// 重新设置编译错误
                /// </summary>
                void resetCompileError();
                /// <summary>
                /// 加载
                /// </summary>
                /// <param name="backgroundThread">后台线程</param>
                void load(ev_bool backgroundThread );
                /// <summary>
                /// 加载
                /// </summary>
                void load();
                /// <summary>
                /// 重新加载
                /// </summary>
                void reload();
                /// <summary>
                /// 判断是否加载
                /// </summary>
                /// <returns>返回是否加载</returns>
                ev_bool isReloadable() const;
                /// <summary>
                /// 判断是否已经加载
                /// </summary>
                /// <returns>返回是否已经加载</returns>
                ev_bool isLoaded() const;
                /// <summary>
                /// 判断是否正在加载
                /// </summary>
                /// <returns>返回是否正在加载</returns>
                ev_bool isLoading() const;
                /// <summary>
                /// 获得加载状态
                /// </summary>
                /// <returns></returns>
                EarthView::World::Graphic::CResource::LoadingState getLoadingState() const;
                /// <summary>
                /// 不加载
                /// </summary>
                void unload();
                ev_size_t getSize() const;
                void touch();
                /// <summary>
                /// 是否是后台运行
                /// </summary>
                /// <returns>返回是否是后台运行</returns>
                ev_bool isBackgroundLoaded() const;
                /// <summary>
                /// 设置后台运行
                /// </summary>
                /// <param name="bl"></param>
                void setBackgroundLoaded(ev_bool bl);
                void escalateLoading();
                void addListener(EarthView::World::Graphic::CResource::CResourceListener *lis);
                void removeListener(EarthView::World::Graphic::CResource::CResourceListener *lis);
            };
            /// Factory class for Unified programs.
            class CUnifiedHighLevelGpuProgramFactory : public CHighLevelGpuProgramFactory
            {
            ev_private:
                CUnifiedHighLevelGpuProgramFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CUnifiedHighLevelGpuProgramFactory();
                ~CUnifiedHighLevelGpuProgramFactory();
                //// Get the name of the language this factory creates programs for
                EVString getLanguage() const;
                EarthView::World::Graphic::CHighLevelGpuProgram *create(EarthView::World::Graphic::CResourceManager *ref_creator,
                                             const EVString &name, ResourceHandle handle,
                                             const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                void destroy(EarthView::World::Graphic::CHighLevelGpuProgram *prog);
            };
        }
    }
}

#endif

