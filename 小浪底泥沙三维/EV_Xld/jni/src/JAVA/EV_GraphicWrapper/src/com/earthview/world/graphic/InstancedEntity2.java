package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstancedEntity2 extends com.earthview.world.graphic.InstancedEntity {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedEntity2", new InstancedEntity2ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCInstancedEntity2Proxy", new InstancedEntity2ClassFactory());
	}

	public static class InstancedEntityMovable extends com.earthview.world.graphic.MovableObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable", new InstancedEntityMovableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedEntity2::JCInstancedEntityMovableProxy", new InstancedEntityMovableClassFactory());
		}

		public InstancedEntityMovable(String name, com.earthview.world.graphic.InstancedEntity2 parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer namePtr = new BasePointer(name);
			list.add("name", namePtr.get());
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			Create("JCInstancedEntityMovableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.InstancedEntity2$InstancedEntityMovable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getParent_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedEntity2 getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedEntity2 __returnValue = new com.earthview.world.graphic.InstancedEntity2(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedEntity2");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedEntity2)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstancedEntity2");
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

		protected  double getSquaredViewDepth_CCamera_callback(long cam)
		{
			com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
			if(camParamValue != null)
			{
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
			IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
			if (camParamValueClassFactory != null)
			{
				camParamValue.setDelegate(true);
				camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
				camParamValue.setDelegate(true);
				camParamValue.setInstancePointer(new InstancePointer(cam));
			}
			}
			double returnValue = getSquaredViewDepth(camParamValue);
			double __returnValue = returnValue;
			return __returnValue;
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

		native private void _notifyMoved_void(long pNativeObject);
		public void _notifyMoved()
		{
			_notifyMoved_void(this.nativeObject.pointer);
		}
		native private void _notifyMoved_void_NoVirtual(long pNativeObject);
		protected void _notifyMoved_NoVirtual()
		{
			_notifyMoved_void_NoVirtual(this.nativeObject.pointer);
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

		native private long _getParentNodeFullTransform_void(long pNativeObject);
		public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
		{
			long returnValue = _getParentNodeFullTransform_void(this.nativeObject.pointer);
			com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
			}
			return __returnValue;
		}
		native private long _getParentNodeFullTransform_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform_NoVirtual()
		{
			long returnValue = _getParentNodeFullTransform_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
			}
			return __returnValue;
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

		native private boolean isInScene_void(long pNativeObject);
		public boolean isInScene()
		{
			boolean returnValue = isInScene_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean isInScene_void_NoVirtual(long pNativeObject);
		protected boolean isInScene_NoVirtual()
		{
			boolean returnValue = isInScene_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private boolean isVisible_void(long pNativeObject);
		public boolean isVisible()
		{
			boolean returnValue = isVisible_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean isVisible_void_NoVirtual(long pNativeObject);
		protected boolean isVisible_NoVirtual()
		{
			boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private boolean getVisible_void(long pNativeObject);
		public boolean getVisible()
		{
			boolean returnValue = getVisible_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean getVisible_void_NoVirtual(long pNativeObject);
		protected boolean getVisible_NoVirtual()
		{
			boolean returnValue = getVisible_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private void setVisible_ev_bool(long pNativeObject, boolean visible);
		public void setVisible(boolean visible)
		{
			boolean visibleParamValue = visible;
			setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
		}
		native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
		protected void setVisible_NoVirtual(boolean visible)
		{
			boolean visibleParamValue = visible;
			setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
		}

		public InstancedEntityMovable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstancedEntityMovable(CreatedWhenConstruct cwc, String classNameStr) {
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
		/// <summary>
		/// 设置选中时的高亮颜色				
		/// <param name=""></param>				
		/// <returns></returns>
		public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
		{
			super.setSelectionColour_NoVirtual(colour);
		}
		/// <summary>
		/// 设置选中的对象				
		/// <param name="objIndics">选中的对象集合</param>				
		/// <returns></returns>
		public boolean setSelected(com.earthview.world.core.IntVector objIndics)
		{
			return super.setSelected_NoVirtual(objIndics);
		}
		/// <summary>
		/// 获得选中的对象				
		/// <param name=""></param>				
		/// <returns>选中的对象集合</returns>
		public com.earthview.world.core.IntVector getSelected()
		{
			return super.getSelected_NoVirtual();
		}
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
			return super.selectBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, point);
		}
		/**
		 * 盒选择
		 * @param aabb 盒
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param indexVec 选中的对象序号的集合
		 * @return true:物体包围盒与指定盒相交;false:不相交
		 */
		public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
		{
			return super.selectBy_NoVirtual(aabb, prepareToRenderSelection, indexVec);
		}
		/**
		 * 球选择
		 * @param sphere 球
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param indexVec 选中的对象序号的集合
		 * @return true:物体包围盒与指定球相交;false:不相交
		 */
		public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
		{
			return super.selectBy_NoVirtual(sphere, prepareToRenderSelection, indexVec);
		}
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
			return super.selectComponentBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
		}
		/**
		 * 绘制选择对象
		 * @param  
		 */
		public void renderSelection()
		{
			super.renderSelection_NoVirtual();
		}
		/**
		 * 清除选择
		 * @param  
		 */
		public void clearSelection()
		{
			super.clearSelection_NoVirtual();
		}
		/**
		 * 开始编辑
		 * @param  
		 */
		public boolean startEditing(long objectIndex)
		{
			return super.startEditing_NoVirtual(objectIndex);
		}
		/**
		 * 结束编辑
		 * @param  
		 */
		public void endEditing()
		{
			super.endEditing_NoVirtual();
		}
		/**
		 * 获得编辑包围盒
		 * @param  
		 */
		public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
		{
			return super.getEditBoundingBox_NoVirtual();
		}
		/**
		 * 获得选中对象的世界变换矩阵
		 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
		 * @param matrix 世界变换矩阵
		 */
		public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
		{
			return super.getSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
		}
		/**
		 * 设置选中对象的世界变换矩阵
		 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
		 * @param matrix 世界变换矩阵
		 */
		public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
		{
			return super.setSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
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
		 * 获取光源列表以距离可移动物体由近到远顺序排列
		 * @param  
		 */
		public com.earthview.world.graphic.LightList queryLights()
		{
			return super.queryLights_NoVirtual();
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
		 * 是否接收阴影
		 * @param  
		 */
		public boolean getReceivesShadows()
		{
			return super.getReceivesShadows_NoVirtual();
		}
		/**
		 * 获取可移动对象的类型标识
		 * @param  
		 */
		public long getTypeFlags()
		{
			return super.getTypeFlags_NoVirtual();
		}
		public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
		{
			super.visitRenderables_NoVirtual(visitor);
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
		
		native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
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
				this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
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
		
		public static InstancedEntityMovable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstancedEntityMovable obj = null;
 			if(baseObj instanceof InstancedEntityMovable)
			{
				obj = (InstancedEntityMovable)baseObj;
			} else {
				obj = new InstancedEntityMovable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CInstancedEntityMovable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstancedEntityMovableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstancedEntityMovable emptyInstance = new InstancedEntityMovable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long attachObjectToBone_EVString_CMovableObject_CQuaternion_CVector3(long pNativeObject, String boneName, long ref_pMovable, long offsetOrientation, long offsetPosition);
	public com.earthview.world.graphic.TagPoint attachObjectToBone(String boneName, com.earthview.world.graphic.MovableObject ref_pMovable, com.earthview.world.spatial.math.Quaternion offsetOrientation, com.earthview.world.spatial.math.Vector3 offsetPosition)
	{
		String boneNameParamValue = boneName;
		long ref_pMovableParamValue = (ref_pMovable == null ? 0L : ref_pMovable.nativeObject.pointer);
		long offsetOrientationParamValue = offsetOrientation.nativeObject.pointer;
		long offsetPositionParamValue = offsetPosition.nativeObject.pointer;
		long returnValue = attachObjectToBone_EVString_CMovableObject_CQuaternion_CVector3(this.nativeObject.pointer, boneNameParamValue, ref_pMovableParamValue, offsetOrientationParamValue, offsetPositionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TagPoint __returnValue = new com.earthview.world.graphic.TagPoint(CreatedWhenConstruct.CWC_NotToCreate, "CTagPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TagPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTagPoint");
		}
		return __returnValue;
	}
	native private void detachObjectFromBone_CMovableObject(long pNativeObject, long pMovable);
	public void detachObjectFromBone(com.earthview.world.graphic.MovableObject pMovable)
	{
		long pMovableParamValue = (pMovable == null ? 0L : pMovable.nativeObject.pointer);
		detachObjectFromBone_CMovableObject(this.nativeObject.pointer, pMovableParamValue);
	}
	native private void detachAllObjectsFromBone_void(long pNativeObject);
	public void detachAllObjectsFromBone()
	{
		detachAllObjectsFromBone_void(this.nativeObject.pointer);
	}
	native private long getAttachedObjectsOnBones_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObjectList getAttachedObjectsOnBones()
	{
		long returnValue = getAttachedObjectsOnBones_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObjectList __returnValue = new com.earthview.world.graphic.MovableObjectList(CreatedWhenConstruct.CWC_NotToCreate, "MovableObjectList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObjectList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "MovableObjectList");
		}
		return __returnValue;
	}
	native private long getLocalTransform_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getLocalTransform()
	{
		long returnValue = getLocalTransform_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long getTransformMutex_void(long pNativeObject);
	public com.earthview.world.core.RecursiveMutex getTransformMutex()
	{
		long returnValue = getTransformMutex_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.RecursiveMutex __returnValue = new com.earthview.world.core.RecursiveMutex(CreatedWhenConstruct.CWC_NotToCreate, "CRecursiveMutex");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.RecursiveMutex)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRecursiveMutex");
		}
		return __returnValue;
	}
	public InstancedEntity2(com.earthview.world.graphic.InstanceBatch ref_batchOwner, long instanceID) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_batchOwnerPtr = new BasePointer(ref_batchOwner);
		list.add("ref_batchOwner", ref_batchOwnerPtr.get());
		BasePointer instanceIDPtr = new BasePointer(instanceID);
		list.add("instanceID", instanceIDPtr.get());
		Create("JCInstancedEntity2Proxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.InstancedEntity2".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getMovable_void(long pNativeObject);
	public com.earthview.world.graphic.InstancedEntity2.InstancedEntityMovable getMovable()
	{
		long returnValue = getMovable_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedEntity2.InstancedEntityMovable __returnValue = new com.earthview.world.graphic.InstancedEntity2.InstancedEntityMovable(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedEntityMovable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedEntity2.InstancedEntityMovable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstancedEntityMovable");
		}
		return __returnValue;
	}
	native private String getMovableType_void(long pNativeObject);
	public String getMovableType()
	{
		String returnValue = getMovableType_void(this.nativeObject.pointer);
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
	native private double getBoundingRadius_void(long pNativeObject);
	public double getBoundingRadius()
	{
		double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void calBoundingRadius_void(long pNativeObject);
	public void calBoundingRadius()
	{
		calBoundingRadius_void(this.nativeObject.pointer);
	}
	native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}
	native private void _notifyMoved_void(long pNativeObject);
	//// Overriden so we can tell the InstanceBatch it needs to update it's bounds
	public void _notifyMoved()
	{
		_notifyMoved_void(this.nativeObject.pointer);
	}
	native private void _notifyAttached_CNode_ev_bool(long pNativeObject, long ref_parent, boolean isTagPoint);
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	//// Do nothing, InstanceBatch takes care of this.
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private boolean hasSkeleton_void(long pNativeObject);
	public boolean hasSkeleton()
	{
		boolean returnValue = hasSkeleton_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSkeleton_void(long pNativeObject);
	public com.earthview.world.graphic.SkeletonInstance getSkeleton()
	{
		long returnValue = getSkeleton_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SkeletonInstance __returnValue = new com.earthview.world.graphic.SkeletonInstance(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonInstance");
		}
		return __returnValue;
	}
	native private long getAnimationState_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.AnimationState getAnimationState(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimationState_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private long getAllAnimationStates_void(long pNativeObject);
	public com.earthview.world.graphic.AnimationStateSet getAllAnimationStates()
	{
		long returnValue = getAllAnimationStates_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationStateSet __returnValue = new com.earthview.world.graphic.AnimationStateSet(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationStateSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationStateSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationStateSet");
		}
		return __returnValue;
	}
	protected  boolean _updateAnimation_void_callback()
	{
		boolean returnValue = _updateAnimation();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean _updateAnimation_void(long pNativeObject);
	public boolean _updateAnimation()
	{
		boolean returnValue = _updateAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean _updateAnimation_void_NoVirtual(long pNativeObject);
	protected boolean _updateAnimation_NoVirtual()
	{
		boolean returnValue = _updateAnimation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setTransformLookupNumber_ev_uint16(long pNativeObject, int num);
	public void setTransformLookupNumber(int num)
	{
		int numParamValue = num;
		setTransformLookupNumber_ev_uint16(this.nativeObject.pointer, numParamValue);
	}
	native private long getPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		long returnValue = getPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setPosition_CVector3_ev_bool(long pNativeObject, long position, boolean doUpdate);
	public void setPosition(com.earthview.world.spatial.math.Vector3 position, boolean doUpdate)
	{
		long positionParamValue = position.nativeObject.pointer;
		boolean doUpdateParamValue = doUpdate;
		setPosition_CVector3_ev_bool(this.nativeObject.pointer, positionParamValue, doUpdateParamValue);
	}
	native private long getOrientation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Quaternion getOrientation()
	{
		long returnValue = getOrientation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private void setOrientation_CQuaternion_ev_bool(long pNativeObject, long orientation, boolean doUpdate);
	public void setOrientation(com.earthview.world.spatial.math.Quaternion orientation, boolean doUpdate)
	{
		long orientationParamValue = orientation.nativeObject.pointer;
		boolean doUpdateParamValue = doUpdate;
		setOrientation_CQuaternion_ev_bool(this.nativeObject.pointer, orientationParamValue, doUpdateParamValue);
	}
	native private long getScale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		long returnValue = getScale_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setScale_CVector3_ev_bool(long pNativeObject, long scale, boolean doUpdate);
	public void setScale(com.earthview.world.spatial.math.Vector3 scale, boolean doUpdate)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		boolean doUpdateParamValue = doUpdate;
		setScale_CVector3_ev_bool(this.nativeObject.pointer, scaleParamValue, doUpdateParamValue);
	}
	native private long getMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		long returnValue = getMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private void setMatrix_CMatrix4_ev_bool(long pNativeObject, long matrix, boolean doUpdate);
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 matrix, boolean doUpdate)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean doUpdateParamValue = doUpdate;
		setMatrix_CMatrix4_ev_bool(this.nativeObject.pointer, matrixParamValue, doUpdateParamValue);
	}
	native private double getMaxScaleCoef_void(long pNativeObject);
	public double getMaxScaleCoef()
	{
		double returnValue = getMaxScaleCoef_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void updateTransforms_void(long pNativeObject);
	public void updateTransforms()
	{
		updateTransforms_void(this.nativeObject.pointer);
	}
	native private long _getParentNodeFullTransform_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
	{
		long returnValue = _getParentNodeFullTransform_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long _getDerivedPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 _getDerivedPosition()
	{
		long returnValue = _getDerivedPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	public void setSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private boolean getSelectable_void(long pNativeObject);
	public boolean getSelectable()
	{
		boolean returnValue = getSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHighlightable_ev_bool(long pNativeObject, boolean highlightable);
	public void setHighlightable(boolean highlightable)
	{
		boolean highlightableParamValue = highlightable;
		setHighlightable_ev_bool(this.nativeObject.pointer, highlightableParamValue);
	}
	native private boolean getHighlightable_void(long pNativeObject);
	public boolean getHighlightable()
	{
		boolean returnValue = getHighlightable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEditable_ev_bool(long pNativeObject, boolean editable);
	public void setEditable(boolean editable)
	{
		boolean editableParamValue = editable;
		setEditable_ev_bool(this.nativeObject.pointer, editableParamValue);
	}
	native private boolean getEditable_void(long pNativeObject);
	public boolean getEditable()
	{
		boolean returnValue = getEditable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getReflectable_void(long pNativeObject);
	public boolean getReflectable()
	{
		boolean returnValue = getReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setReflectable_ev_bool(long pNativeObject, boolean value);
	public void setReflectable(boolean value)
	{
		boolean valueParamValue = value;
		setReflectable_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getRefractable_void(long pNativeObject);
	public boolean getRefractable()
	{
		boolean returnValue = getRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRefractable_ev_bool(long pNativeObject, boolean value);
	public void setRefractable(boolean value)
	{
		boolean valueParamValue = value;
		setRefractable_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisibilityFlags_ev_uint32(long pNativeObject, long flags);
	public void setVisibilityFlags(long flags)
	{
		long flagsParamValue = flags;
		setVisibilityFlags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
	}
	native private long getVisibilityFlags_void(long pNativeObject);
	public long getVisibilityFlags()
	{
		long returnValue = getVisibilityFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRenderingMaxDistance_Real(long pNativeObject, double dist);
	public void setRenderingMaxDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance_Real(this.nativeObject.pointer, distParamValue);
	}
	native private double getRenderingMaxDistance_void(long pNativeObject);
	public double getRenderingMaxDistance()
	{
		double returnValue = getRenderingMaxDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRenderingMinDistance_Real(long pNativeObject, double dist);
	public void setRenderingMinDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance_Real(this.nativeObject.pointer, distParamValue);
	}
	native private double getRenderingMinDistance_void(long pNativeObject);
	public double getRenderingMinDistance()
	{
		double returnValue = getRenderingMinDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getUserData_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject.UserData getUserData()
	{
		long returnValue = getUserData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.UserData __returnValue = new com.earthview.world.graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate, "CUserData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.UserData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserData");
		}
		return __returnValue;
	}
	native private void setUserData_CUserData(long pNativeObject, long data);
	public void setUserData(com.earthview.world.graphic.MovableObject.UserData data)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		setUserData_CUserData(this.nativeObject.pointer, dataParamValue);
	}
	native private long getParentNode_void(long pNativeObject);
	public com.earthview.world.graphic.Node getParentNode()
	{
		long returnValue = getParentNode_void(this.nativeObject.pointer);
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
	native private boolean isAttached_void(long pNativeObject);
	public boolean isAttached()
	{
		boolean returnValue = isAttached_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isParentNodeLocal_void(long pNativeObject);
	public boolean isParentNodeLocal()
	{
		boolean returnValue = isParentNodeLocal_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setParentNodelLocal_ev_bool(long pNativeObject, boolean local);
	public void setParentNodelLocal(boolean local)
	{
		boolean localParamValue = local;
		setParentNodelLocal_ev_bool(this.nativeObject.pointer, localParamValue);
	}
	native private boolean getSubMeshLocalMatrixUsed_void(long pNativeObject);
	/// <summary>
	/// 询问是否使用了SubMesh局部变换矩阵				
	/// <param name=""></param>				
	/// <returns></returns>
	public boolean getSubMeshLocalMatrixUsed()
	{
		boolean returnValue = getSubMeshLocalMatrixUsed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void useSubMeshLocalMatrix_ev_bool(long pNativeObject, boolean use);
	/// <summary>
	/// 设置是否使用SubMesh局部变换矩阵				
	/// <param name=""></param>				
	/// <returns></returns>
	public void useSubMeshLocalMatrix(boolean use)
	{
		boolean useParamValue = use;
		useSubMeshLocalMatrix_ev_bool(this.nativeObject.pointer, useParamValue);
	}
	native private long getSubMeshLocalMatrix_void(long pNativeObject);
	/// <summary>
	/// 获得SubMesh局部变换矩阵				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.spatial.math.Matrix4 getSubMeshLocalMatrix()
	{
		long returnValue = getSubMeshLocalMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long getObjectOwner_void(long pNativeObject);
	/// <summary>
	/// 获得所有者(EarthView::World::Graphic::CInstanceObject)				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.graphic.InstanceObject getObjectOwner()
	{
		long returnValue = getObjectOwner_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstanceObject __returnValue = new com.earthview.world.graphic.InstanceObject(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstanceObject");
		}
		return __returnValue;
	}
	public InstancedEntity2(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InstancedEntity2(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register__updateAnimation_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register__updateAnimation_void(this.nativeObject.pointer, "_updateAnimation_void_callback");
		}
	}
	
	public static InstancedEntity2 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InstancedEntity2 obj = null;
 		if(baseObj instanceof InstancedEntity2)
		{
			obj = (InstancedEntity2)baseObj;
		} else {
			obj = new InstancedEntity2(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInstancedEntity2");
			obj.increaseCast();
		}

		return obj;
	}
}
