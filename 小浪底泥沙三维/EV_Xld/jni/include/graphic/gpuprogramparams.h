#ifndef __GpuProgramParams_H_
#define __GpuProgramParams_H_
#include "graphic/graphic_config.h"
#include <mathengine/ev_math.h>
#include <mathengine/vector4.h>
#include <core/sharedptr.h>
#include <core/iteratorwrapper.h>
#include "serializer.h"
#include <core/any.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector4;
				class CVector3;
				class CMatrix4;
			}
		}

	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CAutoParamDataSource;
            class CColourValue;

            /**** Enumeration of the types of constant we may encounter in programs.
            @note Low-level programs, by definition, will always use either
            float4 or int4 constant types since that is the fundamental underlying
            type in assembler.
            ****/
            enum GpuConstantType
            {
                GCT_FLOAT1 = 1,
                GCT_FLOAT2 = 2,
                GCT_FLOAT3 = 3,
                GCT_FLOAT4 = 4,
                GCT_SAMPLER1D = 5,
                GCT_SAMPLER2D = 6,
                GCT_SAMPLER3D = 7,
                GCT_SAMPLERCUBE = 8,
                GCT_SAMPLER1DSHADOW = 9,
                GCT_SAMPLER2DSHADOW = 10,
                GCT_SAMPLER2DARRAY = 11,
                GCT_MATRIX_2X2 = 12,
                GCT_MATRIX_2X3 = 13,
                GCT_MATRIX_2X4 = 14,
                GCT_MATRIX_3X2 = 15,
                GCT_MATRIX_3X3 = 16,
                GCT_MATRIX_3X4 = 17,
                GCT_MATRIX_4X2 = 18,
                GCT_MATRIX_4X3 = 19,
                GCT_MATRIX_4X4 = 20,
                GCT_INT1 = 21,
                GCT_INT2 = 22,
                GCT_INT3 = 23,
                GCT_INT4 = 24,
                GCT_UNKNOWN = 99
            };
            /**** The variability of a GPU parameter, as derived from auto-params targetting it.
            These values must be powers of two since they are used in masks.
            ****/
            enum GpuParamVariability
            {
                //// No variation except by manual setting - the default
                GPV_GLOBAL = 1,
                //// Varies per object (based on an auto param usually), but not per light setup
                GPV_PER_OBJECT = 2,
                //// Varies with light setup
                GPV_LIGHTS = 4,
                //// Varies with pass iteration number
                GPV_PASS_ITERATION_NUMBER = 8,

                //// Full mask (16-bit)
                GPV_ALL = 0xFFFF
            };
            /**** Enumerates the types of programs which can run on the GPU. */
            enum GpuProgramType
            {
                GPT_VERTEX_PROGRAM,
                GPT_FRAGMENT_PROGRAM,
                GPT_GEOMETRY_PROGRAM
            };
            /**** Information about predefined program constants.
            @note Only available for high-level programs but is referenced generically
            by EarthView::World::Graphic::CGpuProgramParameters.
            */
            class EV_GRAPHIC_DLL GpuConstantDefinition: public EarthView::World::Core::CBaseObject
            {
            public:
                //// Data type
                EarthView::World::Graphic::GpuConstantType constType;
                //// Physical start index in buffer (either ev_real32 or ev_int32 buffer)
                ev_size_t physicalIndex;
                //// Logical index - used to communicate this constant to the rendersystem
                ev_size_t logicalIndex;
                /**** Number of raw buffer slots per element
                (some programs pack each array element to float4, some do not) ****/
                ev_size_t elementSize;
                //// Length of array
                ev_size_t arraySize;
                //// How this parameter varies (bitwise combination of GpuProgramVariability)
                mutable ev_uint16 variability;
                ev_bool isFloat() const;
                static ev_bool isFloat(EarthView::World::Graphic::GpuConstantType c);
                ev_bool isSampler() const;
                static ev_bool isSampler(EarthView::World::Graphic::GpuConstantType c);

                /**** Get the element size of a given type, including whether to pad the
                	elements into multiples of 4 (e.g. SM1 and D3D does, GLSL doesn't)
                ****/
                static ev_size_t getElementSize(EarthView::World::Graphic::GpuConstantType ctype, ev_bool padToMultiplesOf4);
                GpuConstantDefinition();
            ev_private:
                GpuConstantDefinition(EarthView::World::Core::CNameValuePairList *pList);
            };
            ////typedef map<EVString, EarthView::World::Graphic::GpuConstantDefinition> EarthView::World::Graphic::GpuConstantDefinitionMap;

            class EV_GRAPHIC_DLL GpuConstantDefinitionMap : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                GpuConstantDefinitionMap(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                GpuConstantDefinitionMap();
                /// <summary>
                /// 增加节点动画集合元素
                /// </summary>
                /// <param name="key">键</param>
                /// <param name="val">值</param>
                /// <returns>成功增加true，否则false</returns>
                ev_bool push(_in const EVString &key, _in EarthView::World::Graphic::GpuConstantDefinition const &val);
                /// <summary>
                /// 判断元素是否存在
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>存在true，否则false</returns>
                ev_bool exist(_in const EVString &key);
                /// <summary>
                /// 重载[]操作符
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回键对应的值</returns>
                EarthView::World::Graphic::GpuConstantDefinition &operator[](_in const EVString &key);
                /// <summary>
                /// 获得键对应的值
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回键对应的值</returns>
                EarthView::World::Graphic::GpuConstantDefinition &get(_in const EVString &key);
                /// <summary>
                /// 删除键对应的值
                /// </summary>
                /// <param name="key">键</param>
                /// <returns></returns>
                void erase(_in const EVString &key);
                /// <summary>
                /// 返回集合的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>集合的大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 清空集合
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 判断集合是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>集合为空返回true，否则false</returns>
                ev_bool empty() const;
            ev_private:
                typedef map<EVString, EarthView::World::Graphic::GpuConstantDefinition> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                /// <summary>
                /// 集合插入元素
                /// </summary>
                /// <param name="val">值</param>
                /// <returns>插入后的键值对</returns>
                _Pairib insert(_in const value_type &val);
                /// <summary>
                /// 查找元素
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>查找后返回对应迭代器</returns>
                iterator find(_in const EVString &key);
                /// <summary>
                /// 查找元素
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>查找后返回对应迭代器</returns>
                const_iterator find(_in const EVString &key) const;
            private:
                InternalList mList;
            };
            ////typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::GpuConstantDefinitionMap> EarthView::World::Graphic::GpuConstantDefinitionIterator;
            /// <summary>
            ///
            ///
            /// </summary>
            class EV_GRAPHIC_DLL GpuConstantDefinitionPair: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                GpuConstantDefinitionPair(EarthView::World::Core::CNameValuePairList *pList);
            public:
                GpuConstantDefinitionPair();
                EVString first;
                EarthView::World::Graphic::GpuConstantDefinition second;
            };
            /// <summary>
            ///
            ///
            /// </summary>
            class EV_GRAPHIC_DLL GpuConstantDefinitionIterator : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::GpuConstantDefinitionMap> InternalIterator;
                typedef InternalIterator::const_iterator const_iterator;
                typedef InternalIterator::iterator iterator;
                typedef InternalIterator::const_iterator IteratorType;
                typedef InternalIterator::PairType PairType;
                typedef InternalIterator::KeyType KeyType;
                typedef InternalIterator::ValueType ValueType;
                typedef InternalIterator::PointerType PointerType;
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="first">首迭代器</param>
                /// <param name="last">尾迭代器</param>
                /// <returns></returns>
                GpuConstantDefinitionIterator(_in const_iterator first, _in const_iterator last);
                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="other">NodeTrackIterator类的引用</param>
                /// <returns>返回赋值后的引用</returns>
                EarthView::World::Graphic::GpuConstantDefinitionIterator &operator=(_in const EarthView::World::Graphic::GpuConstantDefinitionIterator &other);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~GpuConstantDefinitionIterator();
                /// <summary>
                /// 返回容器当前的键
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的键</returns>
                KeyType peekNextKey() const;
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值</returns>
                ValueType peekNextValue () const;
                /// <summary>
                /// 返回容器当前的值指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值指针</returns>
                const PointerType peekNextValuePtr ();
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值</returns>
                ValueType getNext();
                /// <summary>
                /// 返回容器首迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器首迭代器</returns>
                const IteratorType &begin();
                /// <summary>
                /// 返回容器当前迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器当前迭代器</returns>
                IteratorType &current();
                /// <summary>
                /// 返回容器尾迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器尾迭代器</returns>
                const IteratorType &end();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                GpuConstantDefinitionIterator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 复制构造函数
                /// </summary>
                /// <param name="other">其它迭代器</param>
                /// <returns></returns>
                GpuConstantDefinitionIterator(_in const GpuConstantDefinitionIterator &other);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="lst">迭代器对应集合</param>
                /// <returns></returns>
                GpuConstantDefinitionIterator(_in EarthView::World::Graphic::GpuConstantDefinitionMap &lst);
                /// <summary>
                /// 判断迭代器是否到达容器末尾
                /// </summary>
                /// <param name=""></param>
                /// <returns>是返回true，否则false</returns>
                ev_bool hasMoreElements () const;
                /// <summary>
                /// 迭代器位置后移
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void moveNext ();
                /// <summary>
                /// 返回容器当前的键
                /// </summary>
                /// <param name=""></param>
                /// <returns>键</returns>
                EVString nextKey() const;
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                EarthView::World::Graphic::GpuConstantDefinition nextValue() const;
                /// <summary>
                /// 返回容器当前的值指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>值地址</returns>
                EarthView::World::Graphic::GpuConstantDefinition *nextValuePtr();
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                EarthView::World::Graphic::GpuConstantDefinition next();
                /// <summary>
                /// 返回容器首键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>首键值对</returns>
                const EarthView::World::Graphic::GpuConstantDefinitionPair &getBegin();
                /// <summary>
                /// 返回容器尾键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>尾键值对</returns>
                const EarthView::World::Graphic::GpuConstantDefinitionPair &getEnd();
                /// <summary>
                /// 返回容器当前键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前键值对</returns>
                const EarthView::World::Graphic::GpuConstantDefinitionPair &getCurrent();
            private:
                InternalIterator *mIterator;
                EarthView::World::Graphic::GpuConstantDefinitionPair mBeginPair;
                EarthView::World::Graphic::GpuConstantDefinitionPair mCurrentPair;
                EarthView::World::Graphic::GpuConstantDefinitionPair mEndPair;
                EarthView::World::Graphic::GpuConstantDefinition mptr;
                ValueType mvt;
            };
            //// Struct collecting together the information for named constants.
            class EV_GRAPHIC_DLL GpuNamedConstants : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                GpuNamedConstants(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Total size of the ev_real32 buffer required
                ev_size_t floatBufferSize;
                //// Total size of the ev_int32 buffer required
                ev_size_t intBufferSize;
                //// Map of parameter names to EarthView::World::Graphic::GpuConstantDefinition
                EarthView::World::Graphic::GpuConstantDefinitionMap map;
                GpuNamedConstants();
                /**** Generate additional constant entries for arrays based on a base definition.
                @remarks
                Array uniforms will be added just with their base name with no array
                suffix. This method will add named entries for array suffixes too
                so individual array entries can be addressed. Note that we only
                individually index array elements if the array size is up to 16
                entries in size. Anything larger than that only gets a [0] entry
                as well as the main entry, to save cluttering up the name map. After
                all, you can address the larger arrays in a bulk fashion much more
                easily anyway.
                ****/
                void generateConstantDefinitionArrayEntries(const EVString &paramName,
                        const EarthView::World::Graphic::GpuConstantDefinition &baseDef);
                //// Indicates whether all array entries will be generated and added to the definitions map
                static ev_bool getGenerateAllConstantDefinitionArrayEntries();
                /**** Sets whether all array entries will be generated and added to the definitions map.
                @remarks
                Usually, array entries can only be individually indexed if they're up to 16 entries ev_int32,
                to save memory - arrays larger than that can be set but only via the bulk setting
                methods. This option allows you to choose to individually index every array entry.
                ****/
                static void setGenerateAllConstantDefinitionArrayEntries(ev_bool generateAll);
                /**** Saves constant definitions to a file, compatible with CGpuProgram::setManualNamedConstantsFile.
                @see CGpuProgram::setManualNamedConstantsFile
                ****/
                void save(const EVString &filename) const;
                /**** Loads constant definitions from a stream, compatible with CGpuProgram::setManualNamedConstantsFile.
                @see CGpuProgram::setManualNamedConstantsFile
                ****/
                void load(_inout EarthView::World::Core::DataStreamPtr &stream);
            protected:
                /**** Indicates whether all array entries will be generated and added to the definitions map
                @remarks
                Normally, the number of array entries added to the definitions map is capped at 16
                to save memory. Setting this value to <code>true</code> allows all of the entries
                to be generated and added to the map.
                ****/
                static ev_bool msGenerateAllConstantDefinitionArrayEntries;
            };
            /****typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuNamedConstants> EarthView::World::Graphic::GpuNamedConstantsPtr;****/
            class EV_GRAPHIC_DLL GpuNamedConstantsPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuNamedConstants>
            {
            ev_private:
                GpuNamedConstantsPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<GpuNamedConstants>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::GpuNamedConstants *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::GpuNamedConstants *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuNamedConstants>r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuNamedConstants>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                GpuNamedConstantsPtr() : EarthView::World::Core::CSharedPtr<GpuNamedConstants>() {}
                explicit GpuNamedConstantsPtr(GpuNamedConstants *ref_rep) : EarthView::World::Core::CSharedPtr<GpuNamedConstants>(ref_rep) {}
                explicit GpuNamedConstantsPtr(GpuNamedConstants *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<GpuNamedConstants>(ref_rep, inFreeMethod) {}
                GpuNamedConstantsPtr(const GpuNamedConstantsPtr &r) : EarthView::World::Core::CSharedPtr<GpuNamedConstants>(r) {}

                EarthView::World::Graphic::GpuNamedConstants *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuNamedConstants>::get();
                }
            };
            //// Simple class for loading / saving GpuNamedConstants
            class EV_GRAPHIC_DLL CGpuNamedConstantsSerializer : public EarthView::World::Graphic::CSerializer
            {
            ev_private:
                CGpuNamedConstantsSerializer(EarthView::World::Core::CNameValuePairList *pList);
            public:
                CGpuNamedConstantsSerializer();
                virtual ~CGpuNamedConstantsSerializer();
                void exportNamedConstants(const EarthView::World::Graphic::GpuNamedConstants *pConsts, const EVString &filename,
                                          EarthView::World::Graphic::CSerializer::Endian endianMode /*= ENDIAN_NATIVE*/);
                void exportNamedConstants(const EarthView::World::Graphic::GpuNamedConstants *pConsts, const EVString &filename);
                void exportNamedConstants(const EarthView::World::Graphic::GpuNamedConstants *pConsts, EarthView::World::Core::DataStreamPtr stream,
                                          EarthView::World::Graphic::CSerializer::Endian endianMode /*= ENDIAN_NATIVE*/);
                void exportNamedConstants(const EarthView::World::Graphic::GpuNamedConstants *pConsts, EarthView::World::Core::DataStreamPtr stream);
                void importNamedConstants(_inout EarthView::World::Core::DataStreamPtr &stream, _inout EarthView::World::Graphic::GpuNamedConstants *pDest);
            };
            /**** Structure recording the use of a physical buffer by a logical parameter
            index. Only used for low-level programs.
            ****/
            class EV_GRAPHIC_DLL GpuLogicalIndexUse: public EarthView::World::Core::CBaseObject
            {
            public:
                //// Physical buffer index
                ev_size_t physicalIndex;
                //// Current physical size allocation
                ev_size_t currentSize;
                //// How the contents of this slot vary
                mutable ev_uint16 variability;
                GpuLogicalIndexUse();
                GpuLogicalIndexUse(ev_size_t bufIdx, ev_size_t curSz, ev_uint16 v);
            ev_private:
                GpuLogicalIndexUse(EarthView::World::Core::CNameValuePairList *pList);
            };
            ///typedef map<ev_size_t, EarthView::World::Graphic::GpuLogicalIndexUse> EarthView::World::Graphic::GpuLogicalIndexUseMap;
            class EV_GRAPHIC_DLL GpuLogicalIndexUseMap : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                GpuLogicalIndexUseMap(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                GpuLogicalIndexUseMap();
                /// <summary>
                /// 增加节点动画集合元素
                /// </summary>
                /// <param name="key">键</param>
                /// <param name="val">值</param>
                /// <returns>成功增加true，否则false</returns>
                ev_bool push(_in const ev_size_t &key, _in EarthView::World::Graphic::GpuLogicalIndexUse const &val);
                /// <summary>
                /// 判断元素是否存在
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>存在true，否则false</returns>
                ev_bool exist(_in const ev_size_t &key);
                /// <summary>
                /// 重载[]操作符
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回键对应的值</returns>
                EarthView::World::Graphic::GpuLogicalIndexUse &operator[](_in const ev_size_t &key);
                /// <summary>
                /// 获得键对应的值
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回键对应的值</returns>
                EarthView::World::Graphic::GpuLogicalIndexUse &get(_in const ev_size_t &key);
                /// <summary>
                /// 删除键对应的值
                /// </summary>
                /// <param name="key">键</param>
                /// <returns></returns>
                void erase(_in const ev_size_t &key);
                /// <summary>
                /// 返回集合的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>集合的大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 清空集合
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 判断集合是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>集合为空返回true，否则false</returns>
                ev_bool empty() const;
            ev_private:
                typedef map<ev_size_t, EarthView::World::Graphic::GpuLogicalIndexUse> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                /// <summary>
                /// 集合插入元素
                /// </summary>
                /// <param name="val">值</param>
                /// <returns>插入后的键值对</returns>
                _Pairib insert(_in const value_type &val);
                /// <summary>
                /// 查找元素
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>查找后返回对应迭代器</returns>
                iterator find(_in const ev_size_t &key);
                /// <summary>
                /// 查找元素
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>查找后返回对应迭代器</returns>
                const_iterator find(_in const ev_size_t &key) const;
            private:
                InternalList mList;
            };
            //// Container struct to allow params to safely & update shared list of logical buffer assignments
            class EV_GRAPHIC_DLL GpuLogicalBufferStruct : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                GpuLogicalBufferStruct(EarthView::World::Core::CNameValuePairList *pList);
            public:
                EV_MUTEX(mutex)
                //// Map from logical index to physical buffer location
                EarthView::World::Graphic::GpuLogicalIndexUseMap map;
                //// Shortcut to know the buffer size needs
                ev_size_t bufferSize;
                GpuLogicalBufferStruct();
            };
            /****typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuLogicalBufferStruct> EarthView::World::Graphic::GpuLogicalBufferStructPtr;****/
            class EV_GRAPHIC_DLL GpuLogicalBufferStructPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuLogicalBufferStruct>
            {
            ev_private:
                GpuLogicalBufferStructPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<GpuLogicalBufferStruct>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::GpuLogicalBufferStruct *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::GpuLogicalBufferStruct *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuLogicalBufferStruct> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuLogicalBufferStruct>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                GpuLogicalBufferStructPtr() : EarthView::World::Core::CSharedPtr<GpuLogicalBufferStruct>() {}
                explicit GpuLogicalBufferStructPtr(GpuLogicalBufferStruct *ref_rep) : EarthView::World::Core::CSharedPtr<GpuLogicalBufferStruct>(ref_rep) {}
                explicit GpuLogicalBufferStructPtr(GpuLogicalBufferStruct *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<GpuLogicalBufferStruct>(ref_rep, inFreeMethod) {}
                GpuLogicalBufferStructPtr(const GpuLogicalBufferStructPtr &r) : EarthView::World::Core::CSharedPtr<GpuLogicalBufferStruct>(r) {}

                EarthView::World::Graphic::GpuLogicalBufferStruct *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::GpuLogicalBufferStruct>::get();
                }
            };
            /**** Definition of container that holds the current ev_real32 constants.
            @note Not necessarily in direct index order to constant indexes, logical
            to physical index map is derived from CGpuProgram
            ****/
            class EV_GRAPHIC_DLL FloatConstantList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<ev_real32> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                iterator insert(iterator pos, ev_real32 const &t);
                void insert(iterator pos, ev_size_t count, ev_real32 const &t);
            private:
                InternalList mList;
            ev_private:
                FloatConstantList(EarthView::World::Core::CNameValuePairList *pList);
            public:
                FloatConstantList();
                void push_back(ev_real32  const &t);
                void pop_back();

                ev_real32 &front();
                ev_real32 &back();
                void insert(ev_uint32 pos, ev_real32 const &t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                ev_real32 &operator[](ev_size_t n);
                ev_real32 const &operator[](ev_size_t n) const;
                ev_real32 &at(ev_size_t n);
                ev_real32 const &at(ev_size_t n) const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                void clear();
            };
            /**** Definition of container that holds the current ev_real32 constants.
            @note Not necessarily in direct index order to constant indexes, logical
            to physical index map is derived from CGpuProgram
            ****/
            class EV_GRAPHIC_DLL IntConstantList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<ev_int32> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList);
                iterator insert(iterator pos, ev_int32 const &t);
                void insert(iterator pos, ev_size_t count, ev_int32 const &t);
            private:
                InternalList mList;
            ev_private:
                IntConstantList(EarthView::World::Core::CNameValuePairList *pList);
            public:
                IntConstantList();
                void push_back(ev_int32  const &t);
                void pop_back();

                ev_int32 &front();
                ev_int32 &back();
                void insert(ev_uint32 pos, ev_int32 const &t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                ev_int32 &operator[](ev_size_t n);
                ev_int32 const &operator[](ev_size_t n) const;
                ev_int32 &at(ev_size_t n);
                ev_int32 const &at(ev_size_t n) const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                void clear();
            };
            /**** A group of manually updated parameters that are shared between many parameter sets.
            @remarks
            	Sometimes you want to set some common parameters across many otherwise
            	different parameter sets, and keep them all in sync together. This class
            	allows you to define a set of parameters that you can share across many
            	parameter sets and have the parameters that match automatically be pulled
            	from the shared set, rather than you having to set them on all the parameter
            	sets individually.
            @par
            	Parameters in a shared set are matched up with instances in a EarthView::World::Graphic::CGpuProgramParameters
            	structure by matching names. It is up to you to define the named parameters
            	that a shared set contains, and ensuring the definition matches.
            @note
            ****/
            class EV_GRAPHIC_DLL CGpuSharedParameters : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                EarthView::World::Graphic::GpuNamedConstants mNamedConstants;
                EarthView::World::Graphic::FloatConstantList mFloatConstants;
                EarthView::World::Graphic::IntConstantList mIntConstants;
                EVString mName;
                /// Optional data the rendersystem might want to store
                mutable EarthView::World::Core::CAny mRenderSystemData;
                ev_size_t mFrameLastUpdated;
                //// Version number of the definitions in this buffer
                ev_uint32 mVersion;
            ev_private:
                CGpuSharedParameters(EarthView::World::Core::CNameValuePairList *pList);
            public:
                CGpuSharedParameters(const EVString &name);
                virtual ~CGpuSharedParameters();
                //// Get the name of this shared parameter set
                const EVString &getName();
                /***** Add a new constant definition to this shared set of parameters.
                @remarks
                	Unlike EarthView::World::Graphic::CGpuProgramParameters, where the parameter list is defined by the
                	program being compiled, this shared parameter set is defined by the
                	user. Only parameters which have been predefined here may be later
                	updated.
                ****/
                void addConstantDefinition(const EVString &name, EarthView::World::Graphic::GpuConstantType constType, ev_size_t arraySize );
                void addConstantDefinition(const EVString &name, EarthView::World::Graphic::GpuConstantType constType);
                /**** Remove a constant definition from this shared set of parameters.
                ****/
                void removeConstantDefinition(const EVString &name);
                /**** Remove a constant definition from this shared set of parameters.
                ****/
                void removeAllConstantDefinitions();
                /**** Get the version number of this shared parameter set, can be used to identify when
                	changes have occurred.
                ****/
                ev_uint32 getVersion() const;
                /**** Mark the shared set as being dirty (values modified).
                @remarks
                You do not need to call this yourself, set is marked as dirty whenever
                setNamedConstant or (non const) getFloatPointer et al are called.
                ****/
                void _markDirty();
                //// Get the frame in which this shared parameter set was last updated
                ev_size_t getFrameLastUpdated() const;
                /**** Gets an iterator over the named EarthView::World::Graphic::GpuConstantDefinition instances as defined
                	by the user.
                ****/
                EarthView::World::Graphic::GpuConstantDefinitionIterator getConstantDefinitionIterator() const;
                /**** Get a specific EarthView::World::Graphic::GpuConstantDefinition for a named parameter.
                ****/
                const EarthView::World::Graphic::GpuConstantDefinition &getConstantDefinition(const EVString &name) const;
                /**** Get the full list of EarthView::World::Graphic::GpuConstantDefinition instances.
                ****/
                const EarthView::World::Graphic::GpuNamedConstants &getConstantDefinitions() const;

                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, Real val);
                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, ev_int32 val);
                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Spatial::Math::CVector4 &vec);
                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Spatial::Math::CVector3 &vec);
                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Spatial::Math::CMatrix4 &m);
                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Spatial::Math::CMatrix4 *m, ev_size_t numEntries);
                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, const ev_real32 *val, ev_size_t count);
                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, const ev_real64 *val, ev_size_t count);
                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Graphic::CColourValue &colour);
                /**** @copydoc CGpuProgramParameters::setNamedConstant ****/
                void setNamedConstant(const EVString &name, const ev_int32 *val, ev_size_t count);
                //// Get a pointer to the 'nth' item in the ev_real32 buffer
                ev_real32 *getFloatPointer(ev_size_t pos);
                //// Get a pointer to the 'nth' item in the ev_real32 buffer
                const ev_real32 *getFloatPointer(ev_size_t pos) const;
                //// Get a pointer to the 'nth' item in the ev_int32 buffer
                ev_int32 *getIntPointer(ev_size_t pos);
                //// Get a pointer to the 'nth' item in the ev_int32 buffer
                const ev_int32 *getIntPointer(ev_size_t pos) const;
            ev_private:
                /**** Internal method that the CRenderSystem might use to store optional data. ****/
                void _setRenderSystemData(const EarthView::World::Core::CAny &data) const;
                /**** Internal method that the CRenderSystem might use to store optional data. ****/
                const EarthView::World::Core::CAny &_getRenderSystemData() const;
            };
            //// Shared pointer used to hold references to EarthView::World::Graphic::CGpuProgramParameters instances
            /****typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters> EarthView::World::Graphic::GpuSharedParametersPtr;****/
            class EV_GRAPHIC_DLL GpuSharedParametersPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters>
            {
            ev_private:
                GpuSharedParametersPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CGpuSharedParameters *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CGpuSharedParameters *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                GpuSharedParametersPtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters>() {}
                explicit GpuSharedParametersPtr(EarthView::World::Graphic::CGpuSharedParameters *ref_rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters>(ref_rep) {}
                explicit GpuSharedParametersPtr(EarthView::World::Graphic::CGpuSharedParameters *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters>(ref_rep, inFreeMethod) {}
                GpuSharedParametersPtr(const GpuSharedParametersPtr &r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters>(r) {}

                EarthView::World::Graphic::CGpuSharedParameters *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuSharedParameters>::get();
                }
            };
            class CGpuProgramParameters;
            /**** This class records the usage of a set of shared parameters in a concrete
            	set of EarthView::World::Graphic::CGpuProgramParameters.
            ****/
            class EV_GRAPHIC_DLL CGpuSharedParametersUsage : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                EarthView::World::Graphic::GpuSharedParametersPtr mSharedParams;
                /// Not a shared pointer since this is also parent
                EarthView::World::Graphic::CGpuProgramParameters *mParams;
                /// list of physical mappings that we are going to bring in
                struct CopyDataEntry
                {
                    const EarthView::World::Graphic::GpuConstantDefinition *srcDefinition;
                    const EarthView::World::Graphic::GpuConstantDefinition *dstDefinition;
                };
                typedef vector<CopyDataEntry> CopyDataList;
                CopyDataList mCopyDataList;
                /// Optional data the rendersystem might want to store
                mutable EarthView::World::Core::CAny mRenderSystemData;
                //// Version of shared params we based the copydata on
                ev_uint32 mCopyDataVersion;
                void initCopyData();
            ev_private:
                CGpuSharedParametersUsage(EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Construct usage
                CGpuSharedParametersUsage(EarthView::World::Graphic::GpuSharedParametersPtr sharedParams,
                                          EarthView::World::Graphic::CGpuProgramParameters *ref_params);
                CGpuSharedParametersUsage() {}
                /**** Update the target parameters by copying the data from the shared
                	parameters.
                @note This method  may not actually be called if the CRenderSystem
                	which case the values should not be copied out of the shared area
                	into the individual parameter set, but bound separately.
                ****/
                void _copySharedParamsToTargetParams();
                //// Get the name of the shared parameter set
                const EVString &getName() const;
                EarthView::World::Graphic::GpuSharedParametersPtr getSharedParams() const;
                EarthView::World::Graphic::CGpuProgramParameters *getTargetParams() const;
            ev_private:
                /**** Internal method that the CRenderSystem might use to store optional data. ****/
                void _setRenderSystemData(const EarthView::World::Core::CAny &data) const;
                /**** Internal method that the CRenderSystem might use to store optional data. ****/
                const EarthView::World::Core::CAny &_getRenderSystemData() const;

            };
            /**** Collects together the program parameters used for a CGpuProgram.
            @remarks
            Gpu program state includes constant parameters used by the program, and
            bindings to render system state which is propagated into the constants
            by the engine automatically if requested.
            @par
            EarthView::World::Graphic::CGpuProgramParameters objects should be created through the CGpuProgram and
            may be shared between multiple CPass instances. For this reason they
            @par
            High-level programs use named parameters (uniforms), low-level programs
            use indexed constants. This class supports both, but you can tell whether
            named constants are supported by calling hasNamedParameters(). There are
            references in the documentation below to 'logical' and 'physical' indexes;
            logical indexes are the indexes used by low-level programs and represent
            indexes into an array of float4's, some of which may be settable, some of
            which may be predefined constants in the program. We only store those
            constants which have actually been set, therefore our buffer could have
            gaps if we used the logical indexes in our own buffers. So instead we map
            high-level programs, logical indexes don't necessarily exist, although they
            might if the high-level program has a direct, exposed mapping from parameter
            names to logical indexes. In addition, high-level languages may or may not pack
            arrays of elements that are smaller than float4 (e.g. float2/vec2) contiguously.
            This kind of information is held in the ConstantDefinition structure which
            is only populated for high-level programs. You don't have to worry about
            any of this unless you intend to read parameters back from this structure
            rather than just setting them.
            ****/
            class EV_GRAPHIC_DLL CGpuProgramParameters : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /**** Defines the types of automatically updated values that may be bound to CGpuProgram
                parameters, or used to modify parameters on a per-object basis.
                ****/
                enum AutoConstantType
                {
                    //// The current world matrix
                    ACT_WORLD_MATRIX,
                    //// The current world matrix, inverted
                    ACT_INVERSE_WORLD_MATRIX,
                    /**** Provides transpose of world matrix.
                    Equivalent to RenderMonkey's "WorldTranspose".
                    ***/
                    ACT_TRANSPOSE_WORLD_MATRIX,
                    //// The current world matrix, inverted & transposed
                    ACT_INVERSE_TRANSPOSE_WORLD_MATRIX,

                    //// The current array of world matrices, as a 3x4 matrix, used for blending
                    ACT_WORLD_MATRIX_ARRAY_3x4,
                    //// The current array of world matrices, used for blending
                    ACT_WORLD_MATRIX_ARRAY,

                    //// The current array of world matrices transformed to an array of dual quaternions, represented as a 2x4 matrix
                    ACT_WORLD_DUALQUATERNION_ARRAY_2x4,
                    //// The scale and shear components of the current array of world matrices
                    ACT_WORLD_SCALE_SHEAR_MATRIX_ARRAY_3x4,
                    //// The current view matrix
                    ACT_VIEW_MATRIX,
                    //// The current view matrix, inverted
                    ACT_INVERSE_VIEW_MATRIX,
                    /**** Provides transpose of view matrix.
                    Equivalent to RenderMonkey's "ViewTranspose".
                    ****/
                    ACT_TRANSPOSE_VIEW_MATRIX,
                    /**** Provides inverse transpose of view matrix.
                    Equivalent to RenderMonkey's "ViewInverseTranspose".
                    ****/
                    ACT_INVERSE_TRANSPOSE_VIEW_MATRIX,

                    //// The current projection matrix
                    ACT_PROJECTION_MATRIX,
                    /**** Provides inverse of projection matrix.
                    Equivalent to RenderMonkey's "ProjectionInverse".
                    ****/
                    ACT_INVERSE_PROJECTION_MATRIX,
                    /**** Provides transpose of projection matrix.
                    Equivalent to RenderMonkey's "ProjectionTranspose".
                    ****/
                    ACT_TRANSPOSE_PROJECTION_MATRIX,
                    /**** Provides inverse transpose of projection matrix.
                    Equivalent to RenderMonkey's "ProjectionInverseTranspose".
                    ****/
                    ACT_INVERSE_TRANSPOSE_PROJECTION_MATRIX,

                    //// The current view & projection matrices concatenated
                    ACT_VIEWPROJ_MATRIX,
                    /***** Provides inverse of concatenated view and projection matrices.
                    Equivalent to RenderMonkey's "ViewProjectionInverse".
                    ****/
                    ACT_INVERSE_VIEWPROJ_MATRIX,
                    /**** Provides transpose of concatenated view and projection matrices.
                    Equivalent to RenderMonkey's "ViewProjectionTranspose".
                    ****/
                    ACT_TRANSPOSE_VIEWPROJ_MATRIX,
                    /**** Provides inverse transpose of concatenated view and projection matrices.
                    Equivalent to RenderMonkey's "ViewProjectionInverseTranspose".
                    ****/
                    ACT_INVERSE_TRANSPOSE_VIEWPROJ_MATRIX,

                    //// The current world & view matrices concatenated
                    ACT_WORLDVIEW_MATRIX,
                    //// The current world & view matrices concatenated, then inverted
                    ACT_INVERSE_WORLDVIEW_MATRIX,
                    /**** Provides transpose of concatenated world and view matrices.
                    Equivalent to RenderMonkey's "WorldViewTranspose".
                    ****/
                    ACT_TRANSPOSE_WORLDVIEW_MATRIX,
                    //// The current world & view matrices concatenated, then inverted & transposed
                    ACT_INVERSE_TRANSPOSE_WORLDVIEW_MATRIX,
                    //// view matrices.

                    //// The current world, view & projection matrices concatenated
                    ACT_WORLDVIEWPROJ_MATRIX,
                    /**** Provides inverse of concatenated world, view and projection matrices.
                    Equivalent to RenderMonkey's "WorldViewProjectionInverse".
                    ****/
                    ACT_INVERSE_WORLDVIEWPROJ_MATRIX,
                    /**** Provides transpose of concatenated world, view and projection matrices.
                    Equivalent to RenderMonkey's "WorldViewProjectionTranspose".
                    ****/
                    ACT_TRANSPOSE_WORLDVIEWPROJ_MATRIX,
                    /**** Provides inverse transpose of concatenated world, view and projection
                    matrices. Equivalent to RenderMonkey's "WorldViewProjectionInverseTranspose".
                    ****/
                    ACT_INVERSE_TRANSPOSE_WORLDVIEWPROJ_MATRIX,

                    //// render target related values
                    /**** -1 if requires texture flipping, +1 otherwise. It's useful when you bypassed
                    projection matrix transform, still able use this value to adjust transformed y position.
                    */
                    ACT_RENDER_TARGET_FLIPPING,
                    /**** -1 if the winding has been inverted (e.g. for reflections), +1 otherwise.
                    */
                    ACT_VERTEX_WINDING,
                    //// Fog colour
                    ACT_FOG_COLOUR,
                    //// Fog params: density, linear start, linear end, 1/(end-start)
                    ACT_FOG_PARAMS,

                    //// Surface ambient colour, as set in CPass::setAmbient
                    ACT_SURFACE_AMBIENT_COLOUR,
                    //// Surface diffuse colour, as set in CPass::setDiffuse
                    ACT_SURFACE_DIFFUSE_COLOUR,
                    //// Surface specular colour, as set in CPass::setSpecular
                    ACT_SURFACE_SPECULAR_COLOUR,
                    //// Surface emissive colour, as set in CPass::setSelfIllumination
                    ACT_SURFACE_EMISSIVE_COLOUR,
                    //// Surface shininess, as set in CPass::setShininess
                    ACT_SURFACE_SHININESS,

					//// Vertex colour tracking type, as set in CPass::setVertexColourTracking
					ACT_VERTEX_COLOUR_TRACKING,

					//// Lighting enabled,as set in CPass::setLightingEnabled 
					ACT_LIGHT_ENABLED,

                    //// The number of active light sources (better than gl_MaxLights)
                    ACT_LIGHT_COUNT,

                    //// The ambient light colour set in the scene
                    ACT_AMBIENT_LIGHT_COLOUR,

                    //// CLight diffuse colour (index determined by setAutoConstant call)
                    ACT_LIGHT_DIFFUSE_COLOUR,
                    //// CLight specular colour (index determined by setAutoConstant call)
                    ACT_LIGHT_SPECULAR_COLOUR,
                    //// CLight attenuation parameters, CVector4(range, constant, linear, quadric)
                    ACT_LIGHT_ATTENUATION,
                    /**** Spotlight parameters, CVector4(innerFactor, outerFactor, falloff, isSpot)
                    innerFactor and outerFactor are cos(angle/2)
                    The isSpot parameter is 0.0f for non-spotlights, 1.0f for spotlights.
                    Also for non-spotlights the inner and outer factors are 1 and nearly 1 respectively
                    ****/
                    ACT_SPOTLIGHT_PARAMS,
                    //// A light position in world space (index determined by setAutoConstant call)
                    ACT_LIGHT_POSITION,
                    //// A light position in object space (index determined by setAutoConstant call)
                    ACT_LIGHT_POSITION_OBJECT_SPACE,
                    //// A light position in view space (index determined by setAutoConstant call)
                    ACT_LIGHT_POSITION_VIEW_SPACE,
                    //// A light direction in world space (index determined by setAutoConstant call)
                    ACT_LIGHT_DIRECTION,
                    //// A light direction in object space (index determined by setAutoConstant call)
                    ACT_LIGHT_DIRECTION_OBJECT_SPACE,
                    //// A light direction in view space (index determined by setAutoConstant call)
                    ACT_LIGHT_DIRECTION_VIEW_SPACE,
                    /**** The distance of the light from the center of the object
                    a useful approximation as an alternative to per-vertex distance
                    calculations.
                    ****/
                    ACT_LIGHT_DISTANCE_OBJECT_SPACE,
                    /**** CLight power level, a single scalar as set in CLight::setPowerScale  (index determined by setAutoConstant call) ****/
                    ACT_LIGHT_POWER_SCALE,
                    //// CLight diffuse colour pre-scaled by CLight::setPowerScale (index determined by setAutoConstant call)
                    ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED,
                    //// CLight specular colour pre-scaled by CLight::setPowerScale (index determined by setAutoConstant call)
                    ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED,
                    //// Array of light diffuse colours (count set by extra param)
                    ACT_LIGHT_DIFFUSE_COLOUR_ARRAY,
                    //// Array of light specular colours (count set by extra param)
                    ACT_LIGHT_SPECULAR_COLOUR_ARRAY,
                    //// Array of light diffuse colours scaled by light power (count set by extra param)
                    ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED_ARRAY,
                    //// Array of light specular colours scaled by light power (count set by extra param)
                    ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED_ARRAY,
                    //// Array of light attenuation parameters, CVector4(range, constant, linear, quadric) (count set by extra param)
                    ACT_LIGHT_ATTENUATION_ARRAY,
                    //// Array of light positions in world space (count set by extra param)
                    ACT_LIGHT_POSITION_ARRAY,
                    //// Array of light positions in object space (count set by extra param)
                    ACT_LIGHT_POSITION_OBJECT_SPACE_ARRAY,
                    //// Array of light positions in view space (count set by extra param)
                    ACT_LIGHT_POSITION_VIEW_SPACE_ARRAY,
                    //// Array of light directions in world space (count set by extra param)
                    ACT_LIGHT_DIRECTION_ARRAY,
                    //// Array of light directions in object space (count set by extra param)
                    ACT_LIGHT_DIRECTION_OBJECT_SPACE_ARRAY,
                    //// Array of light directions in view space (count set by extra param)
                    ACT_LIGHT_DIRECTION_VIEW_SPACE_ARRAY,
                    /**** Array of distances of the lights from the center of the object
                    a useful approximation as an alternative to per-vertex distance
                    calculations. (count set by extra param)
                    ****/
                    ACT_LIGHT_DISTANCE_OBJECT_SPACE_ARRAY,
                    /**** Array of light power levels, a single scalar as set in CLight::setPowerScale
                    (count set by extra param)
                    ****/
                    ACT_LIGHT_POWER_SCALE_ARRAY,
                    /**** Spotlight parameters array of CVector4(innerFactor, outerFactor, falloff, isSpot)
                    innerFactor and outerFactor are cos(angle/2)
                    The isSpot parameter is 0.0f for non-spotlights, 1.0f for spotlights.
                    Also for non-spotlights the inner and outer factors are 1 and nearly 1 respectively.
                    (count set by extra param)
                    ****/
                    ACT_SPOTLIGHT_PARAMS_ARRAY,
                    /**** The derived ambient light colour, with 'r', 'g', 'b' components filled with
                    product of surface ambient colour and ambient light colour, respectively,
                    and 'a' component filled with surface ambient alpha component.
                    ****/
                    ACT_DERIVED_AMBIENT_LIGHT_COLOUR,
                    /**** The derived scene colour, with 'r', 'g' and 'b' components filled with sum
                    of derived ambient light colour and surface emissive colour, respectively,
                    and 'a' component filled with surface diffuse alpha component.
                    ****/
                    ACT_DERIVED_SCENE_COLOUR,
                    /**** The derived light diffuse colour (index determined by setAutoConstant call),
                    with 'r', 'g' and 'b' components filled with product of surface diffuse colour,
                    light power scale and light diffuse colour, respectively, and 'a' component filled with surface
                    diffuse alpha component.
                    ****/
                    ACT_DERIVED_LIGHT_DIFFUSE_COLOUR,
                    /**** The derived light specular colour (index determined by setAutoConstant call),
                    with 'r', 'g' and 'b' components filled with product of surface specular colour
                    and light specular colour, respectively, and 'a' component filled with surface
                    specular alpha component.
                    ****/
                    ACT_DERIVED_LIGHT_SPECULAR_COLOUR,
                    //// Array of derived light diffuse colours (count set by extra param)
                    ACT_DERIVED_LIGHT_DIFFUSE_COLOUR_ARRAY,
                    //// Array of derived light specular colours (count set by extra param)
                    ACT_DERIVED_LIGHT_SPECULAR_COLOUR_ARRAY,
                    /**** The absolute light number of a local light index. Each pass may have
                    a number of lights passed to it, and each of these lights will have
                    an index in the overall light list, which will differ from the local
                    light index due to factors like setStartLight and setIteratePerLight.
                    This binding provides the global light index for a local index.
                    ****/
                    ACT_LIGHT_NUMBER,
                    //// Returns (ev_int32) 1 if the  given light casts shadows, 0 otherwise (index set in extra param)
                    ACT_LIGHT_CASTS_SHADOWS,
					/*
                    finite extrusion programs.
                    ****/
                    ACT_SHADOW_EXTRUSION_DISTANCE,
                    //// The current camera's position in world space
                    ACT_CAMERA_POSITION,
					//// The ralative postion of camera;
					ACT_CAMERA_RELATIVE_POSITION,
                    //// The current camera's position in object space
                    ACT_CAMERA_POSITION_OBJECT_SPACE,
					//// The view matrix of the assigned texture projection frustum
					ACT_TEXTURE_VIEW_MATRIX,
                    //// The view/projection matrix of the assigned texture projection frustum
                    ACT_TEXTURE_VIEWPROJ_MATRIX,
                    //// Array of view/projection matrices of the first n texture projection frustums
                    ACT_TEXTURE_VIEWPROJ_MATRIX_ARRAY,
                    /**** The view/projection matrix of the assigned texture projection frustum,
                    combined with the current world matrix
                    ****/
                    ACT_TEXTURE_WORLDVIEWPROJ_MATRIX,
                    //// Array of world/view/projection matrices of the first n texture projection frustums
                    ACT_TEXTURE_WORLDVIEWPROJ_MATRIX_ARRAY,
                    //// The view/projection matrix of a given spotlight
                    ACT_SPOTLIGHT_VIEWPROJ_MATRIX,
                    //// Array of view/projection matrix of a given spotlight
                    ACT_SPOTLIGHT_VIEWPROJ_MATRIX_ARRAY,
                    /**** The view/projection matrix of a given spotlight projection frustum,
                    combined with the current world matrix
                    ****/
                    ACT_SPOTLIGHT_WORLDVIEWPROJ_MATRIX,
                    ACT_CUSTOM,
                    /**** provides current elapsed time
                    ****/
                    ACT_TIME,
                    /**** Single ev_real32 value, which repeats itself based on given as
                    parameter "cycle time". Equivalent to RenderMonkey's "Time0_X".
                    ****/
                    ACT_TIME_0_X,
                    //// Cosine of "Time0_X". Equivalent to RenderMonkey's "CosTime0_X".
                    ACT_COSTIME_0_X,
                    //// Sine of "Time0_X". Equivalent to RenderMonkey's "SinTime0_X".
                    ACT_SINTIME_0_X,
                    //// Tangent of "Time0_X". Equivalent to RenderMonkey's "TanTime0_X".
                    ACT_TANTIME_0_X,
                    /**** Vector of "Time0_X", "SinTime0_X", "CosTime0_X",
                    "TanTime0_X". Equivalent to RenderMonkey's "Time0_X_Packed".
                    ****/
                    ACT_TIME_0_X_PACKED,
                    /**** Single ev_real32 value, which represents scaled time value [0..1],
                    which repeats itself based on given as parameter "cycle time".
                    Equivalent to RenderMonkey's "Time0_1".
                    ****/
                    ACT_TIME_0_1,
                    //// Cosine of "Time0_1". Equivalent to RenderMonkey's "CosTime0_1".
                    ACT_COSTIME_0_1,
                    //// Sine of "Time0_1". Equivalent to RenderMonkey's "SinTime0_1".
                    ACT_SINTIME_0_1,
                    //// Tangent of "Time0_1". Equivalent to RenderMonkey's "TanTime0_1".
                    ACT_TANTIME_0_1,
                    /**** Vector of "Time0_1", "SinTime0_1", "CosTime0_1",
                    "TanTime0_1". Equivalent to RenderMonkey's "Time0_1_Packed".
                    ****/
                    ACT_TIME_0_1_PACKED,
                    /****	Single ev_real32 value, which represents scaled time value [0..2*Pi],
                    which repeats itself based on given as parameter "cycle time".
                    Equivalent to RenderMonkey's "Time0_2PI".
                    ****/
                    ACT_TIME_0_2PI,
                    //// Cosine of "Time0_2PI". Equivalent to RenderMonkey's "CosTime0_2PI".
                    ACT_COSTIME_0_2PI,
                    //// Sine of "Time0_2PI". Equivalent to RenderMonkey's "SinTime0_2PI".
                    ACT_SINTIME_0_2PI,
                    //// Tangent of "Time0_2PI". Equivalent to RenderMonkey's "TanTime0_2PI".
                    ACT_TANTIME_0_2PI,
                    /**** Vector of "Time0_2PI", "SinTime0_2PI", "CosTime0_2PI",
                    "TanTime0_2PI". Equivalent to RenderMonkey's "Time0_2PI_Packed".
                    ****/
                    ACT_TIME_0_2PI_PACKED,
                    //// provides the scaled frame time, returned as a floating point value.
                    ACT_FRAME_TIME,
                    //// provides the calculated frames per second, returned as a floating point value.
                    ACT_FPS,
                    //// viewport-related values
                    /**** Current viewport width (in pixels) as floating point value.
                    Equivalent to RenderMonkey's "ViewportWidth".
                    ****/
                    ACT_VIEWPORT_WIDTH,
                    /**** Current viewport height (in pixels) as floating point value.
                    Equivalent to RenderMonkey's "ViewportHeight".
                    ****/
                    ACT_VIEWPORT_HEIGHT,
                    /**** This variable represents 1.0/ViewportWidth.
                    Equivalent to RenderMonkey's "ViewportWidthInverse".
                    ****/
                    ACT_INVERSE_VIEWPORT_WIDTH,
                    /**** This variable represents 1.0/ViewportHeight.
                    Equivalent to RenderMonkey's "ViewportHeightInverse".
                    ****/
                    ACT_INVERSE_VIEWPORT_HEIGHT,
                    /**** Packed of "ViewportWidth", "ViewportHeight", "ViewportWidthInverse",
                    "ViewportHeightInverse".
                    ****/
                    ACT_VIEWPORT_SIZE,
                    //// view parameters
                    /**** This variable provides the view direction vector (world space).
                    Equivalent to RenderMonkey's "ViewDirection".
                    ****/
                    ACT_VIEW_DIRECTION,
                    /**** This variable provides the view side vector (world space).
                    Equivalent to RenderMonkey's "ViewSideVector".
                    ****/
                    ACT_VIEW_SIDE_VECTOR,
                    /**** This variable provides the view up vector (world space).
                    Equivalent to RenderMonkey's "ViewUpVector".
                    ****/
                    ACT_VIEW_UP_VECTOR,
                    /**** This variable provides the field of view as a floating point value.
                    Equivalent to RenderMonkey's "FOV".
                    ****/
                    ACT_FOV,
                    /****	This variable provides the near clip distance as a floating point value.
                    Equivalent to RenderMonkey's "NearClipPlane".
                    ****/
                    ACT_NEAR_CLIP_DISTANCE,
                    /****	This variable provides the far clip distance as a floating point value.
                    Equivalent to RenderMonkey's "FarClipPlane".
                    ****/
                    ACT_FAR_CLIP_DISTANCE,
                    /**** provides the pass index number within the technique
                    of the active materil.
                    ****/
                    ACT_PASS_NUMBER,
                    /**** provides the current iteration number of the pass. The iteration
                    number is the number of times the current render operation has
                    been drawn for the active pass.
                    ****/
                    ACT_PASS_ITERATION_NUMBER,

                    /**** Provides a parametric animation value [0..1], only available
                    where the renderable specifically implements it.
                    ****/
                    ACT_ANIMATION_PARAMETRIC,
                    /**** Provides the texel offsets required by this rendersystem to map
                    texels to pixels. Packed as
                    float4(absoluteHorizontalOffset, absoluteVerticalOffset,
                    horizontalOffset / viewportWidth, verticalOffset / viewportHeight)
                    ****/
                    ACT_TEXEL_OFFSETS,
                    /**** Provides information about the depth range of the scene as viewed
                    from the current camera.
                    Passed as float4(minDepth, maxDepth, depthRange, 1 / depthRange)
                    ****/
                    ACT_SCENE_DEPTH_RANGE,
                    /**** Provides information about the depth range of the scene as viewed
                    from a given shadow camera. Requires an index parameter which maps
                    to a light index relative to the current light list.
                    Passed as float4(minDepth, maxDepth, depthRange, 1 / depthRange)
                    ****/
                    ACT_SHADOW_SCENE_DEPTH_RANGE,
                    /**** Provides the fixed shadow colour as configured via CSceneManager::setShadowColour;
                    useful for integrated modulative shadows.
                    ****/
                    ACT_SHADOW_COLOUR,
                    /**** Provides texture size of the texture unit (index determined by setAutoConstant
                    call). Packed as float4(width, height, depth, 1)
                    ****/
                    ACT_TEXTURE_SIZE,
                    /**** Provides inverse texture size of the texture unit (index determined by setAutoConstant
                    call). Packed as float4(1 / width, 1 / height, 1 / depth, 1)
                    ****/
                    ACT_INVERSE_TEXTURE_SIZE,
                    /**** Provides packed texture size of the texture unit (index determined by setAutoConstant
                    call). Packed as float4(width, height, 1 / width, 1 / height)
                    ****/
                    ACT_PACKED_TEXTURE_SIZE,
                    /**** Provides the current transform matrix of the texture unit (index determined by setAutoConstant
                    call), as seen by the fixed-function pipeline.
                    ****/
                    ACT_TEXTURE_MATRIX,

                    /**** Provides the position of the LOD camera in world space, allowing you
                    to perform separate LOD calculations in shaders independent of the rendering
                    camera. If there is no separate LOD camera then this is the real camera
                    position. See CCamera::setLodCamera.
                    ****/
                    ACT_LOD_CAMERA_POSITION,
                    /**** Provides the position of the LOD camera in object space, allowing you
                    to perform separate LOD calculations in shaders independent of the rendering
                    camera. If there is no separate LOD camera then this is the real camera
                    position. See CCamera::setLodCamera.
                    ****/
                    ACT_LOD_CAMERA_POSITION_OBJECT_SPACE,
                    /**** Binds custom per-light constants to the shaders. ****/
                    ACT_LIGHT_CUSTOM,

					ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_0,
				    ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_1,
					ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_2,
					ACT_SOFTSHADOW_CASCADE_DEPTH,
					ACT_SOFTSHADOW_VIEWPROJ_MATRIX_0,
					ACT_SOFTSHADOW_VIEWPROJ_MATRIX_1,
					ACT_SOFTSHADOW_VIEWPROJ_MATRIX_2,					
					ACT_SOFTSHADOW_ISOPEN_FLAG,
					ACT_SOFTSHADOW_LIGHT_BLEED_POWER,
					ACT_SOFTSHADOW_DEPTH_OFFSET,
					ACT_SOFTSHADOW_NORMAL_FACTOR,
					ACT_SOFTSHADOW_NEARCLIP,
					ACT_SOFTSHADOW_FARCLIP,
					ACT_SOFTSHADOW_NEARCLIP_0,
					ACT_SOFTSHADOW_FARCLIP_0,
					ACT_SOFTSHADOW_NEARCLIP_1,
					ACT_SOFTSHADOW_FARCLIP_1,
					ACT_SOFTSHADOW_NEARCLIP_2,
					ACT_SOFTSHADOW_FARCLIP_2,
					ACT_SOFTSHADOW_COLOR_R_RATIO,
					ACT_SOFTSHADOW_COLOR_G_RATIO,
					ACT_SOFTSHADOW_COLOR_B_RATIO,
                };
                /**** Defines the type of the extra data item used by the auto constant.

                ****/
                enum ACDataType
                {
                    //// no data is required
                    ACDT_NONE,
                    //// the auto constant requires data of type ev_int32
                    ACDT_INT,
                    //// the auto constant requires data of type real
                    ACDT_REAL
                };
                /**** Defines the base element type of the auto constant
                ****/
                enum ElementType
                {
                    ET_INT,
                    ET_REAL
                };
                /**** Structure defining an auto constant that's available for use in
                a parameters object.
                ****/
                class EV_GRAPHIC_DLL AutoConstantDefinition: public EarthView::World::Core::CBaseObject
                {
                public:
                    EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType;
                    EVString name;
                    ev_size_t elementCount;
                    //// The type of the constant in the program
                    EarthView::World::Graphic::CGpuProgramParameters::ElementType elementType;
                    //// The type of any extra data
                    EarthView::World::Graphic::CGpuProgramParameters::ACDataType dataType;
                    AutoConstantDefinition(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType _acType, const EVString &_name,
                                           ev_size_t _elementCount, EarthView::World::Graphic::CGpuProgramParameters::ElementType _elementType,
                                           EarthView::World::Graphic::CGpuProgramParameters::ACDataType _dataType);
                ev_private:
                    AutoConstantDefinition(EarthView::World::Core::CNameValuePairList *pList);
                };
                /**** Structure recording the use of an automatic parameter. ****/
                class EV_GRAPHIC_DLL CAutoConstantEntry: public EarthView::World::Core::CBaseObject
                {
                public:
                    //// The type of parameter
                    EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType paramType;
                    //// The target (physical) constant index
                    ev_size_t physicalIndex;
                    /**** The number of elements per individual entry in this constant
                    Used in case people used packed elements smaller than 4 (e.g. GLSL)
                    and bind an auto which is 4-element packed to it ****/
                    ev_size_t elementCount;
                    //// Additional information to go with the parameter
                    union
                    {
                        ev_size_t data;
                        Real fData;
                    };
                    //// The variability of this parameter (see GpuParamVariability)
                    ev_uint16 variability;
                    CAutoConstantEntry(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType theType, ev_size_t theIndex, ev_size_t theiData,
                                       ev_uint16 theVariability, ev_size_t theElemCount);
                    CAutoConstantEntry(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType theType, ev_size_t theIndex, ev_size_t theiData,
                                       ev_uint16 theVariability);
                    CAutoConstantEntry(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType theType, ev_size_t theIndex, Real thefData,
                                       ev_uint16 theVariability, ev_size_t theElemCount);
                    CAutoConstantEntry(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType theType, ev_size_t theIndex, Real thefData,
                                       ev_uint16 theVariability);
                    CAutoConstantEntry() {}
                ev_private:
                    CAutoConstantEntry(EarthView::World::Core::CNameValuePairList *pList);
                };
                /// Auto parameter storage
                class EV_GRAPHIC_DLL AutoConstantList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry const &t);
                private:
                    InternalList mList;
                ev_private:
                    AutoConstantList(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    AutoConstantList();
                    void push_back(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry  const &t);
                    void pop_back();

                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &front();
                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &operator[](ev_size_t n);
                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &at(ev_size_t n);
                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };

                class EV_GRAPHIC_DLL GpuSharedParamUsageList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CGpuSharedParametersUsage> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CGpuSharedParametersUsage const &t);
                private:
                    InternalList mList;
                ev_private:
                    GpuSharedParamUsageList(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    GpuSharedParamUsageList();
                    void push_back(EarthView::World::Graphic::CGpuSharedParametersUsage  const &t);
                    void pop_back();

                    EarthView::World::Graphic::CGpuSharedParametersUsage &front();
                    EarthView::World::Graphic::CGpuSharedParametersUsage &back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CGpuSharedParametersUsage const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CGpuSharedParametersUsage &operator[](ev_size_t n);
                    EarthView::World::Graphic::CGpuSharedParametersUsage const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CGpuSharedParametersUsage &at(ev_size_t n);
                    EarthView::World::Graphic::CGpuSharedParametersUsage const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
            protected:
                static EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition AutoConstantDictionary[];
                //// Packed list of floating-point constants (physical indexing)
                EarthView::World::Graphic::FloatConstantList mFloatConstants;
                //// Packed list of integer constants (physical indexing)
                EarthView::World::Graphic::IntConstantList mIntConstants;
                /**** Logical index to physical index map - for low-level programs
                or high-level programs which pass params this way. ****/
                EarthView::World::Graphic::GpuLogicalBufferStructPtr mFloatLogicalToPhysical;
                /**** Logical index to physical index map - for low-level programs
                or high-level programs which pass params this way. ****/
                EarthView::World::Graphic::GpuLogicalBufferStructPtr mIntLogicalToPhysical;
                //// Mapping from parameter names to def - high-level programs are expected to populate this
                EarthView::World::Graphic::GpuNamedConstantsPtr mNamedConstants;
                //// List of automatically updated parameters
                EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList mAutoConstants;
                //// The combined variability masks of all parameters
                ev_uint16 mCombinedVariability;
                //// Do we need to transpose matrices?
                ev_bool mTransposeMatrices;
                //// flag to indicate if names not found will be ignored
                ev_bool mIgnoreMissingParams;
                //// physical index for active pass iteration parameter real constant entry;
                ev_size_t mActivePassIterationIndex;
                /**** Gets the low-level structure for a logical index.
                ****/
                EarthView::World::Graphic::GpuLogicalIndexUse *_getFloatConstantLogicalIndexUse(ev_size_t logicalIndex, ev_size_t requestedSize, ev_uint16 variability);
                /**** Gets the physical buffer index associated with a logical ev_int32 constant index.
               ****/
                EarthView::World::Graphic::GpuLogicalIndexUse *_getIntConstantLogicalIndexUse(ev_size_t logicalIndex, ev_size_t requestedSize, ev_uint16 variability);
                //// Return the variability for an auto constant
                ev_uint16 deriveVariability(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType act);
                void copySharedParamSetUsage(const EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList &srcList);
                EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList mSharedParamSets;
                /// Optional data the rendersystem might want to store
                mutable EarthView::World::Core::CAny mRenderSystemData;
            ev_private:
                CGpuProgramParameters(EarthView::World::Core::CNameValuePairList *pList);
            public:
                CGpuProgramParameters();
                ~CGpuProgramParameters();
                //// Copy constructor
                CGpuProgramParameters(const CGpuProgramParameters &oth);
                //// Operator = overload
                EarthView::World::Graphic::CGpuProgramParameters &operator=(const EarthView::World::Graphic::CGpuProgramParameters &oth);
                /**** Internal method for providing a link to a name->definition map for parameters. ****/
                void _setNamedConstants(const EarthView::World::Graphic::GpuNamedConstantsPtr &constantmap);
                /**** Internal method for providing a link to a logical index->physical index map for parameters. ****/
                void _setLogicalIndexes(const EarthView::World::Graphic::GpuLogicalBufferStructPtr &floatIndexMap,
                                        const EarthView::World::Graphic::GpuLogicalBufferStructPtr  &intIndexMap);

                //// Does this parameter set include named parameters?
                ev_bool hasNamedParameters() const;
                /**** Does this parameter set include logically indexed parameters?
                @note Not mutually exclusive with hasNamedParameters since some high-level
                programs still use logical indexes to set the parameters on the
                rendersystem.
                ****/
                ev_bool hasLogicalIndexedParameters() const;
                /**** Sets a 4-element floating-point parameter to the program.
                @param index The logical constant index at which to place the parameter
                (each constant is a 4D ev_real32)
                @param vec The value to set
                ****/
                void setConstant(ev_size_t index, const EarthView::World::Spatial::Math::CVector4 &vec);
                /**** Sets a single floating-point parameter to the program.
                @note This is actually equivalent to calling
                setConstant(index CVector4(val, 0, 0, 0)) since all constants are 4D.
                @param index The logical constant index at which to place the parameter (each constant is
                a 4D ev_real32)
                @param val The value to set
                ****/
                void setConstant(ev_size_t index, Real val);
                /**** Sets a 4-element floating-point parameter to the program via EarthView::World::Spatial::Math::CVector3.
                @param index The logical constant index at which to place the parameter (each constant is
                a 4D ev_real32).
                Note that since you're passing a EarthView::World::Spatial::Math::CVector3, the last element of the 4-element
                value will be set to 1 (a homogeneous vector)
                @param vec The value to set
                ****/
                void setConstant(ev_size_t index, const EarthView::World::Spatial::Math::CVector3 &vec);
                /**** Sets a EarthView::World::Spatial::Math::CMatrix4 parameter to the program.
                @param index The logical constant index at which to place the parameter (each constant is
                a 4D ev_real32).
                NB since a EarthView::World::Spatial::Math::CMatrix4 is 16 floats ev_int32, this parameter will take up 4 indexes.
                @param m The value to set
                ****/
                void setConstant(ev_size_t index, const EarthView::World::Spatial::Math::CMatrix4 &m);
                /**** Sets a list of EarthView::World::Spatial::Math::CMatrix4 parameters to the program.
                @param index The logical constant index at which to start placing the parameter (each constant is
                a 4D ev_real32).
                NB since a EarthView::World::Spatial::Math::CMatrix4 is 16 floats ev_int32, so each entry will take up 4 indexes.
                @param m Pointer to an array of matrices to set
                @param numEntries Number of EarthView::World::Spatial::Math::CMatrix4 entries
                ****/
                void setConstant(ev_size_t index, const EarthView::World::Spatial::Math::CMatrix4 **m, ev_size_t numEntries);
                /**** Sets a multiple value constant floating-point parameter to the program.
                @param index The logical constant index at which to start placing parameters (each constant is
                a 4D ev_real32)
                @param val Pointer to the values to write, must contain 4*count floats
                @param count The number of groups of 4 floats to write
                ****/
                void setConstant(ev_size_t index, const ev_real32 *val, ev_size_t count);
                /**** Sets a multiple value constant floating-point parameter to the program.
                @param index The logical constant index at which to start placing parameters (each constant is
                a 4D ev_real32)
                @param val Pointer to the values to write, must contain 4*count floats
                @param count The number of groups of 4 floats to write
                ****/
                void setConstant(ev_size_t index, const ev_real64 *val, ev_size_t count);
                /**** Sets a EarthView::World::Graphic::CColourValue parameter to the program.
                @param index The logical constant index at which to place the parameter (each constant is
                a 4D ev_real32)
                @param colour The value to set
                ****/
                void setConstant(ev_size_t index, const EarthView::World::Graphic::CColourValue &colour);
                /**** Sets a multiple value constant integer parameter to the program.
                @remarks
                Different types of GPU programs support different types of constant parameters.
                For example, it's relatively common to find that vertex programs only support
                floating point constants, and that fragment programs only support integer (fixed point)
                parameters. This can vary depending on the program version supported by the
                graphics card being used. You should consult the documentation for the type of
                provided on CRenderSystemCapabilities to determine the options.
                @param index The logical constant index at which to place the parameter (each constant is
                a 4D integer)
                @param val Pointer to the values to write, must contain 4*count ints
                @param count The number of groups of 4 ints to write
                ****/
                void setConstant(ev_size_t index, const ev_int32 *val, ev_size_t count);
                /**** Write a series of floating point values into the underlying ev_real32
                constant buffer at the given physical index.
                @param physicalIndex The buffer position to start writing
                @param val Pointer to a list of values to write
                @param count The number of floats to write
                ****/
                void _writeRawConstants(ev_size_t physicalIndex, const ev_real32 *val, ev_size_t count);
                /**** Write a series of floating point values into the underlying ev_real32
                constant buffer at the given physical index.
                @param physicalIndex The buffer position to start writing
                @param val Pointer to a list of values to write
                @param count The number of floats to write
                ****/
                void _writeRawConstants(ev_size_t physicalIndex, const ev_real64 *val, ev_size_t count);
                /**** Write a series of integer values into the underlying integer
                constant buffer at the given physical index.
                @param physicalIndex The buffer position to start writing
                @param val Pointer to a list of values to write
                @param count The number of ints to write
                ****/
                void _writeRawConstants(ev_size_t physicalIndex, const ev_int32 *val, ev_size_t count);
                /**** Read a series of floating point values from the underlying ev_real32
                constant buffer at the given physical index.
                @param physicalIndex The buffer position to start reading
                @param count The number of floats to read
                @param dest Pointer to a buffer to receive the values
                ****/
                void _readRawConstants(ev_size_t physicalIndex, ev_size_t count,  ev_real32 *dest);
                /**** Read a series of integer values from the underlying integer
                constant buffer at the given physical index.
                @param physicalIndex The buffer position to start reading
                @param count The number of ints to read
                @param dest Pointer to a buffer to receive the values
                ****/
                void _readRawConstants(ev_size_t physicalIndex, ev_size_t count,  ev_int32 *dest);
                /**** Write a 4-element floating-point parameter to the program directly to
                the underlying constants buffer.
                @note You can use these methods if you have already derived the physical
                the named / logical index versions.
                @param physicalIndex The physical buffer index at which to place the parameter
                @param vec The value to set
                @param count The number of floats to write; if for example
                the uniform constant 'slot' is smaller than a EarthView::World::Spatial::Math::CVector4
                ****/
                void _writeRawConstant(ev_size_t physicalIndex, const EarthView::World::Spatial::Math::CVector4 &vec,
                                       ev_size_t count );
                void _writeRawConstant(ev_size_t physicalIndex, const EarthView::World::Spatial::Math::CVector4 &vec);
                /**** Write a single floating-point parameter to the program.
                @note You can use these methods if you have already derived the physical
                the named / logical index versions.
                @param physicalIndex The physical buffer index at which to place the parameter
                @param val The value to set
                ****/
                void _writeRawConstant(ev_size_t physicalIndex, Real val);
                /**** Write a single integer parameter to the program.
                @note You can use these methods if you have already derived the physical
                the named / logical index versions.
                @param physicalIndex The physical buffer index at which to place the parameter
                @param val The value to set
                ****/
                void _writeRawConstant(ev_size_t physicalIndex, ev_int32 val);
                /**** Write a 3-element floating-point parameter to the program via EarthView::World::Spatial::Math::CVector3.
                @note You can use these methods if you have already derived the physical
                the named / logical index versions.
                @param physicalIndex The physical buffer index at which to place the parameter
                @param vec The value to set
                ****/
                void _writeRawConstant(ev_size_t physicalIndex, const EarthView::World::Spatial::Math::CVector3 &vec);
                /**** Write a EarthView::World::Spatial::Math::CMatrix4 parameter to the program.
                @note You can use these methods if you have already derived the physical
                the named / logical index versions.
                @param physicalIndex The physical buffer index at which to place the parameter
                @param m The value to set
                @param elementCount actual element count used with shader
                ****/
                void _writeRawConstant(ev_size_t physicalIndex, const EarthView::World::Spatial::Math::CMatrix4 &m, ev_size_t elementCount);
            ev_private:
                /**** Write a list of EarthView::World::Spatial::Math::CMatrix4 parameters to the program.
                @note You can use these methods if you have already derived the physical
                the named / logical index versions.
                @param physicalIndex The physical buffer index at which to place the parameter
                @param numEntries Number of EarthView::World::Spatial::Math::CMatrix4 entries
                ****/
                void _writeRawConstant(ev_size_t physicalIndex, const EarthView::World::Spatial::Math::CMatrix4 *m, ev_size_t numEntries);
            public:
                void _writeRawConstant(ev_size_t physicalIndex, const EarthView::World::Spatial::Math::CMatrix4 **m, ev_uint32 numEntries);
                /**** Write a EarthView::World::Graphic::CColourValue parameter to the program.
                @note You can use these methods if you have already derived the physical
                the named / logical index versions.
                @param physicalIndex The physical buffer index at which to place the parameter
                @param colour The value to set
                @param count The number of floats to write; if for example
                the uniform constant 'slot' is smaller than a EarthView::World::Spatial::Math::CVector4
                ****/
                void _writeRawConstant(ev_size_t physicalIndex, const EarthView::World::Graphic::CColourValue &colour,
                                       ev_size_t count);
                void _writeRawConstant(ev_size_t physicalIndex, const EarthView::World::Graphic::CColourValue &colour);
                /**** Gets an iterator over the named EarthView::World::Graphic::GpuConstantDefinition instances as defined
                by the program for which these parameters exist.
                @note
                Only available if this parameters object has named parameters.
                ****/
                EarthView::World::Graphic::GpuConstantDefinitionIterator getConstantDefinitionIterator() const;
                /**** Get a specific EarthView::World::Graphic::GpuConstantDefinition for a named parameter.
                @note
                Only available if this parameters object has named parameters.
                ****/
                const EarthView::World::Graphic::GpuConstantDefinition &getConstantDefinition(const EVString &name) const;
                /**** Get the full list of EarthView::World::Graphic::GpuConstantDefinition instances.
                @note
                Only available if this parameters object has named parameters.
                ****/
                const EarthView::World::Graphic::GpuNamedConstants &getConstantDefinitions() const;
                /**** Get the current list of mappings from low-level logical param indexes
                to physical buffer locations in the ev_real32 buffer.
                @note
                Only applicable to low-level programs.
                ****/
                const EarthView::World::Graphic::GpuLogicalBufferStructPtr &getFloatLogicalBufferStruct() const;
                /**** Retrieves the logical index relating to a physical index in the ev_real32
                buffer, for programs which support that (low-level programs and
                high-level programs which use logical parameter indexes).
                @returns std::numeric_limits<ev_size_t>::max() if not found
                ****/
                ev_size_t getFloatLogicalIndexForPhysicalIndex(ev_size_t physicalIndex);
                /**** Retrieves the logical index relating to a physical index in the ev_int32
                buffer, for programs which support that (low-level programs and
                high-level programs which use logical parameter indexes).
                @returns std::numeric_limits<ev_size_t>::max() if not found
                ****/
                ev_size_t getIntLogicalIndexForPhysicalIndex(ev_size_t physicalIndex);
                /**** Get the current list of mappings from low-level logical param indexes
                to physical buffer locations in the integer buffer.
                @note
                Only applicable to low-level programs.
                ****/
                const EarthView::World::Graphic::GpuLogicalBufferStructPtr &getIntLogicalBufferStruct() const;
                //// Get a reference to the list of ev_real32 constants
                const EarthView::World::Graphic::FloatConstantList &getFloatConstantList() const;
                //// Get a pointer to the 'nth' item in the ev_real32 buffer
                ev_real32 *getFloatPointer(ev_size_t pos);
                //// Get a pointer to the 'nth' item in the ev_real32 buffer
                const ev_real32 *getFloatPointer(ev_size_t pos) const;
                //// Get a reference to the list of ev_int32 constants
                const EarthView::World::Graphic::IntConstantList &getIntConstantList() const;
                //// Get a pointer to the 'nth' item in the ev_int32 buffer
                ev_int32 *getIntPointer(ev_size_t pos);
                //// Get a pointer to the 'nth' item in the ev_int32 buffer
                const ev_int32 *getIntPointer(ev_size_t pos) const;
                //// Get a reference to the list of auto constant bindings
                const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList &getAutoConstantList() const;
                /**** Sets up a constant which will automatically be updated by the system.
                @remarks
                Vertex and fragment programs often need parameters which are to do with the
                current render state, or particular values which may very well change over time,
                and often between objects which are being rendered. This feature allows you
                to set up a certain number of predefined parameter mappings that are kept up to
                date for you.
                @param index The location in the constant list to place this updated constant every time
                it is changed. Note that because of the nature of the types, we know how big the
                parameter details will be so you don't need to set that like you do for manual constants.
                @param acType The type of automatic constant to set
                @param extraInfo If the constant type needs more information (like a light index) put it here.
                ****/
                void setAutoConstant(ev_size_t index, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, ev_size_t extraInfo);
                void setAutoConstant(ev_size_t index, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType);
                void setAutoConstantReal(ev_size_t index, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, Real rData);
                /**** Sets up a constant which will automatically be updated by the system.
                @remarks
                Vertex and fragment programs often need parameters which are to do with the
                current render state, or particular values which may very well change over time,
                and often between objects which are being rendered. This feature allows you
                to set up a certain number of predefined parameter mappings that are kept up to
                date for you.
                @param index The location in the constant list to place this updated constant every time
                it is changed. Note that because of the nature of the types, we know how big the
                parameter details will be so you don't need to set that like you do for manual constants.
                @param acType The type of automatic constant to set
                @param extraInfo1 The first extra parameter required by the auto constant type
                @param extraInfo2 The first extra parameter required by the auto constant type
                ****/
                void setAutoConstant(ev_size_t index, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, ev_uint16 extraInfo1, ev_uint16 extraInfo2);
                /**** As setAutoConstant, but sets up the auto constant directly against a
                physical buffer index.
                ****/
                void _setRawAutoConstant(ev_size_t physicalIndex, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, ev_size_t extraInfo,
                                         ev_uint16 variability, ev_size_t elementSize);
                void _setRawAutoConstant(ev_size_t physicalIndex, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, ev_size_t extraInfo,
                                         ev_uint16 variability);
                /**** As setAutoConstantReal, but sets up the auto constant directly against a
                physical buffer index.
                ****/
                void _setRawAutoConstantReal(ev_size_t physicalIndex, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, Real rData,
                                             ev_uint16 variability, ev_size_t elementSize);
                void _setRawAutoConstantReal(ev_size_t physicalIndex, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, Real rData,
                                             ev_uint16 variability);
                /**** Unbind an auto constant so that the constant is manually controlled again. */
                void clearAutoConstant(ev_size_t index);
                /***** Sets a named parameter up to track a derivation of the current time.
                @param index The index of the parameter
                @param factor The amount by which to scale the time value
                ****/
                void setConstantFromTime(ev_size_t index, Real factor);
                /**** Clears all the existing automatic constants. */
                void clearAutoConstants();
                ///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList> EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator;
                class EV_GRAPHIC_DLL AutoConstantIterator: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList> InternalIterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="start">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    AutoConstantIterator(_in IteratorType start, _in IteratorType last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~AutoConstantIterator();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNext () const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext ();
                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    const IteratorType &current();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator &operator=(_in const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator &other);
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    AutoConstantIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="vec">迭代器对应集合</param>
                    /// <returns></returns>
                    AutoConstantIterator(_in EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList &vec);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="rhs">其它迭代器</param>
                    /// <returns></returns>
                    AutoConstantIterator(_in const AutoConstantIterator &rhs);
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext ();
                    /// <summary>
                    /// 返回容器当前元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前元素值</returns>
                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry getCurrent();
                    /// <summary>
                    /// 返回容器下一元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>下一元素值</returns>
                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry next();
                    /// <summary>
                    /// 返回容器头部元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>头部元素值</returns>
                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry getBegin();
                    /// <summary>
                    /// 返回容器尾部元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾部元素值</returns>
                    EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry getEnd();
                private:
                    InternalIterator *mIterator;
                };
                /**** Gets an iterator over the automatic constant bindings currently in place. ****/
                EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator getAutoConstantIterator() const;
                //// Gets the number of ev_int32 constants that have been set
                ev_size_t getAutoConstantCount() const;
                /**** Gets a specific Auto Constant entry if index is in valid range
                otherwise returns a NULL
                @param index which entry is to be retrieved
                ****/
                EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *getAutoConstantEntry(const ev_size_t index);
                /**** Returns true if this instance has any automatic constants. ****/
                ev_bool hasAutoConstants() const;
                /**** Finds an auto constant that's affecting a given logical parameter
                index for floating-point values.
                @note Only applicable for low-level programs.
                ****/
                const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *findFloatAutoConstantEntry(ev_size_t logicalIndex);
                /**** Finds an auto constant that's affecting a given logical parameter
                index for integer values.
                @note Only applicable for low-level programs.
                ****/
                const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *findIntAutoConstantEntry(ev_size_t logicalIndex);
                /**** Finds an auto constant that's affecting a given named parameter index.
                @note Only applicable to high-level programs.
                ****/
                const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *findAutoConstantEntry(const EVString &paramName);
                /**** Finds an auto constant that's affecting a given physical position in
                the floating-point buffer
                ****/
                const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *_findRawAutoConstantEntryFloat(ev_size_t physicalIndex);
                /**** Finds an auto constant that's affecting a given physical position in
                the integer buffer
                ****/
                const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *_findRawAutoConstantEntryInt(ev_size_t physicalIndex);
                /**** Update automatic parameters.
                @param source The source of the parameters
                @param variabilityMask A mask of GpuParamVariability which identifies which autos will need updating
                ****/
                void _updateAutoParams(const EarthView::World::Graphic::CAutoParamDataSource *source, ev_uint16 variabilityMask);
                /**** Tells the program whether to ignore missing parameters or not.
                ****/
                void setIgnoreMissingParams(ev_bool state);
                /**** Sets a single value constant floating-point parameter to the program.
                @remarks
                Different types of GPU programs support different types of constant parameters.
                For example, it's relatively common to find that vertex programs only support
                floating point constants, and that fragment programs only support integer (fixed point)
                parameters. This can vary depending on the program version supported by the
                graphics card being used. You should consult the documentation for the type of
                provided on CRenderSystemCapabilities to determine the options.
                @par
                Another possible limitation is that some systems only allow constants to be set
                on certain boundaries, e.g. in sets of 4 values for example. Again, see
                CRenderSystemCapabilities for full details.
                @note
                from a high-level program (CHighLevelGpuProgram).
                @param name The name of the parameter
                @param val The value to set
                ****/
                void setNamedConstant(const EVString &name, Real val);
                /**** Sets a single value constant integer parameter to the program.
                @remarks
                Different types of GPU programs support different types of constant parameters.
                For example, it's relatively common to find that vertex programs only support
                floating point constants, and that fragment programs only support integer (fixed point)
                parameters. This can vary depending on the program version supported by the
                graphics card being used. You should consult the documentation for the type of
                provided on CRenderSystemCapabilities to determine the options.
                @par
                Another possible limitation is that some systems only allow constants to be set
                on certain boundaries, e.g. in sets of 4 values for example. Again, see
                CRenderSystemCapabilities for full details.
                @note
                from a high-level program (CHighLevelGpuProgram).
                @param name The name of the parameter
                @param val The value to set
                ****/
                void setNamedConstant(const EVString &name, ev_int32 val);
                /**** Sets a EarthView::World::Spatial::Math::CVector4 parameter to the program.
                @param name The name of the parameter
                @param vec The value to set
                ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Spatial::Math::CVector4 &vec);
                /**** Sets a EarthView::World::Spatial::Math::CVector3 parameter to the program.
                @note
                from a high-level program (CHighLevelGpuProgram).
                @param index The index at which to place the parameter
                NB this index refers to the number of floats, so a EarthView::World::Spatial::Math::CVector3 is 3. Note that many
                rendersystems & programs assume that every floating point parameter is passed in
                as a vector of 4 items, so you are strongly advised to check with
                or EarthView::World::Graphic::CColourValue instead (both are 4D).
                @param vec The value to set
                ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Spatial::Math::CVector3 &vec);
                /**** Sets a EarthView::World::Spatial::Math::CMatrix4 parameter to the program.
                @param name The name of the parameter
                @param m The value to set
                ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Spatial::Math::CMatrix4 &m);
                /**** Sets a list of EarthView::World::Spatial::Math::CMatrix4 parameters to the program.
                @param name The name of the parameter; this must be the first index of an array,
                for examples 'matrices[0]'
                NB since a EarthView::World::Spatial::Math::CMatrix4 is 16 floats ev_int32, so each entry will take up 4 indexes.
                @param m Pointer to an array of matrices to set
                @param numEntries Number of EarthView::World::Spatial::Math::CMatrix4 entries
                ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Spatial::Math::CMatrix4 *m, ev_size_t numEntries);
                /**** Sets a multiple value constant floating-point parameter to the program.
                @par
                Some systems only allow constants to be set on certain boundaries,
                e.g. in sets of 4 values for example. The 'multiple' parameter allows
                you to control that although you should only change it if you know
                your chosen language supports that (at the time of writing, only
                GLSL allows constants which are not a multiple of 4).
                @note
                from a high-level program (CHighLevelGpuProgram).
                @param name The name of the parameter
                @param val Pointer to the values to write
                @param count The number of 'multiples' of floats to write
                @param multiple The number of raw entries in each element to write,
                the default is 4 so count = 1 would write 4 floats.
                ****/
                void setNamedConstant(const EVString &name, const ev_real32 *val, ev_size_t count,
                                      ev_size_t multiple);
                void setNamedConstant(const EVString &name, const ev_real32 *val, ev_size_t count);
                /**** Sets a multiple value constant floating-point parameter to the program.
                @par
                Some systems only allow constants to be set on certain boundaries,
                e.g. in sets of 4 values for example. The 'multiple' parameter allows
                you to control that although you should only change it if you know
                your chosen language supports that (at the time of writing, only
                GLSL allows constants which are not a multiple of 4).
                @note
                from a high-level program (CHighLevelGpuProgram).
                @param name The name of the parameter
                @param val Pointer to the values to write
                @param count The number of 'multiples' of floats to write
                @param multiple The number of raw entries in each element to write,
                the default is 4 so count = 1 would write 4 floats.
                ****/
                void setNamedConstant(const EVString &name, const ev_real64 *val, ev_size_t count,
                                      ev_size_t multiple );
                void setNamedConstant(const EVString &name, const ev_real64 *val, ev_size_t count);
                /**** Sets a EarthView::World::Graphic::CColourValue parameter to the program.
                @param name The name of the parameter
                @param colour The value to set
                ****/
                void setNamedConstant(const EVString &name, const EarthView::World::Graphic::CColourValue &colour);
                /**** Sets a multiple value constant floating-point parameter to the program.
                @par
                Some systems only allow constants to be set on certain boundaries,
                e.g. in sets of 4 values for example. The 'multiple' parameter allows
                you to control that although you should only change it if you know
                your chosen language supports that (at the time of writing, only
                GLSL allows constants which are not a multiple of 4).
                @note
                from a high-level program (CHighLevelGpuProgram).
                @param name The name of the parameter
                @param val Pointer to the values to write
                @param count The number of 'multiples' of floats to write
                @param multiple The number of raw entries in each element to write,
                the default is 4 so count = 1 would write 4 floats.
                ****/
                void setNamedConstant(const EVString &name, const ev_int32 *val, ev_size_t count,
                                      ev_size_t multiple);
                void setNamedConstant(const EVString &name, const ev_int32 *val, ev_size_t count);
                /**** Sets up a constant which will automatically be updated by the system.
                @remarks
                Vertex and fragment programs often need parameters which are to do with the
                current render state, or particular values which may very well change over time,
                and often between objects which are being rendered. This feature allows you
                to set up a certain number of predefined parameter mappings that are kept up to
                date for you.
                @note
                from a high-level program (CHighLevelGpuProgram).
                @param name The name of the parameter
                @param acType The type of automatic constant to set
                @param extraInfo If the constant type needs more information (like a light index) put it here.
                ****/
                void setNamedAutoConstant(const EVString &name, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, ev_size_t extraInfo);
                void setNamedAutoConstant(const EVString &name, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType);
                void setNamedAutoConstantReal(const EVString &name, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, Real rData);
                /**** Sets up a constant which will automatically be updated by the system.
                @remarks
                Vertex and fragment programs often need parameters which are to do with the
                current render state, or particular values which may very well change over time,
                and often between objects which are being rendered. This feature allows you
                to set up a certain number of predefined parameter mappings that are kept up to
                date for you.
                @note
                from a high-level program (CHighLevelGpuProgram).
                @param name The name of the parameter
                @param acType The type of automatic constant to set
                @param extraInfo1 The first extra info required by this auto constant type
                @param extraInfo2 The first extra info required by this auto constant type
                ****/
                void setNamedAutoConstant(const EVString &name, EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType, ev_uint16 extraInfo1, ev_uint16 extraInfo2);
                /**** Sets a named parameter up to track a derivation of the current time.
                @note
                from a high-level program (CHighLevelGpuProgram).
                @param name The name of the parameter
                @param factor The amount by which to scale the time value
                ****/
                void setNamedConstantFromTime(const EVString &name, Real factor);
                /**** Unbind an auto constant so that the constant is manually controlled again. ****/
                void clearNamedAutoConstant(const EVString &name);
                /**** Find a constant definition for a named parameter.
                @remarks
                This method returns null if the named parameter did not exist, unlike
                getConstantDefinition which is more strict; unless you set the
                last parameter to true.
                @param name The name to look up
                @param throwExceptionIfMissing If set to true, failure to find an entry
                will throw an exception.
                ****/
                const EarthView::World::Graphic::GpuConstantDefinition *_findNamedConstantDefinition(
                    const EVString &name, ev_bool throwExceptionIfMissing ) const;
                const EarthView::World::Graphic::GpuConstantDefinition *_findNamedConstantDefinition(
                    const EVString &name) const;
                /**** Gets the physical buffer index associated with a logical ev_real32 constant index.
                @note Only applicable to low-level programs.
                @param logicalIndex The logical parameter index
                @param requestedSize The requested size - pass 0 to ignore missing entries
                and return std::numeric_limits<ev_size_t>::max()
                ****/
                ev_size_t _getFloatConstantPhysicalIndex(ev_size_t logicalIndex, ev_size_t requestedSize, ev_uint16 variability);
                /**** Gets the physical buffer index associated with a logical ev_int32 constant index.
                @note Only applicable to low-level programs.
                @param logicalIndex The logical parameter index
                @param requestedSize The requested size - pass 0 to ignore missing entries
                and return std::numeric_limits<ev_size_t>::max()
                ****/
                ev_size_t _getIntConstantPhysicalIndex(ev_size_t logicalIndex, ev_size_t requestedSize, ev_uint16 variability);
                /**** Sets whether or not we need to transpose the matrices passed in from the rest of EV_World.
                @remarks
                D3D uses transposed matrices compared to GL and EV_World; this is not important when you
                use programs which are written to process row-major matrices, such as those generated
                by Cg, but if you use a program written to D3D's matrix layout you will need to enable
                this flag.
                ****/
                void setTransposeMatrices(ev_bool val);
                //// Gets whether or not matrices are to be transposed when set
                ev_bool getTransposeMatrices() const;

                /**** Copies the values of all constants (including auto constants) from another
                EarthView::World::Graphic::CGpuProgramParameters object.
                @note This copes the internal storage of the paarameters object and therefore
                can only be used for parameters objects created from the same CGpuProgram.
                To merge parameters that match from different programs, use copyMatchingNamedConstantsFrom.
                ****/
                void copyConstantsFrom(const EarthView::World::Graphic::CGpuProgramParameters &source);
                /**** Copies the values of all matching named constants (including auto constants) from
                another EarthView::World::Graphic::CGpuProgramParameters object.
                @remarks
                This method iterates over the named constants in another parameters object
                and copies across the values where they match. This method is safe to
                use when the 2 parameters objects came from different programs, but only
                works for named parameters.
                ****/
                void copyMatchingNamedConstantsFrom(const EarthView::World::Graphic::CGpuProgramParameters &source);
                /**** gets the auto constant definition associated with name if found else returns NULL
                @param name The name of the auto constant
                ****/
                static const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *getAutoConstantDefinition(const EVString &name);
				/*
                If the index is out of bounds then NULL is returned;
                @param idx The auto constant index
                ****/
                static const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *getAutoConstantDefinition(const ev_size_t idx);
                /**** Returns the number of auto constant definitions
                ****/
                static ev_size_t getNumAutoConstantDefinitions();

                /**** increments the multipass number entry by 1 if it exists
                ****/
                void incPassIterationNumber();
                /**** Does this parameters object have a pass iteration number constant? ****/
                ev_bool hasPassIterationNumber() const;
                /**** Get the physical buffer index of the pass iteration number constant ****/
                ev_size_t getPassIterationNumberIndex() const;

                /**** Use a set of shared parameters in this parameters object.
                @remarks
                	Allows you to use a set of shared parameters to automatically update
                	this parameter set.
                ****/
                void addSharedParameters(EarthView::World::Graphic::GpuSharedParametersPtr sharedParams);
                /**** Use a set of shared parameters in this parameters object.
                @remarks
                	Allows you to use a set of shared parameters to automatically update
                	this parameter set.
                @param sharedParamsName The name of a shared parameter set as defined in
                	CGpuProgramManager
                ****/
                void addSharedParameters(const EVString &sharedParamsName);
                ev_bool isUsingSharedParameters(const EVString &sharedParamsName) const;
                void removeSharedParameters(const EVString &sharedParamsName);
                void removeAllSharedParameters();
                /**** Get the list of shared parameter sets. ****/
                const EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList &getSharedParameters() const;


                /**** Update the parameters by copying the data from the shared
                parameters.
                @note This method  may not actually be called if the CRenderSystem
                which case the values should not be copied out of the shared area
                into the individual parameter set, but bound separately.
                ****/
                void _copySharedParams();
            ev_private:
                /**** Internal method that the CRenderSystem might use to store optional data. */
                void _setRenderSystemData(const EarthView::World::Core::CAny &data) const;
                /**** Internal method that the CRenderSystem might use to store optional data. */
                const EarthView::World::Core::CAny &_getRenderSystemData() const;
            };
            //// Shared pointer used to hold references to EarthView::World::Graphic::CGpuProgramParameters instances
            /****typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters> EarthView::World::Graphic::GpuProgramParametersSharedPtr;****/
            class EV_GRAPHIC_DLL GpuProgramParametersSharedPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters>
            {
            ev_private:
                GpuProgramParametersSharedPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters>(
                        pList && pList->Exist("rep") ? (EarthView::World::Graphic::CGpuProgramParameters *)pList->GetAt("rep") : (EarthView::World::Graphic::CGpuProgramParameters *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters>r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                GpuProgramParametersSharedPtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters>() {}
                explicit GpuProgramParametersSharedPtr(EarthView::World::Graphic::CGpuProgramParameters *rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters>(rep) {}
                explicit GpuProgramParametersSharedPtr(EarthView::World::Graphic::CGpuProgramParameters *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters>(rep, inFreeMethod) {}
                GpuProgramParametersSharedPtr(const GpuProgramParametersSharedPtr &r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters>(r) {}

                EarthView::World::Graphic::CGpuProgramParameters *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgramParameters>::get();
                }
            };
        }
    }
}

#endif

