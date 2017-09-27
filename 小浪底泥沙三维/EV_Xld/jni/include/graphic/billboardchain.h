#ifndef _BillboardChain_H__
#define _BillboardChain_H__
#pragma once
#include "graphic/graphic_config.h"
#include "movableobject.h"
#include "renderable.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CQuaternion;
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
            /// <summary>
            /// 广告板链类
            /// 该类总是面向摄像机，作用于一系列的广告板
            /// 定义广告板链相关操作的类
            /// </summary>
            class EV_GRAPHIC_DLL CBillboardChain : public EarthView::World::Graphic::CMovableObject			///, public EarthView::World::Graphic::CRenderable
            {
                friend class CBillboardChainInternalRenderable;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CBillboardChain(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 广告板链内部渲染类
                /// </summary>
                class EV_GRAPHIC_DLL CBillboardChainInternalRenderable : public EarthView::World::Graphic::CRenderable
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CBillboardChainInternalRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">广告板链指针</param>
                    /// <returns></returns>
                    CBillboardChainInternalRenderable(CBillboardChain *ref_parent);

                    /// <summary>
                    /// 获得材质信息
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>材质</returns>
                    const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;			///调整位置
                    /// <summary>
                    /// 获得渲染操作信息
                    /// </summary>
                    /// <param name="op">渲染操作</param>
                    /// <returns></returns>
                    void getRenderOperation( _out EarthView::World::Graphic::CRenderOperation &op);			///调整位置
                    /// <summary>
                    /// 获得世界坐标转换矩阵
                    /// </summary>
                    /// <param name="xform">四维矩阵</param>
                    /// <returns></returns>
                    void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform) const;			///调整位置
                    /// <summary>
                    /// 获得摄像机视场深度的平方
                    /// </summary>
                    /// <param name="cam">摄像机视场</param>
                    /// <returns>视场大小的值</returns>
                    Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;			///调整位置
                    /// <summary>
                    /// 获得光照信息
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>光照列表</returns>
                    const EarthView::World::Graphic::LightList &getLights() const;			///调整位置

					virtual EarthView::World::Graphic::CMovableObject* getMovableObject()const
					{
						return mParent;
					}
                private:
                    EarthView::World::Graphic::CBillboardChain *mParent;

                };
                virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                virtual void getRenderOperation( _out EarthView::World::Graphic::CRenderOperation &op);
                virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                virtual const EarthView::World::Graphic::LightList &getLights() const;
                virtual const EarthView::World::Graphic::CBillboardChain::CBillboardChainInternalRenderable *getRenderablePtr();
                ///virtual const EarthView::World::Graphic::CBillboardChain::CBillboardChainInternalRenderable& getRenderable();
            private:
                EarthView::World::Graphic::CBillboardChain::CBillboardChainInternalRenderable *mpRenderable;
            public:

                /// <summary>
                /// 广告板链元素类
                /// 该类定义广告板链的元素及其相关操作
                /// </summary>
                class EV_GRAPHIC_DLL CElement : public EarthView::World::Core::CBaseObject
                {
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CElement();
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pos">三维的位置</param>
                    /// <param name="fWidth">宽度</param>
                    /// <param name="fTexCoord">纹理坐标</param>
                    /// <param name="color">颜色</param>
                    /// <returns></returns>
                    CElement(EarthView::World::Spatial::Math::CVector3 pos,
                             Real fWidth,
                             Real fTexCoord,
                             const EarthView::World::Graphic::CColourValue &colour,
                             const EarthView::World::Spatial::Math::CQuaternion &o);
                    EarthView::World::Spatial::Math::CVector3 position;
                    Real width;
                    //// U or V texture coord depending on options
                    Real texCoord;
                    EarthView::World::Graphic::CColourValue colour;
                    ///Only used when mFaceCamera == false
                    EarthView::World::Spatial::Math::CQuaternion orientation;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CElement(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                /// <summary>
                /// 广告板链元素列表类
                /// 该类定义广告板链的元素列表相关操作
                /// </summary>
                class EV_GRAPHIC_DLL ElementList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ElementList(_in EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    typedef vector<EarthView::World::Graphic::CBillboardChain::CElement> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    RESERVE_CONTAINER_FUNCTION(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                private:
                    InternalList mList;
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ElementList();

                    /// <summary>
                    /// 在广告板链后面增加一个元素
                    /// </summary>
                    /// <param name="t">增加的元素</param>
                    /// <returns></returns>
                    void push_back(EarthView::World::Graphic::CBillboardChain::CElement const &t);
                    /// <summary>
                    /// 移除广告板链中的某一个元素
                    /// </summary>
                    /// <param name="pos">该移除元素所在迭代器位置</param>
                    /// <returns></returns>
                    void remove(ev_size_t pos);
                    /// <summary>
                    /// 判断广告板链是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>如果为空返回true，否则false</returns>
                    ev_bool empty() const;

                    EarthView::World::Graphic::CBillboardChain::CElement &operator[](ev_size_t n);
                    EarthView::World::Graphic::CBillboardChain::CElement const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CBillboardChain::CElement &at(ev_size_t n);
                    EarthView::World::Graphic::CBillboardChain::CElement const &at(ev_size_t n) const;

                    /// <summary>
                    /// 广告板链存储元素的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前广告版元素的个数</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 调整板链存储元素的大小
                    /// </summary>
                    /// <param name="newSize">新的广告板存储元素的个数</param>
                    /// <returns></returns>
                    void resize(ev_size_t newSize);
                    /// <summary>
                    /// 广告板列表预留存储空间
                    /// </summary>
                    /// <param name="count">预留空间大小</param>
                    /// <returns></returns>
                    void reserve(ev_size_t count);
                    /// <summary>
                    /// 清空广告板列表中的元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                };


                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="maxElements">存储元素最大值</param>
                /// <param name="numberOfChains">元素个数</param>
                /// <param name="useTextureCoords">是否使用纹理坐标</param>
                /// <param name="useColours">是否使用了颜色</param>
                /// <returns></returns>
                CBillboardChain(const EVString &name, ev_size_t maxElements, ev_size_t numberOfChains,
                                ev_bool useTextureCoords, ev_bool useColours, ev_bool dynamic);


                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="maxElements">存储元素最大值</param>
                /// <param name="numberOfChains">元素个数</param>
                /// <param name="useTextureCoords">是否使用纹理坐标</param>
                /// <param name="useColours">是否使用了颜色</param>
                /// <returns></returns>
                CBillboardChain(const EVString &name, ev_size_t maxElements, ev_size_t numberOfChains,
                                ev_bool useTextureCoords , ev_bool useColours);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="maxElements">存储元素最大值</param>
                /// <param name="numberOfChains">元素个数</param>
                /// <param name="useTextureCoords">是否使用纹理坐标</param>
                /// <returns></returns>
                CBillboardChain(const EVString &name, ev_size_t maxElements, ev_size_t numberOfChains,
                                ev_bool useTextureCoords);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="maxElements">存储元素最大值</param>
                /// <param name="numberOfChains">元素个数</param>
                /// <returns></returns>
                CBillboardChain(const EVString &name, ev_size_t maxElements , ev_size_t numberOfChains );
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="maxElements">存储元素最大值</param>
                /// <returns></returns>
                CBillboardChain(const EVString &name, ev_size_t maxElements );
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                CBillboardChain(const EVString &name);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CBillboardChain();

                /// <summary>
                /// 设置链上元素数量的最大值
                /// </summary>
                /// <param name="maxElements">最大值</param>
                /// <returns></returns>
                virtual void setMaxChainElements(ev_size_t maxElements);

                /// <summary>
                /// 获得链上元素数量的最大值
                /// </summary>
                /// <param name=""></param>
                /// <returns>最大值</returns>
                virtual ev_size_t getMaxChainElements() const;


                /// <summary>
                /// 设置广告板链个数
                /// </summary>
                /// <param name="numChains"></param>
                /// <returns></returns>
                virtual void setNumberOfChains(ev_size_t numChains);

                /// <summary>
                /// 获得广告板链个数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_size_t getNumberOfChains() const;


                /// <summary>
                /// 设置是否使用纹理坐标
                /// </summary>
                /// <param name="use">是否使用</param>
                /// <returns></returns>
                virtual void setUseTextureCoords(ev_bool use);

                /// <summary>
                /// 判断是否使用纹理坐标
                /// </summary>
                /// <param name=""></param>
                /// <returns>作用了返回true，否则false</returns>
                virtual ev_bool getUseTextureCoords() const;

                /** The direction in which texture coordinates from elements of the
                	chain are used.
                */
                enum TexCoordDirection
                {
                    //// Tex coord in elements is treated as the 'u' texture coordinate
                    TCD_U,
                    //// Tex coord in elements is treated as the 'v' texture coordinate
                    TCD_V
                };

                /// <summary>
                /// 设置纹理的坐标方向
                /// </summary>
                /// <param name="dir">方向</param>
                /// <returns></returns>
                virtual void setTextureCoordDirection(EarthView::World::Graphic::CBillboardChain::TexCoordDirection dir);

                /// <summary>
                /// 获得纹理的坐标方向信息
                /// </summary>
                /// <param name=""></param>
                /// <returns>纹理坐标方向</returns>
                virtual EarthView::World::Graphic::CBillboardChain::TexCoordDirection getTextureCoordDirection();


                /// <summary>
                /// 设置其它纹理的坐标范围信息
                /// </summary>
                /// <param name="start">开始</param>
                /// <param name="end">结束</param>
                /// <returns></returns>
                virtual void setOtherTextureCoordRange(Real start, Real end);

                /// <summary>
                /// 获得其它纹理的坐标范围信息
                /// </summary>
                /// <param name=""></param>
                /// <returns>纹理范围</returns>
                virtual void getOtherTextureCoordRange(_out Real &start, _out Real &end) const;


                /// <summary>
                /// 设置使用顶点颜色
                /// </summary>
                /// <param name="use">是否使用</param>
                /// <returns></returns>
                virtual void setUseVertexColours(ev_bool use);

                /// <summary>
                /// 判断是否使用顶点颜色
                /// </summary>
                /// <param name=""></param>
                /// <returns>使用了返回true，否则返回false</returns>
                virtual ev_bool getUseVertexColours() const;


                /// <summary>
                /// 设置缓冲区是否与Dynamic改造信息匹配
                /// </summary>
                /// <param name="dyn">是否合适</param>
                /// <returns></returns>
                virtual void setDynamic(ev_bool dyn);
                /** Gets whether or not the buffers created for this object are suitable
                	for dynamic alteration.
                */
                /// <summary>
                /// 判断缓冲区是否与Dynamic改造信息匹配
                /// </summary>
                /// <param name=""></param>
                /// <returns>合适返回true，否则返回false</returns>
                virtual ev_bool getDynamic() const;

                /// <summary>
                /// 在元素链最前面增加一个元素
                /// </summary>
                /// <param name="chainIndex">链索引</param>
                /// <param name="billboardChainElement">所增加的元素</param>
                /// <returns></returns>
                virtual void addChainElement(ev_size_t chainIndex,
                                             const EarthView::World::Graphic::CBillboardChain::CElement &billboardChainElement);

                /// <summary>
                /// 从元素链的尾部移除一个元素
                /// </summary>
                /// <param name="chainIndex">链索引</param>
                /// <returns></returns>
                virtual void removeChainElement(ev_size_t chainIndex);

                /// <summary>
                /// 更新链中的元素
                /// </summary>
                /// <param name="chainIndex">链索引</param>
                /// <param name="elementIndex">元素索引</param>
                /// <param name="billboardChainElement">用来更新的元素</param>
                /// <returns></returns>
                virtual void updateChainElement(ev_size_t chainIndex, ev_size_t elementIndex,
                                                const EarthView::World::Graphic::CBillboardChain::CElement &billboardChainElement);

                /// <summary>
                /// 获得链中的元素
                /// </summary>
                /// <param name="chainIndex">链索引</param>
                /// <param name="elementIndex">元素索引</param>
                /// <returns>获得的元素</returns>
                virtual const EarthView::World::Graphic::CBillboardChain::CElement &getChainElement(ev_size_t chainIndex, ev_size_t elementIndex) const;

                /// <summary>
                /// 获得链中的元素的个数
                /// </summary>
                /// <param name="chainIndex">链索引</param>
                /// <returns>获得的元素个数</returns>
                virtual ev_size_t getNumChainElements(ev_size_t chainIndex) const;

                /// <summary>
                /// 清除指定链中的元素但保留元素链
                /// </summary>
                /// <param name="chainIndex">链索引</param>
                /// <returns></returns>
                virtual void clearChain(ev_size_t chainIndex);

                /// <summary>
                /// 清除所有链中的元素但保留元素链
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void clearAllChains();

				/// <summary>
				/// 返回是否面向相机
				/// </summary>				
				/// <returns>是否面向相机</returns>
				bool getFaceCamera();

				/// <summary>
				/// 设置是否面向相机
				/// </summary>
				/// <param name="faceCamera">是否面向相机</param>
				/// <param name="normalVector">当不是面向相机时，则面向的向量</param>
				/// <returns></returns>
                void setFaceCamera( bool faceCamera, const EarthView::World::Spatial::Math::CVector3 &normalVector );

				/// <summary>
				/// 设置是否面向相机
				/// </summary>
				/// <param name="faceCamera">是否面向相机</param>
				/// <returns></returns>
                void setFaceCamera( bool faceCamera )
                {
                    setFaceCamera(faceCamera, EarthView::World::Spatial::Math::CVector3::UNIT_X);
                }

                /// <summary>
                /// 获得使用的材质名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>材质名称</returns>
                virtual EVString getMaterialName() const;
               
                /// <summary>
                /// 设置材质名称
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="groupName">组名称</param>
                /// <returns></returns>
                virtual void setMaterialName( const EVString &name, const EVString &groupName);
                /// <summary>
                /// 设置材质名称
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                virtual void setMaterialName( const EVString &name);

                /// <summary>
                /// 通报当前摄像机
                /// </summary>
                /// <param name="cam">当前摄像机</param>
                /// <returns></returns>
                void _notifyCurrentCamera( EarthView::World::Graphic::CCamera *cam);
                
                /// <summary>
                /// 获得包围盒半径
                /// </summary>
                /// <param name=""></param>
                /// <returns>范围</returns>
                Real getBoundingRadius() const;
                /// <summary>
                /// 获得边框盒
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                
                /// <summary>
                /// 获得可移动的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>可移动的类型</returns>
                EVString getMovableType() const;

                /// <summary>
                /// 更新渲染队列
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <returns></returns>
                void _updateRenderQueue(  EarthView::World::Graphic::CRenderQueue *queue);


                /// <summary>
                /// 访问可渲染的物体
                /// </summary>
                /// <param name="visitor">访问者</param>
                /// <param name="debugRenderables">是否显示调试的物体</param>
                /// <returns></returns>
                void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor,
                                       ev_bool debugRenderables);
                /// <summary>
                /// 访问可渲染的物体
                /// </summary>
                /// <param name="visitor">访问者</param>
                /// <returns></returns>
                void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor);

            protected:
                //// Maximum length of each chain
                ev_size_t mMaxElementsPerChain;
                //// Number of chains
                ev_size_t mChainCount;
                //// Use texture coords?
                ev_bool mUseTexCoords;
                //// Use vertex colour?
                ev_bool mUseVertexColour;
                //// Dynamic use?
                ev_bool mDynamic;
                //// Vertex data
                CVertexData *mVertexData;
                //// Index data (to allow multiple unconnected chains)
                CIndexData *mIndexData;
                //// Is the vertex declaration dirty?
                ev_bool mVertexDeclDirty;
                //// Do the buffers need recreating?
                ev_bool mBuffersNeedRecreating;
                //// Do the bounds need redefining?
                mutable ev_bool mBoundsDirty;
                //// Is the index buffer dirty?
                ev_bool mIndexContentDirty;
                //// AABB
                mutable EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
                //// Bounding radius
                mutable Real mRadius;
                //// CMaterial
                EVString mMaterialName;
                EarthView::World::Graphic::CMaterialPtr mMaterial;
                //// CTexture coord direction
                EarthView::World::Graphic::CBillboardChain::TexCoordDirection mTexCoordDir;
                //// Other texture coord range
                Real mOtherTexCoordRange[2];
                //// When true, the billboards always face the camera
                ev_bool mFaceCamera;
                //// Used when mFaceCamera == false; determines the billboard's "normal". i.e.
                //// when the orientation is identity, the billboard is perpendicular to this
                //// vector
                EarthView::World::Spatial::Math::CVector3 mNormalBase;
                //// The list holding the chain elements
                ElementList mChainElementList;

                struct ChainSegment
                {
                    //// The start of this chains subset of the buffer
                    ev_size_t start;
                    //// The 'head' of the chain, relative to start
                    ev_size_t head;
                    //// The 'tail' of the chain, relative to start
                    ev_size_t tail;
                };
                static const ev_size_t SEGMENT_EMPTY;
                typedef vector<ChainSegment> ChainSegmentList;
                ChainSegmentList mChainSegmentList;
            ev_internal:
                //// Setup the STL collections
                /// <summary>
                /// 创建广告板链容器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setupChainContainers();
                //// Setup vertex declaration
                /// <summary>
                /// 创建顶点声明
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setupVertexDeclaration();
                
                /// <summary>
                /// 创建顶点和索引缓冲
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setupBuffers();
                
                /// <summary>
                /// 更新顶点缓冲
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                virtual void updateVertexBuffer(  EarthView::World::Graphic::CCamera *cam);
                
                /// <summary>
                /// 更新索引缓冲
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void updateIndexBuffer();

                /// <summary>
                /// 更新限制边框盒
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void updateBoundingBox() const;
                //// Chain segment has no elements

            };

            /// <summary>
            /// 广告板链类工厂
            ///定义相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CBillboardChainFactory : public EarthView::World::Graphic::CMovableObjectFactory
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CBillboardChainFactory(_in EarthView::World::Core::CNameValuePairList *pList);

            ev_internal:
                /// <summary>
                /// 创建实例
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="params">名称键值列表</param>
                /// <returns>实例</returns>
                EarthView::World::Graphic::CMovableObject *createInstanceImpl( const EVString &name, const EarthView::World::Core::NameValuePairList *params);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CBillboardChainFactory();

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CBillboardChainFactory();

                static EVString FACTORY_TYPE_NAME;
                /// <summary>
                /// 获得类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EVString getType() const;

                /// <summary>
                /// 销毁实例
                /// </summary>
                /// <param name="obj">实例</param>
                /// <returns></returns>
                void destroyInstance( EarthView::World::Graphic::CMovableObject *obj);

            };

        }
    }
}
/// namespace
#endif


