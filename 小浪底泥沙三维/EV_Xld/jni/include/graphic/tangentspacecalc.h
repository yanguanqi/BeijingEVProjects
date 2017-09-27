#ifndef _EVTangentSpaceCalc_H_
#define _EVTangentSpaceCalc_H_
#include "graphic/graphic_config.h"
#include "renderoperation.h"
#include "mathengine/vector2.h"
#include "mathengine/vector3.h"
#include "vertexindexdata.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

           
            class EV_GRAPHIC_DLL CTangentSpaceCalc : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CTangentSpaceCalc(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CTangentSpaceCalc();
                virtual ~CTangentSpaceCalc();
                ////typedef std::pair<ev_size_t, ev_size_t> EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit;
                class EV_GRAPHIC_DLL VertexSplit: public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_size_t first;
                    ev_size_t second;
                    VertexSplit();
                    VertexSplit(ev_size_t f, ev_size_t s);
                ev_private:
                    VertexSplit( _in EarthView::World::Core::CNameValuePairList *pList );
                };
                //// Information about a remapped index
                class EV_GRAPHIC_DLL IndexRemap : public EarthView::World::Core::CBaseObject
                {
                public:
                    //// Index data set (can be >0 if more than one index data was added)
                    ev_size_t indexSet;
                    //// The position in the index buffer that's affected
                    ev_size_t faceIndex;
                    //// The old and new vertex index
                    EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit splitVertex;

                    IndexRemap() {} 			//// to keep container happy
                    IndexRemap(ev_size_t i, ev_size_t f, const EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit &s);
                ev_private:
                    IndexRemap( _in EarthView::World::Core::CNameValuePairList *pList );
                };
                /***** List of indexes that were remapped (split vertices).
                ****/
                ////typedef list<EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap> EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList;
                class EV_GRAPHIC_DLL IndexRemapList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			////保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap const &t)
                    {
                        return mList.insert(pos, t);
                    }

                private:
                    InternalList mList;
                ev_private:
                    IndexRemapList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    IndexRemapList() {}
                    void push_back(_in EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap const &t)
                    {
                        mList.push_back(t);
                    }
                    void push_front(_in EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap const   &t)
                    {
                        mList.push_front(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    void pop_front()
                    {
                        mList.pop_front();
                    }

                    EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap &back()
                    {
                        return mList.back();
                    }
                    EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap &at(_in ev_uint32 pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        return *it;
                    }
                    void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap const &t)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.insert(it, t);
                    }
                    void remove(_in ev_size_t pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.erase(it);
                    }

                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(_in ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };
                ////typedef list<EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit> EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits;
                class EV_GRAPHIC_DLL VertexSplits : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit const &t)
                    {
                        return mList.insert(pos, t);
                    }

                private:
                    InternalList mList;
                ev_private:
                    VertexSplits(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    VertexSplits() {}
                    void push_back(_in EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit const &t)
                    {
                        mList.push_back(t);
                    }
                    void push_front(_in EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit const   &t)
                    {
                        mList.push_front(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    void pop_front()
                    {
                        mList.pop_front();
                    }

                    EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit &back()
                    {
                        return mList.back();
                    }
                    EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit &at(_in ev_uint32 pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        return *it;
                    }
                    void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit const &t)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.insert(it, t);
                    }
                    void remove(_in ev_size_t pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.erase(it);
                    }

                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(_in ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };
                //// The result of having built a tangent space basis
                class EV_GRAPHIC_DLL Result : public EarthView::World::Core::CBaseObject
                {
                public:
                    /***** A list of vertex indices which were split off into new vertices
                    	because of mirroring. First item in each pair is the source vertex
                    	index, the second value is the split vertex index.
                    ****/
                    Result() {}
                    EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits vertexSplits;
                    /***** A list of indexes which were affected by splits. You can use this if you have other
                    	triangle-based data which you will need to alter to match. ****/
                    EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList indexesRemapped;
                ev_private:
                    Result(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };
                //// Reset the calculation object
                void clear();
                /***** Set the incoming vertex data (which will be modified) ****/
                void setVertexData(EarthView::World::Graphic::CVertexData *v_in);
                /***** Add a set of index data that references the vertex data.
                	This might be modified if there are vertex splits.
                ****/
                void addIndexData(EarthView::World::Graphic::CIndexData *i_in);
                void addIndexData(EarthView::World::Graphic::CIndexData *i_in, EarthView::World::Graphic::CRenderOperation::OperationType opType);
                /***** Sets whether to store tangent space parity in the W of a 4-component tangent or not.
                @remarks
                	The default element format to use is VET_FLOAT3 which is enough to accurately
                	deal with tangents that do not involve any texture coordinate mirroring.
                	If you wish to allow UV mirroring in your model, you must enable 4-component
                	with the parity of the triangle (+1 or -1), which will allow you to generate
                	the bitangent properly.
                @param enable true to enable 4-component tangents (default false). If you enable
                	this, you will probably also want to enable mirror splitting (see setSplitMirrored),
                	and your shader must understand how to deal with the parity.
                ****/
                void setStoreParityInW(ev_bool enabled);
                /*****  Gets whether to store tangent space parity in the W of a 4-component tangent or not. ****/
                ev_bool getStoreParityInW() const;
                /***** Sets whether or not to split vertices when a mirrored tangent space
                	transition is detected (matrix parity differs).
                @remarks
                	This defaults to 'off' because it's the safest option; tangents will be
                	interpolated in all cases even if they don't agree around a vertex, so
                	unknown quality this can avoid extra seams on the visible surface.
                	However, if your artists are good, they will be hiding texture seams
                	in folds of the model and thus you can turn this option on, which will
                	prevent the results of those seams from getting smoothed into other
                	areas, which is exactly what you want.
                @note This option is automatically disabled if you provide any strip or
                	fan based geometry.
                ****/
                void setSplitMirrored(ev_bool split);

                /***** Gets whether or not to split vertices when a mirrored tangent space
                	transition is detected.
                ****/
                ev_bool getSplitMirrored() const;
                /***** Sets whether or not to split vertices when tangent space rotates
                	more than 90 degrees around a vertex.
                @remarks
                	This defaults to 'off' because it's the safest option; tangents will be
                	interpolated in all cases even if they don't agree around a vertex, so
                	unknown quality this can avoid extra seams on the visible surface.
                	However, if your artists are good, they will be hiding texture inconsistencies
                	in folds of the model and thus you can turn this option on, which will
                	prevent the results of those seams from getting smoothed into other
                	areas, which is exactly what you want.
                @note This option is automatically disabled if you provide any strip or
                	fan based geometry.
                ****/
                void setSplitRotated(ev_bool split);
                /***** Sets whether or not to split vertices when tangent space rotates
                more than 90 degrees around a vertex.
                ****/
                ev_bool getSplitRotated() const;
                /***** Build a tangent space basis from the provided data.
                @remarks
                	Only indexed triangle lists are allowed. Strips and fans cannot be
                	supported because it may be necessary to split the geometry up to
                	respect deviances in the tangent space basis better.
                @param targetSemantic The semantic to store the tangents in. Defaults to
                	the explicit tangent binding, but note that this is only usable on more
                	modern hardware (Shader Model 2), so if you need portability with older
                	cards you should change this to a texture coordinate binding instead.
                @param sourceTexCoordSet The texture coordinate index which should be used as the source
                    of 2D texture coordinates, with which to calculate the tangents.
                @param index The element index, ie the texture coordinate set which should be used to store the 3D
                    coordinates representing a tangent vector per vertex, if targetSemantic is
                	VES_TEXTURE_COORDINATES. If this already exists, it will be overwritten.
                @returns
                	A structure containing the results of the tangent space build. Vertex data
                	will always be modified but it's also possible that the index data
                	could be adjusted. This happens when mirroring is used on a mesh, which
                	causes the tangent space to be inverted on opposite sides of an edge.
                	This is discontinuous, therefore the vertices have to be split along
                	this edge, resulting in new vertices.
                ****/
                EarthView::World::Graphic::CTangentSpaceCalc::Result build();
                EarthView::World::Graphic::CTangentSpaceCalc::Result build(EarthView::World::Graphic::VertexElementSemantic targetSemantic);
                EarthView::World::Graphic::CTangentSpaceCalc::Result build(EarthView::World::Graphic::VertexElementSemantic targetSemantic,
                             ev_uint16 sourceTexCoordSet);
                EarthView::World::Graphic::CTangentSpaceCalc::Result build(EarthView::World::Graphic::VertexElementSemantic targetSemantic,
                             ev_uint16 sourceTexCoordSet, ev_uint16 index);

            protected:
                EarthView::World::Graphic::CVertexData *mVData;
                typedef vector<EarthView::World::Graphic::CIndexData *> IndexDataList;
                typedef vector<EarthView::World::Graphic::CRenderOperation::OperationType> OpTypeList;
                IndexDataList mIDataList;
                OpTypeList mOpTypes;
                ev_bool mSplitMirrored;
                ev_bool mSplitRotated;
                ev_bool mStoreParityInW;

                class  VertexInfo
                {
                public:
                    EarthView::World::Spatial::Math::CVector3 pos;
                    EarthView::World::Spatial::Math::CVector3 norm;
                    EarthView::World::Spatial::Math::CVector2 uv;
                    EarthView::World::Spatial::Math::CVector3 tangent;
                    EarthView::World::Spatial::Math::CVector3 binormal;
                    //// Which way the tangent space is oriented (+1 / -1) (set on first time found)
                    ev_int32 parity;
                    //// What index the opposite parity vertex copy is at (0 if not created yet)
                    ev_size_t oppositeParityIndex;
                    VertexInfo() : tangent(EarthView::World::Spatial::Math::CVector3::ZERO), binormal(EarthView::World::Spatial::Math::CVector3::ZERO),
                        parity(0), oppositeParityIndex(0) {}
                };
                typedef vector<VertexInfo> VertexInfoArray;
                VertexInfoArray mVertexArray;
                void extendBuffers(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits &splits);
                void insertTangents(EarthView::World::Graphic::CTangentSpaceCalc::Result &res,
                                    EarthView::World::Graphic::VertexElementSemantic targetSemantic,
                                    ev_uint16 sourceTexCoordSet, ev_uint16 index);
                void populateVertexArray(ev_uint16 sourceTexCoordSet);
                void processFaces(EarthView::World::Graphic::CTangentSpaceCalc::Result &result);
                //// Calculate face tangent space, U and V are weighted by UV area, N is normalised
                void calculateFaceTangentSpace(const ev_size_t *vertInd, EarthView::World::Spatial::Math::CVector3 &tsU, EarthView::World::Spatial::Math::CVector3 &tsV, EarthView::World::Spatial::Math::CVector3 &tsN);
                Real calculateAngleWeight(ev_size_t v0, ev_size_t v1, ev_size_t v2);
                ev_int32 calculateParity(const EarthView::World::Spatial::Math::CVector3 &u, const EarthView::World::Spatial::Math::CVector3 &v, const EarthView::World::Spatial::Math::CVector3 &n);
                void addFaceTangentSpaceToVertices(ev_size_t indexSet, ev_size_t faceIndex, ev_size_t *localVertInd,
                                                   const EarthView::World::Spatial::Math::CVector3 &faceTsU, const EarthView::World::Spatial::Math::CVector3 &faceTsV, const EarthView::World::Spatial::Math::CVector3 &faceNorm, EarthView::World::Graphic::CTangentSpaceCalc::Result &result);
                void normaliseVertices();
                void remapIndexes(EarthView::World::Graphic::CTangentSpaceCalc::Result &res);
                template <typename T>
                void remapIndexes(T *ibuf, ev_size_t indexSet, EarthView::World::Graphic::CTangentSpaceCalc::Result &res)
                {
                    for (IndexRemapList::iterator i = res.indexesRemapped.begin();
                            i != res.indexesRemapped.end(); ++i)
                    {
                        EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap &remap = *i;
                        //// Note that because this is a vertex split situation, and vertex
                        //// split is only for some faces, it's not a case of replacing all
                        //// instances of vertex index A with vertex index B
                        //// It actually matters which triangle we're talking about, so drive
                        //// the update from the face index
                        if (remap.indexSet == indexSet)
                        {
                            T *pBuf;
                            pBuf = ibuf + remap.faceIndex * 3;
                            for (ev_int32 v = 0; v < 3; ++v, ++pBuf)
                            {
                                if (*pBuf == remap.splitVertex.first)
                                {
                                    *pBuf = (T)remap.splitVertex.second;
                                }
                            }
                        }

                    }
                }
            };
        }
    }
}


#endif

