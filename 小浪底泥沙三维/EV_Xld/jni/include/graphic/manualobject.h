#ifndef __ManualObject_H__
#define __ManualObject_H__

#pragma once
#include "graphic/graphic_config.h"
#include "movableobject.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 手动创建对象类
            /// 此类提供简单的接口供用户创建对象，可以在程序中定义你绘制的信息。
            /// </summary>
            class EV_GRAPHIC_DLL CManualObject : public EarthView::World::Graphic::CMovableObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CManualObject(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                CManualObject(const EVString &name);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CManualObject();
                class CManualObjectSection;
                /// <summary>
                /// 清除对象所有内容
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void clear();

                /// <summary>
                /// 预先估计顶点数量
                /// 为了避免内存分配的浪费
                /// </summary>
                /// <param name="vcount">顶点数量</param>
                /// <returns></returns>
                virtual void estimateVertexCount(ev_size_t vcount);
                /// <summary>
                /// 预先估计索引顶点数量
                /// 需要渲染顶点时，我们可以通过索引，重复使用某个顶点
                /// </summary>
                /// <param name="icount">索引数量</param>
                /// <returns></returns>
                virtual void estimateIndexCount(ev_size_t icount);
                /// <summary>
                /// 开始定义对象的一部分
                /// 每次使用这个方法，就渲染新划分的部分。
                /// </summary>
                /// <param name="materialName">渲染对象这部分材质的名称</param>
                /// <param name="opType">使用的渲染类型</param>
                /// <param name="groupName">组名</param>
                /// <returns></returns>
                virtual void begin(const EVString &materialName, EarthView::World::Graphic::CRenderOperation::OperationType opType, const EVString &groupName);
                virtual void begin(const EVString &materialName, EarthView::World::Graphic::CRenderOperation::OperationType opType);
                virtual void begin(const EVString &materialName);
                /// <summary>
                /// 设置缓冲区是否与Dynamic改造信息匹配
                /// </summary>
                /// <param name="dyn">是否合适</param>
                /// <returns></returns>
                virtual void setDynamic(ev_bool dyn);
                /// <summary>
                /// 判断缓冲区是否与Dynamic改造信息匹配
                /// </summary>
                /// <param name=""></param>
                /// <returns>合适返回true，否则返回false</returns>
                virtual ev_bool getDynamic() const;
                /// <summary>
                /// 更新对象渲染的那一部分
                /// </summary>
                /// <param name="sectionIndex">索引你要更新的那部分，第一次启动进程为0，第二次为1，以此递增</param>
                /// <returns></returns>
                virtual void beginUpdate(ev_size_t sectionIndex);
                /// <summary>
                /// 添加顶点位置信息，同时创建一个新的顶点
                /// </summary>
                /// <param name="pos">三维矢量</param>
                /// <returns></returns>
                virtual void position(const EarthView::World::Spatial::Math::CVector3 &pos);
                /// <summary>
                /// 添加顶点位置信息，同时创建一个新的顶点
                /// </summary>
                /// <param name="x">x值</param>
                /// <param name="y">y值</param>
                /// <param name="z">z值</param>
                /// <returns></returns>
                virtual void position(Real x, Real y, Real z);

                /// <summary>
                /// 为当前顶点定义法线                
                /// </summary>
                /// <param name="norm">三维矢量</param>
                /// <returns></returns>
                virtual void normal(const EarthView::World::Spatial::Math::CVector3 &norm);
                /// <summary>
                /// 为当前顶点定义法线                
                /// </summary>
                /// <param name="x">x值</param>
                /// <param name="y">y值</param>
                /// <param name="z">z值</param>
                /// <returns></returns>
                virtual void normal(Real x, Real y, Real z);

                /// <summary>
                /// 为当前顶点添加切线                
                /// </summary>
                /// <param name="norm">三维矢量</param>
                /// <returns></returns>
                virtual void tangent(const EarthView::World::Spatial::Math::CVector3 &tan);

                /// <summary>
                /// 为当前顶点添加切线                
                /// </summary>
                /// <param name="x">x值</param>
                /// <param name="y">y值</param>
                /// <param name="z">z值</param>
                /// <returns></returns>
                virtual void tangent(Real x, Real y, Real z);

                /// <summary>
                /// 为当前顶点添加纹理坐标
                /// 根据需求，可以是一维到三维的
                /// </summary>
                /// <param name="u"></param>
                /// <returns></returns>
                virtual void textureCoord(Real u);
                /// <summary>
                /// 为当前顶点添加纹理坐标
                /// 根据需求，可以是一维到三维的
                /// </summary>
                /// <param name="u"></param>
                /// <param name="v"></param>
                /// <returns></returns>
                virtual void textureCoord(Real u, Real v);
                /// <summary>
                /// 为当前顶点添加纹理坐标
                /// 根据需求，可以是一维到三维的
                /// </summary>
                /// <param name="u"></param>
                /// <param name="v"></param>
                /// <param name="w"></param>
                /// <returns></returns>
                virtual void textureCoord(Real u, Real v, Real w);
                /// <summary>
                /// 为当前顶点添加纹理坐标
                /// 根据需求，可以是一维到三维的
                /// </summary>
                /// <param name="x"></param>
                /// <param name="y"></param>
                /// <param name="z"></param>
                /// <param name="w"></param>
                /// <returns></returns>
                virtual void textureCoord(Real x, Real y, Real z, Real w);
                /// <summary>
                /// 为当前顶点添加纹理坐标
                /// 根据需求，可以是一维到三维的
                /// </summary>
                /// <param name="uv">二维矢量</param>
                /// <returns></returns>
                virtual void textureCoord(const EarthView::World::Spatial::Math::CVector2 &uv);
                /// <summary>
                /// 为当前顶点添加纹理坐标
                /// 根据需求，可以是一维到三维的
                /// </summary>
                /// <param name="uvw">三维矢量</param>
                /// <returns></returns>
                virtual void textureCoord(const EarthView::World::Spatial::Math::CVector3 &uvw);
                /// <summary>
                /// 为当前顶点添加纹理坐标
                /// 根据需求，可以是一维到三维的
                /// </summary>
                /// <param name="xyzw">四维矢量</param>
                /// <returns></returns>
                virtual void textureCoord(const EarthView::World::Spatial::Math::CVector4 &xyzw);
                /// <summary>
                /// 为顶点添加颜色
                /// </summary>
                /// <param name="col">颜色</param>
                /// <returns></returns>
                virtual void colour(const EarthView::World::Graphic::CColourValue &col);
                /// <summary>
                /// 为顶点添加颜色
                /// </summary>
                /// <param name="r"></param>
                /// <param name="g"></param>
                /// <param name="b"></param>
                /// <param name="a">默认为1.0f</param>
                /// <returns></returns>
                virtual void colour(Real r, Real g, Real b, Real a);
                virtual void colour(Real r, Real g, Real b);
                /** Add a vertex index to construct faces / lines / points via indexing
                	rather than just by a simple list of vertices.
                @remarks
                	You will have to call this 3 times for each face for a triangle list,
                	or use the alternative 3-parameter version. Other operation types
                	require different numbers of indexes, @see EarthView::World::Graphic::CRenderOperation::OperationType.
                @note
                	32-bit indexes are not supported on all cards and will only be used
                    when required, if an index is > 65535.
                @param idx A vertex index from 0 to 4294967295.
                */
                virtual void index(ev_uint32 idx);
                /** Add a set of 3 vertex indices to construct a triangle; this is a
                	shortcut to calling index() 3 times. It is only valid for triangle
                	lists.
                @note
                	32-bit indexes are not supported on all cards and will only be used
                    when required, if an index is > 65535.
                @param i1, i2, i3 3 vertex indices from 0 to 4294967295 defining a face.
                */
                virtual void triangle(ev_uint32 i1, ev_uint32 i2, ev_uint32 i3);
                /** Add a set of 4 vertex indices to construct a quad (out of 2
                	triangles); this is a shortcut to calling index() 6 times,
                	or triangle() twice. It's only valid for triangle list operations.
                @note
                	32-bit indexes are not supported on all cards and will only be used
                    when required, if an index is > 65535.
                @param i1, i2, i3 3 vertex indices from 0 to 4294967295 defining a face.
                */
                virtual void quad(ev_uint32 i1, ev_uint32 i2, ev_uint32 i3, ev_uint32 i4);
                //// Get the number of vertices in the section currently being defined (returns 0 if no section is in progress).
                virtual size_t getCurrentVertexCount() const;
                //// Get the number of indices in the section currently being defined (returns 0 if no section is in progress).
                virtual size_t getCurrentIndexCount() const;
                /** Finish defining the object and compile the final renderable version.
                @note
                	Will return a pointer to the finished section or NULL if the section was discarded (i.e. has zero vertices/indices).
                */
                virtual EarthView::World::Graphic::CManualObject::CManualObjectSection *end();
                /** Alter the material for a subsection of this object after it has been
                	specified.
                @remarks
                	You specify the material to use on a section of this object during the
                	call to begin(), however if you want to change the material afterwards
                	you can do so by calling this method.
                @param subIndex The index of the subsection to alter
                @param name The name of the new material to use
                */
                virtual void setMaterialName(ev_size_t subindex, const EVString &name, const EVString &group );
                virtual void setMaterialName(ev_size_t subindex, const EVString &name);
                /** Convert this object to a CMesh.
                @remarks
                	After you've finished building this object, you may convert it to
                	a CMesh if you want in order to be able to create many instances of
                	it in the world (via CEntity). This is optional, since this instance
                	can be directly attached to a CSceneNode itself, but of course only
                	one instance of it can exist that way.
                @note Only objects which use indexed geometry may be converted to a mesh.
                @param meshName The name to give the mesh
                @param groupName The resource group to create the mesh in
                */
                virtual EarthView::World::Graphic::CMeshPtr convertToMesh(const EVString &meshName, const EVString &groupName);
                virtual EarthView::World::Graphic::CMeshPtr convertToMesh(const EVString &meshName);
                /** Sets whether or not to use an 'identity' projection.
                @remarks
                	Usually ManualObjects will use a projection matrix as determined
                	by the active camera. However, if they want they can cancel this out
                	a {-1, 1} view space. Useful for overlay rendering. Normally you don't
                	need to change this. The default is false.
                @see CManualObject::getUseIdentityProjection
                */
                void setUseIdentityProjection(ev_bool useIdentityProjection);
                /** Returns whether or not to use an 'identity' projection.
                @remarks
                	Usually ManualObjects will use a projection matrix as determined
                	by the active camera. However, if they want they can cancel this out
                	a {-1, 1} view space. Useful for overlay rendering. Normally you don't
                	need to change this.
                @see CManualObject::setUseIdentityProjection
                */
                ev_bool getUseIdentityProjection() const;
                /** Sets whether or not to use an 'identity' view.
                @remarks
                	Usually ManualObjects will use a view matrix as determined
                	by the active camera. However, if they want they can cancel this out
                	and use an identity matrix, which means all geometry is assumed
                	to be relative to camera space already. Useful for overlay rendering.
                	Normally you don't need to change this. The default is false.
                @see CManualObject::getUseIdentityView
                */
                void setUseIdentityView(ev_bool useIdentityView);
                /** Returns whether or not to use an 'identity' view.
                @remarks
                	Usually ManualObjects will use a view matrix as determined
                	by the active camera. However, if they want they can cancel this out
                	and use an identity matrix, which means all geometry is assumed
                	to be relative to camera space already. Useful for overlay rendering.
                	Normally you don't need to change this.
                @see CManualObject::setUseIdentityView
                */
                ev_bool getUseIdentityView() const;
                /** Sets the bounding box.
                	@remarks Call this after having finished creating sections to modify the
                		you can call things function to set an infinite bounding box so that
                		the object always stays visible when attached.
                	@see CManualObject::setUseIdentityProjection, CManualObject::setUseIdentityView,
                		EarthView::World::Spatial::Math::CAxisAlignedBox::setInfinite */
                void setBoundingBox(const EarthView::World::Spatial::Math::CAxisAlignedBox &box);
                /** Gets a pointer to a EarthView::World::Graphic::CManualObject::CManualObjectSection, i.e. a part of a CManualObject.
                */
                EarthView::World::Graphic::CManualObject::CManualObjectSection *getSection(ev_uint32 index) const;
                /** Retrieves the number of EarthView::World::Graphic::CManualObject::CManualObjectSection objects making up this CManualObject.
                */
                ev_uint32 getNumSections() const;
                /** Sets whether or not to keep the original declaration order when
                	queuing the renderables.
                @remarks
                	This overrides the default behavior of the rendering queue,
                	specifically stating the desired order of rendering. Might result in a
                	performance loss, but lets the user to have more direct control when
                	creating geometry through this class.
                @param keepOrder Whether to keep the declaration order or not.
                */
                void setKeepDeclarationOrder(ev_bool keepOrder);
                /** Gets whether or not the declaration order is to be kept or not.
                @return A flag indication if the declaration order will be kept when
                	queuing the renderables.
                */
                ev_bool getKeepDeclarationOrder() const;

				/// <summary>
				/// 设置选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				virtual ev_void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour);

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);
				/// <summary>
                /// 盒选择
                /// </summary>
                /// <param name="aabb">盒</param>
                /// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
                /// <param name="indexVec">选中的对象序号的集合</param>
                /// <returns>true:物体包围盒与指定盒相交;false:不相交</returns>
                virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb,ev_bool prepareToRenderSelection,_out EarthView::World::Core::IntVector& indexVec);
                /// <summary>
                /// 球选择
                /// </summary>
                /// <param name="sphere">球</param>
                /// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
                /// <param name="indexVec">选中的对象序号的集合</param>
                /// <returns>true:物体包围盒与指定球相交;false:不相交</returns>
                virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CSphere& sphere,ev_bool prepareToRenderSelection,_out EarthView::World::Core::IntVector& indexVec);

				/// <summary>
				/// 选择组件
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
				/// <param name="objIndex">物体序号</param>
				/// <param name="submeshIndex">submesh序号</param>
				/// <param name="instanceIndex">instance序号</param>
				/// <param name="segmentIndex">索引分段序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:组件与射线相交;false:不相交</returns>
				virtual ev_bool selectComponentBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,ev_bool prepareToRenderSelection,_out ev_int32& objIndex,_out ev_int32& submeshIndex,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex,_out EarthView::World::Spatial::Math::CVector3& point);

                
                /// <summary>
                /// 绘制选择对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_void renderSelection();
                /// <summary>
                /// 清除选择
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_void clearSelection();                

                /// <summary>
                /// 获取移动对象类型的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称</returns>
                EVString getMovableType() const;
                /// <summary>
                /// 获得限制的边框盒
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                /// <summary>
                /// 获得限制范围
                /// </summary>
                /// <param name=""></param>
                /// <returns>范围</returns>
                Real getBoundingRadius() const;
                /// <summary>
                /// 更新渲染队列
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <returns></returns>
                void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

                /// <summary>                
                /// 获得边列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CEdgeData *getEdgeList();
                /// <summary>
                /// 是否存在边列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool hasEdgeList();
                /// <summary>
                /// 获取阴影锥渲染对象的迭代器
                /// </summary>
                /// <param name="shadowTechnique">阴影技术</param>
                /// <param name="light">光源</param>
                /// <param name="indexBuffer">索引</param>
                /// <param name="extrudeVertices">为真，在软件中挤压顶点后面的体积成为三维实体</param>
                /// <param name="extrusionDist">距离</param>
                /// <param name="flags">标识</param>
                /// <returns></returns>
                EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light,
                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer, ev_bool extrudeVertices, Real extrusionDist, ev_uint32 flags);
                EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light,
                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer, ev_bool extrudeVertices, Real extrusionDist);

                //// Built, renderable section of geometry
                class EV_GRAPHIC_DLL CManualObjectSection : public EarthView::World::Graphic::CRenderable
                {
                protected:
                    EarthView::World::Graphic::CManualObject *mParent;
                    EVString mMaterialName;
                    EVString mGroupName;
                    mutable EarthView::World::Graphic::CMaterialPtr mMaterial;
                    EarthView::World::Graphic::CRenderOperation mRenderOperation;
                    ev_bool m32BitIndices;
                ev_private:
                    CManualObjectSection(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CManualObjectSection(CManualObject *parent, const EVString &materialName, EarthView::World::Graphic::CRenderOperation::OperationType opType, const EVString &groupName);
                    CManualObjectSection(CManualObject *parent, const EVString &materialName, EarthView::World::Graphic::CRenderOperation::OperationType opType);

                    virtual ~CManualObjectSection();

                    //// Retrieve render operation for manipulation
                    EarthView::World::Graphic::CRenderOperation *getRenderOperation();
                    //// Retrieve the material name in use
                    const EVString &getMaterialName() const;
                    //// Retrieve the material group in use
                    const EVString &getMaterialGroup() const;
                    //// update the material name in use
                    void setMaterialName(const EVString &name, const EVString &groupName);
                    /*	void setMaterialName(const EVString& name, const EVString& groupName = CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME );*/
                    void setMaterialName(const EVString &name);
					void setMaterial(EarthView::World::Graphic::CMaterialPtr material);
                    //// Set whether we need 32-bit indices
                    void set32BitIndices(ev_bool n32);
                    //// Get whether we need 32-bit indices
                    ev_bool get32BitIndices() const;

                    /// EarthView::World::Graphic::CRenderable overrides
                    /** @copydoc CRenderable::getMaterial. */
                    const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                    /** @copydoc CRenderable::getRenderOperation. */
                    void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                    /** @copydoc CRenderable::getWorldTransforms. */
                    void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                    /** @copydoc CRenderable::getSquaredViewDepth. */
                    Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                    /** @copydoc CRenderable::getLights. */
                    const EarthView::World::Graphic::LightList &getLights() const;

                    /// <summary>
                    /// 射线选择
                    /// </summary>
                    /// <param name="ray">射线对象</param>
					/// <param name="viewport">所在视口</param>
					/// <param name="point">交点</param>
                    /// <returns>true:与射线相交;false:不相交</returns>
                    virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,_out EarthView::World::Spatial::Math::CVector3& point);
                    
					virtual EarthView::World::Graphic::CMovableObject* getMovableObject()const
					{
						return mParent;
					}
                };
                /** Nested class to allow shadows. */
                class EV_GRAPHIC_DLL ManualObjectSectionShadowRenderable : public EarthView::World::Graphic::CShadowRenderable
                {
                protected:
                    EarthView::World::Graphic::CManualObject *mParent;
                    /// Shared link to position buffer
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mPositionBuffer;
                    /// Shared link to w-coord buffer (optional)
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mWBuffer;
                public:
                    ManualObjectSectionShadowRenderable(EarthView::World::Graphic::CManualObject *parent,
                                                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer, const EarthView::World::Graphic::CVertexData *vertexData,
                                                        ev_bool createSeparateLightCap, ev_bool isLightCap);
                    ManualObjectSectionShadowRenderable(EarthView::World::Graphic::CManualObject *parent,
                                                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer, const EarthView::World::Graphic::CVertexData *vertexData,
                                                        ev_bool createSeparateLightCap);
                    ~ManualObjectSectionShadowRenderable();
                    //// Overridden from EarthView::World::Graphic::CShadowRenderable
                    void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr getPositionBuffer();
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr getWBuffer();
                    //// Overridden from ShadowRenderable
                    virtual void rebindIndexBuffer(const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &indexBuffer);
                ev_private:
                    ManualObjectSectionShadowRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                class EV_GRAPHIC_DLL SectionList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CManualObject::CManualObjectSection *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::CManualObject::CManualObjectSection *const &t);
                private:
                    InternalList mList;
                ev_private:
                    SectionList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    SectionList();
                    void push_back(EarthView::World::Graphic::CManualObject::CManualObjectSection  *const &ref_t);
                    void pop_back();

                    EarthView::World::Graphic::CManualObject::CManualObjectSection*& front();
                    EarthView::World::Graphic::CManualObject::CManualObjectSection*& back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CManualObject::CManualObjectSection *const &ref_t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CManualObject::CManualObjectSection*& operator[](ev_size_t n);
                    EarthView::World::Graphic::CManualObject::CManualObjectSection *const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CManualObject::CManualObjectSection*& at(ev_size_t n);
                    EarthView::World::Graphic::CManualObject::CManualObjectSection *const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
                /// <summary>
                /// 访问可渲染的物体
                /// </summary>
                /// <param name="visitor">访问者</param>
                /// <param name="debugRenderables">是否调试可渲染的物体,默认为false</param>
                /// <returns></returns>
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);


            protected:
                //// Dynamic?
                ev_bool mDynamic;
                //// List of subsections
                SectionList mSectionList;
                //// Current section
                EarthView::World::Graphic::CManualObject::CManualObjectSection *mCurrentSection;
                //// Are we updating?
                ev_bool mCurrentUpdating;
                //// Temporary vertex structure
                struct TempVertex
                {
                    EarthView::World::Spatial::Math::CVector3 position;
                    EarthView::World::Spatial::Math::CVector3 normal;
                    EarthView::World::Spatial::Math::CVector3 tangent;
                    EarthView::World::Spatial::Math::CVector4 texCoord[EV_MAX_TEXTURE_COORD_SETS];
                    ev_uint16 texCoordDims[EV_MAX_TEXTURE_COORD_SETS];
                    EarthView::World::Graphic::CColourValue colour;
                };
                //// Temp storage
                TempVertex mTempVertex;
                //// First vertex indicator
                ev_bool mFirstVertex;
                //// Temp vertex data to copy?
                ev_bool mTempVertexPending;
                //// System-memory buffer whilst we establish the size required
                ev_char *mTempVertexBuffer;
                //// System memory allocation size, in bytes
                ev_size_t mTempVertexSize;
                //// System-memory buffer whilst we establish the size required
                ev_uint32 *mTempIndexBuffer;
                //// System memory allocation size, in bytes
                ev_size_t mTempIndexSize;
                //// Current declaration vertex size
                ev_size_t mDeclSize;
                //// Estimated vertex count
                ev_size_t mEstVertexCount;
                //// Estimated index count
                ev_size_t mEstIndexCount;
                //// Current texture coordinate
                ev_uint16 mTexCoordIndex;
                //// Bounding box
                EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
                //// Bounding sphere
                Real mRadius;
                //// EarthView::World::Core::CAny indexed geometry on any sections?
                ev_bool mAnyIndexed;
                //// Edge list, used if stencil shadow casting is enabled
                EarthView::World::Graphic::CEdgeData *mEdgeList;
                //// List of shadow renderables
                ShadowRenderableList mShadowRenderables;
                //// Whether to use identity projection for sections
                ev_bool mUseIdentityProjection;
                //// Whether to use identity view for sections
                ev_bool mUseIdentityView;
                //// Keep declaration order or let the queue optimize it
                ev_bool mKeepDeclarationOrder;
                
                SectionList mSelectedList;

            ev_internal:
                //// Delete temp buffers and reset init counts
                virtual void resetTempAreas();
                //// Resize the temp vertex buffer?
                virtual void resizeTempVertexBufferIfNeeded(ev_size_t numVerts);
                //// Resize the temp index buffer?
                virtual void resizeTempIndexBufferIfNeeded(ev_size_t numInds);
                //// Copy current temp vertex into buffer
                virtual void copyTempVertexToBuffer();
            };
            /// <summary>
            /// 手动创建对象类工厂
            /// 创建对象实例
            /// </summary>
            class EV_GRAPHIC_DLL CManualObjectFactory : public EarthView::World::Graphic::CMovableObjectFactory
            {
            ev_internal:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="params">参数</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMovableObject *createInstanceImpl( const EVString &name, const EarthView::World::Core::NameValuePairList *params);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CManualObjectFactory();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CManualObjectFactory();
                ///工厂类型名称
                static EVString FACTORY_TYPE_NAME;
                /// <summary>
                /// 获得移动对象的值类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画的值类型</returns>
                EVString getType() const;
                /// <summary>
                /// 销毁实例
                /// </summary>
                /// <param name="obj">实例</param>
                /// <returns></returns>
                void destroyInstance( EarthView::World::Graphic::CMovableObject *obj);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CManualObjectFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            };
        }
    }
}

#endif


