#ifndef __MATERIALMANAGER_H__
#define __MATERIALMANAGER_H__
#include "graphic/graphic_config.h"
#include "resourcemanager.h"
#include "materialserializer.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 材质管理器
            /// </summary>
            class EV_GRAPHIC_DLL CMaterialManager : public EarthView::World::Graphic::CResourceManager
            {
            private:
                static EarthView::World::Graphic::CMaterialManager *ms_Singleton;
            public:
                /// <summary>
                /// 材质事件监听
                /// </summary>
                class EV_GRAPHIC_DLL CMaterialListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CMaterialListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CMaterialListener();

                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CMaterialListener();

                    /// <summary>
                    /// 如果已给方案的技术在材质中没有找到，允许手动指定一个技术实例
                    /// </summary>
                    /// <param name="schemeIndex">方案的索引</param>
                    /// <param name="schemeName">方案的名称</param>
                    /// <param name="originalMaterial">正在处理的材质，它没有专门的技术</param>
                    /// <param name="lodIndex">细节等级索引</param>
                    /// <param name="rend">指向可渲染对象的指针</param>
                    /// <returns>返回一个指向技术的指针，如果希望使用默认技术则返回null</returns>
                    virtual EarthView::World::Graphic::CTechnique *handleSchemeNotFound(ev_uint16 schemeIndex,
                            const EVString &schemeName, EarthView::World::Graphic::CMaterial *originalMaterial, ev_uint16 lodIndex,
                            const EarthView::World::Graphic::CRenderable *rend);
                };
            ev_internal:
                /// <summary>
                /// 从EarthView::World::Graphic::CResourceManager类重载
                /// 创建一个新的资源实例与管理保持一致
                /// </summary>
                /// <param name="name">资源的名称</param>
                /// <param name="handle"></param>
                /// <param name="group">资源组名称</param>
                /// <param name="isManual">资源是否手动下载</param>
                /// <param name="loader">指向EarthView::World::Graphic::CManualResourceLoader的指针</param>
                /// <param name="params">名称/值对参数</param>
                /// <returns></returns>
                EarthView::World::Graphic::CResource *createImpl(const EVString &name, ResourceHandle handle,
                                      const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                                      const EarthView::World::Core::NameValuePairList *params);

            protected:
                //// Default CTexture filtering - minification
                EarthView::World::Graphic::FilterOptions mDefaultMinFilter;
                //// Default CTexture filtering - magnification
                EarthView::World::Graphic::FilterOptions mDefaultMagFilter;
                //// Default CTexture filtering - mipmapping
                EarthView::World::Graphic::FilterOptions mDefaultMipFilter;
                //// Default CTexture anisotropy
                ev_uint32 mDefaultMaxAniso;
                //// CSerializer - Hold instance per thread if necessary
                EV_THREAD_POINTER(CMaterialSerializer, mSerializer);
                //// Default settings
                EarthView::World::Graphic::CMaterialPtr mDefaultSettings;
                //// Scheme name -> index. Never shrinks! Should be pretty static anyway
                typedef map<EVString, ev_uint16> SchemeMap;
                //// List of material schemes
                SchemeMap mSchemes;
                //// Current material scheme
                EVString mActiveSchemeName;
                //// Current material scheme
                ev_uint16 mActiveSchemeIndex;
                //// The list of per-scheme (and general) material listeners
                typedef list<EarthView::World::Graphic::CMaterialManager::CMaterialListener *> ListenerList;
                typedef map<EVString, ListenerList> ListenerMap;
                ListenerMap mListenerMap;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CMaterialManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Default material scheme
                static EVString DEFAULT_SCHEME_NAME;

                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CMaterialManager();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CMaterialManager();
                /// <summary>
                /// 初始化材质管理，同时解析所有可用的程序和材质脚本
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void initialise();
                /// <summary>
                /// 解析脚本文件
                /// </summary>
                /// <param name="stream">数据流</param>
                /// <param name="groupName">资源组名称</param>
                /// <returns></returns>
                void parseScript(EarthView::World::Core::DataStreamPtr &stream, const EVString &groupName);
                /// <summary>
                /// 设置默认的纹理过滤方式
                /// </summary>
                /// <param name="fo">默认值选项</param>
                /// <returns></returns>
                virtual void setDefaultTextureFiltering(EarthView::World::Graphic::TextureFilterOptions fo);

                /// <summary>
                /// 设置默认的纹理过滤方式
                /// </summary>
                /// <param name="ftype">过滤类型</param>
                /// <param name="opts">默认值选项</param>
                /// <returns></returns>
                virtual void setDefaultTextureFiltering(EarthView::World::Graphic::FilterType ftype, EarthView::World::Graphic::FilterOptions opts);

                /// <summary>
                /// 设置默认的纹理过滤方式
                /// </summary>
                /// <param name="minFilter"></param>
                /// <param name="magFilter"></param>
                /// <param name="mipFilter"></param>
                /// <returns></returns>
                virtual void setDefaultTextureFiltering(EarthView::World::Graphic::FilterOptions minFilter, EarthView::World::Graphic::FilterOptions magFilter, EarthView::World::Graphic::FilterOptions mipFilter);
                /// <summary>
                /// 获得默认的纹理过滤方式
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::FilterOptions getDefaultTextureFiltering(EarthView::World::Graphic::FilterType ftype) const;
                /// <summary>
                /// 设置默认的纹理各向异性等级，默认值为1
                /// </summary>
                /// <param name="maxAniso">各向异性等级</param>
                /// <returns></returns>
                void setDefaultAnisotropy(ev_uint32 maxAniso);
                /// <summary>
                /// 获得默认的纹理各向异性等级
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 getDefaultAnisotropy() const;
                /// <summary>
                /// 获得指向默认材质的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>指针</returns>
                virtual EarthView::World::Graphic::CMaterialPtr getDefaultSettings() const;
                /// <summary>
                /// 获得材质方案名称的索引
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns>索引值</returns>
                virtual ev_uint16 _getSchemeIndex(const EVString &name);
                /// <summary>
                /// 获得已给索引的材质方案的名称
                /// </summary>
                /// <param name="index">索引</param>
                /// <returns>名称</returns>
                virtual EVString _getSchemeName(ev_uint16 index);

                /// <summary>
                /// 获得活动方案的索引值
                /// </summary>
                /// <param name=""></param>
                /// <returns>索引值</returns>
                virtual ev_uint16 _getActiveSchemeIndex() const;
                /// <summary>
                /// 获得活动材质方案的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称</returns>
                virtual EVString getActiveScheme() const;
                /// <summary>
                /// 设置活动材质方案的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setActiveScheme(const EVString &schemeName);
                /// <summary>
                /// 给材质事件添加一个监听器
                /// 如果schemeName已给出,则监听器只接收指定的事件
                /// </summary>
                /// <param name="l">监听器</param>
                /// <param name="schemeName">方案名称</param>
                /// <returns></returns>
                virtual void addListener(EarthView::World::Graphic::CMaterialManager::CMaterialListener *ref_l, const EVString &schemeName);
                /// <summary>
                /// 给材质事件添加一个监听器
                /// </summary>
                /// <param name="l">监听器</param>
                /// <returns></returns>
                virtual void addListener(EarthView::World::Graphic::CMaterialManager::CMaterialListener *ref_l);
                /// <summary>
                /// 去除材质事件的监听器
                /// </summary>
                /// <param name="l">监听器</param>
                /// <param name="schemeName">方案名称</param>
                /// <returns></returns>
                virtual void removeListener(EarthView::World::Graphic::CMaterialManager::CMaterialListener *l, const EVString &schemeName);
                /// <summary>
                /// 去除材质事件的监听器
                /// </summary>
                /// <param name="l">监听器</param>
                /// <param name="schemeName">方案名称</param>
                /// <returns></returns>
                virtual void removeListener(EarthView::World::Graphic::CMaterialManager::CMaterialListener *l);
                //// Internal method for sorting out missing technique for a scheme
                virtual EarthView::World::Graphic::CTechnique *_arbitrateMissingTechniqueForActiveScheme(
                    EarthView::World::Graphic::CMaterial *mat, ev_uint16 lodIndex, const EarthView::World::Graphic::CRenderable *rend);
                static EarthView::World::Graphic::CMaterialManager &getSingleton();
                static EarthView::World::Graphic::CMaterialManager *getSingletonPtr();

                EarthView::World::Graphic::CMaterialPtr createSelectionMaterial();
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

