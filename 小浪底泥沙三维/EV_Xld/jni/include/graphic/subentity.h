#ifndef __SubEntity_H__
#define __SubEntity_H__
#include "graphic/graphic_config.h"
#include <core/stringdefines.h>
#include "renderable.h"
#include "hardwarebuffermanager.h"
#include "movableobject.h"
#include "entity.h"
#include "selectionrenderable.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
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
            
			class CInstancedEntity;
            
			class EV_GRAPHIC_DLL CSubEntity : public EarthView::World::Core::CAllocatedObject
			{
				friend class CEntity;

			public:				
				class EV_GRAPHIC_DLL CSubEntityRenderable : public EarthView::World::Graphic::CRenderable
				{
					friend class CSubEntity;
					friend class CEntity;
					friend class CSceneManager;
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSubEntityRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
				ev_private:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CSubEntityRenderable();
				protected:					
					CSubEntityRenderable(EarthView::World::Graphic::CSubEntity *ref_parent);					
					
					EarthView::World::Graphic::CSubEntity* mParent;

					ev_bool mVisible;

					EarthView::World::Graphic::CColourValue mSelectionColour;

					EVString mMaterialName;					
					EarthView::World::Graphic::CMaterialPtr mpMaterial;	
					ev_uint16 mMaterialLodIndex;

					ev_uint8 mRenderQueueID;					
					ev_bool mRenderQueueIDSet;					
					ev_uint16 mRenderQueuePriority;					
					ev_bool mRenderQueuePrioritySet;					
					
					
					EarthView::World::Graphic::CVertexData *mSkelAnimVertexData;					
					EarthView::World::Graphic::CTempBlendedBufferInfo mTempSkelAnimInfo;					
					EarthView::World::Graphic::CTempBlendedBufferInfo mTempVertexAnimInfo;					
					EarthView::World::Graphic::CVertexData *mSoftwareVertexAnimVertexData;					
					EarthView::World::Graphic::CVertexData *mHardwareVertexAnimVertexData;					
					ev_bool mVertexAnimationAppliedThisFrame;					
					ev_uint16 mHardwarePoseCount;
					
					mutable Real mCachedCameraDist;					
					mutable const EarthView::World::Graphic::CCamera *mCachedCamera;
					
					void prepareTempBlendBuffers();					
					
					EarthView::World::Graphic::CSelectionRenderable*	mpSelectedRenderable;
					map<ev_uint8, std::pair<EarthView::World::Graphic::CSelectionRenderable*,ev_uint32> > * mpSegmentAlphaMap;

					struct SegmentInfo
					{
						ev_bool Visible;
						ev_bool Highlight;
						ev_uint8 Alpha;
						SegmentInfo()
						{
							Visible = true;
							Highlight = false;
							Alpha = 0;
						}
					};

					vector<SegmentInfo>* mpSegmentInfos;

				public:
					/// <summary>
					/// 获取当前实例的材质名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString &getMaterialName() const;
					/// <summary>
					/// 设置被使用的材质名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="groupName">组名称</param>
					/// <returns></returns>
					void setMaterialName( const EVString &name, const EVString &groupName);
					void setMaterialName( const EVString &name);
					/// <summary>
					/// 设置被使用的材质
					/// </summary>
					/// <param name="material">材质</param>
					/// <returns></returns>
					void setMaterial( const EarthView::World::Graphic::CMaterialPtr &material );					
                
					virtual void setRenderQueueGroup(ev_uint8 queueID);                
					virtual void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);
					/** Gets the queue group for this entity, see setRenderQueueGroup for full details. */
					virtual ev_uint8 getRenderQueueGroup() const;
					/** Gets the queue group for this entity, see setRenderQueueGroup for full details. */
					virtual ev_uint16 getRenderQueuePriority() const;
					/** Gets the queue group for this entity, see setRenderQueueGroup for full details. */
					virtual ev_bool isRenderQueueGroupSet() const;
					/** Gets the queue group for this entity, see setRenderQueueGroup for full details. */
					virtual ev_bool isRenderQueuePrioritySet() const;
					
					EarthView::World::Graphic::CSelectionRenderable* getSelectionRenderable() const;

					virtual EarthView::World::Graphic::CMovableObject* getMovableObject()const
					{
						return mParent->getParent();
					}
					/// <summary>
					/// 获得材质信息
					/// 重写EarthView::World::Graphic::CRenderable
					/// </summary>
					/// <param name=""></param>
					/// <returns>材质</returns>
					const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;

					/// <summary>
					/// 重新获得一个渲染实体使用的材质技术指针
					/// 重写EarthView::World::Graphic::CRenderable
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Graphic::CTechnique *getTechnique() const;
					/// <summary>
					/// 获得要求对象到帧缓冲的渲染操作
					/// 重写EarthView::World::Graphic::CRenderable
					/// </summary>
					/// <param name="op"></param>
					/// <returns></returns>
					void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);

					/// <summary>
					/// 获得渲染对象的转换矩阵
					/// 重写EarthView::World::Graphic::CRenderable
					/// </summary>
					/// <param name="xform">四维矩阵</param>
					/// <returns></returns>
					void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
					/// <summary>
					/// 获得渲染接口需要的转换矩阵的数量
					/// 重写EarthView::World::Graphic::CRenderable
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_uint16 getNumWorldTransforms() const;

					/// <summary>
					/// 获得摄像机视场的深度的平方
					/// 重写EarthView::World::Graphic::CRenderable
					/// </summary>
					/// <param name="cam">摄像机视场</param>
					/// <returns>视场大小的值</returns>
					Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;

					/// <summary>
					/// 获得光照的列表，按照相对于渲染实体的远近排列
					/// 重写CRenderable::getLights
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Graphic::LightList &getLights() const;
					/// <summary>
					/// 获取是否投射影像
					/// 重写EarthView::World::Graphic::CRenderable
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getCastsShadows() const;

					/** Advanced method to get the temporarily blended vertex information
					for entities which are software skinned.
					@remarks
						Internal engine will eliminate software animation if possible, this
						information is unreliable unless added request for software animation
						via CEntity::addSoftwareAnimationRequest.
					@note
						The positions/normals of the returned vertex data is in object space.
					*/
					EarthView::World::Graphic::CVertexData *_getSkelAnimVertexData();
					/** Advanced method to get the temporarily blended software morph vertex information
					@remarks
						Internal engine will eliminate software animation if possible, this
						information is unreliable unless added request for software animation
						via CEntity::addSoftwareAnimationRequest.
					@note
						The positions/normals of the returned vertex data is in object space.
					*/
					EarthView::World::Graphic::CVertexData *_getSoftwareVertexAnimVertexData();
					/** Advanced method to get the hardware morph vertex information
					@note
						The positions/normals of the returned vertex data is in object space.
					*/
					EarthView::World::Graphic::CVertexData *_getHardwareVertexAnimVertexData();
					/** Advanced method to get the temp buffer information for software
					skeletal animation.
					*/
					EarthView::World::Graphic::CTempBlendedBufferInfo *_getSkelAnimTempBufferInfo();
					/** Advanced method to get the temp buffer information for software
					morph animation.
					*/
					EarthView::World::Graphic::CTempBlendedBufferInfo *_getVertexAnimTempBufferInfo();
					//// Retrieve the EarthView::World::Graphic::CVertexData which should be used for GPU binding
					EarthView::World::Graphic::CVertexData *getVertexDataForBinding();
					/** Mark all vertex data as so far unanimated.
					*/
					void _markBuffersUnusedForAnimation();
					/** Mark all vertex data as animated.
					*/
					void _markBuffersUsedForAnimation();
					/** Are buffers already marked as vertex animated? */
					ev_bool _getBuffersMarkedForAnimation() const;
					/** Internal method to copy original vertex data to the morph structures
					should there be no active animation in use.
					*/
					void _restoreBuffersForUnusedAnimation(ev_bool hardwareAnimation);
					/// <summary>
					/// 更新一个自定义EarthView::World::Graphic::CGpuProgramParameters常数
					/// </summary>
					/// <param name="paramIndex">更新索引常数</param>
					/// <param name="constantEntry">从程序参数获取自动常数</param>
					/// <param name="params">参数</param>
					/// <returns></returns>
					void _updateCustomGpuParameter(const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &constantEntry,
												   EarthView::World::Graphic::CGpuProgramParameters *params) const;
					/** Invalidate the camera distance cache */
					void _invalidateCameraCache ();		

				protected:
					ev_bool setSegmentVisible(ev_uint32 segmentIndex,ev_bool visible);
					ev_bool getSegmentVisible(ev_uint32 segmentIndex)const;

					ev_bool setSegmentHighlight(ev_uint32 segmentIndex,ev_bool highlight);
					ev_bool getSegmentHighlight(ev_uint32 segmentIndex)const;

					ev_bool setSegmentTransparency(ev_uint32 segmentIndex,ev_uint8 alpha);
					ev_uint8 getSegmentTransparency(ev_uint32 segmentIndex)const;

					ev_bool resetSegmentsHighlight();
					ev_bool resetSegmentsVisible();	
					ev_bool resetSegmentsTransparency();

					ev_void setVisible(ev_bool visible);

					ev_bool getVisible()const{return mVisible;}

					ev_void updateSegmentStatus(ev_uint32 segmentIndex,ev_bool visible,ev_bool highlight,ev_uint8 alpha);					

					ev_void renderAsSelected();
					ev_void clearSelection();

				protected:
					ev_bool setPointHighlight(ev_uint32 pointIndex);

				private:
					EarthView::World::Graphic::CIndexData *mpIndexData;
				};

			ev_private:
				CSubEntity(_in EarthView::World::Core::CNameValuePairList *pList);

			protected:
				friend class CSubEntityRenderable;

				CSubEntity(EarthView::World::Graphic::CEntity *ref_parent, EarthView::World::Graphic::CSubMesh *ref_subMeshBasis);
				
				EarthView::World::Graphic::CEntity *mParentEntity;				
				EarthView::World::Graphic::CSubMesh *mSubMesh;				

				EarthView::World::Graphic::CInstancedEntity* mpInstanceEntity;
				CSubEntityRenderable* mpRenderable;				

				ev_void attachObjectsToNodes();
				ev_void detachObjectsFromNodes();

				void updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue, ev_bool queueIDSet, ev_uint8 queueID, ev_bool queuePrioritySet, ev_uint16 queuePriority);
			ev_private:
				virtual ~CSubEntity();
			public:
				/// <summary>
				/// 设置子实体是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				virtual void setVisible(ev_bool visible);				

				/// <summary>
				/// 获取子实体是否可见
				/// </summary>
				/// <param name=""></param>
				/// <returns>如果可见返回true,不可见返回false</returns>
				virtual ev_bool isVisible() const;

				/// <summary>
				/// 获取聚合的SubMesh
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Graphic::CSubMesh *getSubMesh();
				/// <summary>
				/// 获取父实体
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Graphic::CEntity *getParent() const;

				/// <summary>
				/// 获取聚合的非内部instance渲染对象对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>如果是内部instance，则返回NULL</returns>
				CSubEntityRenderable* getRenderble()const;
				
				/// <summary>
				/// 获取聚合的内部instance对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>如果不是内部instance，则返回NULL</returns>
				CInstancedEntity* getInstanceEntity()const;				

				/// <summary>
				/// 获得渲染对象的转换矩阵
				/// 重写EarthView::World::Graphic::CRenderable
				/// </summary>
				/// <param name="xform">四维矩阵</param>
				/// <returns></returns>
				void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
				/// <summary>
				/// 获得渲染接口需要的转换矩阵的数量
				/// 重写EarthView::World::Graphic::CRenderable
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint16 getNumWorldTransforms() const;

				/// <summary>
				/// 设置自定义环境光系数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void setCustomAmbient(const EarthView::World::Graphic::CColourValue& ambient);
				/// <summary>
				/// 获取自定义环境光系数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				const EarthView::World::Graphic::CColourValue& getCustomAmbient()const;
				
				/// <summary>
				/// 设置是否自定义投影矩阵
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void setCustomProjection(ev_bool customProjection);

				/// <summary>
				/// 获取是否自定义投影矩阵
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool getCustomProjection()const;

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="viewport">视口</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,_out EarthView::World::Spatial::Math::CVector3& point);
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,_out EarthView::World::Spatial::Math::CVector3& point,_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3);

				/// <summary>
				/// 选择组件
				/// </summary>
				/// <param name="ray">射线对象</param>   
				/// <param name="viewport">视口</param>  
				/// <param name="instanceIndex">选中的instance序号</param>
				/// <param name="segmentIndex">选中的分段序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:组件与射线相交;false:不相交</returns>
				virtual ev_bool selectComponentBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point);
				virtual ev_bool selectComponentBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point,_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3);

				/// <summary>
				/// 选择组件
				/// </summary>
				/// <param name="ray">射线对象</param>   
				/// <param name="viewport">视口</param>  
				/// <param name="instanceIndex">选中的instance序号</param>
				/// <param name="point">交点</param>
				/// <param name="segmentIndex">要选中的分段序号</param>
				/// <returns>true:组件与射线相交;false:不相交</returns>
				virtual ev_bool selectComponentBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,_out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point,_in EarthView::World::Core::IntVector& segmentVec);
				virtual ev_bool selectComponentBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,_out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point,_in EarthView::World::Core::IntVector& segmentVec,_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3);

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="viewport">视口</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				ev_bool selectBy( const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,_out EarthView::World::Spatial::Math::CVector3& point,_out ev_uint32& index1,_out ev_uint32& index2,_out ev_uint32& index3 ,_in  EarthView::World::Core::IntVector& segmentIndex);

				/// <summary>
				/// 设置选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour);

				/// <summary>
				/// 获得选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Graphic::CColourValue getSelectionColour()const;				

				/// <summary>
				/// 高亮显示
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void renderAsSelected();

				/// <summary>
				/// 高亮显示
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void renderAsSelected(ev_int32 segmentIndex);

				/// <summary>
				/// 清除选择
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clearSelection();

				/// <summary>
				/// 获取当前实例的材质名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getMaterialName() const;
				/// <summary>
				/// 设置被使用的材质名称
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="groupName">组名称</param>
				/// <returns></returns>
				void setMaterialName( const EVString &name, const EVString &groupName);
				void setMaterialName( const EVString &name);
				/// <summary>
				/// 设置被使用的材质
				/// </summary>
				/// <param name="material">材质</param>
				/// <returns></returns>
				void setMaterial( const EarthView::World::Graphic::CMaterialPtr &material );	
				/// <summary>
				/// 获得材质信息				
				/// </summary>
				/// <param name=""></param>
				/// <returns>材质</returns>
				const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;

				virtual void setRenderQueueGroup(ev_uint8 queueID);                
				virtual void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);
				/** Gets the queue group for this entity, see setRenderQueueGroup for full details. */
				virtual ev_uint8 getRenderQueueGroup() const;				
				/** Gets the queue group for this entity, see setRenderQueueGroup for full details. */
				virtual ev_bool isRenderQueueGroupSet() const;

			public:
				/// <summary>
				/// 设置分段是否可见
				/// </summary>
				/// <param name="segmentIndex">分段序号</param>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				ev_bool setSegmentVisible(ev_uint32 segmentIndex,ev_bool visible);
				/// <summary>
				/// 获取分段是否可见
				/// </summary>
				/// <param name="segmentIndex">分段序号</param>				
				/// <returns>是否可见</returns>
				ev_bool getSegmentVisible(ev_uint32 segmentIndex)const;

				/// <summary>
				/// 设置分段是否高亮
				/// </summary>
				/// <param name="segmentIndex">分段序号</param>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				ev_bool setSegmentHighlight(ev_uint32 segmentIndex,ev_bool highlight);
				/// <summary>
				/// 获取分段是否高亮
				/// </summary>
				/// <param name="segmentIndex">分段序号</param>				
				/// <returns>是否高亮</returns>
				ev_bool getSegmentHighlight(ev_uint32 segmentIndex)const;

				/// <summary>
				/// 设置分段透明度
				/// </summary>
				/// <param name="segmentIndex">分段序号</param>
				/// <param name="alpha">透明度，0为不透明，255为全透明</param>
				/// <returns></returns>
				ev_bool setSegmentTransparency(ev_uint32 segmentIndex,ev_uint8 alpha);
				/// <summary>
				/// 获取分段透明度
				/// </summary>
				/// <param name="segmentIndex">分段序号</param>				
				/// <returns>透明度，0为不透明，255为全透明</returns>
				ev_uint8 getSegmentTransparency(ev_uint32 segmentIndex)const;

				ev_bool resetSegmentsHighlight();
				ev_bool resetSegmentsVisible();
				ev_bool resetSegmentsTransparency();

			};
        }
    }
}

#endif

