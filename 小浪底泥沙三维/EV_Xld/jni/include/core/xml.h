#ifndef EV_CORE_XML_H
#define EV_CORE_XML_H

#pragma once

#include "core/memoryallocatedobject.h"
#include "core/multibytestring.h"
#include <map>
#include <vector>

class TiXmlDocument;
class TiXmlElement;
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /// <summary>
            /// 结点元素类
            /// 对各个结点元素的操作
            /// </summary>
            class CXmlElement;
            /// <summary>
            /// 文件类
            /// 对各种文件的操作
            /// </summary>
            class EV_CORE_DLL CXmlFile : public EarthView::World::Core::CAllocatedObject
            {
                friend class CXmlElement;
                typedef vector<EarthView::World::Core::CXmlElement *> XMLRefList;
            public:
                enum enumXmlEncodingType
                {
                    xmlEncodingUnknown,
                    xmlEncodingUtf8,
                    xmlEncodingLegacy,
                    xmlEncodingDefault,
                    xmlEncodingGB2312
                };
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CXmlFile();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="strFilename">文件名</param>
                /// <param name="encodingType">编码类型</param>
                /// <returns></returns>
                CXmlFile(_in const ev_string &strFilename, _in enumXmlEncodingType encodingType);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="buffer">缓冲区</param>
                /// <param name="size">大小</param>
                /// <param name="encodingType">编码类型</param>
                /// <returns></returns>
                CXmlFile(_in ev_string buffer, _in ev_uint32 size, _in enumXmlEncodingType encodingType);
            ev_private:
                CXmlFile(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual  ~CXmlFile();
                /// <summary>
                /// 使用指定的根结点名称创建新的XML数据
                /// </summary>
                /// <param name="strRootName">XML数据根结点的名称</param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool createXml(_in const ev_string &strRootName);
                /// <summary>
                /// 使用指定的根结点名称创建新的XML数据
                /// </summary>
                /// <param name="strRootName">根节点名称</param>
                /// <param name="encodingType">编码类型</param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool createXml(_in const ev_string &strRootName, enumXmlEncodingType encodingType);
                /// <summary>
                /// 读取并解析XML文件
                /// </summary>
                /// <param name="encodingType">编码类型</param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool loadFile(_in enumXmlEncodingType encodingType);
                /// <summary>
                /// 读取并解析XML文件
                /// </summary>
                /// <param name="strFilename">文件名</param>
                /// <param name="encodingType">类型</param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool loadFile(_in const ev_string &strFilename, _in enumXmlEncodingType encodingType);
                /// <summary>
                /// 读取并解析XML字符串
                /// </summary>
                /// <param name="strXmlString">XML字符串</param>、
                /// <param name="encodingType">编码类型</param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool loadString(_in const ev_string &strXmlString, _in enumXmlEncodingType encodingType);
				/// <summary>
				/// 将当前的XML数据转换为EVString
				/// </summary>
				/// <param name=""></param>
				/// <returns>XML字符串</returns>
				ev_string toString() const;
				/// <summary>
                /// 将当前的XML数据存储到文件
                /// </summary>
                /// <param name="iUnbuffered"></param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool saveFile(ev_int32 iUnbuffered) const;
                /// <summary>
                /// 将当前的XML数据存储到文件
                /// </summary>
                /// <param name="strFilename">文件名</param>
                /// <param name="iUnbuffered"></param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool saveFile(_in const ev_string &strFilename, ev_int32 iUnbuffered) const;
				/// <summary>
                /// 判断当前对象是否已经读取了XML数据
                /// </summary>
                /// <param name=""></param>
                /// <returns>已经打开返回true，否则返回false</returns>
                ev_bool isLoaded() const;
                /// <summary>
                /// 关闭当前打开的XML解析内容
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void unload();
                /// <summary>
                /// 获取XML文档的根元素结点
                /// </summary>
                /// <param name=""></param>
                /// <returns>根节点对象</returns>
                EarthView::World::Core::CXmlElement getRoot();

                /// <summary>
                /// 获取XML文档的根元素结点
                /// </summary>
                /// <param name="rootElement">根结点对象</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getRoot(_out EarthView::World::Core::CXmlElement &rootElement);
                /// <summary>
                /// 获取声明信息中的版本信息
                /// </summary>
                /// <param name=""></param>
                /// <returns>字符串形式的版本信息</returns>
                ev_string getVersion()  const;
                /// <summary>
                /// 获取声明信息中的编码信息
                /// </summary>
                /// <param name=""></param>
                /// <returns>字符串形式的编码信息</returns>
                ev_string getEncoding() const;
                /// <summary>
                /// 获取最后一条错误描述信息
                /// </summary>
                /// <param name=""></param>
                /// <returns>错误描述信息</returns>
                ev_string getLastErrorDescript() const;
                /// <summary>
                /// 设置声明信息中的版本信息
                /// </summary>
                /// <param name=" strVersion">版本信息的值</param>
                /// <returns></returns>
                ev_bool setVersion(_in const ev_string &strVersion);
            private:
                /// <summary>
                /// 添加共享结点数据引用时触发的函数
                /// </summary>
                /// <param name="pSharedTiXmlNode">共享结点实体的指针</param>
                /// <param name="pShareNodeUser">共享结点使用者的指针</param>
                /// <returns></returns>
                void onAddShareReference(_in TiXmlElement *pSharedTiXmlNode, _in EarthView::World::Core::CXmlElement *pShareNodeUser);
                /// <summary>
                /// 移除共享结点数据引用时触发的函数
                /// </summary>
                /// <param name="pSharedTiXmlNode">共享结点实体的指针</param>
                /// <param name="pShareNodeUser">共享结点使用者的指针</param>
                /// <returns></returns>
                void onRemoveShareReference(_in TiXmlElement *pSharedTiXmlNode, _in EarthView::World::Core::CXmlElement *pShareNodeUser);
                /// <summary>
                /// 移除共享结点数据时触发的函数
                /// </summary>
                /// <param name="pRemoveNode">被移除的TiXml结点</param>
                /// <returns></returns>
                void onRemoveElement(_in TiXmlElement *pRemoveNode);
                /// <summary>
                /// 禁用赋值函数和拷贝构造函数
                /// </summary>
                /// <param name="other">参数列表</param>
                /// <returns></returns>
                CXmlFile(_in const CXmlFile &other);
                /// <summary>
                /// 重载=运算符
                /// </summary>
                /// <param name="other">右操作数</param>
                /// <returns></returns>
                CXmlFile &operator=(_in const CXmlFile &other);
            private:
                ///TiXml的文档对象
                TiXmlDocument *m_pTixmlDoc;
                ///记录TiXml结点对象引用的map
                map<TiXmlElement *, XMLRefList> m_mapRefs;
                ///当前对象存储的XML文件名
                ev_string m_strFileName;
            };
            /// <summary>
            /// XML元素结点类，例如：<mynode myatrri="this is my attribute">this is my value</mynode>
            /// 对各种结点的操作
            /// </summary>
            class EV_CORE_DLL CXmlElement : public EarthView::World::Core::CAllocatedObject
            {
                friend class CXmlFile;
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CXmlElement();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="strName">结点名称</param>
                /// <param name="strValue">结点值</param>
                /// <returns></returns>
                CXmlElement(_in const ev_string &strName, _in const ev_string &strValue);
                /// <summary>
                /// 拷贝构造函数
                /// </summary>
                /// <param name="another">另一个结点对象</param>
                /// <returns></returns>
                CXmlElement(_in const CXmlElement &another);
            ev_private:
                CXmlElement(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CXmlElement();
                /// <summary>
                /// 重载=运算符
                /// </summary>
                /// <param name="another">另一个结点对象</param>
                /// <returns></returns>
                EarthView::World::Core::CXmlElement &operator=(_in const EarthView::World::Core::CXmlElement &another);

                /// <summary>
                /// 使当前结点创建为一个有效的独立结点
                /// </summary>
                /// <param name="strName">结点名称</param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool createElement(_in const ev_string &strName);
                /// <summary>
                /// 使当前结点创建为一个有效的独立结点
                /// </summary>
                /// <param name="strName">结点名称</param>
                /// <param name="strValue">结点值</param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool createElement(_in const ev_string &strName, _in const ev_string &strValue);
                /// <summary>
                /// 重置当前结点对象，重置后，当前结点对象将变得无效，需要重新进行初始化
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void reset();
                /// <summary>
                /// 判断当前对象是否有效，有效的对象才能进行各项操作
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isValid() const;
                /// <summary>
                /// 判断当前结点是否是以共享方式占用结点实体数据
                /// </summary>
                /// <param name=""></param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool isShareMode() const;
                /// <summary>
                /// 取得当前结点元素的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>结点元素名称</returns>
                ev_string getName() const;
                /// <summary>
                /// 设置当前结点元素的名称
                /// </summary>
                /// <param name="strName">结点名称</param>
                /// <returns>成功返回true，否则返回false</returns>
                ev_bool setName(_in const ev_string &strName);
                /// <summary>
                /// 取得当前结点元素的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前结点元素的值</returns>
                ev_string getValueString() const;
                /// <summary>
                /// 设置当前结点元素的值
                /// </summary>
                /// <param name="strValue">结点值</param>
                /// <returns>当前结点元素的值</returns>
                ev_bool setValue(_in const ev_string &strValue);
                /// <summary>
                /// 取得当前结点元素指定属性的值
                /// </summary>
                /// <param name="strAttributeName">属性名</param>
                /// <returns>属性值</returns>
                ev_string getAttributeString(_in  const ev_string &strAttributeName) const;
                /// <summary>
                /// 取得当前结点元素指定属性的值
                /// </summary>
                /// <param name="nAttributeIndex">索引</param>
                /// <param name="strAttributeName">属性名称</param>
                /// <param name="strAttributeValue">属性值</param>
                /// <returns>属性值</returns>
                ev_bool getAttributeString(_in  ev_uint32 nAttributeIndex,
                                           _out ev_string &strAttributeName,
                                           _out ev_string &strAttributeValue) const;
                /// <summary>
                ///取得当前结点元素属性的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>属性的数量</returns>
                ev_uint32 getAttributeCount() const;
                /// <summary>
                ///设置当前结点元素指定属性的值，当指定的属性名不存在时，则增加该属性
                /// </summary>
                /// <param name="strAttributeName">属性名称</param>
                /// <param name="strAttributeValue">属性值</param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool setAttribute(_in const ev_string &strAttributeName, _in const ev_string &strAttributeValue);
                /// <summary>
                ///设置当前结点元素指定属性的值，当指定的属性名不存在时，则增加该属性
                /// </summary>
                /// <param name="strAttributeName">属性名称</param>
                /// <param name="dbAttributeValue">实数型属性值</param>
                /// <returns>有返回值true，否则返回false</returns>
                ev_bool setAttribute(_in const ev_string &strAttributeName, _in const ev_real64 &dbAttributeValue);
				/// <summary>
				///设置当前结点元素指定属性的值，当指定的属性名不存在时，则增加该属性
				/// </summary>
				/// <param name="strAttributeName">属性名称</param>
				/// <param name="intAttributeValue">整型属性值</param>
				/// <returns>有返回值true，否则返回false</returns>
				ev_bool setAttribute(_in const ev_string &strAttributeName, _in const ev_int32 &intAttributeValue);
                /// <summary>
                ///移除掉指定的属性
                /// </summary>
                /// <param name="strAttributeName">属性名称</param>
                /// <returns>移除了一个属性返回true，否则返回false</returns>
                ev_bool removeAttribute(_in const ev_string &strAttributeName);
                /// <summary>
                ///移除掉所有的属性
                /// </summary>
                /// <param name=""></param>
                /// <returns>移除的属性个数</returns>
                ev_uint32  removeAllAttribute();
                /// <summary>
                ///判断当前结点是否是叶子结点
                /// </summary>
                /// <param name=""></param>
                /// <returns>是叶子结点返回true，否则返回false</returns>
                ev_bool isLeaf() const;
                /// <summary>
                ///判断某结点是否是自己的子结点
                /// </summary>
                /// <param name="xmlElement">子结点</param>
                /// <returns>是子结点返回true，否则返回false</returns>
                ev_bool isMyChild(_in const EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///判断当前结点是否是根结点
                /// </summary>
                /// <param name=""></param>
                /// <returns>是根结点返回true，否则返回false</returns>
                ev_bool isRoot() const;
                /// <summary>
                ///获得当前结点的父结点
                /// </summary>
                /// <param name=""></param>
                /// <returns>父节点对象</returns>
                EarthView::World::Core::CXmlElement getParent();
                /// <summary>
                ///获得当前结点的父结点
                /// </summary>
                /// <param name="xmlElement">父结点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getParent(_out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取当前结点的孩子结点数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>孩子结点的数量</returns>
                ev_uint32 getChildCount() const;
                /// <summary>
                ///获取当前结点的第一个指定名称的孩子结点，若没有指定名称就获取第一个孩子结点
                /// </summary>
                /// <param name=""></param>
                /// <returns>子结点对象</returns>
                EarthView::World::Core::CXmlElement getFirstChild();
                /// <summary>
                ///获取当前结点的第一个指定名称的孩子结点，若没有指定名称就获取第一个孩子结点
                /// </summary>
                /// <param name="strChildName">子结点名称</param>
                /// <returns>子结点对象</returns>
                EarthView::World::Core::CXmlElement getFirstChild(_in const ev_string &strChildName);
                /// <summary>
                ///获取当前结点的第一个指定名称的孩子结点，若没有指定名称就获取第一个孩子结点
                /// </summary>
                /// <param name="xmlElement">子结点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getFirstChild(_out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取当前结点的第一个指定名称的孩子结点，若没有指定名称就获取第一个孩子结点
                /// </summary>
                /// <param name="strChildName">子结点名称</param>
                /// <param name="xmlElement">子结点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getFirstChild(_in const ev_string &strChildName, _out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取当前结点的最后一个指定名称的孩子结点，若没有指定名称就获取最后一个孩子结点
                /// </summary>
                /// <param name=""></param>
                /// <returns>子结点对象</returns>
                EarthView::World::Core::CXmlElement getLastChild();
                /// <summary>
                ///获取当前结点的最后一个指定名称的孩子结点，若没有指定名称就获取最后一个孩子结点
                /// </summary>
                /// <param name="strChildName">孩子结点名称</param>
                /// <returns>子结点对象</returns>
                EarthView::World::Core::CXmlElement getLastChild(_in const ev_string &strChildName);
                /// <summary>
                ///获取当前结点的最后一个指定名称的孩子结点，若没有指定名称就获取最后一个孩子结点
                /// </summary>
                /// <param name="xmlElement">子结点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getLastChild(_out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取当前结点的最后一个指定名称的孩子结点，若没有指定名称就获取最后一个孩子结点
                /// </summary>
                /// <param name="strChildName">子结点名称</param>
                /// <param name="xmlElement">子节点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getLastChild(_in const ev_string &strChildName, _out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取指定序号的孩子结点
                /// </summary>
                /// <param name="nIndex">孩子结点的序号</param>
                /// <param name="xmlElement">子结点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getChild(_in ev_uint32 nIndex, _out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取当前结点的下一个指定名称的兄弟结点，若没有指定名称就获取下一个兄弟结点
                /// </summary>
                /// <param name=""></param>
                /// <returns>结点对象</returns>
                EarthView::World::Core::CXmlElement getNextSibling();
                /// <summary>
                ///获取当前结点的下一个指定名称的兄弟结点，若没有指定名称就获取下一个兄弟结点
                /// </summary>
                /// <param name="strSiblingName">兄弟结点的名称</param>
                /// <returns>结点对象</returns>
                EarthView::World::Core::CXmlElement getNextSibling(_in const ev_string &strSiblingName);
                /// <summary>
                ///获取当前结点的下一个指定名称的兄弟结点，若没有指定名称就获取下一个兄弟结点
                /// </summary>
                /// <param name="xmlElement">兄弟结点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getNextSibling(_out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取当前结点的下一个指定名称的兄弟结点，若没有指定名称就获取下一个兄弟结点
                /// </summary>
                /// <param name="strSiblingName">兄弟结点的名称</param>
                /// <param name="xmlElement">兄弟结点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getNextSibling(_in const ev_string &strSiblingName, _out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取当前结点的上一个指定名称的兄弟结点，若没有指定名称就获取上一个兄弟结点
                /// </summary>
                /// <param name=""></param>
                /// <returns>结点对象</returns>
                EarthView::World::Core::CXmlElement getPrevSibling();
                /// <summary>
                ///获取当前结点的上一个指定名称的兄弟结点，若没有指定名称就获取上一个兄弟结点
                /// </summary>
                /// <param name="strSiblingName">兄弟结点的名称</param>
                /// <returns>结点对象</returns>
                EarthView::World::Core::CXmlElement getPrevSibling(_in const ev_string &strSiblingName);
                /// <summary>
                ///获取当前结点的前一个指定名称的兄弟结点，若没有指定名称就获取前一个兄弟结点
                /// </summary>
                /// <param name="xmlElement">兄弟结点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getPrevSibling(_out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取当前结点的前一个指定名称的兄弟结点，若没有指定名称就获取前一个兄弟结点
                /// </summary>
                /// <param name="strSiblingName">兄弟结点的名称</param>
                /// <param name="xmlElement">兄弟结点</param>
                /// <returns>获取成功返回true，否则返回false</returns>
                ev_bool getPrevSibling(_in const ev_string &strSiblingName, _out EarthView::World::Core::CXmlElement &xmlElement);
                /// <summary>
                ///获取当前结点的第几项注释内容
                /// </summary>
                /// <param name="nIndex">注释内容的序号</param>
                /// <returns>注释内容</returns>
                ev_string getComment(_in ev_uint32 nIndex = 0) const;
                /// <summary>
                ///获取当前结点的第几项注释内容
                /// </summary>
                /// <param name="nIndex">注释内容的序号</param>
                /// <param name="strComment">注释内容</param>
                /// <returns>注释内容</returns>
                ev_bool getComment(_in ev_uint32 nIndex, _out ev_string &strComment) const;
                /// <summary>
                ///获取当前结点的注释条数
                /// </summary>
                /// <param name=""></param>
                /// <returns>注释条数</returns>
                ev_uint32 getCommentCount() const;
                /// <summary>
                ///追加当前结点的注释内容
                /// </summary>
                /// <param name="strCommnetContent">注释的内容</param>
                /// <returns>添加的注释的序号</returns>
                ev_uint32 appendComment(_in const ev_string &strCommnetContent);
                /// <summary>
                ///移除当前结点的第几项注释内容
                /// </summary>
                /// <param name="nIndex">注释内容的序号</param>
                /// <returns>移动指定序号的注释返回true，否则返回false</returns>
                ev_bool removeComment(_in ev_uint32 nIndex = 0);
                /// <summary>
                ///移除当前结点的所有注释内容
                /// </summary>
                /// <param name=""></param>
                /// <returns>移除的注释条数</returns>
                ev_uint32 removeAllComment();
                /// <summary>
                ///为当前结点追加孩子结点
                /// </summary>
                /// <param name="appendElement">要增加孩子结点对象</param>
                /// <returns>操作成功返回true，否则返回false</returns>
                ev_bool appendChild(_in const EarthView::World::Core::CXmlElement &appendElement);
                /// <summary>
                ///在某个孩子结点的前方插入孩子结点
                /// </summary>
                /// <param name="addThis">要增加孩子结点对象</param>
                /// <param name="beforeThis">在该结点前插入</param>
                /// <returns>操作成功返回true，否则返回false</returns>
                ev_bool insertChildBefore(_in const EarthView::World::Core::CXmlElement &addThis, _inout EarthView::World::Core::CXmlElement &beforeThis);
                /// <summary>
                ///在某个孩子结点的后方插入孩子结点
                /// </summary>
                /// <param name="addThis">要增加孩子结点对象</param>
                /// <param name="afterThis">在该结点后插入</param>
                /// <returns>操作成功返回true，否则返回false</returns>
                ev_bool insertChildAfter(_in const EarthView::World::Core::CXmlElement &addThis, _inout EarthView::World::Core::CXmlElement &afterThis);
                /// <summary>
                ///移除指定的孩子结点
                /// </summary>
                /// <param name="removeElement">要移除的孩子结点对象</param>
                /// <returns>移除的孩子结点数目</returns>
                ev_uint32 removeChild(_in const EarthView::World::Core::CXmlElement &removeElement);
                /// <summary>
                ///移除指定的孩子结点
                /// </summary>
                /// <param name="strElementName">要移除的孩子结点的名称</param>
                /// <returns>移除的孩子结点的数目</returns>
                ev_uint32 removeChild(_in const ev_string &strElementName);
                /// <summary>
                ///移除所有的孩子结点
                /// </summary>
                /// <param name=""></param>
                /// <returns>移除的孩子结点的数目</returns>
                ev_uint32 removeAllChildren();
				/// <summary>
				/// 将当前的XML数据转换为EVString
				/// </summary>
				/// <param name=""></param>
				/// <returns>XML字符串</returns>
				ev_string toString() const;
            private:
                /// <summary>
                ///当前结点引用的TiXml结点被删除时的通知函数
                /// </summary>
                /// <param name="pShareXmlElement">正在被删除的TiXml结点</param>
                /// <returns></returns>
                void onShareElementRemove(_in const TiXmlElement    *pShareXmlElement);
                /// <summary>
                ///设置当前结点的共享TiXmlElement
                /// </summary>
                ///<param name="pShareXmlElement">共享的TiXml结点</param>
                ///<param name="pParentFile"></param>
                /// <returns></returns>
                void shareElement(_in TiXmlElement    *pShareXmlElement, _in CXmlFile *pParentFile);
            private:
                ///当前结点所封装的TiXmlElement元素对象
                TiXmlElement   *m_pXmlElement;
                ///当前结点以共享模式共享结点数据时，记录父文件对象的指针
                CXmlFile       *m_pParentFile;
            };
        }
    }
}

#endif

