#ifndef SCREENSCUTCHEONMANAGER_H
#define SCREENSCUTCHEONMANAGER_H

#include "industryengine/industrygraphic/screenscutcheon.h"
#include "industryengine/industrygraphic/industrygraphic_cfg.h"

#include "core/threaddefines.h"

namespace EarthView
{
    namespace IndustryEngine
    {
        namespace IndustryGraphic
        {
            class EV_INDUSTRYGRAPHIC_DLL CScutcheonMap : public EarthView::World::Core::CBaseObject
            {
ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">参数键值对表</param>
                CScutcheonMap(_in EarthView::World::Core::CNameValuePairList *pList);

            public:

                /// <summary>
                /// 默认构造函数
                /// </summary>
                CScutcheonMap();

                /// <summary>
                /// 添加图元
                /// </summary>
                /// <param name="key">键</param>
                /// <param name="val">图元</param>
                ev_bool push(const EVString &key, EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *const &val);

                /// <summary>
                /// 是否存在指定键的图元
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>是否存在</returns>
                ev_bool exist(const EVString &key) const;

                /// </summary>
                /// 获取图元
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>图元的引用</returns>
                EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*& operator[](const EVString &key) ;

                /// </summary>
                /// 获取图元
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>图元的引用</returns>
                EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*& get(const EVString &key) ;

                /// </summary>
                /// 删除指定键的图元
                /// </summary>
                /// <param name="key">键</param>
                void erase(const EVString &key);

                /// </summary>
                /// 获取元素数目
                /// </summary>
                /// <returns>元素数目</returns>
                ev_size_t size() const;

                /// </summary>
                /// 清空元素
                /// </summary>
                void clear();

                /// </summary>
                /// 获取是否为空
                /// </summary>
                /// <returns>是否为空</returns>
                ev_bool empty() const;

ev_private:
                typedef std::map<EVString, EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);
                _Pairib insert(const value_type &val);
                iterator find(const EVString &key);
                const_iterator find(const EVString &key) const;
            private:
                InternalList mList;
            };

            class EV_INDUSTRYGRAPHIC_DLL CScreenScutcheonManager : public EarthView::World::Core::CAllocatedObject
            {
ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">参数键值对表</param>
                    CScreenScutcheonManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                /// <summary>
                /// 构造函数
                /// </summary>
                CScreenScutcheonManager();
                /// <summary>
                /// 析构函数
                /// </summary>
                ~CScreenScutcheonManager();
                /// <summary>
                ///通过名称，获取EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
                /// </summary>
                /// <param name="name">EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象名称</param>
                /// <returns>EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象 </returns>	
                EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* operator[](const EVString& name) ;
                /// <summary>
                ///通过名称，获取EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
                /// </summary>
                /// <param name="name">EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象名称</param>
                /// <returns>EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象 </returns>	
                EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* getScutcheon(const EVString& name);
                ///// <summary>
                /////从容器中移除EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
                ///// </summary>
                ///// <param name="name">EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象名称</param>
                //void removeScutcheon(const EVString& name);
                ///// <summary>
                /////从容器中移除所有的EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
                ///// </summary>
                //void removeAll();
                /// <summary>
                ///释放EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
                /// </summary>
                void destoryScutcheon(const EVString& name);
                /// <summary>
                ///释放所有的EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
                /// </summary>
                void destoryAll();
                /// <summary>
                ///创建EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
                /// </summary>
                /// <param name="name">EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象名称</param>
                /// <param name="templateName">模板名称</param>
                /// <param name="styleId">样式ID</param>
                /// <param name="control">EarthView::World::Spatial3D::Controls::CGlobeControl对象</param>
                /// <returns>EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象 </returns>	
                EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* createScutcheon(const EVString& name, const EVString& templateName, 
                     EarthView::World::Spatial3D::Controls::CGlobeControl* control);
                /// <summary>
                ///容器中是否存在EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
                /// </summary>
                /// <returns>是否存在</returns>	
                bool exist(const EVString& name) ;
                /// <summary>
                ///单件模式获取EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager对象
                /// </summary>
                static EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager& getSingleton();
                /// <summary>
                ///单件模式获取EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager指针
                /// </summary>
                static EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* getSingletonPtr();
                ///// <summary>
                /////获取容器
                ///// </summary>
                //EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap getScutcheonMap() const;

				/// <summary>
				///获取容器
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap getScutcheonMap(EarthView::World::Spatial3D::Controls::CGlobeControl* control) const;
                /// <summary>
                ///统一设置容器中对象的可见性
                /// </summary>
                void setVisible(const bool& value);

            protected:              
                static EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* mpSingleton;
                EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* mpScutcheon;

			ev_private:
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap mScutcheonMap;
				mutable EarthView::World::Core::CRecursiveMutex mMutex;
            };
        }
    }
}
#endif

