#ifndef __ConfigFile_H__
#define __ConfigFile_H__
#pragma once
#include <core/stringvector.h>
#include <core/iteratorwrapper.h>
#include <core/datastream.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 配置文件类
            /// 从包含键值的文件中分析出配置
            /// </summary>
            class EV_GRAPHIC_DLL CConfigFile : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /// <summary>
                /// 默认的构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CConfigFile();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CConfigFile(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 虚析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CConfigFile();
                /// <summary>
                /// 加载文件（不通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <returns></returns>
                void load(_in const EVString &filename);
                /// <summary>
                /// 加载文件（不通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <param name="separators">分隔符</param>
                /// <returns></returns>
                void load(_in const EVString &filename, _in const EVString &separators);
                /// <summary>
                /// 加载文件（不通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <param name="separators">分隔符</param>
                /// <param name="trimWhitespace">空白区域的处理</param>
                /// <returns></returns>
                void load(_in const EVString &filename, _in const EVString &separators, _in ev_bool trimWhitespace);
                /// <summary>
                /// 加载文件（通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <param name="resourceGroup">资源组名</param>
                /// <param name="separators">分隔符</param>
                /// <returns></returns>
                void load(_in const EVString &filename, _in const EVString &resourceGroup, _in const EVString &separators);
                /// <summary>
                /// 加载文件（通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <param name="resourceGroup">资源组名</param>
                /// <param name="separators">分隔符</param>
                /// <param name="trimWhitespace">空白区域的处理</param>
                /// <returns></returns>
                void load(_in const EVString &filename, _in const EVString &resourceGroup, _in const EVString &separators, _in ev_bool trimWhitespace);
                /// <summary>
                /// 加载文件（通过数据流加载）
                /// </summary>
                /// <param name="stream">数据流名</param>
                /// <returns></returns>
                void load(_in const EarthView::World::Core::DataStreamPtr &stream);
                /// <summary>
                /// 加载文件（通过数据流加载）
                /// </summary>
                /// <param name="stream">数据流名</param>
                /// <param name="separators">分隔符号</param>
                /// <returns></returns>
                void load(_in const EarthView::World::Core::DataStreamPtr &stream, _in const EVString &separators);
                /// <summary>
                /// 加载文件（通过数据流加载）
                /// </summary>
                /// <param name="stream">数据流名</param>
                /// <param name="separators">分隔符号</param>
                /// <param name="trimWhitespace">空白区域的处理</param>
                /// <returns></returns>
                void load(_in const EarthView::World::Core::DataStreamPtr &stream, _in const EVString &separators, _in ev_bool trimWhitespace);

                /// <summary>
                /// 依据文件名加载文件（不通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <returns></returns>
                void loadDirect(_in const EVString &filename);
                /// <summary>
                /// 依据文件名加载文件（不通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <param name="separators">分隔符号</param>
                /// <returns></returns>
                void loadDirect(_in const EVString &filename, _in const EVString &separators);
                /// <summary>
                /// 依据文件名加载文件（不通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <param name="separators">分隔符号</param>
                /// <param name="trimWhitespace">空白区域的处理</param>
                /// <returns></returns>
                void loadDirect(_in const EVString &filename, _in const EVString &separators, _in ev_bool trimWhitespace);

                /// <summary>
                /// 依据文件名加载文件（通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <param name="resourceGroup">资源组名</param>
                /// <returns></returns>
                void loadFromResourceSystem(_in const EVString &filename, _in const EVString &resourceGroup);
                /// <summary>
                /// 依据文件名加载文件（通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <param name="resourceGroup">资源组名</param>
                /// <param name="separators">分隔符号</param>
                /// <returns></returns>
                void loadFromResourceSystem(_in const EVString &filename, _in const EVString &resourceGroup, _in const EVString &separators);
                /// <summary>
                /// 依据文件名加载文件（通过资源组加载）
                /// </summary>
                /// <param name="filename">文件名</param>
                /// <param name="resourceGroup">资源组名</param>
                /// <param name="separators">分隔符号</param>
                /// <param name="trimWhitespace">空白区域的处理</param>
                /// <returns></returns>
                void loadFromResourceSystem(_in const EVString &filename, _in const EVString &resourceGroup, _in const EVString &separators, _in ev_bool trimWhitespace);
                /// <summary>
                /// 从文件中通过键得到配置
                /// </summary>
                /// <param name="key">配置的名称</param>
                /// <returns>如果得到第一配置则返回这一个配置的索引，否则返回缺省值（CStringUtil::BLANK）</returns>
                EVString getSetting(_in const EVString &key) const;
                /// <summary>
                /// 从文件中通过键得到配置
                /// </summary>
                /// <param name="key">配置的名称</param>
                /// <param name="section">配置所在的部分的名称</param>
                /// <returns>如果得到第一配置则返回这个配置的索引，否则返回缺省值（CStringUtil::BLANK）</returns>
                EVString getSetting(_in const EVString &key, _in const EVString &section) const;
                /// <summary>
                /// 从文件中通过键得到配置
                /// </summary>
                /// <param name="key">配置的名称</param>
                /// <param name="section">配置所在的部分的名称</param>
                /// <param name="defaultValue">缺省值</param>
                /// <returns>如果得到第一配置则返回这个配置的索引，否则返回缺省值（CStringUtil::BLANK）</returns>
                EVString getSetting(_in const EVString &key, _in const EVString &section, _in const EVString &defaultValue) const;
                /// <summary>
                /// 从文件中通过键得到多个配置
                /// </summary>
                /// <param name="key">配置的名称</param>
                /// <returns>返回存放配置的容器</returns>
                EarthView::World::Core::StringVector getMultiSetting(_in const EVString &key) const;
                /// <summary>
                /// 从文件中通过键得到配置
                /// </summary>
                /// <param name="key">配置的名称</param>
                /// <param name="section">配置所在的部分的名称</param>
                /// <returns>返回存放配置的容器</returns>
                EarthView::World::Core::StringVector getMultiSetting(_in const EVString &key, _in const EVString &section) const;
                /// <summary>
                /// multimap容器类
                /// 以EVString类的作为索引，存放EVString类型的值的容器类
                /// </summary>
                class EV_GRAPHIC_DLL SettingsMultiMap : public EarthView::World::Core::CBaseObject
                {
                public:

                    /// <summary>
                    /// 默认的构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    SettingsMultiMap();

                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    SettingsMultiMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 增加元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>添加成功返回true，否则返回false</returns>
                    void push(_in const EVString &key, _in EVString const &val);
                    /// <summary>
                    /// 判断键是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在该键返回true，否则返回false</returns>
                    ev_bool exist(_in const EVString &key);
                    /// <summary>
                    /// 删除元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(_in const EVString &key);
                    /// <summary>
                    /// 容器的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 计数
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回容器中键是key的个数</returns>
                    ev_size_t count(const EVString &key);
                    /// <summary>
                    /// 获取指定键值的第几项
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="index">索引</param>
                    /// <returns>如果得到返回索引，否则返回空</returns>
                    EVString &get(_in const EVString &key, _in ev_size_t index);
                    /// <summary>
                    /// 删除指定键值的第几项
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="index">索引</param>
                    /// <returns></returns>
                    void erase(_in const EVString &key, _in ev_size_t index);
                    /// <summary>
                    /// 清空容器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// 判断该容器类是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>若为空则返回true，否则返回false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef multimap<EVString, EVString> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MULTIMAP(mList);
                    /// <summary>
                    /// 插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>返回插入元素位置索引</returns>
                    iterator insert(_in const value_type &val);
                    /// <summary>
                    /// 寻找索引为某个键的元素
                    /// </summary>
                    /// <param name="key">键/param>
                    /// <returns>返回索引为某个键的元素</returns>
                    iterator find(_in const EVString &key);

                    /// <summary>
                    /// 寻找索引为某个键的元素
                    /// </summary>
                    /// <param name="key">键/param>
                    /// <returns>返回索引为某个键的元素</returns>
                    const_iterator find(_in const EVString &key) const;
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL SettingsMultiMapPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    SettingsMultiMapPair() {}
                    EVString first;
                    EVString second;
                ev_private:
                    SettingsMultiMapPair(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };
                /// <summary>
                /// EarthView::World::Graphic::CConfigFile::SettingsMultiMap容器的迭代器类
                /// 对EarthView::World::Graphic::CConfigFile::SettingsMultiMap容器的一些操作
                /// </summary>
                class EV_GRAPHIC_DLL SettingsIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CConfigFile::SettingsMultiMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">迭代器起始位置</param>
                    /// <param name="last">迭代器结束位置</param>
                    /// <returns></returns>
                    SettingsIterator(_in iterator first, _in iterator last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CConfigFile::SettingsIterator &operator=(_in const EarthView::World::Graphic::CConfigFile::SettingsIterator &other);

                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">EarthView::World::Graphic::CConfigFile::SettingsMultiMap类的引用</param>
                    /// <returns></returns>
                    SettingsIterator(_in EarthView::World::Graphic::CConfigFile::SettingsMultiMap &lst);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CConfigFile::SettingsIterator类的引用</param>
                    /// <returns></returns>
                    SettingsIterator(_in const SettingsIterator &other);
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    SettingsIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~SettingsIterator();
                    /// <summary>
                    /// 得到当前键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 得到当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 指向当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回指向当前值的指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 得到当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>得到当前值，指向下一个值</returns>
                    ValueType getNext();
                    /// <summary>
                    /// 标记第一个元素位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回第一个元素位置的索引</returns>
                    const IteratorType &begin();

                    /// <summary>
                    /// 标记当前元素位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前元素位置的索引</returns>
                    IteratorType &current();

                    /// <summary>
                    /// 标记最后一个元素后一个位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回最后一个元素后一个位置的索引</returns>
                    const IteratorType &end();

                public:

                    /// <summary>
                    /// 判断容器是否有两个或两个以上元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>有两个或者两个以上的元素测返回true，否则返回false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 将迭代器移到下一个位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext (  );
                    /// <summary>
                    /// 得到当前键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前键</returns>
                    EVString nextKey() const;
                    /// <summary>
                    /// 得到当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前值</returns>
                    EVString nextValue() const;
                    /// <summary>
                    /// 得到当前值地址
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前值地址</returns>
                    EVString *nextValuePtr();
                    /// <summary>
                    /// 得到当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>得到当前值，指向下一个值</returns>
                    EVString next();
                    /// <summary>
                    /// 标记第一个元素位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回第一个元素位置的索引</returns>
                    const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair &getBegin();
                    /// <summary>
                    /// 标记最后一个元素位置后一位
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回最后一个元素后一个位置的索引</returns>
                    const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair &getEnd();
                    /// <summary>
                    /// 标记当前元素位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前元素位置的索引</returns>
                    const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair mBeginPair;
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair mCurrentPair;
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair mEndPair;
                    EVString mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// map的容器类
                /// 以EVString作为键，存储EarthView::World::Graphic::CConfigFile::SettingsMultiMap类型的值的容器
                /// </summary>
                class EV_GRAPHIC_DLL SettingsBySection : public EarthView::World::Core::CBaseObject
                {
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    SettingsBySection();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    SettingsBySection(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 增加元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值,是EarthView::World::Graphic::CConfigFile::SettingsMultiMap类的引用</param>
                    /// <returns>添加成功返回true，否则返回false</returns>
                    ev_bool push(_in const EVString &key, _in  EarthView::World::Graphic::CConfigFile::SettingsMultiMap *const &val);
                    /// <summary>
                    /// 判断键是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在该键返回true，否则返回false</returns>
                    ev_bool exist(_in const EVString &key);
                    /// <summary>
                    /// "[]"的重载
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键</returns>
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMap*& operator[](_in const EVString &key);
                    /// <summary>
                    /// 得到键
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键</returns>
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMap*& get(_in const EVString &key);
                    /// <summary>
                    /// 删除元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(_in const EVString &key);
                    /// <summary>
                    /// 容器的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回迭代器的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 清空容器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 判断容器器是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>若为空则返回true，否则返回false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CConfigFile::SettingsMultiMap *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);
                    /// <summary>
                    /// 插入值
                    /// </summary>
                    /// <param name="val">需要插入的值/param>
                    /// <returns>插入成功则为true，否则为false</returns>
                    _Pairib insert(_in const value_type &val);
                    /// <summary>
                    /// 寻找索引为某个键的元素
                    /// </summary>
                    /// <param name="key">键/param>
                    /// <returns>返回索引为某个键的元素</returns>
                    iterator find(_in const EVString &key);

                    /// <summary>
                    /// 寻找索引为某个键的元素
                    /// </summary>
                    /// <param name="key">键/param>
                    /// <returns>返回索引为某个键的元素</returns>
                    const_iterator find(_in const EVString &key) const;
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL SectionPair: public EarthView::World::Core::CBaseObject
                {
                public:
                    SectionPair() {}
                    EVString first;
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMap *second;
                ev_private:
                    SectionPair(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };
                /// <summary>
                /// （EarthView::World::Graphic::CConfigFile::SettingsMultiMap类型，键是string类型）map的迭代器类
                /// 对map容器一些操作
                /// </summary>
                class EV_GRAPHIC_DLL SectionIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CConfigFile::SettingsBySection> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    SectionIterator(_in iterator first, _in iterator last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CConfigFile::SectionIterator &operator=(_in const EarthView::World::Graphic::CConfigFile::SectionIterator &other);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">EarthView::World::Graphic::CConfigFile::SettingsBySection类的引用</param>
                    /// <returns></returns>
                    SectionIterator(_in EarthView::World::Graphic::CConfigFile::SettingsBySection &lst);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CConfigFile::SectionIterator类的引用</param>
                    /// <returns></returns>
                    SectionIterator(_in const SectionIterator &other);
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">迭代器起始位置</param>
                    /// <param name="last">迭代器结束位置</param>
                    /// <returns></returns>
                    SectionIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~SectionIterator();
                    /// <summary>
                    /// 得到当前键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 得到当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 指向当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回指向当前值的指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 得到当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>得到当前值，指向下一个值</returns>
                    ValueType getNext();
                    /// <summary>
                    /// 标记第一个元素位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回第一个元素位置的索引</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 标记当前元素位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前元素位置的索引</returns>
                    IteratorType &current();
                    /// <summary>
                    /// 标记最后一个元素后一个位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回最后一个元素后一个位置的索引</returns>
                    const IteratorType &end();


                public:

                    /// <summary>
                    /// 判断容器是否有两个或两个以上元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>有两个或者两个以上的元素测返回true，否则返回false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 将迭代器移到下一个位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext (  );
                    /// <summary>
                    /// 得到当前键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前键</returns>
                    EVString nextKey() const;
                    /// <summary>
                    /// 得到当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前值</returns>
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMap *nextValue() const;
                    /// <summary>
                    /// 得到当前值地址
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前值地址</returns>
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMap **nextValuePtr();
                    /// <summary>
                    /// 得到当前值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>得到当前值，指向下一个值</returns>
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMap *next();
                    /// <summary>
                    /// 标记第一个元素位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回第一个元素位置的索引</returns>
                    const EarthView::World::Graphic::CConfigFile::SectionPair &getBegin();
                    /// <summary>
                    /// 标记最后一个元素位置后一位
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回最后一个元素后一个位置的索引</returns>
                    const EarthView::World::Graphic::CConfigFile::SectionPair &getEnd();
                    /// <summary>
                    /// 标记当前元素位置
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回当前元素位置的索引</returns>
                    const EarthView::World::Graphic::CConfigFile::SectionPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CConfigFile::SectionPair mBeginPair;
                    EarthView::World::Graphic::CConfigFile::SectionPair mCurrentPair;
                    EarthView::World::Graphic::CConfigFile::SectionPair mEndPair;
                    EarthView::World::Graphic::CConfigFile::SettingsMultiMap *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 定义一个迭代器，该迭代器能够遍历配置文件中所有的部分中的元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回迭代器</returns>
                EarthView::World::Graphic::CConfigFile::SectionIterator getSectionIterator();
                /// <summary>
                /// 定义一个迭代器，该迭代器能够遍历一个部分中所有元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回迭代器</returns>
                EarthView::World::Graphic::CConfigFile::SettingsIterator getSettingsIterator();
                /// <summary>
                /// 定义一个迭代器，该迭代器能够遍历一个部分中所有元素
                /// </summary>
                /// <param name="section">部分的名称</param>
                /// <returns>返回迭代器</returns>
                EarthView::World::Graphic::CConfigFile::SettingsIterator getSettingsIterator(_in const EVString &section);
                /// <summary>
                /// 清空设置
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            protected:
                EarthView::World::Graphic::CConfigFile::SettingsBySection mSettings;
            };
        }
    }
}


#endif

