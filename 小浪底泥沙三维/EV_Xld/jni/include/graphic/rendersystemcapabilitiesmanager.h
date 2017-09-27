#ifndef __RENDERSYSTEMCAPABILITIESMANAGER_H__
#define __RENDERSYSTEMCAPABILITIESMANAGER_H__
#include <core/stringdefines.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRenderSystemCapabilities;
            class CRenderSystemCapabilitiesSerializer;
            /// <summary>
            /// 管理RenderSystemCapabilities的数据库
            /// </summary>
            class EV_GRAPHIC_DLL CRenderSystemCapabilitiesManager : public EarthView::World::Core::CAllocatedObject  /*,public CSingleton<EarthView::World::Graphic::CRenderSystemCapabilitiesManager>*/
            {
            private:
                static EarthView::World::Graphic::CRenderSystemCapabilitiesManager *ms_Singleton;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderSystemCapabilitiesManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderSystemCapabilitiesManager();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderSystemCapabilitiesManager();
                /// <summary>
                /// 解析脚本文件
                /// </summary>
                /// <param name="filename"></param>
                /// <param name="archiveType"></param>
                /// <param name="recursive"></param>
                /// <returns></returns>
                void parseCapabilitiesFromArchive(const EVString &filename, const EVString &archiveType, ev_bool recursive );

                /// <summary>
                /// 解析脚本文件
                /// </summary>
                /// <param name="filename"></param>
                /// <param name="archiveType"></param>
                /// <returns></returns>
                void parseCapabilitiesFromArchive(const EVString &filename, const EVString &archiveType);
                /** Returns a capability loaded with CRenderSystemCapabilitiesManager::parseCapabilitiesFromArchive method
                * @return NULL if the name is invalid, a parsed EarthView::World::Graphic::CRenderSystemCapabilities otherwise.
                */
                EarthView::World::Graphic::CRenderSystemCapabilities *loadParsedCapabilities(const EVString &name);

            public:

                /** Method used by CRenderSystemCapabilitiesSerializer::parseScript */
                void _addRenderSystemCapabilities(const EVString &name,  EarthView::World::Graphic::CRenderSystemCapabilities *caps);
                /// <summary>
                /// 重载标准的Singleton retrieval
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static EarthView::World::Graphic::CRenderSystemCapabilitiesManager &getSingleton();

                /// <summary>
                /// 重载标准的Singleton retrieval
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static EarthView::World::Graphic::CRenderSystemCapabilitiesManager *getSingletonPtr();
            protected:
                CRenderSystemCapabilitiesSerializer *mSerializer;
                typedef map<EVString, EarthView::World::Graphic::CRenderSystemCapabilities *> CapabilitiesMap;
                CapabilitiesMap mCapabilitiesMap;
                const EVString mScriptPattern;
                ///zxt updatefor v1.8
            ev_private:
                /** Access to the internal map of loaded capabilities */
                const CapabilitiesMap &getCapabilities() const;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

