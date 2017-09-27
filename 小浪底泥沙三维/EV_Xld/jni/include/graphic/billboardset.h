#ifndef __BillboardSet_H__
#define __BillboardSet_H__
#include "graphic/graphic_config.h"
#include "movableobject.h"
#include "renderable.h"
#include "radixsort.h"

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

            class CBillboard;
            enum BillboardOrigin
            {
                BBO_TOP_LEFT,
                BBO_TOP_CENTER,
                BBO_TOP_RIGHT,
                BBO_CENTER_LEFT,
                BBO_CENTER,
                BBO_CENTER_RIGHT,
                BBO_BOTTOM_LEFT,
                BBO_BOTTOM_CENTER,
                BBO_BOTTOM_RIGHT
            };
            /** The rotation type of billboard. */
            enum BillboardRotationType
            {
                //// Rotate the billboard's vertices around their facing direction
                BBR_VERTEX,
                //// Rotate the billboard's texture coordinates
                BBR_TEXCOORD
            };
            /** The type of billboard to use. */
            enum BillboardType
            {
                //// Standard point billboard (default), always faces the camera completely and is always upright
                BBT_POINT,
                //// Billboards are oriented around a shared direction vector (used as Y axis) and only rotate around this to face the camera
                BBT_ORIENTED_COMMON,
                //// Billboards are oriented around their own direction vector (their own Y axis) and only rotate around this to face the camera
                BBT_ORIENTED_SELF,
                //// Billboards are perpendicular to a shared direction vector (used as Z axis, the facing direction) and X, Y axis are determined by a shared up-vertor
                BBT_PERPENDICULAR_COMMON,
                //// Billboards are perpendicular to their own direction vector (their own Z axis, the facing direction) and X, Y axis are determined by a shared up-vertor
                BBT_PERPENDICULAR_SELF
            };
            /// <summary>
            /// 广告版设置类
            /// 定义广告板设置及相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CBillboardSet : public EarthView::World::Graphic::CMovableObject			///, public EarthView::World::Graphic::CRenderable
            {
                friend class CBillboardSetInternalRenderable;
            public:
                /// <summary>
                /// 广告板设置内部渲染类
                /// </summary>
                class EV_GRAPHIC_DLL CBillboardSetInternalRenderable : public EarthView::World::Graphic::CRenderable
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CBillboardSetInternalRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">广告板链指针</param>
                    /// <returns></returns>
                    CBillboardSetInternalRenderable(CBillboardSet *ref_parent);

                    /// <summary>
                    /// 获得材质
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>材质</returns>
                    virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                    /// <summary>
                    /// 获得渲染操作信息
                    /// </summary>
                    /// <param name="op">渲染操作</param>
                    /// <returns></returns>
                    virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                    /// <summary>
                    /// 获得世界变换转换矩阵
                    /// </summary>
                    /// <param name="xform">四维矩阵</param>
                    /// <returns></returns>
                    virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform) const;

					virtual EarthView::World::Graphic::CMovableObject* getMovableObject()const
					{
						return mParent;
					}
                public:
                    
                    /// <summary>
                    /// 获得摄像机视场深度的平方
                    /// </summary>
                    /// <param name="cam">摄像机</param>
                    /// <returns></returns>
                    Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                    
                    /// <summary>
                    /// 获得光照信息
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>光照列表</returns>
                    const EarthView::World::Graphic::LightList &getLights() const;
                private:
                    EarthView::World::Graphic::CBillboardSet *mParent;
                };
                virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                virtual const EarthView::World::Graphic::LightList &getLights() const;

                virtual const EarthView::World::Graphic::CBillboardSet::CBillboardSetInternalRenderable *getRenderablePtr();
                ///virtual const EarthView::World::Graphic::CBillboardSet::CBillboardSetInternalRenderable& getRenderable();
            private:
                EarthView::World::Graphic::CBillboardSet::CBillboardSetInternalRenderable *mpRenderable;
            protected:

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CBillboardSet();

                //void assign(const EarthView::World::Graphic::CBillboardSet* rhs);

                //// Bounds of all billboards in this set
                EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
				EarthView::World::Spatial::Math::CAxisAlignedBox mOriginAABB;

                //// Bounding radius
                Real mBoundingRadius;
                //// Origin of each billboard
                EarthView::World::Graphic::BillboardOrigin mOriginType;
                //// Rotation type of each billboard
                EarthView::World::Graphic::BillboardRotationType mRotationType;
                //// Default width of each billboard
                Real mDefaultWidth;
                //// Default height of each billboard
                Real mDefaultHeight;
                //// Name of the material to use
                EVString mMaterialName;
                //// Pointer to the material to use
                EarthView::World::Graphic::CMaterialPtr mpMaterial;
                //// True if no billboards in this set have been resized - greater efficiency.
                ev_bool mAllDefaultSize;
                //// Flag indicating whether to autoextend pool
                ev_bool mAutoExtendPool;
                //// Flag indicating whether the billboards has to be sorted
                ev_bool mSortingEnabled;
                /// Use 'true' billboard to cam position facing, rather than camera direcion
                ev_bool mAccurateFacing;
                ev_bool mAllDefaultRotation;
                ev_bool mWorldSpace;
                typedef list<EarthView::World::Graphic::CBillboard *> ActiveBillboardList;
                typedef list<EarthView::World::Graphic::CBillboard *> FreeBillboardList;
                typedef vector<EarthView::World::Graphic::CBillboard *> BillboardPool;
                /** Active billboard list.
                    @remarks
                        This is a linked list of pointers to billboards in the billboard pool.
                    @par
                        This allows very fast insertions and deletions from anywhere in the list to activate / deactivate billboards
                        (required for particle systems etc.) as well as reuse of EarthView::World::Graphic::CBillboard instances in the pool
                        without construction & destruction which avoids memory thrashing.
                */
                ActiveBillboardList mActiveBillboards;
                /** Free billboard queue.
                    @remarks
                        This contains a list of the billboards free for use as new instances
                        as required by the set. CBillboard instances are preconstructed up to the estimated size in the
                        mBillboardPool vector and are referenced on this deque at startup. As they get used this deque
                        reduces, as they get released back to to the set they get added back to the deque.
                */
                FreeBillboardList mFreeBillboards;
                /** CPool of billboard instances for use and reuse in the active billboard list.
                    @remarks
                        This vector will be preallocated with the estimated size of the set,and will extend as required.
                */
                BillboardPool mBillboardPool;
                //// The vertex position data for all billboards in this set.
                CVertexData *mVertexData;
                //// Shortcut to main buffer (positions, colours, texture coords)
                CHardwareVertexBufferSharedPtr mMainBuf;
                //// Locked pointer to buffer
                ev_real32 *mLockPtr;
                //// Boundary offsets based on origin and camera orientation
                //// EarthView::World::Spatial::Math::CVector3 vLeftOff, vRightOff, vTopOff, vBottomOff;
                //// Final vertex offsets, used where sizes all default to save calcs
                EarthView::World::Spatial::Math::CVector3 mVOffset[4];
                //// Current camera
                EarthView::World::Graphic::CCamera *mCurrentCamera;
                /// Parametric offsets of origin
                Real mLeftOff, mRightOff, mTopOff, mBottomOff;
                /// EarthView::World::Graphic::CCamera axes in billboard space
                EarthView::World::Spatial::Math::CVector3 mCamX, mCamY;
                /// EarthView::World::Graphic::CCamera direction in billboard space
                EarthView::World::Spatial::Math::CVector3 mCamDir;
                /// EarthView::World::Graphic::CCamera orientation in billboard space
                EarthView::World::Spatial::Math::CQuaternion mCamQ;
                /// EarthView::World::Graphic::CCamera position in billboard space
                EarthView::World::Spatial::Math::CVector3 mCamPos;
                //// The vertex index data for all billboards in this set (1 set only)
                ///ev_uint16* mpIndexes;
                CIndexData *mIndexData;
                //// Flag indicating whether each billboard should be culled separately (default: false)
                ev_bool mCullIndividual;
                typedef vector< EarthView::World::Graphic::FloatRect > TextureCoordSets;
                TextureCoordSets mTextureCoords;
                //// The type of billboard to render
                EarthView::World::Graphic::BillboardType mBillboardType;
                //// Common direction for billboards of type BBT_ORIENTED_COMMON and BBT_PERPENDICULAR_COMMON
                EarthView::World::Spatial::Math::CVector3 mCommonDirection;
                //// Common up-vector for billboards of type BBT_PERPENDICULAR_SELF and BBT_PERPENDICULAR_COMMON
                EarthView::World::Spatial::Math::CVector3 mCommonUpVector;
                //// Internal method for culling individual billboards
                /// <summary>
                /// 广告板是否可见
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <param name="bill">广告板</param>
                /// <returns>可见返回true，否则返回false</returns>
                inline ev_bool billboardVisible( EarthView::World::Graphic::CCamera *cam, const EarthView::World::Graphic::CBillboard &bill);
                /// Number of visible billboards (will be == getNumBillboards if mCullIndividual == false)
                ev_uint16 mNumVisibleBillboards;
				
            ev_internal:
                //// Internal method for increasing pool size
                /// <summary>
                /// 增长池
                /// </summary>
                /// <param name="size">空间大小</param>
                /// <returns></returns>
                virtual void increasePool(ev_size_t size);
                /** Sort by direction functor */
                class EV_GRAPHIC_DLL CSortByDirectionFunctor : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CSortByDirectionFunctor(_in EarthView::World::Core::CNameValuePairList *pList);
                public:

                    //// Direction to sort in
                    EarthView::World::Spatial::Math::CVector3 sortDir;
                    CSortByDirectionFunctor(const EarthView::World::Spatial::Math::CVector3 &dir);
                    ev_real32 operator()( EarthView::World::Graphic::CBillboard *bill) const;
                };
                /** Sort by distance functor */
                class EV_GRAPHIC_DLL CSortByDistanceFunctor : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CSortByDistanceFunctor(_in EarthView::World::Core::CNameValuePairList *pList);
                public:

                    //// Position to sort in
                    EarthView::World::Spatial::Math::CVector3 sortPos;
                    CSortByDistanceFunctor(const EarthView::World::Spatial::Math::CVector3 &pos);
                    ev_real32 operator()( EarthView::World::Graphic::CBillboard *bill) const;
                };

            protected:
                /// <summary>
                /// 生成广告板轴
                /// </summary>
                /// <param name="pX">三维中X方向</param>
                /// <param name="pY">三维中Y方向</param>
                /// <param name="pBill">广告板</param>
                /// <returns></returns>
                void genBillboardAxes( EarthView::World::Spatial::Math::CVector3 *pX,  EarthView::World::Spatial::Math::CVector3 *pY, const EarthView::World::Graphic::CBillboard *pBill /*= 0*/);
                /** Internal method, generates parametric offsets based on origin.
                */
                ///
                /// <summary>
                /// 生成广告板轴
                /// </summary>
                /// <param name="pX">三维中X方向</param>
                /// <param name="pY">三维中Y方向</param>
                /// <returns></returns>
                void genBillboardAxes( EarthView::World::Spatial::Math::CVector3 *pX,  EarthView::World::Spatial::Math::CVector3 *pY);
                /// <summary>
                /// 获得参数偏移量信息
                /// </summary>
                /// <param name="left">左边</param>
                /// <param name="right">右边</param>
                /// <param name="top">顶部</param>
                /// <param name="bottom">底部</param>
                /// <returns></returns>
                void getParametricOffsets(_out Real &left, _out Real &right, _out Real &top, _out Real &bottom);

                /// <summary>
                /// 生成顶点
                /// </summary>
                /// <param name="offsets">三维偏移量</param>
                /// <param name="pBillboard">广告板</param>
                /// <returns></returns>
                void genVertices(const EarthView::World::Spatial::Math::CVector3 *const offsets, const EarthView::World::Graphic::CBillboard &pBillboard);

                /// <summary>
                /// 生成顶点偏移
                /// </summary>
                /// <param name="inleft">左边</param>
                /// <param name="inright">右边</param>
                /// <param name="intop">上面</param>
                /// <param name="inbottom">下面</param>
                /// <param name="width">宽度</param>
                /// <param name="height">高度</param>
                /// <param name="x">三维x向量</param>
                /// <param name="y">三维y向量</param>
                /// <param name="pDestVec">三维顶点偏移</param>
                /// <returns></returns>
                void genVertOffsets(Real inleft, Real inright, Real intop, Real inbottom,
                                    Real width, Real height,
                                    const EarthView::World::Spatial::Math::CVector3 &x, const EarthView::World::Spatial::Math::CVector3 &y, EarthView::World::Spatial::Math::CVector3 *pDestVec);

                static CRadixSort<ActiveBillboardList,  EarthView::World::Graphic::CBillboard *, ev_real32> mRadixSorter;

                //// Use point rendering?
                ev_bool mPointRendering;                

            private:
                //// Flag indicating whether the HW buffers have been created.
                ev_bool mBuffersCreated;
                //// The number of billboard in the pool.
                ev_size_t mPoolSize;
                //// Is external billboard data in use?
                ev_bool mExternalData;
                //// Tell if vertex buffer should be update automatically.
                ev_bool mAutoUpdate;
                //// True if the billboard data changed. Will cause vertex buffer update.
                ev_bool mBillboardDataChanged;

                ev_bool mRenderSelection;

				ev_bool mbAutoFitCamera;

				Real mReduceDis;

                /** Internal method creates vertex and index buffers.
                */
                /// <summary>
                /// 创建缓冲器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _createBuffers();
                /** Internal method destroys vertex and index buffers.
                */
                /// <summary>
                /// 销毁缓冲器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _destroyBuffers();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CBillboardSet(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="poolSize">pool的空间大小</param>
                /// <param name="externalDataSource">是否有另外的数据资源</param>
                /// <returns></returns>
                CBillboardSet( const EVString &name, ev_uint32 poolSize /*= 20*/,
                               ev_bool externalDataSource /*= false*/);

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="poolSize">pool的空间大小</param>
                /// <returns></returns>
                CBillboardSet( const EVString &name, ev_uint32 poolSize);
                ////
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                CBillboardSet( const EVString &name);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CBillboardSet();

                /// <summary>
                /// 创建广告板
                /// </summary>
                /// <param name="position">在三维中的位置</param>
                /// <param name="colour">颜色</param>
                /// <returns>创建的广告板</returns>
                EarthView::World::Graphic::CBillboard *createBillboard(
                    const EarthView::World::Spatial::Math::CVector3 &position,
                    const EarthView::World::Graphic::CColourValue &colour /*= EarthView::World::Graphic::CColourValue::White */);
                ////
                /// <summary>
                /// 创建广告板
                /// </summary>
                /// <param name="position">在三维中的位置</param>
                /// <returns>创建的广告板</returns>
                EarthView::World::Graphic::CBillboard *createBillboard(const EarthView::World::Spatial::Math::CVector3 &position);

                /// <summary>
                /// 创建广告板
                /// </summary>
                /// <param name="x">x坐标的值</param>
                /// <param name="y">y坐标的值</param>
                /// <param name="z">z坐标的值</param>
                /// <param name="colour">颜色</param>
                /// <returns>创建的广告板</returns>
                EarthView::World::Graphic::CBillboard *createBillboard(
                    Real x, Real y, Real z,
                    const EarthView::World::Graphic::CColourValue &colour /*= EarthView::World::Graphic::CColourValue::White*/ );

                /// <summary>
                /// 创建广告板
                /// </summary>
                /// <param name="x">x坐标的值</param>
                /// <param name="y">y坐标的值</param>
                /// <param name="z">z坐标的值</param>
                /// <returns>创建的广告板</returns>
                EarthView::World::Graphic::CBillboard *createBillboard(Real x, Real y, Real z);
                /// <summary>
                /// 获得广告板的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>广告板编号</returns>
                virtual ev_int32 getNumBillboards() const;

                /// <summary>
                /// 设置自动扩充
                /// </summary>
                /// <param name="autoextend">是否自动扩充</param>
                /// <returns></returns>
                virtual void setAutoextend(ev_bool autoextend);

                /// <summary>
                /// 获得是否自动扩充
                /// </summary>
                /// <param name=""></param>
                /// <returns>自动扩充返回true，否则返回false</returns>
                virtual ev_bool getAutoextend() const;

                /// <summary>
                /// 设置排序是否启用
                /// </summary>
                /// <param name="sortenable">是否排序</param>
                /// <returns></returns>
                virtual void setSortingEnabled(ev_bool sortenable);

                /// <summary>
                /// 获得排序是否启用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getSortingEnabled() const;

                /// <summary>
                /// 设置广告板池大小
                /// </summary>
                /// <param name="size">空间大小</param>
                /// <returns></returns>
                virtual void setPoolSize(ev_size_t size);

                /// <summary>
                /// 获得广告板池大小
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 getPoolSize() const;
                
                /// <summary>
                /// 清除广告板，置空
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void clear();

                /// <summary>
                /// 获得广告板
                /// </summary>
                /// <param name="index">广告板索引</param>
                /// <returns>广告板</returns>
                virtual EarthView::World::Graphic::CBillboard *getBillboard(ev_uint32 index) const;

                /// <summary>
                /// 移除广告板
                /// </summary>
                /// <param name="index">广告板索引</param>
                /// <returns></returns>
                virtual void removeBillboard(ev_uint32 index);

                /// <summary>
                /// 移除广告板
                /// </summary>
                /// <param name="pBill">广告板</param>
                /// <returns></returns>
                virtual void removeBillboard(EarthView::World::Graphic::CBillboard *pBill);

                /// <summary>
                /// 设置广告板原点
                /// </summary>
                /// <param name="origin">广告板原点</param>
                /// <returns></returns>
                virtual void setBillboardOrigin(BillboardOrigin origin);

                /// <summary>
                /// 获得广告板原点
                /// </summary>                
                /// <returns></returns>
                virtual EarthView::World::Graphic::BillboardOrigin getBillboardOrigin() const;

                /// <summary>
                /// 设置广告板旋转类型
                /// </summary>
                /// <param name="rotationType">旋转类型</param>
                /// <returns></returns>
                virtual void setBillboardRotationType(BillboardRotationType rotationType);

                /// <summary>
                /// 获得广告板旋转类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>旋转类型</returns>
                virtual EarthView::World::Graphic::BillboardRotationType getBillboardRotationType() const;

                /// <summary>
                /// 设置默认宽高
                /// </summary>
                /// <param name="width">宽度</param>
                /// <param name="height">高度</param>
                /// <returns></returns>
                virtual void setDefaultDimensions(Real width, Real height);

                /// <summary>
                /// 设置默认宽度
                /// </summary>
                /// <param name="width">宽度</param>
                /// <returns></returns>
                virtual void setDefaultWidth(Real width);

                /// <summary>
                /// 设置默认宽度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getDefaultWidth() const;

                /// <summary>
                /// 设置默认高度
                /// </summary>
                /// <param name="height">高度</param>
                /// <returns></returns>
                virtual void setDefaultHeight(Real height);

                /// <summary>
                /// 设置默认高度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getDefaultHeight() const;

                /// <summary>
                /// 设置材质名称
                /// </summary>
                /// <param name="groupName">材质组的名称</param>
                /// <param name="name">材质名称</param>
                /// <returns></returns>
                virtual void setMaterialName( const EVString &name, const EVString &groupName /*= CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME*/ );

                /// <summary>
                /// 设置材质名称
                /// </summary>
                /// <param name="name">材质名称</param>
                /// <returns></returns>
                virtual void setMaterialName( const EVString &name);
                /// <summary>
                /// 获得材质名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getMaterialName() const;

                /// <summary>
                /// 通报当前摄像机
                /// </summary>
                /// <param name="cam">当前摄像机</param>
                /// <returns></returns>
                virtual void _notifyCurrentCamera( EarthView::World::Graphic::CCamera *cam);

                /// <summary>
                /// 开始广告板信息
                /// </summary>
                /// <param name="numBillboards">广告板数量</param>
                /// <returns></returns>
                void beginBillboards(ev_size_t numBillboards);

                /// <summary>
                /// 开始广告板信息
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void beginBillboards();
                /// <summary>
                /// 注入广告板
                /// </summary>
                /// <param name="bb">广告板</param>
                /// <returns></returns>
                void injectBillboard(const EarthView::World::Graphic::CBillboard &bb);

                /// <summary>
                /// 结束广告板
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void endBillboards();

                /// <summary>
                /// 设置范围
                /// </summary>
                /// <param name="box">包围盒</param>
                /// <param name="radius">半径</param>
                /// <returns></returns>
                void setBounds(const EarthView::World::Spatial::Math::CAxisAlignedBox &box, Real radius);

                /// 获得包围盒
                /// </summary>
                /// <param name=""></param>
                /// <returns>中轴盒</returns>
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                /// 获得包围盒的半径
                /// </summary>
                /// <param name=""></param>
                /// <returns>半径</returns>
                virtual Real getBoundingRadius() const;

                /// <summary>
                /// 更新渲染队列
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <returns></returns>
                virtual void _updateRenderQueue( EarthView::World::Graphic::CRenderQueue *queue);

                /// <summary>
                /// 设置材质
                /// </summary>
                /// <param name="material">材质</param>
                /// <returns>材质</returns>
                virtual void setMaterial( const EarthView::World::Graphic::CMaterialPtr &material );

                /// <summary>
                /// 通报广告板尺寸改变
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _notifyBillboardResized();
                
                /// 通报广告板旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _notifyBillboardRotated();

                /// <summary>
                /// 获得是否逐个剔除
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getCullIndividually() const;

                /// 设置是否逐个剔除
                /// </summary>
                /// <param name="cullIndividual">是否选择单个</param>
                /// <returns></returns>
                virtual void setCullIndividually(ev_bool cullIndividual);

                /// 设置广告板类型
                /// </summary>
                /// <param name="bbt">广告板类型</param>
                /// <returns></returns>
                virtual void setBillboardType(BillboardType bbt);

                /// 获得广告板类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>广告板类型</returns>
                virtual EarthView::World::Graphic::BillboardType getBillboardType() const;

                /// <summary>
                /// 设置通用的方向
                /// </summary>
                /// <param name="vec">三维向量</param>
                /// <returns></returns>
                virtual void setCommonDirection(const EarthView::World::Spatial::Math::CVector3 &vec);

                /// <summary>
                /// 获得通用的方向
                /// </summary>
                /// <param name="">三维向量</param>
                /// <returns>三维向量</returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getCommonDirection() const;

                /// <summary>
                /// 设置通用的上方向
                /// </summary>
                /// <param name="vec">三维向量</param>
                /// <returns></returns>
                virtual void setCommonUpVector(const EarthView::World::Spatial::Math::CVector3 &vec);

                /// <summary>
                /// 获得通用的上方向
                /// </summary>
                /// <param name="">三维向量</param>
                /// <returns>三维向量</returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getCommonUpVector() const;


                /// <summary>
                /// 设置广告板是否使用精确对准
                /// </summary>
                /// <param name="acc">是否使用精确模式</param>
                /// <returns></returns>
                virtual void setUseAccurateFacing(ev_bool acc);

                /// <summary>
                /// 获得广告板是否使用精确对准
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果精确返回true，否则false</returns>
                virtual ev_bool getUseAccurateFacing() const;


                /// <summary>
                /// 获得可移动的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>可移动的类型</returns>
                virtual EVString getMovableType() const;


                /// <summary>
                /// 更新包围盒
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _updateBounds();


                /// <summary>
                /// 访问可渲染的物体
                /// </summary>
                /// <param name="visitor">访问者</param>
                /// <param name="debugRenderables">是否调试可渲染的物体</param>
                /// <returns></returns>
                void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor,
                                       ev_bool debugRenderables /*= false*/);

                /// <summary>
                /// 访问可渲染的物体
                /// </summary>
                /// <param name="visitor">访问者</param>
                /// <returns></returns>
                void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor);

                /// <summary>
                /// 排序
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                virtual void _sortBillboards( EarthView::World::Graphic::CCamera *cam);

                /// <summary>
                /// 获得排序模式
                /// </summary>
                /// <param name=""></param>
                /// <returns>分类模式</returns>
                virtual EarthView::World::Graphic::SortMode _getSortMode() const;

                /// <summary>
                /// 设置是否把广告板看做世界空间
                /// </summary>
                /// <param name="ws">是否</param>
                /// <returns></returns>
                virtual void setBillboardsInWorldSpace(ev_bool ws);


                /// <summary>
                /// 设置纹理坐标
                /// </summary>
                /// <param name="coords">坐标</param>
                /// <param name="numCoords">坐标数量</param>
                /// <returns></returns>
                virtual void setTextureCoords( EarthView::World::Graphic::FloatRect const *coords, ev_uint16 numCoords );

                /// <summary>
                /// 设置纹理堆栈和限幅
                /// </summary>
                /// <param name="stacks">堆栈</param>
                /// <param name="slices">限幅</param>
                /// <returns></returns>
                virtual void setTextureStacksAndSlices( ev_uchar stacks, ev_uchar slices );

                /// <summary>
                /// 获得纹理坐标
                /// </summary>
                /// <param name="oNumCoords">坐标编号</param>
                /// <returns>纹理坐标</returns>
                virtual EarthView::World::Graphic::FloatRect const *getTextureCoords(_out ev_uint16 *oNumCoords );

                /// <summary>
                /// 设置是否启用点渲染模式
                /// </summary>
                /// <param name="enabled">是否使用点渲染</param>
                /// <returns></returns>
                virtual void setPointRenderingEnabled(ev_bool enabled);

                /// <summary>
                /// 是否启用点渲染模式
                /// </summary>
                /// <param name=""></param>
                /// <returns>使用点渲染返回true，否则返回false</returns>
                virtual ev_bool isPointRenderingEnabled() const;

                //// Override to return specific type flag
                /// <summary>
                /// 获得类型标志信息
                /// </summary>
                /// <param name=""></param>
                /// <returns>标志</returns>
                ev_uint32 getTypeFlags() const;

                /// <summary>
                /// 设置自动更新信息
                /// </summary>
                /// <param name="autoUpdate">是否自动更新</param>
                /// <returns></returns>
                void setAutoUpdate(ev_bool autoUpdate);

                /// <summary>
                /// 获得自动更新信息
                /// </summary>
                /// <param name=""></param>
                /// <returns>是否自动更新</returns>
                ev_bool getAutoUpdate() const;


                /// <summary>
                /// 通报广告板信息更改
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void notifyBillboardDataChanged();

				/// <summary>
				/// 设置选中的对象				
				/// <param name="objIndics">选中的对象集合</param>				
				/// <returns></returns>
				ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics);				

				/// <summary>
				/// 获得选中的对象				
				/// <param name=""></param>				
				/// <returns>选中的对象集合</returns>
				EarthView::World::Core::IntVector getSelected()const;	

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
				virtual ev_bool selectComponentBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,ev_bool prepareToRenderSelection,_out ev_int32& objIndex,_out ev_int32& submeshIndex,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex,_out EarthView::World::Spatial::Math::CVector3& point)
				{return false;}

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
				/// 广告板随相机距离缩放
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool getAutoFitCamera() const;
				virtual ev_void setAutoFitCamera(ev_bool autofit);
				/// <summary>
				/// 广告板随相机距离缩放，到达一定距离开始缩小,为0表示无穷大
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getReduceDistance() const;
				virtual ev_void setReduceDistance(Real reduceDis);
            };

            /// <summary>
            /// 创建广告板设置实例类
            /// 定义实例的创建及相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CBillboardSetFactory : public EarthView::World::Graphic::CMovableObjectFactory
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CBillboardSetFactory(_in EarthView::World::Core::CNameValuePairList *pList);
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
                CBillboardSetFactory();

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CBillboardSetFactory();

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
                void destroyInstance(  EarthView::World::Graphic::CMovableObject *obj);

            };
            /** @} */
            /** @} */
        }
    }
}

#endif

