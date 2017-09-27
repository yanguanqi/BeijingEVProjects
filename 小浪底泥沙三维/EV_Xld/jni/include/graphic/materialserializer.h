#ifndef __MaterialSerializer_H__
#define __MaterialSerializer_H__
#include <core/commonstringpairlist.h>
#include "material.h"
#include "textureunitstate.h"
#include "gpuprogram.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Enum to identify material sections. */
            enum MaterialScriptSection
            {
                MSS_NONE,
                MSS_MATERIAL,
                MSS_TECHNIQUE,
                MSS_PASS,
                MSS_TEXTUREUNIT,
                MSS_PROGRAM_REF,
                MSS_PROGRAM,
                MSS_DEFAULT_PARAMETERS,
                MSS_TEXTURESOURCE
            };
            /** Struct for holding a program definition which is in progress. */
            class EV_GRAPHIC_DLL MaterialScriptProgramDefinition : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                MaterialScriptProgramDefinition(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                MaterialScriptProgramDefinition() {}
                EVString name;
                EarthView::World::Graphic::GpuProgramType progType;
                EVString language;
                EVString source;
                EVString syntax;
                ev_bool supportsSkeletalAnimation;
                ev_bool supportsMorphAnimation;
                ev_uint16 supportsPoseAnimation; 			/// number of simultaneous poses supported
                ev_bool usesVertexTextureFetch;
                /*vector<std::pair<EVString, EVString> > customParameters;*/
                class EV_GRAPHIC_DLL StringPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    EVString first;
                    EVString second;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="fir">键</param>
                    /// <param name="sec">值</param>
                    /// <returns></returns>
                    StringPair(_in EVString fir, _in EVString sec)
                    {
                        first = fir;
                        second = sec;
                    }
                    StringPair()
                    {
                    }
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    StringPair(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList && pList->Count() > 0)
                        {
                            first = *(EVString *)pList->GetAt("fir");
                            second = *(EVString *)pList->GetAt("sec");
                        }
                        else
                        {
                        }
                    }
                };

                class EV_GRAPHIC_DLL MaterialStringPairList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    MaterialStringPairList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    MaterialStringPairList() {}
                    void push_back(EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair &back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair const &t)
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
                    EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair const &at(ev_size_t n) const
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
                EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList customParameters;
            };
            /** Struct for holding the script context while parsing. */
            /*struct MaterialScriptContext */
            class EV_GRAPHIC_DLL MaterialScriptContext : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                MaterialScriptContext(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                MaterialScriptContext();
                EarthView::World::Graphic::MaterialScriptSection section;
                EVString groupName;
                EarthView::World::Graphic::CMaterialPtr material;
                EarthView::World::Graphic::CTechnique *technique;
                EarthView::World::Graphic::CPass *pass;
                EarthView::World::Graphic::CTextureUnitState *textureUnit;
                EarthView::World::Graphic::CGpuProgramPtr program; 			/// used when referencing a program, not when defining it

                ev_bool isVertexProgramShadowCaster; 			/// when referencing, are we in context of shadow caster
                ev_bool isFragmentProgramShadowCaster; 			/// when referencing, are we in context of shadow caster
                ev_bool isVertexProgramShadowReceiver; 			/// when referencing, are we in context of shadow caster
                ev_bool isFragmentProgramShadowReceiver; 			/// when referencing, are we in context of shadow caster
                EarthView::World::Graphic::GpuProgramParametersSharedPtr programParams;
                ev_uint16 numAnimationParametrics;
                EarthView::World::Graphic::MaterialScriptProgramDefinition *programDef; 			/// this is used while defining a program
                ev_int32 techLev,				///Keep track of what tech, pass, and state level we are in
                         passLev,
                         stateLev;
                EarthView::World::Core::StringVector defaultParamLines;
                /// Error reporting state
                ev_size_t lineNo;
                EVString filename;
                EarthView::World::Core::AliasTextureNamePairList textureAliases;
            };
            //// CFunction def for material attribute parser; return value determines if the next line should be {
            typedef ev_bool (*ATTRIBUTE_PARSER)(EVString &params, MaterialScriptContext &context);
            /// <summary>
            /// 材质连载
            /// </summary>
            class EV_GRAPHIC_DLL CMaterialSerializer : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /// EarthView::World::Graphic::CMaterial serizliae event.
                enum SerializeEvent
                {
                    MSE_PRE_WRITE,
                    MSE_WRITE_BEGIN,
                    MSE_WRITE_END,
                    MSE_POST_WRITE
                };
                /// <summary>
                /// 监听材质连载过程的各个阶段
                /// </summary>
                class EV_GRAPHIC_DLL CMaterialSerializerListener : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CMaterialSerializerListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CMaterialSerializerListener();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CMaterialSerializerListener();

                    /// <summary>
                    /// 当材质类事件触发时被调用
                    /// </summary>
                    /// <param name="ser">EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质</param>
                    /// <param name="event">事件</param>
                    /// <param name="skip">如果设置为true,跳过下面部分的写入</param>
                    /// <param name="mat">被写入的材质</param>
                    /// <returns></returns>
                    virtual void materialEventRaised(EarthView::World::Graphic::CMaterialSerializer *ser,
                                                     EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CMaterial *mat);
                    /// <summary>
                    /// 当技术类事件触发时被调用
                    /// </summary>
                    /// <param name="ser">EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质</param>
                    /// <param name="event">事件</param>
                    /// <param name="skip">如果设置为true,跳过下面部分的写入</param>
                    /// <param name="mat">被写入的技术</param>
                    /// <returns></returns>
                    virtual void techniqueEventRaised(EarthView::World::Graphic::CMaterialSerializer *ser,
                                                      EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CTechnique *tech);
                    /// <summary>
                    /// 当通路事件触发时被调用
                    /// </summary>
                    /// <param name="ser">EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质</param>
                    /// <param name="event">事件</param>
                    /// <param name="skip">如果设置为true,跳过下面部分的写入</param>
                    /// <param name="mat">被写入的通路</param>
                    /// <returns></returns>
                    virtual void passEventRaised(EarthView::World::Graphic::CMaterialSerializer *ser,
                                                 EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CPass *pass);
                    /// <summary>
                    /// 当GPU程序事件触发时被调用
                    /// </summary>
                    /// <param name="ser">EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质</param>
                    /// <param name="event">事件</param>
                    /// <param name="skip">如果设置为true,跳过下面部分的写入</param>
                    /// <param name="attrib">GPU程序引用的描述</param>
                    /// <param name="program">被写入的程序</param>
                    /// <param name="params">程序参数</param>
                    /// <param name="defaultParams">程序的默认参数</param>
                    /// <returns></returns>
                    void gpuProgramRefEventRaised(EarthView::World::Graphic::CMaterialSerializer *ser,
                                                  EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip,
                                                  const EVString &attrib,
                                                  const EarthView::World::Graphic::CGpuProgramPtr &program,
                                                  const EarthView::World::Graphic::GpuProgramParametersSharedPtr &params,
                                                  EarthView::World::Graphic::CGpuProgramParameters *defaultParams);
                    /// <summary>
                    /// 当纹理单元状态事件触发时被调用
                    /// </summary>
                    /// <param name="ser">EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质</param>
                    /// <param name="event">事件</param>
                    /// <param name="skip">如果设置为true,跳过下面部分的写入</param>
                    /// <param name="textureUnit">被写入的纹理单元状态</param>
                    /// <returns></returns>
                    virtual void textureUnitStateEventRaised(EarthView::World::Graphic::CMaterialSerializer *ser,
                            EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CTextureUnitState *textureUnit);
                };
            protected:
                //// Keyword-mapped attribute parsers.
                typedef map<EVString, ATTRIBUTE_PARSER> AttribParserList;
                MaterialScriptContext mScriptContext;
                /// <summary>
                /// 解析材质
                /// </summary>
                /// <param name="line">脚本行</param>
                /// <returns>如果下一行是‘{’ 则返回true</returns>
                ev_bool parseScriptLine(EVString &line);

                /// <summary>
                /// 查找并调用属性解析器
                /// </summary>
                /// <param name="line">脚本行</param>
                /// <param name="parsers">解析器</param>
                /// <returns></returns>
                ev_bool invokeParser(EVString &line, AttribParserList &parsers);
                /// <summary>
                /// 保存已建立的程序的定义
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void finishProgramDefinition();
                //// Parsers for the root of the material script
                AttribParserList mRootAttribParsers;
                //// Parsers for the material section of a script
                AttribParserList mMaterialAttribParsers;
                //// Parsers for the technique section of a script
                AttribParserList mTechniqueAttribParsers;
                //// Parsers for the pass section of a script
                AttribParserList mPassAttribParsers;
                //// Parsers for the texture unit section of a script
                AttribParserList mTextureUnitAttribParsers;
                //// Parsers for the program reference section of a script
                AttribParserList mProgramRefAttribParsers;
                //// Parsers for the program definition section of a script
                AttribParserList mProgramAttribParsers;
                //// Parsers for the program definition section of a script
                AttribParserList mProgramDefaultParamAttribParsers;
                //// Listeners list of this CSerializer.
                typedef vector<EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *>	ListenerList;
                typedef ListenerList::iterator			ListenerListIterator;
                typedef ListenerList::const_iterator	ListenerListConstIterator;
                ListenerList mListeners;

                void writeMaterial(const EarthView::World::Graphic::CMaterialPtr &pMat, const EVString &materialName = "");
                void writeTechnique(const EarthView::World::Graphic::CTechnique *pTech);
                void writePass(const EarthView::World::Graphic::CPass *pPass);
                void writeVertexProgramRef(const EarthView::World::Graphic::CPass *pPass);
                void writeShadowCasterVertexProgramRef(const EarthView::World::Graphic::CPass *pPass);
                void writeShadowCasterFragmentProgramRef(const EarthView::World::Graphic::CPass *pPass);
                void writeShadowReceiverVertexProgramRef(const EarthView::World::Graphic::CPass *pPass);
                void writeShadowReceiverFragmentProgramRef(const EarthView::World::Graphic::CPass *pPass);
                void writeFragmentProgramRef(const EarthView::World::Graphic::CPass *pPass);
                void writeGpuProgramRef(const EVString &attrib, const EarthView::World::Graphic::CGpuProgramPtr &program, const EarthView::World::Graphic::GpuProgramParametersSharedPtr &params);
                void writeGpuPrograms();
                void writeGPUProgramParameters(const EarthView::World::Graphic::GpuProgramParametersSharedPtr &params, EarthView::World::Graphic::CGpuProgramParameters *defaultParams,
                                               const ev_uint16 level = 4, const ev_bool useMainBuffer = true);
                void writeNamedGpuProgramParameters(const EarthView::World::Graphic::GpuProgramParametersSharedPtr &params, EarthView::World::Graphic::CGpuProgramParameters *defaultParams,
                                                    const ev_uint16 level = 4, const ev_bool useMainBuffer = true);
                void writeLowLevelGpuProgramParameters(const EarthView::World::Graphic::GpuProgramParametersSharedPtr &params, EarthView::World::Graphic::CGpuProgramParameters *defaultParams,
                                                       const ev_uint16 level = 4, const ev_bool useMainBuffer = true);
                void writeGpuProgramParameter(
                    const EVString &commandName, const EVString &identifier,
                    const CGpuProgramParameters::CAutoConstantEntry *autoEntry,
                    const CGpuProgramParameters::CAutoConstantEntry *defaultAutoEntry,
                    ev_bool isFloat, ev_size_t physicalIndex, ev_size_t physicalSize,
                    const EarthView::World::Graphic::GpuProgramParametersSharedPtr &params, EarthView::World::Graphic::CGpuProgramParameters *defaultParams,
                    const ev_uint16 level, const ev_bool useMainBuffer);
                void writeTextureUnit(const EarthView::World::Graphic::CTextureUnitState *pTex);
                void writeSceneBlendFactor(const SceneBlendFactor c_src, const SceneBlendFactor c_dest,
                                           const SceneBlendFactor a_src, const SceneBlendFactor a_dest);
                void writeSceneBlendFactor(const SceneBlendFactor sbf_src, const SceneBlendFactor sbf_dest);
                void writeSceneBlendFactor(const SceneBlendFactor sbf);
                void writeCompareFunction(const CompareFunction cf);
                void writeColourValue(const CColourValue &colour, ev_bool writeAlpha = false);
                void writeLayerBlendOperationEx(const LayerBlendOperationEx op);
                void writeLayerBlendSource(const LayerBlendSource lbs);

                /*typedef multimap<CTextureUnitState::TextureEffectType, CTextureUnitState::TextureEffect> CTextureUnitStateEffectMap;*/
                void writeRotationEffect(const CTextureUnitState::TextureEffect &effect, const CTextureUnitState *pTex);
                void writeTransformEffect(const CTextureUnitState::TextureEffect &effect, const CTextureUnitState *pTex);
                void writeScrollEffect(const CTextureUnitState::TextureEffect &effect, const CTextureUnitState *pTex);
                void writeEnvironmentMapEffect(const CTextureUnitState::TextureEffect &effect, const CTextureUnitState *pTex);
                EVString convertFiltering(FilterOptions fo);

                /** Internal methods that invokes registered listeners callback.
                @see CMererialSerializerListener::materialEventRaised.
                */
                void fireMaterialEvent(EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CMaterial *mat);
                /** Internal methods that invokes registered listeners callback.
                @see CMererialSerializerListener::techniqueEventRaised.
                */
                void fireTechniqueEvent(EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CTechnique *tech);

                /** Internal methods that invokes registered listeners callback.
                @see CMererialSerializerListener::passEventRaised.
                */
                void firePassEvent(EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CPass *pass);

                /** Internal methods that invokes registered listeners callback.
                @see CMererialSerializerListener::gpuProgramRefEventRaised.
                */
                void fireGpuProgramRefEvent(EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip,
                                            const EVString &attrib,
                                            const EarthView::World::Graphic::CGpuProgramPtr &program,
                                            const EarthView::World::Graphic::GpuProgramParametersSharedPtr &params,
                                            EarthView::World::Graphic::CGpuProgramParameters *defaultParams);


                /** Internal methods that invokes registered listeners callback.
                @see CMaterialSerializerListener::textureUnitStateEventRaised.
                */
                void fireTextureUnitStateEvent(EarthView::World::Graphic::CMaterialSerializer::SerializeEvent event, ev_bool &skip, const EarthView::World::Graphic::CTextureUnitState *textureUnit);

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CMaterialSerializer(EarthView::World::Core::CNameValuePairList *pList);
            public:

                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CMaterialSerializer();

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CMaterialSerializer();
                /// <summary>
                /// 材质队列的内部缓存输出
                /// </summary>
                /// <param name="pMat">材质指针</param>
                /// <param name="clearQueued">如果为true，材质的所有队列被清除</param>
                /// <param name="exportDefaults">如果为true，默认的属性会被包含在脚本文件中输出，否则会被忽略</param>
                /// <param name="materialName">允许材质以不同的名称输出</param>
                /// <returns></returns>
                void queueForExport(const EarthView::World::Graphic::CMaterialPtr &pMat, ev_bool clearQueued , ev_bool exportDefaults, const EVString &materialName);
                /// <summary>
                /// 材质队列的内部缓存输出
                /// </summary>
                /// <param name="pMat">材质指针</param>
                /// <param name="clearQueued">如果为true，材质的所有队列被清除</param>
                /// <param name="exportDefaults">如果为true，默认的属性会被包含在脚本文件中输出，否则会被忽略</param>
                /// <returns></returns>
                void queueForExport(const EarthView::World::Graphic::CMaterialPtr &pMat, ev_bool clearQueued, ev_bool exportDefaults);
                /// <summary>
                /// 材质队列的内部缓存输出
                /// </summary>
                /// <param name="pMat">材质指针</param>
                /// <param name="clearQueued">如果为true，材质的所有队列被清除</param>
                /// <returns></returns>
                void queueForExport(const EarthView::World::Graphic::CMaterialPtr &pMat, ev_bool clearQueued);
                /// <summary>
                /// 材质队列的内部缓存输出
                /// </summary>
                /// <param name="pMat">材质指针</param>
                /// <returns></returns>
                void queueForExport(const EarthView::World::Graphic::CMaterialPtr &pMat);
                /// <summary>
                /// 将材质队列输出到一个已命名的材质脚本文件中
                /// </summary>
                /// <param name="filename">输出脚本文件的名称</param>
                /// <param name="includeProgDef">如果为true，顶点程序和片段程序的定义将写入到脚本文件的顶部</param>
                /// <param name="programFilename">顶点/片段程序脚本文件的名称</param>
                /// <returns></returns>
                void exportQueued(const EVString &filename, const ev_bool includeProgDef , const EVString &programFilename);
                /// <summary>
                /// 将材质队列输出到一个已命名的材质脚本文件中
                /// </summary>
                /// <param name="filename">输出脚本文件的名称</param>
                /// <param name="includeProgDef">如果为true，顶点程序和片段程序的定义将写入到脚本文件的顶部</param>
                /// <returns></returns>
                void exportQueued(const EVString &filename, const ev_bool includeProgDef);
                /// <summary>
                /// 将材质队列输出到一个已命名的材质脚本文件中
                /// </summary>
                /// <param name="filename">输出脚本文件的名称</param>
                /// <returns></returns>
                void exportQueued(const EVString &filename);

                /// <summary>
                /// 输出单独的材质内存到已命名的材质脚本文件中
                /// </summary>
                /// <param name="pMat"></param>
                /// <param name="filename">输出脚本文件的名称</param>
                /// <param name="exportDefaults">如果为true，输出所有的值</param>
                /// <param name="includeProgDef">如果为true，在输出的脚本文件中包含Gpu阴影程序的定义，如果为false，这个程序的定义将会被输出到programFilename文件中</param>
                /// <param name="programFilename">顶点/片段程序脚本文件的名称，只有在includeProgDef为false情况下使用</param>
                /// <param name="materialName">允许材质以不同的名字输出</param>
                /// <returns></returns>
                void exportMaterial(const EarthView::World::Graphic::CMaterialPtr &pMat, const EVString &filename, ev_bool exportDefaults,
                                    const ev_bool includeProgDef, const EVString &programFilename ,
                                    const EVString &materialName );
                /// <summary>
                /// 输出单独的材质内存到已命名的材质脚本文件中
                /// </summary>
                /// <param name="pMat"></param>
                /// <param name="filename">输出脚本文件的名称</param>
                /// <param name="exportDefaults">如果为true，输出所有的值</param>
                /// <param name="includeProgDef">如果为true，在输出的脚本文件中包含Gpu阴影程序的定义，如果为false，这个程序的定义将会被输出到programFilename文件中</param>
                /// <param name="programFilename">顶点/片段程序脚本文件的名称，只有在includeProgDef为false情况下使用</param>
                /// <returns></returns>
                void exportMaterial(const EarthView::World::Graphic::CMaterialPtr &pMat, const EVString &filename, ev_bool exportDefaults,
                                    const ev_bool includeProgDef, const EVString &programFilename);
                /// <summary>
                /// 输出单独的材质内存到已命名的材质脚本文件中
                /// </summary>
                /// <param name="pMat"></param>
                /// <param name="filename">输出脚本文件的名称</param>
                /// <param name="exportDefaults">如果为true，输出所有的值</param>
                /// <param name="includeProgDef">如果为true，在输出的脚本文件中包含Gpu阴影程序的定义，如果为false，这个程序的定义将会被输出到programFilename文件中</param>
                /// <returns></returns>
                void exportMaterial(const EarthView::World::Graphic::CMaterialPtr &pMat, const EVString &filename, ev_bool exportDefaults, const ev_bool includeProgDef );
                /// <summary>
                /// 输出单独的材质内存到已命名的材质脚本文件中
                /// </summary>
                /// <param name="pMat"></param>
                /// <param name="filename">输出脚本文件的名称</param>
                /// <param name="exportDefaults">如果为true，输出所有的值</param>
                /// <returns></returns>
                void exportMaterial(const EarthView::World::Graphic::CMaterialPtr &pMat, const EVString &filename, ev_bool exportDefaults);
                /// <summary>
                /// 输出单独的材质内存到已命名的材质脚本文件中
                /// </summary>
                /// <param name="pMat"></param>
                /// <param name="filename">输出脚本文件的名称</param>
                /// <returns></returns>
                void exportMaterial(const EarthView::World::Graphic::CMaterialPtr &pMat, const EVString &filename);

                /// <summary>
                ///  获得解析的材质
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EVString &getQueuedAsString() const;
                /// <summary>
                ///  清空内部缓存
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clearQueue();
                /// <summary>
                ///  解析材质脚本文件
                /// </summary>
                /// <param name="stream">数据流</param>
                /// <param name="groupName">资源组名称</param>
                /// <returns></returns>
                void parseScript(EarthView::World::Core::DataStreamPtr &stream, const EVString &groupName);
                /// <summary>
                ///  注册一个监听器到CSerializer类
                /// </summary>
                /// <param name="listener">监听器</param>
                /// <returns></returns>
                void addListener(EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *ref_listener);
                /// <summary>
                ///  删除监听器
                /// </summary>
                /// <param name="listener">监听器</param>
                /// <returns></returns>
                void removeListener(EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener *listener);
            private:
                EVString mBuffer;
                EVString mGpuProgramBuffer;
                typedef set<EVString> GpuProgramDefinitionContainer;
                typedef GpuProgramDefinitionContainer::iterator GpuProgramDefIterator;
                GpuProgramDefinitionContainer mGpuProgramDefinitionContainer;
                ev_bool mDefaults;

            public:
                void beginSection(ev_uint16 level, const ev_bool useMainBuffer );

                void beginSection(ev_uint16 level);
                void endSection(ev_uint16 level, const ev_bool useMainBuffer);

                void endSection(ev_uint16 level);
                void writeAttribute(ev_uint16 level, const EVString &att, const ev_bool useMainBuffer);

                void writeAttribute(ev_uint16 level, const EVString &att);
                void writeValue(const EVString &val, const ev_bool useMainBuffer );

                void writeValue(const EVString &val);
                EVString quoteWord(const EVString &val);
                void writeComment(ev_uint16 level, const EVString &comment, const ev_bool useMainBuffer );

                void writeComment(ev_uint16 level, const EVString &comment);
            };
        }
    }
}

#endif

