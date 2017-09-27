package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubEntity extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSubEntity", new SubEntityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSubEntityProxy", new SubEntityClassFactory());
	}

	public static class SubEntityRenderable extends com.earthview.world.graphic.Renderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSubEntity::CSubEntityRenderable", new SubEntityRenderableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSubEntity::JCSubEntityRenderableProxy", new SubEntityRenderableClassFactory());
		}

		native private long getMaterialName_void(long pNativeObject);
		/**
		 * 获取当前实例的材质名称
		 * @param  
		 */
		public StringPointer getMaterialName()
		{
			long returnValue = getMaterialName_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void setMaterialName_EVString_EVString(long pNativeObject, String name, String groupName);
		/**
		 * 设置被使用的材质名称
		 * @param name 名称
		 * @param groupName 组名称
		 */
		public void setMaterialName(String name, String groupName)
		{
			String nameParamValue = name;
			String groupNameParamValue = groupName;
			setMaterialName_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
		}
		native private void setMaterialName_EVString(long pNativeObject, String name);
		public void setMaterialName(String name)
		{
			String nameParamValue = name;
			setMaterialName_EVString(this.nativeObject.pointer, nameParamValue);
		}
		native private void setMaterial_CMaterialPtr(long pNativeObject, long material);
		/**
		 * 设置被使用的材质
		 * @param material 材质
		 */
		public void setMaterial(com.earthview.world.graphic.MaterialPtr material)
		{
			long materialParamValue = material.nativeObject.pointer;
			setMaterial_CMaterialPtr(this.nativeObject.pointer, materialParamValue);
		}
		protected  void setRenderQueueGroup_ev_uint8_callback(short queueID)
		{
			short queueIDParamValue = queueID;
			setRenderQueueGroup(queueIDParamValue);
		}

		native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
		public void setRenderQueueGroup(short queueID)
		{
			short queueIDParamValue = queueID;
			setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, queueIDParamValue);
		}
		native private void setRenderQueueGroup_ev_uint8_NoVirtual(long pNativeObject, short queueID);
		protected void setRenderQueueGroup_NoVirtual(short queueID)
		{
			short queueIDParamValue = queueID;
			setRenderQueueGroup_ev_uint8_NoVirtual(this.nativeObject.pointer, queueIDParamValue);
		}

		protected  void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback(short queueID, int priority)
		{
			short queueIDParamValue = queueID;
			int priorityParamValue = priority;
			setRenderQueueGroupAndPriority(queueIDParamValue, priorityParamValue);
		}

		native private void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, short queueID, int priority);
		public void setRenderQueueGroupAndPriority(short queueID, int priority)
		{
			short queueIDParamValue = queueID;
			int priorityParamValue = priority;
			setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, queueIDParamValue, priorityParamValue);
		}
		native private void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_NoVirtual(long pNativeObject, short queueID, int priority);
		protected void setRenderQueueGroupAndPriority_NoVirtual(short queueID, int priority)
		{
			short queueIDParamValue = queueID;
			int priorityParamValue = priority;
			setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_NoVirtual(this.nativeObject.pointer, queueIDParamValue, priorityParamValue);
		}

		protected  short getRenderQueueGroup_void_callback()
		{
			short returnValue = getRenderQueueGroup();
			short __returnValue = returnValue;
			return __returnValue;
		}

		native private short getRenderQueueGroup_void(long pNativeObject);
		public short getRenderQueueGroup()
		{
			short returnValue = getRenderQueueGroup_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private short getRenderQueueGroup_void_NoVirtual(long pNativeObject);
		protected short getRenderQueueGroup_NoVirtual()
		{
			short returnValue = getRenderQueueGroup_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		protected  int getRenderQueuePriority_void_callback()
		{
			int returnValue = getRenderQueuePriority();
			int __returnValue = returnValue;
			return __returnValue;
		}

		native private int getRenderQueuePriority_void(long pNativeObject);
		public int getRenderQueuePriority()
		{
			int returnValue = getRenderQueuePriority_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private int getRenderQueuePriority_void_NoVirtual(long pNativeObject);
		protected int getRenderQueuePriority_NoVirtual()
		{
			int returnValue = getRenderQueuePriority_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		protected  boolean isRenderQueueGroupSet_void_callback()
		{
			boolean returnValue = isRenderQueueGroupSet();
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean isRenderQueueGroupSet_void(long pNativeObject);
		public boolean isRenderQueueGroupSet()
		{
			boolean returnValue = isRenderQueueGroupSet_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean isRenderQueueGroupSet_void_NoVirtual(long pNativeObject);
		protected boolean isRenderQueueGroupSet_NoVirtual()
		{
			boolean returnValue = isRenderQueueGroupSet_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		protected  boolean isRenderQueuePrioritySet_void_callback()
		{
			boolean returnValue = isRenderQueuePrioritySet();
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean isRenderQueuePrioritySet_void(long pNativeObject);
		public boolean isRenderQueuePrioritySet()
		{
			boolean returnValue = isRenderQueuePrioritySet_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean isRenderQueuePrioritySet_void_NoVirtual(long pNativeObject);
		protected boolean isRenderQueuePrioritySet_NoVirtual()
		{
			boolean returnValue = isRenderQueuePrioritySet_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private long getSelectionRenderable_void(long pNativeObject);
		public com.earthview.world.graphic.SelectionRenderable getSelectionRenderable()
		{
			long returnValue = getSelectionRenderable_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SelectionRenderable __returnValue = new com.earthview.world.graphic.SelectionRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CSelectionRenderable");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SelectionRenderable)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CSelectionRenderable");
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

		native private long getMaterial_void(long pNativeObject);
		/**
		 * 获得材质信息重写EarthView::World::Graphic::CRenderable
		 * @param  
		 * @return 材质
		 */
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

		native private long getTechnique_void(long pNativeObject);
		/**
		 * 重新获得一个渲染实体使用的材质技术指针重写EarthView::World::Graphic::CRenderable
		 * @param  
		 */
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

		native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
		/**
		 * 获得要求对象到帧缓冲的渲染操作重写EarthView::World::Graphic::CRenderable
		 * @param op 
		 */
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

		native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
		/**
		 * 获得渲染对象的转换矩阵重写EarthView::World::Graphic::CRenderable
		 * @param xform 四维矩阵
		 */
		public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
		}
		native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
		protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
		}

		native private int getNumWorldTransforms_void(long pNativeObject);
		/**
		 * 获得渲染接口需要的转换矩阵的数量重写EarthView::World::Graphic::CRenderable
		 * @param  
		 */
		public int getNumWorldTransforms()
		{
			int returnValue = getNumWorldTransforms_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private int getNumWorldTransforms_void_NoVirtual(long pNativeObject);
		protected int getNumWorldTransforms_NoVirtual()
		{
			int returnValue = getNumWorldTransforms_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
		/**
		 * 获得摄像机视场的深度的平方重写EarthView::World::Graphic::CRenderable
		 * @param cam 摄像机视场
		 * @return 视场大小的值
		 */
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
		/**
		 * 获得光照的列表，按照相对于渲染实体的远近排列重写CRenderable::getLights
		 * @param  
		 */
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

		native private boolean getCastsShadows_void(long pNativeObject);
		/// <summary>
		/// 获取是否投射影像
		/// 重写EarthView::World::Graphic::CRenderable
		/// <param name=""></param>
		/// <returns></returns>
		public boolean getCastsShadows()
		{
			boolean returnValue = getCastsShadows_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean getCastsShadows_void_NoVirtual(long pNativeObject);
		protected boolean getCastsShadows_NoVirtual()
		{
			boolean returnValue = getCastsShadows_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private long _getSkelAnimVertexData_void(long pNativeObject);
		public com.earthview.world.graphic.VertexData _getSkelAnimVertexData()
		{
			long returnValue = _getSkelAnimVertexData_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexData");
			}
			return __returnValue;
		}
		native private long _getSoftwareVertexAnimVertexData_void(long pNativeObject);
		public com.earthview.world.graphic.VertexData _getSoftwareVertexAnimVertexData()
		{
			long returnValue = _getSoftwareVertexAnimVertexData_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexData");
			}
			return __returnValue;
		}
		native private long _getHardwareVertexAnimVertexData_void(long pNativeObject);
		public com.earthview.world.graphic.VertexData _getHardwareVertexAnimVertexData()
		{
			long returnValue = _getHardwareVertexAnimVertexData_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexData");
			}
			return __returnValue;
		}
		native private long _getSkelAnimTempBufferInfo_void(long pNativeObject);
		public com.earthview.world.graphic.TempBlendedBufferInfo _getSkelAnimTempBufferInfo()
		{
			long returnValue = _getSkelAnimTempBufferInfo_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TempBlendedBufferInfo __returnValue = new com.earthview.world.graphic.TempBlendedBufferInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTempBlendedBufferInfo");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TempBlendedBufferInfo)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTempBlendedBufferInfo");
			}
			return __returnValue;
		}
		native private long _getVertexAnimTempBufferInfo_void(long pNativeObject);
		public com.earthview.world.graphic.TempBlendedBufferInfo _getVertexAnimTempBufferInfo()
		{
			long returnValue = _getVertexAnimTempBufferInfo_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TempBlendedBufferInfo __returnValue = new com.earthview.world.graphic.TempBlendedBufferInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTempBlendedBufferInfo");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TempBlendedBufferInfo)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTempBlendedBufferInfo");
			}
			return __returnValue;
		}
		native private long getVertexDataForBinding_void(long pNativeObject);
		//// Retrieve the EarthView::World::Graphic::CVertexData which should be used for GPU binding
		public com.earthview.world.graphic.VertexData getVertexDataForBinding()
		{
			long returnValue = getVertexDataForBinding_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexData");
			}
			return __returnValue;
		}
		native private void _markBuffersUnusedForAnimation_void(long pNativeObject);
		public void _markBuffersUnusedForAnimation()
		{
			_markBuffersUnusedForAnimation_void(this.nativeObject.pointer);
		}
		native private void _markBuffersUsedForAnimation_void(long pNativeObject);
		public void _markBuffersUsedForAnimation()
		{
			_markBuffersUsedForAnimation_void(this.nativeObject.pointer);
		}
		native private boolean _getBuffersMarkedForAnimation_void(long pNativeObject);
		public boolean _getBuffersMarkedForAnimation()
		{
			boolean returnValue = _getBuffersMarkedForAnimation_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void _restoreBuffersForUnusedAnimation_ev_bool(long pNativeObject, boolean hardwareAnimation);
		public void _restoreBuffersForUnusedAnimation(boolean hardwareAnimation)
		{
			boolean hardwareAnimationParamValue = hardwareAnimation;
			_restoreBuffersForUnusedAnimation_ev_bool(this.nativeObject.pointer, hardwareAnimationParamValue);
		}
		native private void _updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, long constantEntry, long params);
		/**
		 * 更新一个自定义EarthView::World::Graphic::CGpuProgramParameters常数
		 * @param paramIndex 更新索引常数
		 * @param constantEntry 从程序参数获取自动常数
		 * @param params 参数
		 */
		public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
		{
			long constantEntryParamValue = constantEntry.nativeObject.pointer;
			long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
			_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, constantEntryParamValue, paramsParamValue);
		}
		native private void _updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(long pNativeObject, long constantEntry, long params);
		protected void _updateCustomGpuParameter_NoVirtual(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
		{
			long constantEntryParamValue = constantEntry.nativeObject.pointer;
			long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
			_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(this.nativeObject.pointer, constantEntryParamValue, paramsParamValue);
		}

		native private void _invalidateCameraCache_void(long pNativeObject);
		public void _invalidateCameraCache()
		{
			_invalidateCameraCache_void(this.nativeObject.pointer);
		}
		public SubEntityRenderable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubEntityRenderable(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 渲染开始时向外通知的事件
		 * @param sm 渲染场景
		 * @param rsys 渲染系统
		 * @return 如果自动执行渲染过程返回true,手动执行返回false
		 */
		public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			return super.preRender_NoVirtual(sm, rsys);
		}
		/**
		 * 渲染完成时向外通知的事件
		 * @param sm 渲染场景
		 * @param rsys 渲染系统
		 */
		public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			super.postRender_NoVirtual(sm, rsys);
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
		
		native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
		native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
		native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
		native protected void register_getRenderQueuePriority_void(long pNativeObject, String method);
		native protected void register_isRenderQueueGroupSet_void(long pNativeObject, String method);
		native protected void register_isRenderQueuePrioritySet_void(long pNativeObject, String method);
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
				this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
				this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
				this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
				this.register_getRenderQueuePriority_void(this.nativeObject.pointer, "getRenderQueuePriority_void_callback");
				this.register_isRenderQueueGroupSet_void(this.nativeObject.pointer, "isRenderQueueGroupSet_void_callback");
				this.register_isRenderQueuePrioritySet_void(this.nativeObject.pointer, "isRenderQueuePrioritySet_void_callback");
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
		
		public static SubEntityRenderable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubEntityRenderable obj = null;
 			if(baseObj instanceof SubEntityRenderable)
			{
				obj = (SubEntityRenderable)baseObj;
			} else {
				obj = new SubEntityRenderable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CSubEntityRenderable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubEntityRenderableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubEntityRenderable emptyInstance = new SubEntityRenderable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  void setVisible_ev_bool_callback(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible(visibleParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置子实体是否可见
	 * @param visible 是否可见
	 */
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

	protected  boolean isVisible_void_callback()
	{
		boolean returnValue = isVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取子实体是否可见
	 * @param  
	 * @return 如果可见返回true,不可见返回false
	 */
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

	native private long getSubMesh_void(long pNativeObject);
	/**
	 * 获取聚合的SubMesh
	 * @param  
	 */
	public com.earthview.world.graphic.SubMesh getSubMesh()
	{
		long returnValue = getSubMesh_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubMesh)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubMesh");
		}
		return __returnValue;
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * 获取父实体
	 * @param  
	 */
	public com.earthview.world.graphic.Entity getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity __returnValue = new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate, "CEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntity");
		}
		return __returnValue;
	}
	native private long getRenderble_void(long pNativeObject);
	/**
	 * 获取聚合的非内部instance渲染对象对象
	 * @param  
	 * @return 如果是内部instance，则返回NULL
	 */
	public com.earthview.world.graphic.SubEntity.SubEntityRenderable getRenderble()
	{
		long returnValue = getRenderble_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubEntity.SubEntityRenderable __returnValue = new com.earthview.world.graphic.SubEntity.SubEntityRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CSubEntityRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubEntity.SubEntityRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubEntityRenderable");
		}
		return __returnValue;
	}
	native private long getInstanceEntity_void(long pNativeObject);
	/**
	 * 获取聚合的内部instance对象
	 * @param  
	 * @return 如果不是内部instance，则返回NULL
	 */
	public com.earthview.world.graphic.InstancedEntity getInstanceEntity()
	{
		long returnValue = getInstanceEntity_void(this.nativeObject.pointer);
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
	native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
	/**
	 * 获得渲染对象的转换矩阵重写EarthView::World::Graphic::CRenderable
	 * @param xform 四维矩阵
	 */
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
	}
	native private int getNumWorldTransforms_void(long pNativeObject);
	/**
	 * 获得渲染接口需要的转换矩阵的数量重写EarthView::World::Graphic::CRenderable
	 * @param  
	 */
	public int getNumWorldTransforms()
	{
		int returnValue = getNumWorldTransforms_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setCustomAmbient_CColourValue_callback(long ambient)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		setCustomAmbient(ambientParamValue);
	}

	native private void setCustomAmbient_CColourValue(long pNativeObject, long ambient);
	/**
	 * 设置自定义环境光系数
	 * @param  
	 */
	public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		setCustomAmbient_CColourValue(this.nativeObject.pointer, ambientParamValue);
	}
	native private void setCustomAmbient_CColourValue_NoVirtual(long pNativeObject, long ambient);
	protected void setCustomAmbient_NoVirtual(com.earthview.world.graphic.ColourValue ambient)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		setCustomAmbient_CColourValue_NoVirtual(this.nativeObject.pointer, ambientParamValue);
	}

	native private long getCustomAmbient_void(long pNativeObject);
	/**
	 * 获取自定义环境光系数
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getCustomAmbient()
	{
		long returnValue = getCustomAmbient_void(this.nativeObject.pointer);
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
	native private void setCustomProjection_ev_bool(long pNativeObject, boolean customProjection);
	/**
	 * 设置是否自定义投影矩阵
	 * @param  
	 */
	public void setCustomProjection(boolean customProjection)
	{
		boolean customProjectionParamValue = customProjection;
		setCustomProjection_ev_bool(this.nativeObject.pointer, customProjectionParamValue);
	}
	native private boolean getCustomProjection_void(long pNativeObject);
	/**
	 * 获取是否自定义投影矩阵
	 * @param  
	 */
	public boolean getCustomProjection()
	{
		boolean returnValue = getCustomProjection_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean selectBy_CRay_CViewport_CVector3_callback(long ray, long viewport, long point)
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
		boolean returnValue = selectBy(rayParamValue, viewportParamValue, pointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectBy_CRay_CViewport_CVector3(long pNativeObject, long ray, long viewport, long point);
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param viewport 视口
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectBy_CRay_CViewport_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, long point);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, pointParamValue);
		return returnValue;
	}

	protected  boolean selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_callback(long ray, long viewport, long point, long index1, long index2, long index3)
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
		UIntegerPointer index1ParamValue = new UIntegerPointer(new InstancePointer(index1));
		UIntegerPointer index2ParamValue = new UIntegerPointer(new InstancePointer(index2));
		UIntegerPointer index3ParamValue = new UIntegerPointer(new InstancePointer(index3));
		boolean returnValue = selectBy(rayParamValue, viewportParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long ray, long viewport, long point, long index1, long index2, long index3);
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, rayParamValue, viewportParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}
	native private boolean selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long ray, long viewport, long point, long index1, long index2, long index3);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}

	protected  boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_callback(long ray, long viewport, long instanceIndex, long segmentIndex, long point)
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
		boolean returnValue = selectComponentBy(rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3(long pNativeObject, long ray, long viewport, long instanceIndex, long segmentIndex, long point);
	/**
	 * 选择组件
	 * @param ray 射线对象
	 * @param viewport 视口
	 * @param instanceIndex 选中的instance序号
	 * @param segmentIndex 选中的分段序号
	 * @param point 交点
	 * @return true:组件与射线相交;false:不相交
	 */
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, long instanceIndex, long segmentIndex, long point);
	protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}

	protected  boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_callback(long ray, long viewport, long instanceIndex, long segmentIndex, long point, long index1, long index2, long index3)
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
		UIntegerPointer index1ParamValue = new UIntegerPointer(new InstancePointer(index1));
		UIntegerPointer index2ParamValue = new UIntegerPointer(new InstancePointer(index2));
		UIntegerPointer index3ParamValue = new UIntegerPointer(new InstancePointer(index3));
		boolean returnValue = selectComponentBy(rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long ray, long viewport, long instanceIndex, long segmentIndex, long point, long index1, long index2, long index3);
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}
	native private boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long ray, long viewport, long instanceIndex, long segmentIndex, long point, long index1, long index2, long index3);
	protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}

	protected  boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_callback(long ray, long viewport, long instanceIndex, long segmentIndex, long point, long segmentVec)
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
		com.earthview.world.core.IntVector segmentVecParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		segmentVecParamValue.setDelegate(true);
		segmentVecParamValue.setInstancePointer(new InstancePointer(segmentVec));
		IClassFactory segmentVecParamValueClassFactory = GlobalClassFactoryMap.get(segmentVecParamValue.getCppInstanceTypeName());
		if (segmentVecParamValueClassFactory != null)
		{
			segmentVecParamValue.setDelegate(true);
			segmentVecParamValue = (com.earthview.world.core.IntVector)segmentVecParamValueClassFactory.create();
			segmentVecParamValue.setDelegate(true);
			segmentVecParamValue.setInstancePointer(new InstancePointer(segmentVec));
		}
		boolean returnValue = selectComponentBy(rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, segmentVecParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector(long pNativeObject, long ray, long viewport, long instanceIndex, long segmentIndex, long point, long segmentVec);
	/**
	 * 选择组件
	 * @param ray 射线对象
	 * @param viewport 视口
	 * @param instanceIndex 选中的instance序号
	 * @param point 交点
	 * @param segmentIndex 要选中的分段序号
	 * @return true:组件与射线相交;false:不相交
	 */
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.core.IntVector segmentVec)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long segmentVecParamValue = segmentVec.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector(this.nativeObject.pointer, rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, segmentVecParamValue);
		return returnValue;
	}
	native private boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_NoVirtual(long pNativeObject, long ray, long viewport, long instanceIndex, long segmentIndex, long point, long segmentVec);
	protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.core.IntVector segmentVec)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long segmentVecParamValue = segmentVec.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, segmentVecParamValue);
		return returnValue;
	}

	protected  boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_callback(long ray, long viewport, long instanceIndex, long segmentIndex, long point, long segmentVec, long index1, long index2, long index3)
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
		com.earthview.world.core.IntVector segmentVecParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		segmentVecParamValue.setDelegate(true);
		segmentVecParamValue.setInstancePointer(new InstancePointer(segmentVec));
		IClassFactory segmentVecParamValueClassFactory = GlobalClassFactoryMap.get(segmentVecParamValue.getCppInstanceTypeName());
		if (segmentVecParamValueClassFactory != null)
		{
			segmentVecParamValue.setDelegate(true);
			segmentVecParamValue = (com.earthview.world.core.IntVector)segmentVecParamValueClassFactory.create();
			segmentVecParamValue.setDelegate(true);
			segmentVecParamValue.setInstancePointer(new InstancePointer(segmentVec));
		}
		UIntegerPointer index1ParamValue = new UIntegerPointer(new InstancePointer(index1));
		UIntegerPointer index2ParamValue = new UIntegerPointer(new InstancePointer(index2));
		UIntegerPointer index3ParamValue = new UIntegerPointer(new InstancePointer(index3));
		boolean returnValue = selectComponentBy(rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, segmentVecParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long ray, long viewport, long instanceIndex, long segmentIndex, long point, long segmentVec, long index1, long index2, long index3);
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.core.IntVector segmentVec, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long segmentVecParamValue = segmentVec.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, segmentVecParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}
	native private boolean selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long ray, long viewport, long instanceIndex, long segmentIndex, long point, long segmentVec, long index1, long index2, long index3);
	protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.core.IntVector segmentVec, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long segmentVecParamValue = segmentVec.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, segmentVecParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}

	native private boolean selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(long pNativeObject, long ray, long viewport, long point, long index1, long index2, long index3, long segmentIndex);
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param viewport 视口
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3, com.earthview.world.core.IntVector segmentIndex)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(this.nativeObject.pointer, rayParamValue, viewportParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue, segmentIndexParamValue);
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
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	protected  void renderAsSelected_void_callback()
	{
		renderAsSelected();
	}

	native private void renderAsSelected_void(long pNativeObject);
	/**
	 * 高亮显示
	 * @param  
	 */
	public void renderAsSelected()
	{
		renderAsSelected_void(this.nativeObject.pointer);
	}
	native private void renderAsSelected_void_NoVirtual(long pNativeObject);
	protected void renderAsSelected_NoVirtual()
	{
		renderAsSelected_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void renderAsSelected_ev_int32_callback(int segmentIndex)
	{
		int segmentIndexParamValue = segmentIndex;
		renderAsSelected(segmentIndexParamValue);
	}

	native private void renderAsSelected_ev_int32(long pNativeObject, int segmentIndex);
	/**
	 * 高亮显示
	 * @param  
	 */
	public void renderAsSelected(int segmentIndex)
	{
		int segmentIndexParamValue = segmentIndex;
		renderAsSelected_ev_int32(this.nativeObject.pointer, segmentIndexParamValue);
	}
	native private void renderAsSelected_ev_int32_NoVirtual(long pNativeObject, int segmentIndex);
	protected void renderAsSelected_NoVirtual(int segmentIndex)
	{
		int segmentIndexParamValue = segmentIndex;
		renderAsSelected_ev_int32_NoVirtual(this.nativeObject.pointer, segmentIndexParamValue);
	}

	protected  void clearSelection_void_callback()
	{
		clearSelection();
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private String getMaterialName_void(long pNativeObject);
	/**
	 * 获取当前实例的材质名称
	 * @param  
	 */
	public String getMaterialName()
	{
		String returnValue = getMaterialName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaterialName_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 设置被使用的材质名称
	 * @param name 名称
	 * @param groupName 组名称
	 */
	public void setMaterialName(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		setMaterialName_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}
	native private void setMaterialName_EVString(long pNativeObject, String name);
	public void setMaterialName(String name)
	{
		String nameParamValue = name;
		setMaterialName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setMaterial_CMaterialPtr(long pNativeObject, long material);
	/**
	 * 设置被使用的材质
	 * @param material 材质
	 */
	public void setMaterial(com.earthview.world.graphic.MaterialPtr material)
	{
		long materialParamValue = material.nativeObject.pointer;
		setMaterial_CMaterialPtr(this.nativeObject.pointer, materialParamValue);
	}
	native private long getMaterial_void(long pNativeObject);
	/**
	 * 获得材质信息				
	 * @param  
	 * @return 材质
	 */
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
	protected  void setRenderQueueGroup_ev_uint8_callback(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup(queueIDParamValue);
	}

	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	public void setRenderQueueGroup(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, queueIDParamValue);
	}
	native private void setRenderQueueGroup_ev_uint8_NoVirtual(long pNativeObject, short queueID);
	protected void setRenderQueueGroup_NoVirtual(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8_NoVirtual(this.nativeObject.pointer, queueIDParamValue);
	}

	protected  void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback(short queueID, int priority)
	{
		short queueIDParamValue = queueID;
		int priorityParamValue = priority;
		setRenderQueueGroupAndPriority(queueIDParamValue, priorityParamValue);
	}

	native private void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, short queueID, int priority);
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		short queueIDParamValue = queueID;
		int priorityParamValue = priority;
		setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, queueIDParamValue, priorityParamValue);
	}
	native private void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_NoVirtual(long pNativeObject, short queueID, int priority);
	protected void setRenderQueueGroupAndPriority_NoVirtual(short queueID, int priority)
	{
		short queueIDParamValue = queueID;
		int priorityParamValue = priority;
		setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_NoVirtual(this.nativeObject.pointer, queueIDParamValue, priorityParamValue);
	}

	protected  short getRenderQueueGroup_void_callback()
	{
		short returnValue = getRenderQueueGroup();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getRenderQueueGroup_void(long pNativeObject);
	public short getRenderQueueGroup()
	{
		short returnValue = getRenderQueueGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getRenderQueueGroup_void_NoVirtual(long pNativeObject);
	protected short getRenderQueueGroup_NoVirtual()
	{
		short returnValue = getRenderQueueGroup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isRenderQueueGroupSet_void_callback()
	{
		boolean returnValue = isRenderQueueGroupSet();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isRenderQueueGroupSet_void(long pNativeObject);
	public boolean isRenderQueueGroupSet()
	{
		boolean returnValue = isRenderQueueGroupSet_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isRenderQueueGroupSet_void_NoVirtual(long pNativeObject);
	protected boolean isRenderQueueGroupSet_NoVirtual()
	{
		boolean returnValue = isRenderQueueGroupSet_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean setSegmentVisible_ev_uint32_ev_bool(long pNativeObject, long segmentIndex, boolean visible);
	/**
	 * 设置分段是否可见
	 * @param segmentIndex 分段序号
	 * @param visible 是否可见
	 */
	public boolean setSegmentVisible(long segmentIndex, boolean visible)
	{
		long segmentIndexParamValue = segmentIndex;
		boolean visibleParamValue = visible;
		boolean returnValue = setSegmentVisible_ev_uint32_ev_bool(this.nativeObject.pointer, segmentIndexParamValue, visibleParamValue);
		return returnValue;
	}
	native private boolean getSegmentVisible_ev_uint32(long pNativeObject, long segmentIndex);
	/**
	 * 获取分段是否可见
	 * @param segmentIndex 分段序号
	 * @return 是否可见
	 */
	public boolean getSegmentVisible(long segmentIndex)
	{
		long segmentIndexParamValue = segmentIndex;
		boolean returnValue = getSegmentVisible_ev_uint32(this.nativeObject.pointer, segmentIndexParamValue);
		return returnValue;
	}
	native private boolean setSegmentHighlight_ev_uint32_ev_bool(long pNativeObject, long segmentIndex, boolean highlight);
	/**
	 * 设置分段是否高亮
	 * @param segmentIndex 分段序号
	 * @param visible 是否可见
	 */
	public boolean setSegmentHighlight(long segmentIndex, boolean highlight)
	{
		long segmentIndexParamValue = segmentIndex;
		boolean highlightParamValue = highlight;
		boolean returnValue = setSegmentHighlight_ev_uint32_ev_bool(this.nativeObject.pointer, segmentIndexParamValue, highlightParamValue);
		return returnValue;
	}
	native private boolean getSegmentHighlight_ev_uint32(long pNativeObject, long segmentIndex);
	/**
	 * 获取分段是否高亮
	 * @param segmentIndex 分段序号
	 * @return 是否高亮
	 */
	public boolean getSegmentHighlight(long segmentIndex)
	{
		long segmentIndexParamValue = segmentIndex;
		boolean returnValue = getSegmentHighlight_ev_uint32(this.nativeObject.pointer, segmentIndexParamValue);
		return returnValue;
	}
	native private boolean setSegmentTransparency_ev_uint32_ev_uint8(long pNativeObject, long segmentIndex, short alpha);
	/**
	 * 设置分段透明度
	 * @param segmentIndex 分段序号
	 * @param alpha 透明度，0为不透明，255为全透明
	 */
	public boolean setSegmentTransparency(long segmentIndex, short alpha)
	{
		long segmentIndexParamValue = segmentIndex;
		short alphaParamValue = alpha;
		boolean returnValue = setSegmentTransparency_ev_uint32_ev_uint8(this.nativeObject.pointer, segmentIndexParamValue, alphaParamValue);
		return returnValue;
	}
	native private short getSegmentTransparency_ev_uint32(long pNativeObject, long segmentIndex);
	/**
	 * 获取分段透明度
	 * @param segmentIndex 分段序号
	 * @return 透明度，0为不透明，255为全透明
	 */
	public short getSegmentTransparency(long segmentIndex)
	{
		long segmentIndexParamValue = segmentIndex;
		short returnValue = getSegmentTransparency_ev_uint32(this.nativeObject.pointer, segmentIndexParamValue);
		return returnValue;
	}
	native private boolean resetSegmentsHighlight_void(long pNativeObject);
	public boolean resetSegmentsHighlight()
	{
		boolean returnValue = resetSegmentsHighlight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean resetSegmentsVisible_void(long pNativeObject);
	public boolean resetSegmentsVisible()
	{
		boolean returnValue = resetSegmentsVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean resetSegmentsTransparency_void(long pNativeObject);
	public boolean resetSegmentsTransparency()
	{
		boolean returnValue = resetSegmentsTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	public SubEntity(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubEntity(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_CVector3(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_renderAsSelected_void(long pNativeObject, String method);
	native protected void register_renderAsSelected_ev_int32(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register_isRenderQueueGroupSet_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
			this.register_selectBy_CRay_CViewport_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_CVector3_callback");
			this.register_selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "selectBy_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_renderAsSelected_void(this.nativeObject.pointer, "renderAsSelected_void_callback");
			this.register_renderAsSelected_ev_int32(this.nativeObject.pointer, "renderAsSelected_ev_int32_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register_isRenderQueueGroupSet_void(this.nativeObject.pointer, "isRenderQueueGroupSet_void_callback");
		}
	}
	
	public static SubEntity fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubEntity obj = null;
 		if(baseObj instanceof SubEntity)
		{
			obj = (SubEntity)baseObj;
		} else {
			obj = new SubEntity(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubEntity");
			obj.increaseCast();
		}

		return obj;
	}
}
