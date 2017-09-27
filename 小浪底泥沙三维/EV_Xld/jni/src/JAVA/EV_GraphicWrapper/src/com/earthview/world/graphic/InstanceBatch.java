package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceBatch extends com.earthview.world.graphic.Renderable {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceBatch", new InstanceBatchClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCInstanceBatchProxy", new InstanceBatchClassFactory());
	}

	public static class InstanceBatchInternalMovable extends com.earthview.world.graphic.MovableObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable", new InstanceBatchInternalMovableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceBatch::JCInstanceBatchInternalMovableProxy", new InstanceBatchInternalMovableClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 构造函数的键值对表
		 */
		public InstanceBatchInternalMovable(com.earthview.world.graphic.InstanceBatch ref_parent, String name) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer namePtr = new BasePointer(name);
			list.add("name", namePtr.get());
			Create("JCInstanceBatchInternalMovableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.InstanceBatch$InstanceBatchInternalMovable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getSceneManger_void(long pNativeObject);
		public com.earthview.world.graphic.SceneManager getSceneManger()
		{
			long returnValue = getSceneManger_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
			}
			return __returnValue;
		}
		native private double getBoundingRadius_void(long pNativeObject);
		public double getBoundingRadius()
		{
			double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private double getBoundingRadius_void_NoVirtual(long pNativeObject);
		protected double getBoundingRadius_NoVirtual()
		{
			double returnValue = getBoundingRadius_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private long getBoundingBox_void(long pNativeObject);
		public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
		{
			long returnValue = getBoundingBox_void(this.nativeObject.pointer);
			com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
			}
			return __returnValue;
		}
		native private long getBoundingBox_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox_NoVirtual()
		{
			long returnValue = getBoundingBox_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
			}
			return __returnValue;
		}

		native private String getMovableType_void(long pNativeObject);
		public String getMovableType()
		{
			String returnValue = getMovableType_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private String getMovableType_void_NoVirtual(long pNativeObject);
		protected String getMovableType_NoVirtual()
		{
			String returnValue = getMovableType_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private void _notifyCurrentCamera_CCamera(long pNativeObject, long ref_cam);
		public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
		{
			long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
			_notifyCurrentCamera_CCamera(this.nativeObject.pointer, ref_camParamValue);
		}
		native private void _notifyCurrentCamera_CCamera_NoVirtual(long pNativeObject, long ref_cam);
		protected void _notifyCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera ref_cam)
		{
			long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
			_notifyCurrentCamera_CCamera_NoVirtual(this.nativeObject.pointer, ref_camParamValue);
		}

		native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
		public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
		{
			long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
			_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
		}
		native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
		protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
		{
			long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
			_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
		}

		native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
		public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			visitRenderables_CVisitor(this.nativeObject.pointer, visitorParamValue);
		}
		native private void visitRenderables_CVisitor_NoVirtual(long pNativeObject, long visitor);
		protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			visitRenderables_CVisitor_NoVirtual(this.nativeObject.pointer, visitorParamValue);
		}

		native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
		public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			boolean debugRenderablesParamValue = debugRenderables;
			visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
		}
		native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
		protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			boolean debugRenderablesParamValue = debugRenderables;
			visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
		}

		native private void _notifyAttached_CNode_ev_bool(long pNativeObject, long parent, boolean isTagPoint);
		public void _notifyAttached(com.earthview.world.graphic.Node parent, boolean isTagPoint)
		{
			long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
			boolean isTagPointParamValue = isTagPoint;
			_notifyAttached_CNode_ev_bool(this.nativeObject.pointer, parentParamValue, isTagPointParamValue);
		}
		native private void _notifyAttached_CNode_ev_bool_NoVirtual(long pNativeObject, long parent, boolean isTagPoint);
		protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node parent, boolean isTagPoint)
		{
			long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
			boolean isTagPointParamValue = isTagPoint;
			_notifyAttached_CNode_ev_bool_NoVirtual(this.nativeObject.pointer, parentParamValue, isTagPointParamValue);
		}

		native private long queryLights_void(long pNativeObject);
		public com.earthview.world.graphic.LightList queryLights()
		{
			long returnValue = queryLights_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}
		native private long queryLights_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.LightList queryLights_NoVirtual()
		{
			long returnValue = queryLights_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}

		native private boolean getReceivesShadows_void(long pNativeObject);
		public boolean getReceivesShadows()
		{
			boolean returnValue = getReceivesShadows_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean getReceivesShadows_void_NoVirtual(long pNativeObject);
		protected boolean getReceivesShadows_NoVirtual()
		{
			boolean returnValue = getReceivesShadows_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private boolean setSelected_IntVector(long pNativeObject, long objIndics);
		/// <summary>
		/// 设置选中的对象				
		/// <param name="objIndics">选中的对象集合</param>				
		/// <returns></returns>
		public boolean setSelected(com.earthview.world.core.IntVector objIndics)
		{
			long objIndicsParamValue = objIndics.nativeObject.pointer;
			boolean returnValue = setSelected_IntVector(this.nativeObject.pointer, objIndicsParamValue);
			return returnValue;
		}
		native private boolean setSelected_IntVector_NoVirtual(long pNativeObject, long objIndics);
		protected boolean setSelected_NoVirtual(com.earthview.world.core.IntVector objIndics)
		{
			long objIndicsParamValue = objIndics.nativeObject.pointer;
			boolean returnValue = setSelected_IntVector_NoVirtual(this.nativeObject.pointer, objIndicsParamValue);
			return returnValue;
		}

		native private long getSelected_void(long pNativeObject);
		/// <summary>
		/// 获得选中的对象				
		/// <param name=""></param>				
		/// <returns>选中的对象集合</returns>
		public com.earthview.world.core.IntVector getSelected()
		{
			long returnValue = getSelected_void(this.nativeObject.pointer);
			com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "IntVector");
			}
			return __returnValue;
		}
		native private long getSelected_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.core.IntVector getSelected_NoVirtual()
		{
			long returnValue = getSelected_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "IntVector");
			}
			return __returnValue;
		}

		native private void setSelectionColour_CColourValue(long pNativeObject, long colour);
		/// <summary>
		/// 设置选中时的高亮颜色				
		/// <param name=""></param>				
		/// <returns></returns>
		public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
		{
			long colourParamValue = colour.nativeObject.pointer;
			setSelectionColour_CColourValue(this.nativeObject.pointer, colourParamValue);
		}
		native private void setSelectionColour_CColourValue_NoVirtual(long pNativeObject, long colour);
		protected void setSelectionColour_NoVirtual(com.earthview.world.graphic.ColourValue colour)
		{
			long colourParamValue = colour.nativeObject.pointer;
			setSelectionColour_CColourValue_NoVirtual(this.nativeObject.pointer, colourParamValue);
		}

		native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
		/**
		 * 射线选择
		 * @param ray 射线对象
		 * @param EarthView::World::Graphic::CViewport 所在视口
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param objIndex 选中的对象序号
		 * @param point 交点
		 * @return true:与射线相交;false:不相交
		 */
		public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
		{
			long rayParamValue = ray.nativeObject.pointer;
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
			long objIndexParamValue = objIndex.nativeObject.pointer;
			long pointParamValue = point.nativeObject.pointer;
			boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
			return returnValue;
		}
		native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
		protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
		{
			long rayParamValue = ray.nativeObject.pointer;
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
			long objIndexParamValue = objIndex.nativeObject.pointer;
			long pointParamValue = point.nativeObject.pointer;
			boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
			return returnValue;
		}

		native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
		/**
		 * 盒选择
		 * @param aabb 盒
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param indexVec 选中的对象序号的集合
		 * @return true:物体包围盒与指定盒相交;false:不相交
		 */
		public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
		{
			long aabbParamValue = aabb.nativeObject.pointer;
			boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
			long indexVecParamValue = indexVec.nativeObject.pointer;
			boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
			return returnValue;
		}
		native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
		protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
		{
			long aabbParamValue = aabb.nativeObject.pointer;
			boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
			long indexVecParamValue = indexVec.nativeObject.pointer;
			boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
			return returnValue;
		}

		native private boolean selectBy_CSphere_ev_bool_IntVector(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
		/**
		 * 球选择
		 * @param sphere 球
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param indexVec 选中的对象序号的集合
		 * @return true:物体包围盒与指定球相交;false:不相交
		 */
		public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
		{
			long sphereParamValue = sphere.nativeObject.pointer;
			boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
			long indexVecParamValue = indexVec.nativeObject.pointer;
			boolean returnValue = selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
			return returnValue;
		}
		native private boolean selectBy_CSphere_ev_bool_IntVector_NoVirtual(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
		protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
		{
			long sphereParamValue = sphere.nativeObject.pointer;
			boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
			long indexVecParamValue = indexVec.nativeObject.pointer;
			boolean returnValue = selectBy_CSphere_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
			return returnValue;
		}

		native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
		/**
		 * 选择组件
		 * @param ray 射线对象
		 * @param EarthView::World::Graphic::CViewport 所在视口
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param objIndex 物体序号
		 * @param submeshIndex submesh序号
		 * @param instanceIndex instance序号
		 * @param segmentIndex 索引分段序号
		 * @param point 交点
		 * @return true:组件与射线相交;false:不相交
		 */
		public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
		{
			long rayParamValue = ray.nativeObject.pointer;
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
			long objIndexParamValue = objIndex.nativeObject.pointer;
			long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
			long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
			long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
			long pointParamValue = point.nativeObject.pointer;
			boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
			return returnValue;
		}
		native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
		protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
		{
			long rayParamValue = ray.nativeObject.pointer;
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
			long objIndexParamValue = objIndex.nativeObject.pointer;
			long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
			long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
			long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
			long pointParamValue = point.nativeObject.pointer;
			boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
			return returnValue;
		}

		native private void renderSelection_void(long pNativeObject);
		public void renderSelection()
		{
			renderSelection_void(this.nativeObject.pointer);
		}
		native private void renderSelection_void_NoVirtual(long pNativeObject);
		protected void renderSelection_NoVirtual()
		{
			renderSelection_void_NoVirtual(this.nativeObject.pointer);
		}

		native private void clearSelection_void(long pNativeObject);
		public void clearSelection()
		{
			clearSelection_void(this.nativeObject.pointer);
		}
		native private void clearSelection_void_NoVirtual(long pNativeObject);
		protected void clearSelection_NoVirtual()
		{
			clearSelection_void_NoVirtual(this.nativeObject.pointer);
		}

		native private boolean startEditing_ev_uint32(long pNativeObject, long objectIndex);
		public boolean startEditing(long objectIndex)
		{
			long objectIndexParamValue = objectIndex;
			boolean returnValue = startEditing_ev_uint32(this.nativeObject.pointer, objectIndexParamValue);
			return returnValue;
		}
		native private boolean startEditing_ev_uint32_NoVirtual(long pNativeObject, long objectIndex);
		protected boolean startEditing_NoVirtual(long objectIndex)
		{
			long objectIndexParamValue = objectIndex;
			boolean returnValue = startEditing_ev_uint32_NoVirtual(this.nativeObject.pointer, objectIndexParamValue);
			return returnValue;
		}

		native private void endEditing_void(long pNativeObject);
		public void endEditing()
		{
			endEditing_void(this.nativeObject.pointer);
		}
		native private void endEditing_void_NoVirtual(long pNativeObject);
		protected void endEditing_NoVirtual()
		{
			endEditing_void_NoVirtual(this.nativeObject.pointer);
		}

		native private long getEditBoundingBox_void(long pNativeObject);
		public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
		{
			long returnValue = getEditBoundingBox_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
			}
			return __returnValue;
		}
		native private long getEditBoundingBox_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.EditBoundingBox getEditBoundingBox_NoVirtual()
		{
			long returnValue = getEditBoundingBox_void_NoVirtual(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
			}
			return __returnValue;
		}

		native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
		public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
		{
			long objectIndexParamValue = objectIndex;
			long matrixParamValue = matrix.nativeObject.pointer;
			boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
			return returnValue;
		}
		native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
		protected boolean getSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
		{
			long objectIndexParamValue = objectIndex;
			long matrixParamValue = matrix.nativeObject.pointer;
			boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
			return returnValue;
		}

		native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
		public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
		{
			long objectIndexParamValue = objectIndex;
			long matrixParamValue = matrix.nativeObject.pointer;
			boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
			return returnValue;
		}
		native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
		protected boolean setSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
		{
			long objectIndexParamValue = objectIndex;
			long matrixParamValue = matrix.nativeObject.pointer;
			boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
			return returnValue;
		}

		native private long getParent_void(long pNativeObject);
		public com.earthview.world.graphic.InstanceBatch getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstanceBatch __returnValue = new com.earthview.world.graphic.InstanceBatch(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceBatch");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstanceBatch)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstanceBatch");
			}
			return __returnValue;
		}
		public InstanceBatchInternalMovable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstanceBatchInternalMovable(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr()
		{
			return super.getAnimableObjectPtr_NoVirtual();
		}
		/**
		 * 获取渲染队列ID
		 * @param  
		 */
		public short getRenderQueueId()
		{
			return super.getRenderQueueId_NoVirtual();
		}
		/**
		 * 通报创建者只能内部使用
		 * @param fact 实例
		 */
		public void _notifyCreator(com.earthview.world.graphic.MovableObjectFactory ref_fact)
		{
			super._notifyCreator_NoVirtual(ref_fact);
		}
		/**
		 * 获取创建者如果有的话，获取，只能在内部使用
		 * @param  
		 * @return 移动对象工厂类
		 */
		public com.earthview.world.graphic.MovableObjectFactory _getCreator()
		{
			return super._getCreator_NoVirtual();
		}
		/**
		 * 通报场景管理器只能内部使用
		 * @param man 场景管理者
		 */
		public void _notifyManager(com.earthview.world.graphic.SceneManager ref_mgr)
		{
			super._notifyManager_NoVirtual(ref_mgr);
		}
		/**
		 * 获取场景管理器
		 * @param  
		 * @return 管理者
		 */
		public com.earthview.world.graphic.SceneManager _getManager()
		{
			return super._getManager_NoVirtual();
		}
		/**
		 * 获取对象的名称
		 * @param  
		 * @return 名称
		 */
		public String getName()
		{
			return super.getName_NoVirtual();
		}
		/**
		 * 获取父节点一个移动对象可以附属在一个场景节点或者骨骼节点上
		 * @param  
		 * @return 节点名称
		 */
		public com.earthview.world.graphic.Node getParentNode()
		{
			return super.getParentNode_NoVirtual();
		}
		/**
		 * 获取对象的场景父节点
		 * @param  
		 * @return 场景节点
		 */
		public com.earthview.world.graphic.SceneNode getParentSceneNode()
		{
			return super.getParentSceneNode_NoVirtual();
		}
		/**
		 * 判断父节点是否是骨骼节点
		 * @param  
		 * @return 成功，返回标签点，否则为场景节点
		 */
		public boolean isParentTagPoint()
		{
			return super.isParentTagPoint_NoVirtual();
		}
		public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
		{
			super._notifyAttached_NoVirtual(ref_parent);
		}
		/**
		 * 是否已挂接
		 * @param  
		 * @return 为真，挂接
		 */
		public boolean isAttached()
		{
			return super.isAttached_NoVirtual();
		}
		/**
		 * 将指定对象从父节点分离
		 * @param  
		 */
		public void detachFromParent()
		{
			super.detachFromParent_NoVirtual();
		}
		/**
		 * 指定节点是否是场景图中动态部分指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
		 * @param  
		 */
		public boolean isInScene()
		{
			return super.isInScene_NoVirtual();
		}
		/**
		 * 通报被移动内部方法
		 * @param  
		 */
		public void _notifyMoved()
		{
			super._notifyMoved_NoVirtual();
		}
		/**
		 * 通报光源查询结束内部方法
		 * @param  
		 */
		public void _notifyLightsQueried(com.earthview.world.graphic.LightList lightList)
		{
			super._notifyLightsQueried_NoVirtual(lightList);
		}
		public void setLightQueriedListener(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
		{
			super.setLightQueriedListener_NoVirtual(listener);
		}
		public com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener()
		{
			return super.getLightQueriedListener_NoVirtual();
		}
		public long getLightListUpdated()
		{
			return super.getLightListUpdated_NoVirtual();
		}
		public void setLightListUpdated(long frame)
		{
			super.setLightListUpdated_NoVirtual(frame);
		}
		/**
		 * 在世界空间中获取当前对象的边框球体
		 * @param derive 是否检索
		 */
		public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere(boolean derive)
		{
			return super.getWorldBoundingSphere_NoVirtual(derive);
		}
		public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere()
		{
			return super.getWorldBoundingSphere_NoVirtual();
		}
		/**
		 * 设置是否可见
		 * @param visible 是否可见
		 */
		public void setVisible(boolean visible)
		{
			super.setVisible_NoVirtual(visible);
		}
		/**
		 * 获取是否可见,与setVisible对应
		 * @param  
		 */
		public boolean getVisible()
		{
			return super.getVisible_NoVirtual();
		}
		/**
		 * 获取是否可见,严格的判断(裁剪判断、可视距离判断)
		 * @param  
		 */
		public boolean isVisible()
		{
			return super.isVisible_NoVirtual();
		}
		/**
		 * 设置该对象可渲染的距离上限
		 * @param dist 默认为0
		 */
		public void setRenderingMaxDistance(double dist)
		{
			super.setRenderingMaxDistance_NoVirtual(dist);
		}
		/**
		 * 获取该对象可渲染的距离下限
		 * @param  
		 */
		public double getRenderingMaxDistance()
		{
			return super.getRenderingMaxDistance_NoVirtual();
		}
		/**
		 * 设置该对象可渲染的距离下限
		 * @param dist 默认为0
		 */
		public void setRenderingMinDistance(double dist)
		{
			super.setRenderingMinDistance_NoVirtual(dist);
		}
		/**
		 * 获取该对象可渲染的距离上限
		 * @param  
		 */
		public double getRenderingMinDistance()
		{
			return super.getRenderingMinDistance_NoVirtual();
		}
		/**
		 * 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)必须先调用setUseMinPixelSize才能开启此功能
		 * @param pixelSize 像素大小
		 */
		public void setRenderingMinPixelSize(double pixelSize)
		{
			super.setRenderingMinPixelSize_NoVirtual(pixelSize);
		}
		/**
		 * 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
		 * @param  
		 * @return 像素大小
		 */
		public double getRenderingMinPixelSize()
		{
			return super.getRenderingMinPixelSize_NoVirtual();
		}
		/**
		 * 设置渲染队列组信息
		 * @param queueID 队列ID号
		 */
		public void setRenderQueueGroup(short queueID)
		{
			super.setRenderQueueGroup_NoVirtual(queueID);
		}
		/**
		 * 设置渲染队列组信息和队列优先级
		 * @param queueID 队列ID号
		 * @param priority 优先级
		 */
		public void setRenderQueueGroupAndPriority(short queueID, int priority)
		{
			super.setRenderQueueGroupAndPriority_NoVirtual(queueID, priority);
		}
		/**
		 * 获取该实体的渲染队列组
		 * @param  
		 */
		public short getRenderQueueGroup()
		{
			return super.getRenderQueueGroup_NoVirtual();
		}
		/**
		 * 获取父节点的全部变化信息
		 * @param  
		 */
		public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
		{
			return super._getParentNodeFullTransform_NoVirtual();
		}
		/**
		 * 设置该对象的询问标识
		 * @param flags 
		 */
		public void setQueryFlags(long flags)
		{
			super.setQueryFlags_NoVirtual(flags);
		}
		/**
		 * 添加询问标识
		 * @param flags 
		 */
		public void addQueryFlags(long flags)
		{
			super.addQueryFlags_NoVirtual(flags);
		}
		/**
		 * 移除询问标识
		 * @param flags 
		 */
		public void removeQueryFlags(long flags)
		{
			super.removeQueryFlags_NoVirtual(flags);
		}
		/**
		 * 获取询问标识
		 * @param  
		 */
		public long getQueryFlags()
		{
			return super.getQueryFlags_NoVirtual();
		}
		/**
		 * 设置对象可见标识
		 * @param flags 
		 */
		public void setVisibilityFlags(long flags)
		{
			super.setVisibilityFlags_NoVirtual(flags);
		}
		/**
		 * 添加对象可见标识
		 * @param flags 
		 */
		public void addVisibilityFlags(long flags)
		{
			super.addVisibilityFlags_NoVirtual(flags);
		}
		/**
		 * 移除对象可见标识
		 * @param flags 
		 */
		public void removeVisibilityFlags(long flags)
		{
			super.removeVisibilityFlags_NoVirtual(flags);
		}
		/**
		 * 获取对象可见标识
		 * @param flags 
		 */
		public long getVisibilityFlags()
		{
			return super.getVisibilityFlags_NoVirtual();
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public void addListener(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
		{
			super.addListener_NoVirtual(ref_listener);
		}
		/**
		 * 移除监听器
		 * @param listener 
		 */
		public void removeListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
		{
			super.removeListener_NoVirtual(listener);
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public boolean existListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
		{
			return super.existListener_NoVirtual(listener);
		}
		/**
		 * 获取监听器
		 * @param  
		 */
		public long getListenerCount()
		{
			return super.getListenerCount_NoVirtual();
		}
		/**
		 * 获取监听器
		 * @param  
		 */
		public com.earthview.world.graphic.MovableObject.MovableObjectListener getListener(long index)
		{
			return super.getListener_NoVirtual(index);
		}
		/**
		 * 获取光线掩码默认所有光源影响对象
		 * @param  
		 */
		public long getLightMask()
		{
			return super.getLightMask_NoVirtual();
		}
		/**
		 * 设置光线掩码
		 * @param lightMask 
		 */
		public void setLightMask(long lightMask)
		{
			super.setLightMask_NoVirtual(lightMask);
		}
		/**
		 * 获取指向该对象当前光列表
		 * @param  
		 */
		public com.earthview.world.graphic.LightList _getLightList()
		{
			return super._getLightList_NoVirtual();
		}
		/**
		 * 设置投射阴影
		 * @param enabled 
		 */
		public void setCastShadows(boolean enabled)
		{
			super.setCastShadows_NoVirtual(enabled);
		}
		/**
		 * 获取可移动对象的类型标识
		 * @param  
		 */
		public long getTypeFlags()
		{
			return super.getTypeFlags_NoVirtual();
		}
		/**
		 * 设置调试该对象是否启用
		 * @param  
		 */
		public void setDebugDisplayEnabled(boolean enabled)
		{
			super.setDebugDisplayEnabled_NoVirtual(enabled);
		}
		/**
		 * 是否调试该对象是否启用
		 * @param  
		 */
		public boolean isDebugDisplayEnabled()
		{
			return super.isDebugDisplayEnabled_NoVirtual();
		}
		public boolean getCastShadows()
		{
			return super.getCastShadows_NoVirtual();
		}
		public com.earthview.world.graphic.EdgeData getEdgeList()
		{
			return super.getEdgeList_NoVirtual();
		}
		public boolean hasEdgeList()
		{
			return super.hasEdgeList_NoVirtual();
		}
		public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
		{
			return super.getWorldBoundingBox_NoVirtual(derive);
		}
		public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
		{
			return super.getWorldBoundingBox_NoVirtual();
		}
		public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
		{
			return super.getLightCapBounds_NoVirtual();
		}
		public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
		{
			return super.getDarkCapBounds_NoVirtual(light, dirLightExtrusionDist);
		}
		public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
		{
			return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
		}
		public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
		{
			return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
		}
		public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
		{
			return super.getPointExtrusionDistance_NoVirtual(l);
		}
		public void updateEdgeListLightFacing(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
		{
			super.updateEdgeListLightFacing_NoVirtual(edgeData, lightPos);
		}
		public void generateShadowVolume(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
		{
			super.generateShadowVolume_NoVirtual(edgeData, indexBuffer, light, shadowRenderables, flags);
		}
		public void extrudeBounds(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
		{
			super.extrudeBounds_NoVirtual(box, lightPos, extrudeDist);
		}
		
		native protected void register_getAnimableObjectPtr_void(long pNativeObject, String method);
		native protected void register_getRenderQueueId_void(long pNativeObject, String method);
		native protected void register__notifyCreator_CMovableObjectFactory(long pNativeObject, String method);
		native protected void register__getCreator_void(long pNativeObject, String method);
		native protected void register__notifyManager_CSceneManager(long pNativeObject, String method);
		native protected void register__getManager_void(long pNativeObject, String method);
		native protected void register_getName_void(long pNativeObject, String method);
		native protected void register_getMovableType_void(long pNativeObject, String method);
		native protected void register_getParentNode_void(long pNativeObject, String method);
		native protected void register_getParentSceneNode_void(long pNativeObject, String method);
		native protected void register_isParentTagPoint_void(long pNativeObject, String method);
		native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
		native protected void register__notifyAttached_CNode(long pNativeObject, String method);
		native protected void register_isAttached_void(long pNativeObject, String method);
		native protected void register_detachFromParent_void(long pNativeObject, String method);
		native protected void register_isInScene_void(long pNativeObject, String method);
		native protected void register__notifyMoved_void(long pNativeObject, String method);
		native protected void register__notifyLightsQueried_LightList(long pNativeObject, String method);
		native protected void register_setLightQueriedListener_CLightQueriedListener(long pNativeObject, String method);
		native protected void register_getLightQueriedListener_void(long pNativeObject, String method);
		native protected void register_getLightListUpdated_void(long pNativeObject, String method);
		native protected void register_setLightListUpdated_ev_uint32(long pNativeObject, String method);
		native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
		native protected void register_getBoundingBox_void(long pNativeObject, String method);
		native protected void register_getBoundingRadius_void(long pNativeObject, String method);
		native protected void register_getWorldBoundingSphere_ev_bool(long pNativeObject, String method);
		native protected void register_getWorldBoundingSphere_void(long pNativeObject, String method);
		native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
		native protected void register_setVisible_ev_bool(long pNativeObject, String method);
		native protected void register_getVisible_void(long pNativeObject, String method);
		native protected void register_isVisible_void(long pNativeObject, String method);
		native protected void register_setRenderingMaxDistance_Real(long pNativeObject, String method);
		native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
		native protected void register_setRenderingMinDistance_Real(long pNativeObject, String method);
		native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
		native protected void register_setRenderingMinPixelSize_Real(long pNativeObject, String method);
		native protected void register_getRenderingMinPixelSize_void(long pNativeObject, String method);
		native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
		native protected void register_setSelected_IntVector(long pNativeObject, String method);
		native protected void register_getSelected_void(long pNativeObject, String method);
		native protected void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, String method);
		native protected void register_selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, String method);
		native protected void register_selectBy_CSphere_ev_bool_IntVector(long pNativeObject, String method);
		native protected void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
		native protected void register_renderSelection_void(long pNativeObject, String method);
		native protected void register_clearSelection_void(long pNativeObject, String method);
		native protected void register_startEditing_ev_uint32(long pNativeObject, String method);
		native protected void register_endEditing_void(long pNativeObject, String method);
		native protected void register_getEditBoundingBox_void(long pNativeObject, String method);
		native protected void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
		native protected void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
		native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
		native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
		native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
		native protected void register__getParentNodeFullTransform_void(long pNativeObject, String method);
		native protected void register_setQueryFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_addQueryFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_removeQueryFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_getQueryFlags_void(long pNativeObject, String method);
		native protected void register_setVisibilityFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_addVisibilityFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_removeVisibilityFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_getVisibilityFlags_void(long pNativeObject, String method);
		native protected void register_addListener_CMovableObjectListener(long pNativeObject, String method);
		native protected void register_removeListener_CMovableObjectListener(long pNativeObject, String method);
		native protected void register_existListener_CMovableObjectListener(long pNativeObject, String method);
		native protected void register_getListenerCount_void(long pNativeObject, String method);
		native protected void register_getListener_ev_uint32(long pNativeObject, String method);
		native protected void register_queryLights_void(long pNativeObject, String method);
		native protected void register_getLightMask_void(long pNativeObject, String method);
		native protected void register_setLightMask_ev_uint32(long pNativeObject, String method);
		native protected void register__getLightList_void(long pNativeObject, String method);
		native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
		native protected void register_getReceivesShadows_void(long pNativeObject, String method);
		native protected void register_getTypeFlags_void(long pNativeObject, String method);
		native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
		native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
		native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
		native protected void register_isDebugDisplayEnabled_void(long pNativeObject, String method);
		native protected void register_getCastShadows_void(long pNativeObject, String method);
		native protected void register_getEdgeList_void(long pNativeObject, String method);
		native protected void register_hasEdgeList_void(long pNativeObject, String method);
		native protected void register_getWorldBoundingBox_ev_bool(long pNativeObject, String method);
		native protected void register_getWorldBoundingBox_void(long pNativeObject, String method);
		native protected void register_getLightCapBounds_void(long pNativeObject, String method);
		native protected void register_getDarkCapBounds_CLight_Real(long pNativeObject, String method);
		native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, String method);
		native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, String method);
		native protected void register_getPointExtrusionDistance_CLight(long pNativeObject, String method);
		native protected void register_updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, String method);
		native protected void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, String method);
		native protected void register_extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getAnimableObjectPtr_void(this.nativeObject.pointer, "getAnimableObjectPtr_void_callback");
				this.register_getRenderQueueId_void(this.nativeObject.pointer, "getRenderQueueId_void_callback");
				this.register__notifyCreator_CMovableObjectFactory(this.nativeObject.pointer, "_notifyCreator_CMovableObjectFactory_callback");
				this.register__getCreator_void(this.nativeObject.pointer, "_getCreator_void_callback");
				this.register__notifyManager_CSceneManager(this.nativeObject.pointer, "_notifyManager_CSceneManager_callback");
				this.register__getManager_void(this.nativeObject.pointer, "_getManager_void_callback");
				this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
				this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
				this.register_getParentNode_void(this.nativeObject.pointer, "getParentNode_void_callback");
				this.register_getParentSceneNode_void(this.nativeObject.pointer, "getParentSceneNode_void_callback");
				this.register_isParentTagPoint_void(this.nativeObject.pointer, "isParentTagPoint_void_callback");
				this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
				this.register__notifyAttached_CNode(this.nativeObject.pointer, "_notifyAttached_CNode_callback");
				this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
				this.register_detachFromParent_void(this.nativeObject.pointer, "detachFromParent_void_callback");
				this.register_isInScene_void(this.nativeObject.pointer, "isInScene_void_callback");
				this.register__notifyMoved_void(this.nativeObject.pointer, "_notifyMoved_void_callback");
				this.register__notifyLightsQueried_LightList(this.nativeObject.pointer, "_notifyLightsQueried_LightList_callback");
				this.register_setLightQueriedListener_CLightQueriedListener(this.nativeObject.pointer, "setLightQueriedListener_CLightQueriedListener_callback");
				this.register_getLightQueriedListener_void(this.nativeObject.pointer, "getLightQueriedListener_void_callback");
				this.register_getLightListUpdated_void(this.nativeObject.pointer, "getLightListUpdated_void_callback");
				this.register_setLightListUpdated_ev_uint32(this.nativeObject.pointer, "setLightListUpdated_ev_uint32_callback");
				this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
				this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
				this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
				this.register_getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, "getWorldBoundingSphere_ev_bool_callback");
				this.register_getWorldBoundingSphere_void(this.nativeObject.pointer, "getWorldBoundingSphere_void_callback");
				this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
				this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
				this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
				this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
				this.register_setRenderingMaxDistance_Real(this.nativeObject.pointer, "setRenderingMaxDistance_Real_callback");
				this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
				this.register_setRenderingMinDistance_Real(this.nativeObject.pointer, "setRenderingMinDistance_Real_callback");
				this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
				this.register_setRenderingMinPixelSize_Real(this.nativeObject.pointer, "setRenderingMinPixelSize_Real_callback");
				this.register_getRenderingMinPixelSize_void(this.nativeObject.pointer, "getRenderingMinPixelSize_void_callback");
				this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
				this.register_setSelected_IntVector(this.nativeObject.pointer, "setSelected_IntVector_callback");
				this.register_getSelected_void(this.nativeObject.pointer, "getSelected_void_callback");
				this.register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
				this.register_selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
				this.register_selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CSphere_ev_bool_IntVector_callback");
				this.register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
				this.register_renderSelection_void(this.nativeObject.pointer, "renderSelection_void_callback");
				this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
				this.register_startEditing_ev_uint32(this.nativeObject.pointer, "startEditing_ev_uint32_callback");
				this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
				this.register_getEditBoundingBox_void(this.nativeObject.pointer, "getEditBoundingBox_void_callback");
				this.register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
				this.register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
				this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
				this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
				this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
				this.register__getParentNodeFullTransform_void(this.nativeObject.pointer, "_getParentNodeFullTransform_void_callback");
				this.register_setQueryFlags_ev_uint32(this.nativeObject.pointer, "setQueryFlags_ev_uint32_callback");
				this.register_addQueryFlags_ev_uint32(this.nativeObject.pointer, "addQueryFlags_ev_uint32_callback");
				this.register_removeQueryFlags_ev_uint32(this.nativeObject.pointer, "removeQueryFlags_ev_uint32_callback");
				this.register_getQueryFlags_void(this.nativeObject.pointer, "getQueryFlags_void_callback");
				this.register_setVisibilityFlags_ev_uint32(this.nativeObject.pointer, "setVisibilityFlags_ev_uint32_callback");
				this.register_addVisibilityFlags_ev_uint32(this.nativeObject.pointer, "addVisibilityFlags_ev_uint32_callback");
				this.register_removeVisibilityFlags_ev_uint32(this.nativeObject.pointer, "removeVisibilityFlags_ev_uint32_callback");
				this.register_getVisibilityFlags_void(this.nativeObject.pointer, "getVisibilityFlags_void_callback");
				this.register_addListener_CMovableObjectListener(this.nativeObject.pointer, "addListener_CMovableObjectListener_callback");
				this.register_removeListener_CMovableObjectListener(this.nativeObject.pointer, "removeListener_CMovableObjectListener_callback");
				this.register_existListener_CMovableObjectListener(this.nativeObject.pointer, "existListener_CMovableObjectListener_callback");
				this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
				this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
				this.register_queryLights_void(this.nativeObject.pointer, "queryLights_void_callback");
				this.register_getLightMask_void(this.nativeObject.pointer, "getLightMask_void_callback");
				this.register_setLightMask_ev_uint32(this.nativeObject.pointer, "setLightMask_ev_uint32_callback");
				this.register__getLightList_void(this.nativeObject.pointer, "_getLightList_void_callback");
				this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
				this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
				this.register_getTypeFlags_void(this.nativeObject.pointer, "getTypeFlags_void_callback");
				this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
				this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
				this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
				this.register_isDebugDisplayEnabled_void(this.nativeObject.pointer, "isDebugDisplayEnabled_void_callback");
				this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
				this.register_getEdgeList_void(this.nativeObject.pointer, "getEdgeList_void_callback");
				this.register_hasEdgeList_void(this.nativeObject.pointer, "hasEdgeList_void_callback");
				this.register_getWorldBoundingBox_ev_bool(this.nativeObject.pointer, "getWorldBoundingBox_ev_bool_callback");
				this.register_getWorldBoundingBox_void(this.nativeObject.pointer, "getWorldBoundingBox_void_callback");
				this.register_getLightCapBounds_void(this.nativeObject.pointer, "getLightCapBounds_void_callback");
				this.register_getDarkCapBounds_CLight_Real(this.nativeObject.pointer, "getDarkCapBounds_CLight_Real_callback");
				this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
				this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
				this.register_getPointExtrusionDistance_CLight(this.nativeObject.pointer, "getPointExtrusionDistance_CLight_callback");
				this.register_updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, "updateEdgeListLightFacing_CEdgeData_CVector4_callback");
				this.register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, "generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
				this.register_extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, "extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
			}
		}
		
		public static InstanceBatchInternalMovable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstanceBatchInternalMovable obj = null;
 			if(baseObj instanceof InstanceBatchInternalMovable)
			{
				obj = (InstanceBatchInternalMovable)baseObj;
			} else {
				obj = new InstanceBatchInternalMovable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CInstanceBatchInternalMovable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstanceBatchInternalMovableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstanceBatchInternalMovable emptyInstance = new InstanceBatchInternalMovable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  String getMovableType_void_callback()
	{
		String returnValue = getMovableType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getMovableType_void(long pNativeObject);
	public String getMovableType()
	{
		String returnValue = getMovableType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMovableType_void_NoVirtual(long pNativeObject);
	protected String getMovableType_NoVirtual()
	{
		String returnValue = getMovableType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _notifyCurrentCamera_CCamera_callback(long ref_cam)
	{
		com.earthview.world.graphic.Camera ref_camParamValue = (ref_cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_camParamValue != null)
		{
		ref_camParamValue.setDelegate(true);
		ref_camParamValue.setInstancePointer(new InstancePointer(ref_cam));
		IClassFactory ref_camParamValueClassFactory = GlobalClassFactoryMap.get(ref_camParamValue.getCppInstanceTypeName());
		if (ref_camParamValueClassFactory != null)
		{
			ref_camParamValue.setDelegate(true);
			ref_camParamValue = (com.earthview.world.graphic.Camera)ref_camParamValueClassFactory.create();
			ref_camParamValue.setDelegate(true);
			ref_camParamValue.setInstancePointer(new InstancePointer(ref_cam));
		}
		}
		_notifyCurrentCamera(ref_camParamValue);
	}

	native private void _notifyCurrentCamera_CCamera(long pNativeObject, long ref_cam);
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera(this.nativeObject.pointer, ref_camParamValue);
	}
	native private void _notifyCurrentCamera_CCamera_NoVirtual(long pNativeObject, long ref_cam);
	protected void _notifyCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera_NoVirtual(this.nativeObject.pointer, ref_camParamValue);
	}

	protected  long getBoundingBox_void_callback()
	{
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getBoundingBox();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBoundingBox_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		long returnValue = getBoundingBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox_NoVirtual()
	{
		long returnValue = getBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	protected  double getBoundingRadius_void_callback()
	{
		double returnValue = getBoundingRadius();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getBoundingRadius_void(long pNativeObject);
	public double getBoundingRadius()
	{
		double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBoundingRadius_void_NoVirtual(long pNativeObject);
	protected double getBoundingRadius_NoVirtual()
	{
		double returnValue = getBoundingRadius_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _updateRenderQueue_CRenderQueue_callback(long queue)
	{
		com.earthview.world.graphic.RenderQueue queueParamValue = (queue == 0L ? null : new com.earthview.world.graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate));
		if(queueParamValue != null)
		{
		queueParamValue.setDelegate(true);
		queueParamValue.setInstancePointer(new InstancePointer(queue));
		IClassFactory queueParamValueClassFactory = GlobalClassFactoryMap.get(queueParamValue.getCppInstanceTypeName());
		if (queueParamValueClassFactory != null)
		{
			queueParamValue.setDelegate(true);
			queueParamValue = (com.earthview.world.graphic.RenderQueue)queueParamValueClassFactory.create();
			queueParamValue.setDelegate(true);
			queueParamValue.setInstancePointer(new InstancePointer(queue));
		}
		}
		_updateRenderQueue(queueParamValue);
	}

	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	protected  void visitRenderables_CVisitor_callback(long visitor)
	{
		com.earthview.world.graphic.Renderable.Visitor visitorParamValue = (visitor == 0L ? null : new com.earthview.world.graphic.Renderable.Visitor(CreatedWhenConstruct.CWC_NotToCreate));
		if(visitorParamValue != null)
		{
		visitorParamValue.setDelegate(true);
		visitorParamValue.setInstancePointer(new InstancePointer(visitor));
		IClassFactory visitorParamValueClassFactory = GlobalClassFactoryMap.get(visitorParamValue.getCppInstanceTypeName());
		if (visitorParamValueClassFactory != null)
		{
			visitorParamValue.setDelegate(true);
			visitorParamValue = (com.earthview.world.graphic.Renderable.Visitor)visitorParamValueClassFactory.create();
			visitorParamValue.setDelegate(true);
			visitorParamValue.setInstancePointer(new InstancePointer(visitor));
		}
		}
		visitRenderables(visitorParamValue);
	}

	native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor(this.nativeObject.pointer, visitorParamValue);
	}
	native private void visitRenderables_CVisitor_NoVirtual(long pNativeObject, long visitor);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor_NoVirtual(this.nativeObject.pointer, visitorParamValue);
	}

	protected  void visitRenderables_CVisitor_ev_bool_callback(long visitor, boolean debugRenderables)
	{
		com.earthview.world.graphic.Renderable.Visitor visitorParamValue = (visitor == 0L ? null : new com.earthview.world.graphic.Renderable.Visitor(CreatedWhenConstruct.CWC_NotToCreate));
		if(visitorParamValue != null)
		{
		visitorParamValue.setDelegate(true);
		visitorParamValue.setInstancePointer(new InstancePointer(visitor));
		IClassFactory visitorParamValueClassFactory = GlobalClassFactoryMap.get(visitorParamValue.getCppInstanceTypeName());
		if (visitorParamValueClassFactory != null)
		{
			visitorParamValue.setDelegate(true);
			visitorParamValue = (com.earthview.world.graphic.Renderable.Visitor)visitorParamValueClassFactory.create();
			visitorParamValue.setDelegate(true);
			visitorParamValue.setInstancePointer(new InstancePointer(visitor));
		}
		}
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables(visitorParamValue, debugRenderablesParamValue);
	}

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}

	protected  void _notifyAttached_CNode_ev_bool_callback(long ref_parent, boolean isTagPoint)
	{
		com.earthview.world.graphic.Node ref_parentParamValue = (ref_parent == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_parentParamValue != null)
		{
		ref_parentParamValue.setDelegate(true);
		ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		IClassFactory ref_parentParamValueClassFactory = GlobalClassFactoryMap.get(ref_parentParamValue.getCppInstanceTypeName());
		if (ref_parentParamValueClassFactory != null)
		{
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue = (com.earthview.world.graphic.Node)ref_parentParamValueClassFactory.create();
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		}
		}
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached(ref_parentParamValue, isTagPointParamValue);
	}

	native private void _notifyAttached_CNode_ev_bool(long pNativeObject, long ref_parent, boolean isTagPoint);
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}
	native private void _notifyAttached_CNode_ev_bool_NoVirtual(long pNativeObject, long ref_parent, boolean isTagPoint);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool_NoVirtual(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}

	native private boolean preRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
	public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
		return returnValue;
	}
	native private boolean preRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
	protected boolean preRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
		return returnValue;
	}

	native private void postRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
	public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
	}
	native private void postRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
	protected void postRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
	}

	protected  boolean getReceivesShadows_void_callback()
	{
		boolean returnValue = getReceivesShadows();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getReceivesShadows_void(long pNativeObject);
	public boolean getReceivesShadows()
	{
		boolean returnValue = getReceivesShadows_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getReceivesShadows_void_NoVirtual(long pNativeObject);
	protected boolean getReceivesShadows_NoVirtual()
	{
		boolean returnValue = getReceivesShadows_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean setSelected_IntVector(long pNativeObject, long objIndics);
	/// <summary>
	/// 设置选中的对象				
	/// <param name="objIndics">选中的对象集合</param>				
	/// <returns></returns>
	public boolean setSelected(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}
	native private void setSelectionColour_CColourValue(long pNativeObject, long colour);
	/// <summary>
	/// 设置选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSelectionColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getSelectionColour_void(long pNativeObject);
	/// <summary>
	/// 获得选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.graphic.ColourValue getSelectionColour()
	{
		long returnValue = getSelectionColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getSelected_void(long pNativeObject);
	/// <summary>
	/// 获得选中的对象				
	/// <param name=""></param>				
	/// <returns>选中的对象集合</returns>
	public com.earthview.world.core.IntVector getSelected()
	{
		long returnValue = getSelected_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private void setMaterial_CMaterialPtr(long pNativeObject, long matPtr);
	/// <summary>
	/// 切换材质			
	/// <param name="matPtr">新的材质对象</param>				
	/// <returns></returns>
	public void setMaterial(com.earthview.world.graphic.MaterialPtr matPtr)
	{
		long matPtrParamValue = matPtr.nativeObject.pointer;
		setMaterial_CMaterialPtr(this.nativeObject.pointer, matPtrParamValue);
	}
	protected  boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback(long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point)
	{
		com.earthview.world.spatial.math.Ray rayParamValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
		rayParamValue.setDelegate(true);
		rayParamValue.setInstancePointer(new InstancePointer(ray));
		IClassFactory rayParamValueClassFactory = GlobalClassFactoryMap.get(rayParamValue.getCppInstanceTypeName());
		if (rayParamValueClassFactory != null)
		{
			rayParamValue.setDelegate(true);
			rayParamValue = (com.earthview.world.spatial.math.Ray)rayParamValueClassFactory.create();
			rayParamValue.setDelegate(true);
			rayParamValue.setInstancePointer(new InstancePointer(ray));
		}
		com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportParamValue != null)
		{
		viewportParamValue.setDelegate(true);
		viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
		if (viewportParamValueClassFactory != null)
		{
			viewportParamValue.setDelegate(true);
			viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		}
		}
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		IntegerPointer objIndexParamValue = new IntegerPointer(new InstancePointer(objIndex));
		com.earthview.world.spatial.math.Vector3 pointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.math.Vector3)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		boolean returnValue = selectBy(rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 选中的对象序号
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}

	protected  boolean selectBy_CAxisAlignedBox_ev_bool_IntVector_callback(long aabb, boolean prepareToRenderSelection, long indexVec)
	{
		com.earthview.world.spatial.math.AxisAlignedBox aabbParamValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		aabbParamValue.setDelegate(true);
		aabbParamValue.setInstancePointer(new InstancePointer(aabb));
		IClassFactory aabbParamValueClassFactory = GlobalClassFactoryMap.get(aabbParamValue.getCppInstanceTypeName());
		if (aabbParamValueClassFactory != null)
		{
			aabbParamValue.setDelegate(true);
			aabbParamValue = (com.earthview.world.spatial.math.AxisAlignedBox)aabbParamValueClassFactory.create();
			aabbParamValue.setDelegate(true);
			aabbParamValue.setInstancePointer(new InstancePointer(aabb));
		}
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		com.earthview.world.core.IntVector indexVecParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		indexVecParamValue.setDelegate(true);
		indexVecParamValue.setInstancePointer(new InstancePointer(indexVec));
		IClassFactory indexVecParamValueClassFactory = GlobalClassFactoryMap.get(indexVecParamValue.getCppInstanceTypeName());
		if (indexVecParamValueClassFactory != null)
		{
			indexVecParamValue.setDelegate(true);
			indexVecParamValue = (com.earthview.world.core.IntVector)indexVecParamValueClassFactory.create();
			indexVecParamValue.setDelegate(true);
			indexVecParamValue.setInstancePointer(new InstancePointer(indexVec));
		}
		boolean returnValue = selectBy(aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 盒选择
	 * @param aabb 盒
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定盒相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	protected  boolean selectBy_CSphere_ev_bool_IntVector_callback(long sphere, boolean prepareToRenderSelection, long indexVec)
	{
		com.earthview.world.spatial.math.Sphere sphereParamValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate);
		sphereParamValue.setDelegate(true);
		sphereParamValue.setInstancePointer(new InstancePointer(sphere));
		IClassFactory sphereParamValueClassFactory = GlobalClassFactoryMap.get(sphereParamValue.getCppInstanceTypeName());
		if (sphereParamValueClassFactory != null)
		{
			sphereParamValue.setDelegate(true);
			sphereParamValue = (com.earthview.world.spatial.math.Sphere)sphereParamValueClassFactory.create();
			sphereParamValue.setDelegate(true);
			sphereParamValue.setInstancePointer(new InstancePointer(sphere));
		}
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		com.earthview.world.core.IntVector indexVecParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		indexVecParamValue.setDelegate(true);
		indexVecParamValue.setInstancePointer(new InstancePointer(indexVec));
		IClassFactory indexVecParamValueClassFactory = GlobalClassFactoryMap.get(indexVecParamValue.getCppInstanceTypeName());
		if (indexVecParamValueClassFactory != null)
		{
			indexVecParamValue.setDelegate(true);
			indexVecParamValue = (com.earthview.world.core.IntVector)indexVecParamValueClassFactory.create();
			indexVecParamValue.setDelegate(true);
			indexVecParamValue.setInstancePointer(new InstancePointer(indexVec));
		}
		boolean returnValue = selectBy(sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectBy_CSphere_ev_bool_IntVector(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 球选择
	 * @param sphere 球
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定球相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CSphere_ev_bool_IntVector_NoVirtual(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	protected  boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback(long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point)
	{
		com.earthview.world.spatial.math.Ray rayParamValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
		rayParamValue.setDelegate(true);
		rayParamValue.setInstancePointer(new InstancePointer(ray));
		IClassFactory rayParamValueClassFactory = GlobalClassFactoryMap.get(rayParamValue.getCppInstanceTypeName());
		if (rayParamValueClassFactory != null)
		{
			rayParamValue.setDelegate(true);
			rayParamValue = (com.earthview.world.spatial.math.Ray)rayParamValueClassFactory.create();
			rayParamValue.setDelegate(true);
			rayParamValue.setInstancePointer(new InstancePointer(ray));
		}
		com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportParamValue != null)
		{
		viewportParamValue.setDelegate(true);
		viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
		if (viewportParamValueClassFactory != null)
		{
			viewportParamValue.setDelegate(true);
			viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		}
		}
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		IntegerPointer objIndexParamValue = new IntegerPointer(new InstancePointer(objIndex));
		IntegerPointer submeshIndexParamValue = new IntegerPointer(new InstancePointer(submeshIndex));
		IntegerPointer instanceIndexParamValue = new IntegerPointer(new InstancePointer(instanceIndex));
		IntegerPointer segmentIndexParamValue = new IntegerPointer(new InstancePointer(segmentIndex));
		com.earthview.world.spatial.math.Vector3 pointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.math.Vector3)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		boolean returnValue = selectComponentBy(rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	/**
	 * 选择组件
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 物体序号
	 * @param submeshIndex submesh序号
	 * @param instanceIndex instance序号
	 * @param segmentIndex 索引分段序号
	 * @param point 交点
	 * @return true:组件与射线相交;false:不相交
	 */
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}

	protected  void renderSelection_void_callback()
	{
		renderSelection();
	}

	native private void renderSelection_void(long pNativeObject);
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		renderSelection_void(this.nativeObject.pointer);
	}
	native private void renderSelection_void_NoVirtual(long pNativeObject);
	protected void renderSelection_NoVirtual()
	{
		renderSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void clearSelection_void_callback()
	{
		clearSelection();
	}

	native private void clearSelection_void(long pNativeObject);
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean startEditing_ev_uint32_callback(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing(objectIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean startEditing_ev_uint32(long pNativeObject, long objectIndex);
	public boolean startEditing(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing_ev_uint32(this.nativeObject.pointer, objectIndexParamValue);
		return returnValue;
	}
	native private boolean startEditing_ev_uint32_NoVirtual(long pNativeObject, long objectIndex);
	protected boolean startEditing_NoVirtual(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing_ev_uint32_NoVirtual(this.nativeObject.pointer, objectIndexParamValue);
		return returnValue;
	}

	protected  void endEditing_void_callback()
	{
		endEditing();
	}

	native private void endEditing_void(long pNativeObject);
	public void endEditing()
	{
		endEditing_void(this.nativeObject.pointer);
	}
	native private void endEditing_void_NoVirtual(long pNativeObject);
	protected void endEditing_NoVirtual()
	{
		endEditing_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getEditBoundingBox_void_callback()
	{
		com.earthview.world.graphic.EditBoundingBox returnValue = getEditBoundingBox();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEditBoundingBox_void(long pNativeObject);
	public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
	{
		long returnValue = getEditBoundingBox_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
		}
		return __returnValue;
	}
	native private long getEditBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.EditBoundingBox getEditBoundingBox_NoVirtual()
	{
		long returnValue = getEditBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
		}
		return __returnValue;
	}

	protected  boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback(long objectIndex, long matrix)
	{
		long objectIndexParamValue = objectIndex;
		com.earthview.world.spatial.math.Matrix4 matrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matrixParamValue.setDelegate(true);
		matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		IClassFactory matrixParamValueClassFactory = GlobalClassFactoryMap.get(matrixParamValue.getCppInstanceTypeName());
		if (matrixParamValueClassFactory != null)
		{
			matrixParamValue.setDelegate(true);
			matrixParamValue = (com.earthview.world.spatial.math.Matrix4)matrixParamValueClassFactory.create();
			matrixParamValue.setDelegate(true);
			matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		}
		boolean returnValue = getSelectedObjectWorldMatrix(objectIndexParamValue, matrixParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
	public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}
	native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
	protected boolean getSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}

	protected  boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback(long objectIndex, long matrix)
	{
		long objectIndexParamValue = objectIndex;
		com.earthview.world.spatial.math.Matrix4 matrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matrixParamValue.setDelegate(true);
		matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		IClassFactory matrixParamValueClassFactory = GlobalClassFactoryMap.get(matrixParamValue.getCppInstanceTypeName());
		if (matrixParamValueClassFactory != null)
		{
			matrixParamValue.setDelegate(true);
			matrixParamValue = (com.earthview.world.spatial.math.Matrix4)matrixParamValueClassFactory.create();
			matrixParamValue.setDelegate(true);
			matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		}
		boolean returnValue = setSelectedObjectWorldMatrix(objectIndexParamValue, matrixParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
	public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}
	native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
	protected boolean setSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}

	protected  long getInstanceEntity_ev_uint32_callback(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		com.earthview.world.graphic.InstancedEntity returnValue = getInstanceEntity(objectIndexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInstanceEntity_ev_uint32(long pNativeObject, long objectIndex);
	public com.earthview.world.graphic.InstancedEntity getInstanceEntity(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		long returnValue = getInstanceEntity_ev_uint32(this.nativeObject.pointer, objectIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedEntity __returnValue = new com.earthview.world.graphic.InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstancedEntity");
		}
		return __returnValue;
	}
	native private long getInstanceEntity_ev_uint32_NoVirtual(long pNativeObject, long objectIndex);
	protected com.earthview.world.graphic.InstancedEntity getInstanceEntity_NoVirtual(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		long returnValue = getInstanceEntity_ev_uint32_NoVirtual(this.nativeObject.pointer, objectIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedEntity __returnValue = new com.earthview.world.graphic.InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstancedEntity");
		}
		return __returnValue;
	}

	native private long getMovableObjectPtr_void(long pNativeObject);
	public com.earthview.world.graphic.InstanceBatch.InstanceBatchInternalMovable getMovableObjectPtr()
	{
		long returnValue = getMovableObjectPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstanceBatch.InstanceBatchInternalMovable __returnValue = new com.earthview.world.graphic.InstanceBatch.InstanceBatchInternalMovable(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceBatchInternalMovable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceBatch.InstanceBatchInternalMovable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstanceBatchInternalMovable");
		}
		return __returnValue;
	}
	native private long getMovableObject_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject getMovableObject()
	{
		long returnValue = getMovableObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private long getMovableObject_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MovableObject getMovableObject_NoVirtual()
	{
		long returnValue = getMovableObject_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}

	native private short getRenderQueueID_void(long pNativeObject);
	public short getRenderQueueID()
	{
		short returnValue = getRenderQueueID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getRenderQueuePriority_void(long pNativeObject);
	public int getRenderQueuePriority()
	{
		int returnValue = getRenderQueuePriority_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean trackParentNode_CNode_callback(long pNode)
	{
		com.earthview.world.graphic.Node pNodeParamValue = (pNode == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNodeParamValue != null)
		{
		pNodeParamValue.setDelegate(true);
		pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
		IClassFactory pNodeParamValueClassFactory = GlobalClassFactoryMap.get(pNodeParamValue.getCppInstanceTypeName());
		if (pNodeParamValueClassFactory != null)
		{
			pNodeParamValue.setDelegate(true);
			pNodeParamValue = (com.earthview.world.graphic.Node)pNodeParamValueClassFactory.create();
			pNodeParamValue.setDelegate(true);
			pNodeParamValue.setInstancePointer(new InstancePointer(pNode));
		}
		}
		boolean returnValue = trackParentNode(pNodeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean trackParentNode_CNode(long pNativeObject, long pNode);
	/// typedef vector<InstancedEntity*> InstancedEntityVec;
	/// <summary>
	/// 跟踪父节点
	/// 内部instance专用(instanced entity之间相对静止)
	/// </summary>
	/// <param name="pNode"></param>
	/// <returns></returns>
	public boolean trackParentNode(com.earthview.world.graphic.Node pNode)
	{
		long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
		boolean returnValue = trackParentNode_CNode(this.nativeObject.pointer, pNodeParamValue);
		return returnValue;
	}
	native private boolean trackParentNode_CNode_NoVirtual(long pNativeObject, long pNode);
	protected boolean trackParentNode_NoVirtual(com.earthview.world.graphic.Node pNode)
	{
		long pNodeParamValue = (pNode == null ? 0L : pNode.nativeObject.pointer);
		boolean returnValue = trackParentNode_CNode_NoVirtual(this.nativeObject.pointer, pNodeParamValue);
		return returnValue;
	}

	protected  long getTrackingNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = getTrackingNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTrackingNode_void(long pNativeObject);
	/**
	 * 获得跟踪的父节点用于判断是否为内部instance
	 * @return 跟踪的父节点
	 */
	public com.earthview.world.graphic.Node getTrackingNode()
	{
		long returnValue = getTrackingNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long getTrackingNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getTrackingNode_NoVirtual()
	{
		long returnValue = getTrackingNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  void onInstancedEntityStateChanged_CInstancedEntity_callback(long instancedEntity)
	{
		com.earthview.world.graphic.InstancedEntity instancedEntityParamValue = (instancedEntity == 0L ? null : new com.earthview.world.graphic.InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate));
		if(instancedEntityParamValue != null)
		{
		instancedEntityParamValue.setDelegate(true);
		instancedEntityParamValue.setInstancePointer(new InstancePointer(instancedEntity));
		IClassFactory instancedEntityParamValueClassFactory = GlobalClassFactoryMap.get(instancedEntityParamValue.getCppInstanceTypeName());
		if (instancedEntityParamValueClassFactory != null)
		{
			instancedEntityParamValue.setDelegate(true);
			instancedEntityParamValue = (com.earthview.world.graphic.InstancedEntity)instancedEntityParamValueClassFactory.create();
			instancedEntityParamValue.setDelegate(true);
			instancedEntityParamValue.setInstancePointer(new InstancePointer(instancedEntity));
		}
		}
		onInstancedEntityStateChanged(instancedEntityParamValue);
	}

	native private void onInstancedEntityStateChanged_CInstancedEntity(long pNativeObject, long instancedEntity);
	/**
	 * instancedentity渲染状态发生变化可见性/自定义颜色发生变化
	 * @param pNode 
	 */
	public void onInstancedEntityStateChanged(com.earthview.world.graphic.InstancedEntity instancedEntity)
	{
		long instancedEntityParamValue = (instancedEntity == null ? 0L : instancedEntity.nativeObject.pointer);
		onInstancedEntityStateChanged_CInstancedEntity(this.nativeObject.pointer, instancedEntityParamValue);
	}
	native private void onInstancedEntityStateChanged_CInstancedEntity_NoVirtual(long pNativeObject, long instancedEntity);
	protected void onInstancedEntityStateChanged_NoVirtual(com.earthview.world.graphic.InstancedEntity instancedEntity)
	{
		long instancedEntityParamValue = (instancedEntity == null ? 0L : instancedEntity.nativeObject.pointer);
		onInstancedEntityStateChanged_CInstancedEntity_NoVirtual(this.nativeObject.pointer, instancedEntityParamValue);
	}

	public InstanceBatch(com.earthview.world.graphic.InstanceManager ref_creator, com.earthview.world.graphic.MeshPtr meshReference, com.earthview.world.graphic.MaterialPtr material, long instancesPerBatch, com.earthview.world.graphic.IndexMap ref_indexToBoneMap, String batchName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer meshReferencePtr = new BasePointer(meshReference);
		list.add("meshReference", meshReferencePtr.get());
		BasePointer materialPtr = new BasePointer(material);
		list.add("material", materialPtr.get());
		BasePointer instancesPerBatchPtr = new BasePointer(instancesPerBatch);
		list.add("instancesPerBatch", instancesPerBatchPtr.get());
		BasePointer ref_indexToBoneMapPtr = new BasePointer(ref_indexToBoneMap);
		list.add("ref_indexToBoneMap", ref_indexToBoneMapPtr.get());
		BasePointer batchNamePtr = new BasePointer(batchName);
		list.add("batchName", batchNamePtr.get());
		Create("JCInstanceBatchProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.InstanceBatch".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getOwner_void(long pNativeObject);
	public com.earthview.world.graphic.InstanceManager getOwner()
	{
		long returnValue = getOwner_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstanceManager __returnValue = new com.earthview.world.graphic.InstanceManager(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstanceManager");
		}
		return __returnValue;
	}
	native private long _getMeshRef_void(long pNativeObject);
	public com.earthview.world.graphic.MeshPtr _getMeshRef()
	{
		long returnValue = _getMeshRef_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMeshPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private void _setInstancesPerBatch_ev_size_t(long pNativeObject, long instancesPerBatch);
	public void _setInstancesPerBatch(long instancesPerBatch)
	{
		long instancesPerBatchParamValue = instancesPerBatch;
		_setInstancesPerBatch_ev_size_t(this.nativeObject.pointer, instancesPerBatchParamValue);
	}
	native private long _getIndexToBoneMap_void(long pNativeObject);
	public com.earthview.world.graphic.IndexMap _getIndexToBoneMap()
	{
		long returnValue = _getIndexToBoneMap_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.IndexMap __returnValue = new com.earthview.world.graphic.IndexMap(CreatedWhenConstruct.CWC_NotToCreate, "IndexMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IndexMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IndexMap");
		}
		return __returnValue;
	}
	native private boolean _supportsSkeletalAnimation_void(long pNativeObject);
	public boolean _supportsSkeletalAnimation()
	{
		boolean returnValue = _supportsSkeletalAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _updateBounds_void(long pNativeObject);
	public void _updateBounds()
	{
		_updateBounds_void(this.nativeObject.pointer);
	}
	protected  long calculateMaxNumInstances_CSubMesh_ev_uint16_callback(long baseSubMesh, int flags)
	{
		com.earthview.world.graphic.SubMesh baseSubMeshParamValue = (baseSubMesh == 0L ? null : new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate));
		if(baseSubMeshParamValue != null)
		{
		baseSubMeshParamValue.setDelegate(true);
		baseSubMeshParamValue.setInstancePointer(new InstancePointer(baseSubMesh));
		IClassFactory baseSubMeshParamValueClassFactory = GlobalClassFactoryMap.get(baseSubMeshParamValue.getCppInstanceTypeName());
		if (baseSubMeshParamValueClassFactory != null)
		{
			baseSubMeshParamValue.setDelegate(true);
			baseSubMeshParamValue = (com.earthview.world.graphic.SubMesh)baseSubMeshParamValueClassFactory.create();
			baseSubMeshParamValue.setDelegate(true);
			baseSubMeshParamValue.setInstancePointer(new InstancePointer(baseSubMesh));
		}
		}
		int flagsParamValue = flags;
		long returnValue = calculateMaxNumInstances(baseSubMeshParamValue, flagsParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long calculateMaxNumInstances_CSubMesh_ev_uint16(long pNativeObject, long baseSubMesh, int flags);
	public long calculateMaxNumInstances(com.earthview.world.graphic.SubMesh baseSubMesh, int flags)
	{
		long baseSubMeshParamValue = (baseSubMesh == null ? 0L : baseSubMesh.nativeObject.pointer);
		int flagsParamValue = flags;
		long returnValue = calculateMaxNumInstances_CSubMesh_ev_uint16(this.nativeObject.pointer, baseSubMeshParamValue, flagsParamValue);
		return returnValue;
	}
	native private long calculateMaxNumInstances_CSubMesh_ev_uint16_NoVirtual(long pNativeObject, long baseSubMesh, int flags);
	protected long calculateMaxNumInstances_NoVirtual(com.earthview.world.graphic.SubMesh baseSubMesh, int flags)
	{
		long baseSubMeshParamValue = (baseSubMesh == null ? 0L : baseSubMesh.nativeObject.pointer);
		int flagsParamValue = flags;
		long returnValue = calculateMaxNumInstances_CSubMesh_ev_uint16_NoVirtual(this.nativeObject.pointer, baseSubMeshParamValue, flagsParamValue);
		return returnValue;
	}

	protected  long build_CSubMesh_callback(long baseSubMesh)
	{
		com.earthview.world.graphic.SubMesh baseSubMeshParamValue = (baseSubMesh == 0L ? null : new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate));
		if(baseSubMeshParamValue != null)
		{
		baseSubMeshParamValue.setDelegate(true);
		baseSubMeshParamValue.setInstancePointer(new InstancePointer(baseSubMesh));
		IClassFactory baseSubMeshParamValueClassFactory = GlobalClassFactoryMap.get(baseSubMeshParamValue.getCppInstanceTypeName());
		if (baseSubMeshParamValueClassFactory != null)
		{
			baseSubMeshParamValue.setDelegate(true);
			baseSubMeshParamValue = (com.earthview.world.graphic.SubMesh)baseSubMeshParamValueClassFactory.create();
			baseSubMeshParamValue.setDelegate(true);
			baseSubMeshParamValue.setInstancePointer(new InstancePointer(baseSubMesh));
		}
		}
		com.earthview.world.graphic.RenderOperation returnValue = build(baseSubMeshParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long build_CSubMesh(long pNativeObject, long baseSubMesh);
	public com.earthview.world.graphic.RenderOperation build(com.earthview.world.graphic.SubMesh baseSubMesh)
	{
		long baseSubMeshParamValue = (baseSubMesh == null ? 0L : baseSubMesh.nativeObject.pointer);
		long returnValue = build_CSubMesh(this.nativeObject.pointer, baseSubMeshParamValue);
		com.earthview.world.graphic.RenderOperation __returnValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRenderOperation");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderOperation)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRenderOperation");
		}
		return __returnValue;
	}
	native private long build_CSubMesh_NoVirtual(long pNativeObject, long baseSubMesh);
	protected com.earthview.world.graphic.RenderOperation build_NoVirtual(com.earthview.world.graphic.SubMesh baseSubMesh)
	{
		long baseSubMeshParamValue = (baseSubMesh == null ? 0L : baseSubMesh.nativeObject.pointer);
		long returnValue = build_CSubMesh_NoVirtual(this.nativeObject.pointer, baseSubMeshParamValue);
		com.earthview.world.graphic.RenderOperation __returnValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRenderOperation");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderOperation)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRenderOperation");
		}
		return __returnValue;
	}

	protected  void buildFrom_CSubMesh_CRenderOperation_callback(long baseSubMesh, long renderOperation)
	{
		com.earthview.world.graphic.SubMesh baseSubMeshParamValue = (baseSubMesh == 0L ? null : new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate));
		if(baseSubMeshParamValue != null)
		{
		baseSubMeshParamValue.setDelegate(true);
		baseSubMeshParamValue.setInstancePointer(new InstancePointer(baseSubMesh));
		IClassFactory baseSubMeshParamValueClassFactory = GlobalClassFactoryMap.get(baseSubMeshParamValue.getCppInstanceTypeName());
		if (baseSubMeshParamValueClassFactory != null)
		{
			baseSubMeshParamValue.setDelegate(true);
			baseSubMeshParamValue = (com.earthview.world.graphic.SubMesh)baseSubMeshParamValueClassFactory.create();
			baseSubMeshParamValue.setDelegate(true);
			baseSubMeshParamValue.setInstancePointer(new InstancePointer(baseSubMesh));
		}
		}
		com.earthview.world.graphic.RenderOperation renderOperationParamValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
		renderOperationParamValue.setDelegate(true);
		renderOperationParamValue.setInstancePointer(new InstancePointer(renderOperation));
		IClassFactory renderOperationParamValueClassFactory = GlobalClassFactoryMap.get(renderOperationParamValue.getCppInstanceTypeName());
		if (renderOperationParamValueClassFactory != null)
		{
			renderOperationParamValue.setDelegate(true);
			renderOperationParamValue = (com.earthview.world.graphic.RenderOperation)renderOperationParamValueClassFactory.create();
			renderOperationParamValue.setDelegate(true);
			renderOperationParamValue.setInstancePointer(new InstancePointer(renderOperation));
		}
		buildFrom(baseSubMeshParamValue, renderOperationParamValue);
	}

	native private void buildFrom_CSubMesh_CRenderOperation(long pNativeObject, long baseSubMesh, long renderOperation);
	public void buildFrom(com.earthview.world.graphic.SubMesh baseSubMesh, com.earthview.world.graphic.RenderOperation renderOperation)
	{
		long baseSubMeshParamValue = (baseSubMesh == null ? 0L : baseSubMesh.nativeObject.pointer);
		long renderOperationParamValue = renderOperation.nativeObject.pointer;
		buildFrom_CSubMesh_CRenderOperation(this.nativeObject.pointer, baseSubMeshParamValue, renderOperationParamValue);
	}
	native private void buildFrom_CSubMesh_CRenderOperation_NoVirtual(long pNativeObject, long baseSubMesh, long renderOperation);
	protected void buildFrom_NoVirtual(com.earthview.world.graphic.SubMesh baseSubMesh, com.earthview.world.graphic.RenderOperation renderOperation)
	{
		long baseSubMeshParamValue = (baseSubMesh == null ? 0L : baseSubMesh.nativeObject.pointer);
		long renderOperationParamValue = renderOperation.nativeObject.pointer;
		buildFrom_CSubMesh_CRenderOperation_NoVirtual(this.nativeObject.pointer, baseSubMeshParamValue, renderOperationParamValue);
	}

	native private long _getMeshReference_void(long pNativeObject);
	public com.earthview.world.graphic.MeshPtr _getMeshReference()
	{
		long returnValue = _getMeshReference_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMeshPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private boolean isBatchFull_void(long pNativeObject);
	///是否已满(InstancedEntity数量达到上限)
	public boolean isBatchFull()
	{
		boolean returnValue = isBatchFull_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBatchUnused_void(long pNativeObject);
	///InstancedEntity是否全部未使用
	public boolean isBatchUnused()
	{
		boolean returnValue = isBatchUnused_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBatchReused_void(long pNativeObject);
	///InstancedEntity是否至少有一个未使用
	public boolean isBatchReused()
	{
		boolean returnValue = isBatchReused_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getInstancedEntitiesCount_void(long pNativeObject);
	public long getInstancedEntitiesCount()
	{
		long returnValue = getInstancedEntitiesCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getInstancedEntitiesInUse_CInstancedEntityVec(long pNativeObject, long outEntities);
	public void getInstancedEntitiesInUse(com.earthview.world.graphic.InstancedEntityVec outEntities)
	{
		long outEntitiesParamValue = outEntities.nativeObject.pointer;
		getInstancedEntitiesInUse_CInstancedEntityVec(this.nativeObject.pointer, outEntitiesParamValue);
	}
	protected  void _boundsDirty_void_callback()
	{
		_boundsDirty();
	}

	native private void _boundsDirty_void(long pNativeObject);
	public void _boundsDirty()
	{
		_boundsDirty_void(this.nativeObject.pointer);
	}
	native private void _boundsDirty_void_NoVirtual(long pNativeObject);
	protected void _boundsDirty_NoVirtual()
	{
		_boundsDirty_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setStaticAndUpdate_ev_bool_callback(boolean bStatic)
	{
		boolean bStaticParamValue = bStatic;
		setStaticAndUpdate(bStaticParamValue);
	}

	native private void setStaticAndUpdate_ev_bool(long pNativeObject, boolean bStatic);
	public void setStaticAndUpdate(boolean bStatic)
	{
		boolean bStaticParamValue = bStatic;
		setStaticAndUpdate_ev_bool(this.nativeObject.pointer, bStaticParamValue);
	}
	native private void setStaticAndUpdate_ev_bool_NoVirtual(long pNativeObject, boolean bStatic);
	protected void setStaticAndUpdate_NoVirtual(boolean bStatic)
	{
		boolean bStaticParamValue = bStatic;
		setStaticAndUpdate_ev_bool_NoVirtual(this.nativeObject.pointer, bStaticParamValue);
	}

	protected  boolean isStatic_void_callback()
	{
		boolean returnValue = isStatic();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isStatic_void(long pNativeObject);
	public boolean isStatic()
	{
		boolean returnValue = isStatic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isStatic_void_NoVirtual(long pNativeObject);
	protected boolean isStatic_NoVirtual()
	{
		boolean returnValue = isStatic_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long createInstancedEntity_void(long pNativeObject);
	public com.earthview.world.graphic.InstancedEntity createInstancedEntity()
	{
		long returnValue = createInstancedEntity_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedEntity __returnValue = new com.earthview.world.graphic.InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstancedEntity");
		}
		return __returnValue;
	}
	native private long createInstancedEntity_ev_bool(long pNativeObject, boolean bInUse);
	public com.earthview.world.graphic.InstancedEntity createInstancedEntity(boolean bInUse)
	{
		boolean bInUseParamValue = bInUse;
		long returnValue = createInstancedEntity_ev_bool(this.nativeObject.pointer, bInUseParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedEntity __returnValue = new com.earthview.world.graphic.InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstancedEntity");
		}
		return __returnValue;
	}
	native private void removeInstancedEntity_CInstancedEntity(long pNativeObject, long instancedEntity);
	public void removeInstancedEntity(com.earthview.world.graphic.InstancedEntity instancedEntity)
	{
		long instancedEntityParamValue = (instancedEntity == null ? 0L : instancedEntity.nativeObject.pointer);
		removeInstancedEntity_CInstancedEntity(this.nativeObject.pointer, instancedEntityParamValue);
	}
	protected  boolean useBoneWorldMatrices_void_callback()
	{
		boolean returnValue = useBoneWorldMatrices();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean useBoneWorldMatrices_void(long pNativeObject);
	public boolean useBoneWorldMatrices()
	{
		boolean returnValue = useBoneWorldMatrices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean useBoneWorldMatrices_void_NoVirtual(long pNativeObject);
	protected boolean useBoneWorldMatrices_NoVirtual()
	{
		boolean returnValue = useBoneWorldMatrices_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void _markTransformSharingDirty_void(long pNativeObject);
	public void _markTransformSharingDirty()
	{
		_markTransformSharingDirty_void(this.nativeObject.pointer);
	}
	native private long getMaterial_void(long pNativeObject);
	///EarthView::World::Graphic::CRenderable overloads
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		long returnValue = getMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long getMaterial_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
	{
		long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}

	native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getRenderOperation_CRenderOperation(this.nativeObject.pointer, opParamValue);
	}
	native private void getRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long op);
	protected void getRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
	}

	native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}
	native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
	protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}

	native private long getLights_void(long pNativeObject);
	public com.earthview.world.graphic.LightList getLights()
	{
		long returnValue = getLights_void(this.nativeObject.pointer);
		com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LightList");
		}
		return __returnValue;
	}
	native private long getLights_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.LightList getLights_NoVirtual()
	{
		long returnValue = getLights_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LightList");
		}
		return __returnValue;
	}

	native private long getTechnique_void(long pNativeObject);
	public com.earthview.world.graphic.Technique getTechnique()
	{
		long returnValue = getTechnique_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private long getTechnique_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Technique getTechnique_NoVirtual()
	{
		long returnValue = getTechnique_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}

	native private long _ref_void(long pNativeObject);
	public long _ref()
	{
		long returnValue = _ref_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _unRef_void(long pNativeObject);
	public long _unRef()
	{
		long returnValue = _unRef_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRefCount_void(long pNativeObject);
	public long getRefCount()
	{
		long returnValue = getRefCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void prepareSelectObject_ev_int32(long pNativeObject, int objIndex);
	/// <summary>
	/// 设置将要选中的objIndex			
	/// <param name="objIndex">objIndex</param>				
	/// <returns></returns>
	public void prepareSelectObject(int objIndex)
	{
		int objIndexParamValue = objIndex;
		prepareSelectObject_ev_int32(this.nativeObject.pointer, objIndexParamValue);
	}
	public InstanceBatch(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InstanceBatch(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获得渲染对象的世界变换矩阵
	 * @param xform 
	 */
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		super.getWorldTransforms_NoVirtual(xform);
	}
	/**
	 * 获得渲染对象的世界变换矩阵的数量
	 * @param  
	 */
	public int getNumWorldTransforms()
	{
		return super.getNumWorldTransforms_NoVirtual();
	}
	/**
	 * 是否投射投影
	 * @param  
	 */
	public boolean getCastsShadows()
	{
		return super.getCastsShadows_NoVirtual();
	}
	/**
	 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
	 * @param constantEntry CAutoConstantEntry的别名
	 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
	 */
	public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		super._updateCustomGpuParameter_NoVirtual(constantEntry, params);
	}
	/**
	 * 设置多边形渲染方式是否可重写
	 * @param override 设置参数
	 * @return true可以超越，false不可以
	 */
	public void setPolygonModeOverrideable(boolean override)
	{
		super.setPolygonModeOverrideable_NoVirtual(override);
	}
	/**
	 * 获得多边形渲染方式是否可重写
	 * @param  
	 */
	public boolean getPolygonModeOverrideable()
	{
		return super.getPolygonModeOverrideable_NoVirtual();
	}
	/**
	 * 设置自定义环境光系数
	 * @param  
	 */
	public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
	{
		super.setCustomAmbient_NoVirtual(ambient);
	}
	/**
	 * 获取自定义环境光系数
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getCustomAmbient()
	{
		return super.getCustomAmbient_NoVirtual();
	}
	/**
	 * 获取自定义环境光系数是否启用
	 * @param  
	 */
	public boolean getCustomAmbientEnabled()
	{
		return super.getCustomAmbientEnabled_NoVirtual();
	}
	/**
	 * 设置自定义环境光系数是否启用
	 * @param  
	 */
	public void setCustomAmbientEnabled(boolean enabled)
	{
		super.setCustomAmbientEnabled_NoVirtual(enabled);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 设置渲染系统的私有数据
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
	{
		return super.getRenderSystemData_NoVirtual();
	}
	/**
	 * 获得渲染系统的私有数据
	 * @param  
	 */
	public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
	{
		super.setRenderSystemData_NoVirtual(ref_val);
	}
	
	native protected void register_getMovableType_void(long pNativeObject, String method);
	native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
	native protected void register_getBoundingBox_void(long pNativeObject, String method);
	native protected void register_getBoundingRadius_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
	native protected void register_getReceivesShadows_void(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectBy_CSphere_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_renderSelection_void(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_uint32(long pNativeObject, String method);
	native protected void register_endEditing_void(long pNativeObject, String method);
	native protected void register_getEditBoundingBox_void(long pNativeObject, String method);
	native protected void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_getInstanceEntity_ev_uint32(long pNativeObject, String method);
	native protected void register_trackParentNode_CNode(long pNativeObject, String method);
	native protected void register_getTrackingNode_void(long pNativeObject, String method);
	native protected void register_onInstancedEntityStateChanged_CInstancedEntity(long pNativeObject, String method);
	native protected void register_calculateMaxNumInstances_CSubMesh_ev_uint16(long pNativeObject, String method);
	native protected void register_build_CSubMesh(long pNativeObject, String method);
	native protected void register_buildFrom_CSubMesh_CRenderOperation(long pNativeObject, String method);
	native protected void register__boundsDirty_void(long pNativeObject, String method);
	native protected void register_setStaticAndUpdate_ev_bool(long pNativeObject, String method);
	native protected void register_isStatic_void(long pNativeObject, String method);
	native protected void register_useBoneWorldMatrices_void(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_getTechnique_void(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getCastsShadows_void(long pNativeObject, String method);
	native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
	native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
	native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
	native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
	native protected void register_getCustomAmbient_void(long pNativeObject, String method);
	native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
	native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getMovableObject_void(long pNativeObject, String method);
	native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_getRenderSystemData_void(long pNativeObject, String method);
	native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
			this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
			this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
			this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
			this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
			this.register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
			this.register_selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
			this.register_selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CSphere_ev_bool_IntVector_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
			this.register_renderSelection_void(this.nativeObject.pointer, "renderSelection_void_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_startEditing_ev_uint32(this.nativeObject.pointer, "startEditing_ev_uint32_callback");
			this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
			this.register_getEditBoundingBox_void(this.nativeObject.pointer, "getEditBoundingBox_void_callback");
			this.register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_getInstanceEntity_ev_uint32(this.nativeObject.pointer, "getInstanceEntity_ev_uint32_callback");
			this.register_trackParentNode_CNode(this.nativeObject.pointer, "trackParentNode_CNode_callback");
			this.register_getTrackingNode_void(this.nativeObject.pointer, "getTrackingNode_void_callback");
			this.register_onInstancedEntityStateChanged_CInstancedEntity(this.nativeObject.pointer, "onInstancedEntityStateChanged_CInstancedEntity_callback");
			this.register_calculateMaxNumInstances_CSubMesh_ev_uint16(this.nativeObject.pointer, "calculateMaxNumInstances_CSubMesh_ev_uint16_callback");
			this.register_build_CSubMesh(this.nativeObject.pointer, "build_CSubMesh_callback");
			this.register_buildFrom_CSubMesh_CRenderOperation(this.nativeObject.pointer, "buildFrom_CSubMesh_CRenderOperation_callback");
			this.register__boundsDirty_void(this.nativeObject.pointer, "_boundsDirty_void_callback");
			this.register_setStaticAndUpdate_ev_bool(this.nativeObject.pointer, "setStaticAndUpdate_ev_bool_callback");
			this.register_isStatic_void(this.nativeObject.pointer, "isStatic_void_callback");
			this.register_useBoneWorldMatrices_void(this.nativeObject.pointer, "useBoneWorldMatrices_void_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
			this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
			this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
			this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
			this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
			this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
			this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
			this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
			this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
			this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
			this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
			this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
			this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
			this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
		}
	}
	
	public static InstanceBatch fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InstanceBatch obj = null;
 		if(baseObj instanceof InstanceBatch)
		{
			obj = (InstanceBatch)baseObj;
		} else {
			obj = new InstanceBatch(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInstanceBatch");
			obj.increaseCast();
		}

		return obj;
	}
}
