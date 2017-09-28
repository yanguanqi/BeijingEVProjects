#pragma once
#ifndef __SubMesh_H_
#define __SubMesh_H_
#include "graphic/graphic_config.h"
#include <core/commonstringpairlist.h>
#include <mathengine/vector3.h>
#include "mesh.h"
#include "renderoperation.h"
#include "core/string_array.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 定义子网格对象[网格对象的一部分，该部分只能使用一种材质]
            /// </summary>
            class EV_GRAPHIC_DLL CSubMesh : public EarthView::World::Core::CAllocatedObject
            {
                friend class CSubEntity;
				friend class CEntity;
                friend class CMesh;
                friend class CMeshSerializerImpl;
                friend class CMeshSerializerImpl_v1_2;
                friend class CMeshSerializerImpl_v1_1;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CSubMesh(_in EarthView::World::Core::CNameValuePairList *pList);

			private:
				struct InstanceData
				{
					ev_real64 m00,m01,m02,m03;
					ev_real64 m10,m11,m12,m13;
					ev_real64 m20,m21,m22,m23;
					ev_uint8 r,g,b,a;
				};

            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                CSubMesh();
                /// <summary>
                /// 析构函数
                /// </summary>
                ~CSubMesh();
                
				/// <summary>
				/// 添加submesh内部的instance
				/// </summary>
				/// <param name="matrix">instance矩阵</param>
				/// <param name="color">颜色</param>
				/// <returns></returns>
                bool addInstance(const EarthView::World::Spatial::Math::CMatrix4 &matrix, const EarthView::World::Graphic::CColourValue &color);
				/// <summary>
				/// 移除submesh内部指定序号的instance
				/// </summary>
				/// <param name="index">序号</param>				
				/// <returns></returns>
                bool removeInstance(ev_size_t index);                
				/// <summary>
				/// 清除submesh内部的instance
				/// </summary>						
				/// <returns></returns>
                void clearInstances();				
				/// <summary>
				/// 获取submesh内部指定序号的instance
				/// </summary>
				/// <param name="index">序号</param>				
				/// <returns></returns>
                bool getInstance(ev_size_t index, EarthView::World::Spatial::Math::CMatrix4 &matrix, EarthView::World::Graphic::CColourValue &color);   
				bool getInstance(ev_size_t index, EarthView::World::Spatial::Math::CMatrix4 &matrix);   
				bool getInstance(ev_size_t index, EarthView::World::Graphic::CColourValue &color);   
				/// <summary>
				/// 重新submesh内部指定序号的instance的矩阵和颜色
				/// </summary>
				/// <param name="index">序号</param>				
				/// <returns></returns>
                bool setInstance(ev_size_t index, const EarthView::World::Spatial::Math::CMatrix4 &matrix, const EarthView::World::Graphic::CColourValue &color);
				/// <summary>
				/// 获取submesh内部instance个数
				/// </summary>
				/// <param name="index">序号</param>				
				/// <returns></returns>
				ev_uint32 getNumInstance();
                ///------------------------------instance相关------------------------

                ///标识该网格和其他网格共享顶点数据还是该网格有它自己的顶点
                ev_bool useSharedVertices;
                ///用于渲染该子网格的渲染操作类型
                EarthView::World::Graphic::CRenderOperation::OperationType operationType;
                ///顶点数据，只有当useSharedVertices = false时，该值是有效的
                EarthView::World::Graphic::CVertexData *vertexData;
                ///面的索引数据
                EarthView::World::Graphic::CIndexData *indexData;
                ///利用索引映射把混合索引变换为骨骼索引，只有当useSharedVertices = false时，该变量有效
                /*typedef CMesh::IndexMap IndexMap;*/
                EarthView::World::Graphic::IndexMap blendIndexToBoneIndexMap;
                ///zxt updatefor v1.8
                EarthView::World::Graphic::CProgressiveMesh::LODFaceList mLodFaceList;
                ///vector<EarthView::World::Spatial::Math::CVector3> extremityPoints;
                ///子网格上一系列的终点
				EarthView::World::Spatial::Math::VertexList extremityPoints;
                //// Reference to parent EarthView::World::Graphic::CMesh (not a smart pointer so child does not keep parent alive).
                EarthView::World::Graphic::CMesh *parent;
                /// <summary>
                /// 设置子网格对象将要用到的材质名称
                /// </summary>
                /// <param name="matName">将要用到的材质的名称</param>
                /// <param name="groupName">资源组管理器名称</param>
                /// <returns></returns>
                void setMaterialName(const EVString &matName, const EVString &groupName);
                void setMaterialName(const EVString &matName);
                /// <summary>
                /// 获得材质名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回得到的材质名称</returns>
                const EVString &getMaterialName() const;
                /// <summary>
                /// 判断该子网格对象是否被赋予了一种材质
                /// </summary>
                /// <param name=""></param>
                /// <returns>若是返回true，不是则返回false</returns>
                ev_bool isMatInitialised() const;
                /// <summary>
                /// 返回一个渲染该网格的渲染操作结构
                /// </summary>
                /// <param name="rend">渲染操作</param>
                /// <param name="lodIndex">LOD的索引</param>
                /// <returns></returns>
                void _getRenderOperation(EarthView::World::Graphic::CRenderOperation &rend, ev_uint16 lodIndex);
                void _getRenderOperation(EarthView::World::Graphic::CRenderOperation &rend);
                /// <summary>
                /// 在骨骼动画中，用已知重量给骨骼赋一个顶点，该方法只有在调用setSkeletonName方法之后才有效
                /// </summary>
                /// <param name="vertBoneAssign"></param>
                /// <returns></returns>
                void addBoneAssignment(const EarthView::World::Graphic::VertexBoneAssignment &vertBoneAssign);
                /// <summary>
                /// 清除该网格上所有的骨骼配置
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clearBoneAssignments();
                //// Multimap of verex bone assignments (orders by vertex index)
                ///typedef multimap<ev_size_t, EarthView::World::Graphic::VertexBoneAssignment> VertexBoneAssignmentList;
                ///typedef EarthView::World::Core::CMapIterator<VertexBoneAssignmentList> EarthView::World::Graphic::BoneAssignmentIterator;
                /*typedef CMesh::BoneAssignmentIterator BoneAssignmentIterator;*/
                /// <summary>
                /// 得到一个迭代器用来存取所有的骨骼配置。只有当子网格有几何体时，该方法可用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::BoneAssignmentIterator getBoneAssignmentIterator();
                ///获得骨骼分配列表的参考
                const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList &getBoneAssignments();
                ///一旦编译骨骼分配到几何体缓冲时，必须调用该方法
                void _compileBoneAssignments();
                class EV_GRAPHIC_DLL AliasTexturePair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    AliasTexturePair(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    AliasTexturePair();
                    EVString first;
                    EVString second;
                };
                /// typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Core::AliasTextureNamePairList> EarthView::World::Graphic::CSubMesh::AliasTextureIterator;
                class EV_GRAPHIC_DLL AliasTextureIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Core::AliasTextureNamePairList> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    AliasTextureIterator(_in const_iterator first, _in const_iterator last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CSubMesh::AliasTextureIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CSubMesh::AliasTextureIterator &operator=(_in const EarthView::World::Graphic::CSubMesh::AliasTextureIterator &other);
                    ~AliasTextureIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue () const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                ev_private:
                    AliasTextureIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    AliasTextureIterator(_in EarthView::World::Core::AliasTextureNamePairList &lst);
                    AliasTextureIterator(_in const AliasTextureIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    ev_uint16 nextKey() const;
                    EVString nextValue() const;
                    EVString *nextValuePtr();
                    EVString next();
                    const EarthView::World::Graphic::CSubMesh::AliasTexturePair &getBegin();
                    const EarthView::World::Graphic::CSubMesh::AliasTexturePair &getEnd();
                    const EarthView::World::Graphic::CSubMesh::AliasTexturePair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CSubMesh::AliasTexturePair mBeginPair;
                    EarthView::World::Graphic::CSubMesh::AliasTexturePair mCurrentPair;
                    EarthView::World::Graphic::CSubMesh::AliasTexturePair mEndPair;
                    EVString mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 得到一个常迭代器用来存取分配给该子网格的所有纹理别名
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CSubMesh::AliasTextureIterator getAliasTextureIterator() const;
                /// <summary>
                /// 增加一个别名，或者取代一个已经存在的别名并且和纹理名字相关联
                /// </summary>
                /// <param name="aliasName">纹理别名</param>
                /// <param name="textureName">和纹理别名相关联的纹理名称</param>
                /// <returns></returns>
                void addTextureAlias(const EVString &aliasName, const EVString &textureName);
                /// <summary>
                /// 从子网格中删除指定的纹理别名
                /// </summary>
                /// <param name="aliasName">要删除纹理别名</param>
                /// <returns></returns>
                void removeTextureAlias(const EVString &aliasName);
                /// <summary>
                /// 从子网格中删除所有纹理别名
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllTextureAliases();
                /// <summary>
                /// 判断子网格中是否有纹理别名
                /// </summary>
                /// <param name=""></param>
                /// <returns>有纹理别名则返回true，否则返回false</returns>
                ev_bool hasTextureAliases() const;
                /// <summary>
                /// 获得子网格中纹理别名的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回纹理别名数量</returns>
                ev_size_t getTextureAliasCount() const;
                /// <summary>
                /// 子网格上当前所用的材质被拷贝到一个新的材质上，假如当前纹理别名和原始材质名称相匹配时，用子网格的纹理别名
                /// </summary>
                /// <param name=""></param>
                /// <returns>假如用纹理别名，并且一个新的材质被创建时返回true</returns>
                ev_bool updateMaterialUsingTextureAliases();
                /// <summary>
                /// 得到顶点动画类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回顶点动画类型</returns>
                EarthView::World::Graphic::VertexAnimationType getVertexAnimationType() const;
                ///zxt updatefor v1.8
                //// Returns whether animation on dedicated vertex data includes normals
                bool getVertexAnimationIncludesNormals() const ;
                /// <summary>
                /// 生成子网格最终点
                /// </summary>
                /// <param name="count">子网格最终点计算的数量</param>
                /// <returns></returns>
                void generateExtremes(ev_size_t count);
                /// <summary>
                /// 判断子网格是否在Edgelist中被包含
                /// </summary>
                /// <param name=""></param>
                /// <returns>假如在EdgeList中子网格被包含则返回true，反之返回false，默认是true</returns>
                ev_bool isBuildEdgesEnabled() const;
                void setBuildEdgesEnabled(ev_bool b);

                void reserveBlockIndicesSize(ev_size_t size);
                void addBlockIndex(ev_uint32 startIndex);
                void removeBlockIndex(ev_uint32 i);
                void clearBlockIndices();
                ev_size_t getNumBlockIndices();

                /// <summary>
                /// 判断子网格是否被射线选中
                /// </summary>
                /// <param name="ray">射线</param>
				/// <param name="viewport">视口</param>
                /// <param name="worldMatrix">submesh的世界变换矩阵</param>
                /// <param name="oMatrix">instance的内部变换矩阵</param>
                /// <returns>是否选中</returns>
                ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,_out EarthView::World::Spatial::Math::CVector3& point);
				ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,_out EarthView::World::Spatial::Math::CVector3& point,
					_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3);
				ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide,_out EarthView::World::Spatial::Math::CVector3& point);
				ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide,_out EarthView::World::Spatial::Math::CVector3& point,
					_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3);
				ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Graphic::CIndexData* iData,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide, _out EarthView::World::Spatial::Math::CVector3& point,
					_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3);
				
				ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Graphic::CIndexData* iData,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide, _out EarthView::World::Spatial::Math::CVector3& point,
					_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3,_in  EarthView::World::Core::IntVector& segmentIndex);

				ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Graphic::CVertexData* vData,const EarthView::World::Graphic::CIndexData* iData,EarthView::World::Graphic::CRenderOperation::OperationType ot,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide,
					_out EarthView::World::Spatial::Math::CVector3& point,_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3,_in  EarthView::World::Core::IntVector& segmentIndex);
				
				ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide,_out EarthView::World::Spatial::Math::CVector3& point,
					_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3,_in   EarthView::World::Core::IntVector& segmentIndex);

				ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide,_out EarthView::World::Spatial::Math::CVector3& point,_in   EarthView::World::Core::IntVector& segmentIndex);
				
				static ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Graphic::CVertexData* vData,const EarthView::World::Graphic::CIndexData* iData,EarthView::World::Graphic::CRenderOperation::OperationType ot,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide,
					_out EarthView::World::Spatial::Math::CVector3& point,_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3);

				/// <summary>
				/// 获取submesh在建模坐标系下的包围盒
				/// 考虑了submesh被复用或者存在内部偏移矩阵的情况
				/// 即:如果submesh存在内部instance，则返回的包围盒是其所有instance的包围盒的并集
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox();

				/// <summary>
				/// 获取在建模坐标系下由vertex buffer中的顶点坐标确定的包围盒		
				/// 不考虑submesh被复用或者存在内部偏移矩阵的情况
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				const EarthView::World::Spatial::Math::CAxisAlignedBox& getVertexBoundingBox();

				//
				//新加
				//
				ev_void setVertexBoundingBox(EarthView::World::Spatial::Math::CAxisAlignedBox& boundingBox);

				ev_void setReferenceSubmesh(CSubMesh* submesh);

				CSubMesh* getReferenceSubmesh() const;

				ev_void setBoundingBoxDirty();
				ev_void setVertexBoundingBoxDirty();

			protected:
				EarthView::World::Spatial::Math::CAxisAlignedBox getVertexBoundingBox(ev_uint32 indexStart,ev_uint32 indexCount);
				//EarthView::World::Spatial::Math::CAxisAlignedBox getVertexBoundingBox(ev_uint32 indexStart,ev_uint32 indexCount,const EVString& nodeName,EarthView::World::Core::CStringArray &errorlist);
			public:
				struct Segment
				{
					ev_uint32 IndexBegun;
					ev_uint32 IndexEnd;
				};

				/// <summary>
				/// 获取分段数量，若为0，则表示未分段					
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				ev_uint32 getNumSegments()const;

				/// <summary>
				/// 获取某个分段的信息					
				/// </summary>
				/// <param name="i">分段的序号</param>				
				/// <returns></returns>
				Segment getSegment(ev_uint32 i)const;

				/// <summary>
				/// 插入一个分段信息					
				/// </summary>
				/// <param name="segment">分段信息</param>				
				/// <returns>是否插入成功，如果此分段与已有的分段存在索引交叉的情况，则插入失败</returns>
				ev_bool insertSegment(const Segment& segment);

				/// <summary>
				/// 删除一个分段信息					
				/// </summary>
				/// <param name="i">分段的序号</param>				
				/// <returns>是否删除成功，如果该分段不存在，则删除失败</returns>
				ev_bool removeSegment(ev_uint32 i);

				/// <summary>
				/// 清除所有分段信息					
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				ev_void clearSegments();

				/// <summary>
				/// 按照索引在index buffer中的序号来查找对应的分段				
				/// </summary>
				/// <param name="index">索引</param>				
				/// <returns>分段的序号，若返回-1，则表示未分段或者该索引不属于任何分段</returns>
				ev_int32 findSegment(ev_uint32 index)const;

				/// <summary>
				/// 获取在建模坐标系下由vertex buffer中某一分段对应的顶点坐标确定的包围盒		
				/// 不考虑submesh被复用或者存在内部偏移矩阵的情况
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Spatial::Math::CAxisAlignedBox getSegmentVertexBoundingBox(ev_uint32 i);
				//EarthView::World::Spatial::Math::CAxisAlignedBox getSegmentVertexBoundingBox(ev_uint32 i,const EVString &nodeName,EarthView::World::Core::CStringArray &errorList);
			private:
				vector<Segment>* mpSegments;

			ev_private: 
				const EarthView::World::Spatial::Math::CMatrix4& getLocalMatrix()const{return mLocalMatrix;}
				ev_void setLocalMatrix(const EarthView::World::Spatial::Math::CMatrix4& mat);

            protected:
                ///该子网格所用的材质名称
                EVString mMaterialName;
                ///是否初始化材质
                ev_bool mMatInitialised;
                ///纹理别名和纹理名称的对应列表
                EarthView::World::Core::AliasTextureNamePairList mTextureAliases;
                EarthView::World::Graphic::CMesh::VertexBoneAssignmentList mBoneAssignments;
                //// Flag indicating that bone assignments need to be recompiled
                ev_bool mBoneAssignmentsOutOfDate;
                //// Type of vertex animation for dedicated vertex data (populated by EarthView::World::Graphic::CMesh)
                mutable EarthView::World::Graphic::VertexAnimationType mVertexAnimationType;
                //// Is Build Edges Enabled
                ev_bool mBuildEdgesEnabled;
                ///zxt updatefor v1.8
                //// Whether normals are included in vertex animation keyframes
                mutable bool mVertexAnimationIncludesNormals;
                /// <summary>
                /// 删除所有的LOD数据
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeLodLevels();
                vector<EarthView::World::Graphic::CSubMesh::InstanceData> mInstances;			///instance
                
                vector<ev_uint32> mBlockIndices;			///当多个block合成一个SubMesh时，记录每个block的顶点索引的开始位置(结束位置由下一个元素的开始位置-1得到)

				EarthView::World::Spatial::Math::CAxisAlignedBox mBox;						//加了矩阵后的包围盒
				EarthView::World::Spatial::Math::CAxisAlignedBox mVertexBox;				//顶点buffer的包围盒

				EarthView::World::Spatial::Math::CMatrix4 mLocalMatrix;						///施加到submesh上的模型内部矩阵

				CSubMesh* mReferenceSubmesh;
			
			private:					
				static ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Graphic::CVertexData* vData,const EarthView::World::Graphic::CIndexData* iData,EarthView::World::Graphic::CRenderOperation::OperationType ot,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide,
						_out EarthView::World::Spatial::Math::CVector3& point,_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3,ev_bool xSpecialVersionBone,ev_map<ev_uint32,ev_vector<VertexBoneAssignment> >& vertexBoneMap,const EarthView::World::Graphic::CSkeletonPtr skeleton);
				static ev_bool select(const EarthView::World::Spatial::Math::CRay& ray,const  EarthView::World::Graphic::CViewport* viewport,const EarthView::World::Graphic::CVertexData* vData,const EarthView::World::Graphic::CIndexData* iData,EarthView::World::Graphic::CRenderOperation::OperationType ot,const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,ev_bool positiveSide,ev_bool negativeSide,
						_out EarthView::World::Spatial::Math::CVector3& point,_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3,ev_bool xSpecialVersionBone,ev_map<ev_uint32,ev_vector<EarthView::World::Graphic::VertexBoneAssignment> >& vertexBoneMap,const EarthView::World::Graphic::CSkeletonPtr skeleton,_in   EarthView::World::Core::IntVector& segmentIndex );

				static EarthView::World::Spatial::Math::CVector3 getTransformedVertex(ev_uint32 vertexIndex,EarthView::World::Spatial::Math::CVector3 oriVertex,ev_bool xSpecialVersionBone,ev_map<ev_uint32,ev_vector<VertexBoneAssignment> >& vertexBoneMap,const EarthView::World::Graphic::CSkeletonPtr skeleton);
				ev_void checkXSpecialVersion();
				ev_bool mbXSpecialVersionBone;
				ev_map<ev_uint32,ev_vector<VertexBoneAssignment> > mVertexBoneIndexMap;
					
            };
        }
    }
}

#endif


