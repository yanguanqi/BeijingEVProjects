#ifndef _ShaderParameter_
#define _ShaderParameter_
#include <mathengine/vector2.h>
#include <mathengine/vector3.h>
#include <mathengine/vector4.h>
#include <mathengine/matrix4.h>
#include "shaderprerequisites.h"
#include <gpuprogram.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** A class that represents a shader based program parameter.
                */
                class EV_RTSS_DLL CParameter : public EarthView::World::Core::CAllocatedObject
                {
                public:
                    /// Shader parameter semantic.
                    enum Semantic
                    {
                        //// Unknown semantic
                        SPS_UNKNOWN = 0,
                        //// Position
                        SPS_POSITION = 1,
                        //// Blending weights
                        SPS_BLEND_WEIGHTS = 2,
                        //// Blending indices
                        SPS_BLEND_INDICES = 3,
                        //// Normal, 3 reals per vertex
                        SPS_NORMAL = 4,
                        //// General floating point color.
                        SPS_COLOR = 5,
                        //// Texture coordinates
                        SPS_TEXTURE_COORDINATES = 7,
                        //// Binormal (Y axis if normal is Z)
                        SPS_BINORMAL = 8,
                        //// Tangent (X axis if normal is Z)
                        SPS_TANGENT = 9
                    };
                    /// Shader parameter content.
                    enum Content
                    {
                        //// Unknown content
                        SPC_UNKNOWN,
                        //// Position in object space
                        SPC_POSITION_OBJECT_SPACE,
                        //// Position in world space
                        SPC_POSITION_WORLD_SPACE,
                        //// Position in view space
                        SPC_POSITION_VIEW_SPACE,
                        //// Position in projective space
                        SPC_POSITION_PROJECTIVE_SPACE,
                        //// Position in light space index 0-7
                        SPC_POSITION_LIGHT_SPACE0,
                        SPC_POSITION_LIGHT_SPACE1,
                        SPC_POSITION_LIGHT_SPACE2,
                        SPC_POSITION_LIGHT_SPACE3,
                        SPC_POSITION_LIGHT_SPACE4,
                        SPC_POSITION_LIGHT_SPACE5,
                        SPC_POSITION_LIGHT_SPACE6,
                        SPC_POSITION_LIGHT_SPACE7,
                        //// Normal in object space
                        SPC_NORMAL_OBJECT_SPACE,
                        //// Normal in world space
                        SPC_NORMAL_WORLD_SPACE,
                        //// Normal in view space
                        SPC_NORMAL_VIEW_SPACE,
                        //// Normal in tangent space
                        SPC_NORMAL_TANGENT_SPACE,
                        //// View vector in object space
                        SPC_POSTOCAMERA_OBJECT_SPACE,
                        //// View vector in world space
                        SPC_POSTOCAMERA_WORLD_SPACE,
                        //// View vector in view space
                        SPC_POSTOCAMERA_VIEW_SPACE,
                        //// View vector in tangent space
                        SPC_POSTOCAMERA_TANGENT_SPACE,
                        //// CLight vector in object space index 0-7
                        SPC_POSTOLIGHT_OBJECT_SPACE0,
                        SPC_POSTOLIGHT_OBJECT_SPACE1,
                        SPC_POSTOLIGHT_OBJECT_SPACE2,
                        SPC_POSTOLIGHT_OBJECT_SPACE3,
                        SPC_POSTOLIGHT_OBJECT_SPACE4,
                        SPC_POSTOLIGHT_OBJECT_SPACE5,
                        SPC_POSTOLIGHT_OBJECT_SPACE6,
                        SPC_POSTOLIGHT_OBJECT_SPACE7,
                        //// CLight vector in world space index 0-7
                        SPC_POSTOLIGHT_WORLD_SPACE0,
                        SPC_POSTOLIGHT_WORLD_SPACE1,
                        SPC_POSTOLIGHT_WORLD_SPACE2,
                        SPC_POSTOLIGHT_WORLD_SPACE3,
                        SPC_POSTOLIGHT_WORLD_SPACE4,
                        SPC_POSTOLIGHT_WORLD_SPACE5,
                        SPC_POSTOLIGHT_WORLD_SPACE6,
                        SPC_POSTOLIGHT_WORLD_SPACE7,
                        //// CLight vector in view space index 0-7
                        SPC_POSTOLIGHT_VIEW_SPACE0,
                        SPC_POSTOLIGHT_VIEW_SPACE1,
                        SPC_POSTOLIGHT_VIEW_SPACE2,
                        SPC_POSTOLIGHT_VIEW_SPACE3,
                        SPC_POSTOLIGHT_VIEW_SPACE4,
                        SPC_POSTOLIGHT_VIEW_SPACE5,
                        SPC_POSTOLIGHT_VIEW_SPACE6,
                        SPC_POSTOLIGHT_VIEW_SPACE7,
                        //// CLight vector in tangent space index 0-7
                        SPC_POSTOLIGHT_TANGENT_SPACE0,
                        SPC_POSTOLIGHT_TANGENT_SPACE1,
                        SPC_POSTOLIGHT_TANGENT_SPACE2,
                        SPC_POSTOLIGHT_TANGENT_SPACE3,
                        SPC_POSTOLIGHT_TANGENT_SPACE4,
                        SPC_POSTOLIGHT_TANGENT_SPACE5,
                        SPC_POSTOLIGHT_TANGENT_SPACE6,
                        SPC_POSTOLIGHT_TANGENT_SPACE7,
                        //// CLight direction in object space index 0-7
                        SPC_LIGHTDIRECTION_OBJECT_SPACE0,
                        SPC_LIGHTDIRECTION_OBJECT_SPACE1,
                        SPC_LIGHTDIRECTION_OBJECT_SPACE2,
                        SPC_LIGHTDIRECTION_OBJECT_SPACE3,
                        SPC_LIGHTDIRECTION_OBJECT_SPACE4,
                        SPC_LIGHTDIRECTION_OBJECT_SPACE5,
                        SPC_LIGHTDIRECTION_OBJECT_SPACE6,
                        SPC_LIGHTDIRECTION_OBJECT_SPACE7,
                        //// CLight direction in world space index 0-7
                        SPC_LIGHTDIRECTION_WORLD_SPACE0,
                        SPC_LIGHTDIRECTION_WORLD_SPACE1,
                        SPC_LIGHTDIRECTION_WORLD_SPACE2,
                        SPC_LIGHTDIRECTION_WORLD_SPACE3,
                        SPC_LIGHTDIRECTION_WORLD_SPACE4,
                        SPC_LIGHTDIRECTION_WORLD_SPACE5,
                        SPC_LIGHTDIRECTION_WORLD_SPACE6,
                        SPC_LIGHTDIRECTION_WORLD_SPACE7,
                        //// CLight direction in view space index 0-7
                        SPC_LIGHTDIRECTION_VIEW_SPACE0,
                        SPC_LIGHTDIRECTION_VIEW_SPACE1,
                        SPC_LIGHTDIRECTION_VIEW_SPACE2,
                        SPC_LIGHTDIRECTION_VIEW_SPACE3,
                        SPC_LIGHTDIRECTION_VIEW_SPACE4,
                        SPC_LIGHTDIRECTION_VIEW_SPACE5,
                        SPC_LIGHTDIRECTION_VIEW_SPACE6,
                        SPC_LIGHTDIRECTION_VIEW_SPACE7,
                        //// CLight direction in tangent space index 0-7
                        SPC_LIGHTDIRECTION_TANGENT_SPACE0,
                        SPC_LIGHTDIRECTION_TANGENT_SPACE1,
                        SPC_LIGHTDIRECTION_TANGENT_SPACE2,
                        SPC_LIGHTDIRECTION_TANGENT_SPACE3,
                        SPC_LIGHTDIRECTION_TANGENT_SPACE4,
                        SPC_LIGHTDIRECTION_TANGENT_SPACE5,
                        SPC_LIGHTDIRECTION_TANGENT_SPACE6,
                        SPC_LIGHTDIRECTION_TANGENT_SPACE7,
                        //// CLight position in object space index 0-7
                        SPC_LIGHTPOSITION_OBJECT_SPACE0,
                        SPC_LIGHTPOSITION_OBJECT_SPACE1,
                        SPC_LIGHTPOSITION_OBJECT_SPACE2,
                        SPC_LIGHTPOSITION_OBJECT_SPACE3,
                        SPC_LIGHTPOSITION_OBJECT_SPACE4,
                        SPC_LIGHTPOSITION_OBJECT_SPACE5,
                        SPC_LIGHTPOSITION_OBJECT_SPACE6,
                        SPC_LIGHTPOSITION_OBJECT_SPACE7,
                        //// CLight position in world space index 0-7
                        SPC_LIGHTPOSITION_WORLD_SPACE0,
                        SPC_LIGHTPOSITION_WORLD_SPACE1,
                        SPC_LIGHTPOSITION_WORLD_SPACE2,
                        SPC_LIGHTPOSITION_WORLD_SPACE3,
                        SPC_LIGHTPOSITION_WORLD_SPACE4,
                        SPC_LIGHTPOSITION_WORLD_SPACE5,
                        SPC_LIGHTPOSITION_WORLD_SPACE6,
                        SPC_LIGHTPOSITION_WORLD_SPACE7,
                        //// CLight position in view space index 0-7
                        SPC_LIGHTPOSITIONVIEW_SPACE0,
                        SPC_LIGHTPOSITIONVIEW_SPACE1,
                        SPC_LIGHTPOSITIONVIEW_SPACE2,
                        SPC_LIGHTPOSITIONVIEW_SPACE3,
                        SPC_LIGHTPOSITIONVIEW_SPACE4,
                        SPC_LIGHTPOSITIONVIEW_SPACE5,
                        SPC_LIGHTPOSITIONVIEW_SPACE6,
                        SPC_LIGHTPOSITIONVIEW_SPACE7,
                        //// CLight position in tangent space index 0-7
                        SPC_LIGHTPOSITION_TANGENT_SPACE,
                        //// Blending weights
                        SPC_BLEND_WEIGHTS,
                        //// Blending indices
                        SPC_BLEND_INDICES,

                        //// Tangent in object space
                        SPC_TANGENT_OBJECT_SPACE,
                        //// Tangent in world space
                        SPC_TANGENT_WORLD_SPACE,
                        //// Tangent in view space
                        SPC_TANGENT_VIEW_SPACE,
                        //// Tangent in tangent space
                        SPC_TANGENT_TANGENT_SPACE,
                        //// Binormal in object space
                        SPC_BINORMAL_OBJECT_SPACE,
                        //// Binormal in world space
                        SPC_BINORMAL_WORLD_SPACE,
                        //// Binormal in view space
                        SPC_BINORMAL_VIEW_SPACE,
                        //// Binormal in tangent space
                        SPC_BINORMAL_TANGENT_SPACE,
                        //// Diffuse color
                        SPC_COLOR_DIFFUSE,
                        //// Specular color
                        SPC_COLOR_SPECULAR,
                        //// Depth in object space
                        SPC_DEPTH_OBJECT_SPACE,
                        //// Depth in world space
                        SPC_DEPTH_WORLD_SPACE,
                        //// Depth in view space
                        SPC_DEPTH_VIEW_SPACE,
                        //// Depth in projective space
                        SPC_DEPTH_PROJECTIVE_SPACE,
                        //// Texture coordinate set index 0-7
                        SPC_TEXTURE_COORDINATE0,
                        SPC_TEXTURE_COORDINATE1,
                        SPC_TEXTURE_COORDINATE2,
                        SPC_TEXTURE_COORDINATE3,
                        SPC_TEXTURE_COORDINATE4,
                        SPC_TEXTURE_COORDINATE5,
                        SPC_TEXTURE_COORDINATE6,
                        SPC_TEXTURE_COORDINATE7,
                        //// Reserved custom content range to be used by user custom shader extensions.
                        SPC_CUSTOM_CONTENT_BEGIN	= 1000,
                        SPC_CUSTOM_CONTENT_END		= 2000
                    };
                ev_private:
                    CParameter(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** */
                    CParameter() {}
                    /** Class constructor.
                    @param type The type of this parameter.
                    @param name The name of this parameter.
                    @param semantic The semantic of this parameter.
                    @param index The index of this parameter.
                    @param content The content of this parameter.
                    @param variability How this parameter varies (bitwise combination of GpuProgramVariability).
                    @ev_size_t size = 0
                    */
                    CParameter(EarthView::World::Graphic::GpuConstantType type, const EVString &name,
                               const EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic &semantic, ev_int32 index,
                               const EarthView::World::Graphic::RTShaderSystem::CParameter::Content &content, ev_size_t size );
                    CParameter(EarthView::World::Graphic::GpuConstantType type, const EVString &name,
                               const EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic &semantic, ev_int32 index,
                               const EarthView::World::Graphic::RTShaderSystem::CParameter::Content &content);
                    /** Class destructor */
                    virtual ~CParameter() {};
                    /** Get the name of this parameter. */
                    const EVString			&getName							() const
                    {
                        return mName;
                    }
                    /** Get the type of this parameter. */
                    EarthView::World::Graphic::GpuConstantType			getType							() const
                    {
                        return mType;
                    }
                    /** Get the semantic of this parameter. */
                    const EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic			&getSemantic						() const
                    {
                        return mSemantic;
                    }
                    /** Get the index of this parameter. */
                    ev_int32						getIndex						() const
                    {
                        return mIndex;
                    }

                    /** Return the content of this parameter. */
                    EarthView::World::Graphic::RTShaderSystem::CParameter::Content					getContent							() const
                    {
                        return mContent;
                    }
                    /** Returns true if this instance is a ConstParameter otherwise false. */
                    virtual ev_bool			isConstParameter					() const
                    {
                        return false;
                    }
                    /** Returns the string representation of this parameter. */
                    virtual EVString			toString							() const
                    {
                        return mName;
                    }

                    /** Returns Whether this parameter is an array. */
                    ev_bool					isArray								() const
                    {
                        return mSize > 0;
                    }
                    /** Returns the number of elements in the parameter (for arrays). */
                    ev_size_t					getSize								() const
                    {
                        return mSize;
                    }

                    /** Sets the number of elements in the parameter (for arrays). */
                    void					setSize								(ev_size_t size)
                    {
                        mSize = size;
                    }
                    /// Attributes.
                protected:
                    EVString									mName;									/// Name of this parameter.
                    EarthView::World::Graphic::GpuConstantType							mType;									/// Type of this parameter.
                    EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic								mSemantic;								/// EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic of this parameter.
                    ev_int32										mIndex;									/// Index of this parameter.
                    EarthView::World::Graphic::RTShaderSystem::CParameter::Content									mContent;								/// The content of this parameter.
                    ev_size_t									mSize;									/// Number of elements in the parameter (for arrays)

                };
                ///typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>					EarthView::World::Graphic::RTShaderSystem::ParameterPtr;
                class EV_RTSS_DLL ParameterPtr : public EarthView::World::Core::CBaseObject, 
					public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ParameterPtr( _in EarthView::World::Core::CNameValuePairList *pList ) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>(
                            pList && pList->Exist("rep") ? (EarthView::World::Graphic::RTShaderSystem::CParameter *)pList->GetAt("rep") : (EarthView::World::Graphic::RTShaderSystem::CParameter *) NULL
                            , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                    {
                        if(pList && pList->Exist("r"))
                        {
                            EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>*)pList->GetAt("r");
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
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ParameterPtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>()
                    {
                    }
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rep"></param>
                    /// <returns></returns>
                    explicit ParameterPtr( EarthView::World::Graphic::RTShaderSystem::CParameter *rep ) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>(rep)
                    {
                    }
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rep"></param>
                    /// <param name="inFreeMethod"></param>
                    /// <returns></returns>
                    explicit ParameterPtr( EarthView::World::Graphic::RTShaderSystem::CParameter *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod ) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>(rep, inFreeMethod)
                    {
                    }
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="r"></param>
                    /// <returns></returns>
                    ParameterPtr( const ParameterPtr &r ) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>(r)
                    {
                    }

                    EarthView::World::Graphic::RTShaderSystem::CParameter *get() const
                    {
                        return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>::get();
                    }
                };
                ///typedef vector<EarthView::World::Graphic::RTShaderSystem::ParameterPtr>				ShaderParameterList;
                class EV_RTSS_DLL ShaderParameterList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::ParameterPtr> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::RTShaderSystem::ParameterPtr const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    ShaderParameterList(_in EarthView::World::Core::CNameValuePairList *pList) {};
                public:
                    ShaderParameterList() {};
                    void push_back(EarthView::World::Graphic::RTShaderSystem::ParameterPtr t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr &back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::RTShaderSystem::ParameterPtr const &t)
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
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr const &at(ev_size_t n) const
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
                typedef ShaderParameterList::iterator 			ShaderParameterIterator;
                typedef ShaderParameterList::const_iterator		ShaderParameterConstIterator;
                /** Uniform parameter class. Allow fast access to GPU parameter updates.
                */
                class EV_RTSS_DLL CUniformParameter : public EarthView::World::Graphic::RTShaderSystem::CParameter
                {
                ev_private:
                    CUniformParameter(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Class constructor.
                    @param type The type of this parameter.
                    @param name The name of this parameter.
                    @param semantic The semantic of this parameter.
                    @param index The index of this parameter.
                    @param content The content of this parameter.
                    @param variability How this parameter varies (bitwise combination of GpuProgramVariability).
                    @param size number of elements in the parameter.
                    */
                    CUniformParameter(EarthView::World::Graphic::GpuConstantType type, const EVString &name,
                                      const EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic &semantic, ev_int32 index,
                                      const EarthView::World::Graphic::RTShaderSystem::CParameter::Content &content,
                                      ev_uint16 variability, ev_size_t size);
                    /** Class constructor.
                    @param autoType The auto type of this parameter.
                    @param fAutoConstantData The real data for this auto constant parameter.
                    @param size number of elements in the parameter.
                    */
                    CUniformParameter(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, Real fAutoConstantData, ev_size_t size);

                    /** Class constructor.
                    @param autoType The auto type of this parameter.
                    @param fAutoConstantData The real data for this auto constant parameter.
                    @param size number of elements in the parameter.
                    @param type The desired data type of this auto constant parameter.
                    */
                    CUniformParameter(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, Real fAutoConstantData, ev_size_t size, EarthView::World::Graphic::GpuConstantType type);
                    /** Class constructor.
                    @param autoType The auto type of this parameter.
                    @param nAutoConstantData The ev_int32 data for this auto constant parameter.
                    @param size number of elements in the parameter.
                    */
                    CUniformParameter(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, ev_size_t nAutoConstantData, ev_size_t size);

                    /** Class constructor.
                    @param autoType The auto type of this parameter.
                    @param nAutoConstantData The ev_int32 data for this auto constant parameter.
                    @param size number of elements in the parameter.
                    @param type The desired data type of this auto constant parameter.
                    */
                    CUniformParameter(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, ev_size_t nAutoConstantData, ev_size_t size, EarthView::World::Graphic::GpuConstantType type);

                    /** Get auto constant ev_int32 data of this parameter, in case it is auto constant parameter. */
                    ev_size_t					getAutoConstantIntData			() const
                    {
                        return mAutoConstantIntData;
                    }

                    /** Get auto constant real data of this parameter, in case it is auto constant parameter. */
                    Real					getAutoConstantRealData			() const
                    {
                        return mAutoConstantRealData;
                    }

                    /** Return true if this parameter is a floating point type, false otherwise. */
                    ev_bool					isFloat							() const;
                    /** Return true if this parameter is a texture sampler type, false otherwise. */
                    ev_bool					isSampler						() const;
                    /** Return true if this parameter is an auto constant parameter, false otherwise. */
                    ev_bool					isAutoConstantParameter				() const
                    {
                        return mIsAutoConstantReal || mIsAutoConstantInt;
                    }
                    /** Return true if this parameter an auto constant with ev_int32 data type, false otherwise. */
                    ev_bool					isAutoConstantIntParameter			() const
                    {
                        return mIsAutoConstantInt;
                    }
                    /** Return true if this parameter an auto constant with real data type, false otherwise. */
                    ev_bool					isAutoConstantRealParameter			() const
                    {
                        return mIsAutoConstantReal;
                    }
                    /** Return the auto constant type of this parameter. */
                    EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType getAutoConstantType	() const
                    {
                        return mAutoConstantType;
                    }
                    /** Return the variability of this parameter. */
                    ev_uint16					getVariability						() const
                    {
                        return mVariability;
                    }
                    /** Bind this parameter to the corresponding GPU parameter. */
                    void					bind								(EarthView::World::Graphic::GpuProgramParametersSharedPtr paramsPtr);
                public:
                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(ev_int32 val)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstant(mPhysicalIndex, val);
                        }
                    }
                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(Real val)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstant(mPhysicalIndex, val);
                        }
                    }
                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(const EarthView::World::Graphic::CColourValue &val)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstant(mPhysicalIndex, val);
                        }
                    }
                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(const EarthView::World::Spatial::Math::CVector2 &val)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstants(mPhysicalIndex, val.ptr(), 2);
                        }
                    }

                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(const EarthView::World::Spatial::Math::CVector3 &val)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstant(mPhysicalIndex, val);
                        }
                    }
                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(const EarthView::World::Spatial::Math::CVector4 &val)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstant(mPhysicalIndex, val);
                        }
                    }
                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(const EarthView::World::Spatial::Math::CMatrix4 &val)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstant(mPhysicalIndex, val, 16);
                        }
                    }
                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(const float *val, ev_size_t count, ev_size_t multiple)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstants(mPhysicalIndex, val, count * multiple);
                        }
                    }
                    void setGpuParameter(const float *val, ev_size_t count)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstants(mPhysicalIndex, val, count * 4);
                        }
                    }
                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(const double *val, ev_size_t count, ev_size_t multiple)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstants(mPhysicalIndex, val, count * multiple);
                        }
                    }
                    void setGpuParameter(const double *val, ev_size_t count)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstants(mPhysicalIndex, val, count * 4);
                        }
                    }
                    /** Update the GPU parameter with the given value. */
                    void setGpuParameter(const ev_int32 *val, ev_size_t count, ev_size_t multiple)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstants(mPhysicalIndex, val, count * multiple);
                        }
                    }
                    void setGpuParameter(const ev_int32 *val, ev_size_t count)
                    {
                        if (mParamsPtr != NULL)
                        {
                            mParamsPtr->_writeRawConstants(mPhysicalIndex, val, count * 4);
                        }
                    }
                protected:
                    ev_bool									mIsAutoConstantReal;					/// Is it auto constant real based parameter.
                    ev_bool									mIsAutoConstantInt;						/// Is it auto constant ev_int32 based parameter.
                    EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType	mAutoConstantType;						/// The auto constant type of this parameter.
                    union
                    {
                        ev_size_t	mAutoConstantIntData;												/// Auto constant ev_int32 data.
                        Real	mAutoConstantRealData;												/// Auto constant real data.
                    };
                    ev_uint16									mVariability;							/// How this parameter varies (bitwise combination of GpuProgramVariability).
                    CGpuProgramParameters					*mParamsPtr;								/// The actual GPU parameters pointer.
                    ev_size_t									mPhysicalIndex;							/// The physical index of this parameter in the GPU program.
                };
                ///typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>				EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr;
                class EV_RTSS_DLL UniformParameterPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>
                {
                ev_private:
                    UniformParameterPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>(
                            pList && pList->Exist("rep") ? (EarthView::World::Graphic::RTShaderSystem::CUniformParameter *)pList->GetAt("rep") : (EarthView::World::Graphic::RTShaderSystem::CUniformParameter *) NULL
                            , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                    {
                        if(pList && pList->Exist("r"))
                        {
                            EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>*)pList->GetAt("r");
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
                    UniformParameterPtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>() {}
                    explicit UniformParameterPtr(EarthView::World::Graphic::RTShaderSystem::CUniformParameter *rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>(rep) {}
                    explicit UniformParameterPtr(EarthView::World::Graphic::RTShaderSystem::CUniformParameter *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>(rep, inFreeMethod) {}
                    UniformParameterPtr(const UniformParameterPtr &r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>(r) {}

                    EarthView::World::Graphic::RTShaderSystem::CUniformParameter *get() const
                    {
                        return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>::get();
                    }
                    EarthView::World::Graphic::RTShaderSystem::CUniformParameter *get()
                    {
                        return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>::get();
                    }
                    operator ParameterPtr()const
                    {
                        EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

                            EarthView::World::Graphic::RTShaderSystem::ParameterPtr ptr;
                            ptr.pRep = static_cast<EarthView::World::Graphic::RTShaderSystem::CParameter *>(getPointer());
#if EV_THREAD_SUPPORT
                            ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
                            ptr.pUseCount = useCountPointer();
                            ptr.useFreeMethod = useFreeMethod;
                            if (pUseCount)
                            {
                                ++(*pUseCount);
                            }
                            return ptr;
                        }
                        else
                        {
                            return ParameterPtr();
                        }
                    }
                };

                ///typedef vector<EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr>		UniformParameterList;
                class EV_RTSS_DLL UniformParameterList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    UniformParameterList(_in EarthView::World::Core::CNameValuePairList *pList) {};
                public:
                    UniformParameterList() {};
                    void push_back(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr &back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr const &t)
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
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr const &at(ev_size_t n) const
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

                typedef UniformParameterList::iterator 			UniformParameterIterator;
                typedef UniformParameterList::const_iterator	UniformParameterConstIterator;
                /** Helper template which is the base for our ConstParameters
                */
                template <class valueType>
                class CConstParameter : public EarthView::World::Graphic::RTShaderSystem::CParameter
                {
                public:
                    CConstParameter(	valueType val,
                                        EarthView::World::Graphic::GpuConstantType type,
                                        const EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic &semantic,
                                        const EarthView::World::Graphic::RTShaderSystem::CParameter::Content &content)
                        : CParameter(type, "Constant", semantic, 0, content)
                    {
                        mValue = val;
                    }
                    virtual				~CConstParameter		() {}
                    /** Returns the native value of this parameter. (for example a EarthView::World::Spatial::Math::CVector3) */
                    const valueType	&getValue			() const
                    {
                        return mValue;
                    }
                    /**
                    @see Parameter::isConstParameter.
                    */
                    virtual ev_bool		isConstParameter	() const
                    {
                        return true;
                    }
                    /**
                    @see Parameter::toString.
                    */
                    virtual EVString		toString			() const = 0;
                protected:
                    valueType mValue;
                };
                /** Helper utility class that creates common parameters.
                */
                class EV_RTSS_DLL CParameterFactory : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CParameterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    /// Interface.
                public:
                    CParameterFactory() {}
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInPosition		(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutPosition		(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInNormal			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr createInWeights			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr createInIndices			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutNormal			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInBiNormal		(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutBiNormal		(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInTangent			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutTangent		(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInColor			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutColor			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInTexcoord		(EarthView::World::Graphic::GpuConstantType type, ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutTexcoord		(EarthView::World::Graphic::GpuConstantType type, ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInTexcoord1		(ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutTexcoord1		(ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInTexcoord2		(ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutTexcoord2		(ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInTexcoord3		(ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutTexcoord3		(ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createInTexcoord4		(ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createOutTexcoord4		(ev_int32 index, EarthView::World::Graphic::RTShaderSystem::CParameter::Content content);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createConstParamVector2	(EarthView::World::Spatial::Math::CVector2 val);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createConstParamVector3	(EarthView::World::Spatial::Math::CVector3 val);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createConstParamVector4	(EarthView::World::Spatial::Math::CVector4 val);
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr	createConstParamFloat	(float val);

                    static EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	createSampler			(EarthView::World::Graphic::GpuConstantType type, ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	createSampler1D			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	createSampler2D			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	createSampler2DArray		(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	createSampler3D			(ev_int32 index);
                    static EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	createSamplerCUBE		(ev_int32 index);

                    static EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	createUniform			(EarthView::World::Graphic::GpuConstantType type, 	ev_int32 index, ev_uint16 variability, const EVString &suggestedName, ev_size_t size);
                };
            }
        }
    }
}

#endif

