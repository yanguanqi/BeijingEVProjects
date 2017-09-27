#ifndef __RenderSystemCapabilitiesSerializer_H__
#define __RenderSystemCapabilitiesSerializer_H__
#include "graphic/graphic_config.h"
#include "rendersystemcapabilities.h"
#include <core/datastream.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRenderSystemCapabilities;
            /// <summary>
            /// 连载 RenderSystemCapabilities 到渲染性能脚本
            /// </summary>
            class EV_GRAPHIC_DLL CRenderSystemCapabilitiesSerializer : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderSystemCapabilitiesSerializer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderSystemCapabilitiesSerializer();

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderSystemCapabilitiesSerializer();
                /// <summary>
                /// 向数据流中写入一个RenderSystemCapabilities对象
                /// </summary>
                /// <param name="caps"></param>
                /// <param name="name"></param>
                /// <param name="filename"></param>
                /// <returns></returns>
                void writeScript(const EarthView::World::Graphic::CRenderSystemCapabilities *caps, EVString name, EVString filename);

                ///zxt updatefor v1.8
                /** Writes a RenderSystemCapabilities object to a string */
                EVString writeString(const EarthView::World::Graphic::CRenderSystemCapabilities *caps, EVString name);
                /// <summary>
                /// 解析RenderSystemCapabilities脚本文件，并将其添加到RenderSystemCapabilitiesManager::_addRenderSystemCapabilities中
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void parseScript(_inout EarthView::World::Core::DataStreamPtr &stream);
            protected:

                enum CapabilityKeywordType {UNDEFINED_CAPABILITY_TYPE = 0, SET_STRING_METHOD, SET_INT_METHOD, SET_BOOL_METHOD, SET_REAL_METHOD,
                                            SET_CAPABILITY_ENUM_BOOL, ADD_SHADER_PROFILE_STRING
                                           };

                ///决定性能类型的键值是什么
                typedef map<EVString, CapabilityKeywordType> KeywordTypeMap;
                KeywordTypeMap mKeywordTypeMap;
                typedef void (CRenderSystemCapabilities::*SetStringMethod)(const EVString &);
                /// maps capability keywords to setCapability(EVString& cap) style methods
                typedef map<EVString, SetStringMethod> SetStringMethodDispatchTable;
                SetStringMethodDispatchTable mSetStringMethodDispatchTable;
                /// SET_INT_METHOD parsing tables
                typedef void (CRenderSystemCapabilities::*SetIntMethod)(ev_uint16);
                typedef map<EVString, SetIntMethod> SetIntMethodDispatchTable;
                SetIntMethodDispatchTable mSetIntMethodDispatchTable;
                /// SET_BOOL_METHOD parsing tables
                typedef void (CRenderSystemCapabilities::*SetBoolMethod)(ev_bool);
                typedef map<EVString, SetBoolMethod> SetBoolMethodDispatchTable;
                SetBoolMethodDispatchTable mSetBoolMethodDispatchTable;
                /// SET_REAL_METHOD parsing tables
                typedef void (CRenderSystemCapabilities::*SetRealMethod)(Real);
                typedef map<EVString, SetRealMethod> SetRealMethodDispatchTable;
                SetRealMethodDispatchTable mSetRealMethodDispatchTable;
                typedef map<EVString, Capabilities> CapabilitiesMap;
                CapabilitiesMap mCapabilitiesMap;
                inline void addCapabilitiesMapping(EVString name, Capabilities cap)
                {
                    mCapabilitiesMap.insert(CapabilitiesMap::value_type(name, cap));
                }

                /// capabilities lines for parsing are collected along with their line numbers for debugging
                typedef vector<std::pair<EVString, ev_int32> > CapabilitiesLinesList;
                /// the set of states that the parser can be in
                enum ParseAction {PARSE_HEADER, FIND_OPEN_BRACE, COLLECT_LINES};
                ev_int32 mCurrentLineNumber;
                EVString *mCurrentLine;
                EarthView::World::Core::DataStreamPtr mCurrentStream;
                EarthView::World::Graphic::CRenderSystemCapabilities *mCurrentCapabilities;
                inline void addKeywordType(EVString keyword, CapabilityKeywordType type)
                {
                    mKeywordTypeMap.insert(KeywordTypeMap::value_type(keyword, type));
                }
                inline CapabilityKeywordType getKeywordType(const EVString &keyword) const
                {
                    KeywordTypeMap::const_iterator it = mKeywordTypeMap.find(keyword);
                    if(it != mKeywordTypeMap.end())
                        return (*it).second;
                    else
                    {
                        logParseError("Can't find the type for keyword: " + keyword);
                        return UNDEFINED_CAPABILITY_TYPE;
                    }
                }
                inline void addSetStringMethod(EVString keyword, SetStringMethod method)
                {
                    mSetStringMethodDispatchTable.insert(SetStringMethodDispatchTable::value_type(keyword, method));
                }
                inline void callSetStringMethod(_inout EVString &keyword, _inout EVString &val)
                {
                    SetStringMethodDispatchTable::iterator methodIter = mSetStringMethodDispatchTable.find(keyword);
                    if (methodIter != mSetStringMethodDispatchTable.end())
                    {
                        SetStringMethod m = (*methodIter).second;
                        (mCurrentCapabilities->*m)(val);
                    }
                    else
                    {
                        logParseError("undefined keyword: " + keyword);
                    }
                }

                inline void addSetIntMethod(EVString keyword, SetIntMethod method)
                {
                    mSetIntMethodDispatchTable.insert(SetIntMethodDispatchTable::value_type(keyword, method));
                }
                inline void callSetIntMethod( EVString &keyword, ev_uint16 val)
                {
                    SetIntMethodDispatchTable::iterator methodIter = mSetIntMethodDispatchTable.find(keyword);
                    if (methodIter != mSetIntMethodDispatchTable.end())
                    {
                        SetIntMethod m = (*methodIter).second;
                        (mCurrentCapabilities->*m)(val);
                    }
                    else
                    {
                        logParseError("undefined keyword: " + keyword);
                    }
                }

                inline void addSetBoolMethod(EVString keyword, SetBoolMethod method)
                {
                    mSetBoolMethodDispatchTable.insert(SetBoolMethodDispatchTable::value_type(keyword, method));
                }
                inline void callSetBoolMethod( EVString &keyword, ev_bool val)
                {
                    SetBoolMethodDispatchTable::iterator methodIter = mSetBoolMethodDispatchTable.find(keyword);
                    if (methodIter != mSetBoolMethodDispatchTable.end())
                    {
                        SetBoolMethod m = (*methodIter).second;
                        (mCurrentCapabilities->*m)(val);
                    }
                    else
                    {
                        logParseError("undefined keyword: " + keyword);
                    }
                }

                inline void addSetRealMethod(EVString keyword, SetRealMethod method)
                {
                    mSetRealMethodDispatchTable.insert(SetRealMethodDispatchTable::value_type(keyword, method));
                }
                inline void callSetRealMethod(EVString &keyword, Real val)
                {
                    SetRealMethodDispatchTable::iterator methodIter = mSetRealMethodDispatchTable.find(keyword);
                    if (methodIter != mSetRealMethodDispatchTable.end())
                    {
                        SetRealMethod m = (*methodIter).second;
                        (mCurrentCapabilities->*m)(val);
                    }
                    else
                    {
                        logParseError("undefined keyword: " + keyword);
                    }
                }
                inline void addShaderProfile(EVString &val)
                {
                    mCurrentCapabilities->addShaderProfile(val);
                }
                inline void setCapabilityEnumBool(EVString &name, ev_bool val)
                {
                    /// check for errors
                    if(mCapabilitiesMap.find(name) == mCapabilitiesMap.end())
                    {
                        logParseError("Undefined capability: " + name);
                        return;
                    }
                    /// only set true capabilities, we can't unset false
                    if(val)
                    {
                        Capabilities cap = mCapabilitiesMap[name];
                        mCurrentCapabilities->setCapability(cap);
                    }
                }
                void initialiaseDispatchTables();
                void parseCapabilitiesLines(CapabilitiesLinesList &linesList);
                void logParseError(const EVString &error) const;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

