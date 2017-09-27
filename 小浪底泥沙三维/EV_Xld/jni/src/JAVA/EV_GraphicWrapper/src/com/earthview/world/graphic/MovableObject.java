package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 移动对象类此类定义了场景中移动对象
 */
public class MovableObject extends com.earthview.world.graphic.ShadowCaster {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObject", new MovableObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCMovableObjectProxy", new MovableObjectClassFactory());
	}

	/**
	 * 移动对象监听类此类是对移动对象事件的响应，
	 */
	public static class MovableObjectListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObject::CMovableObjectListener", new MovableObjectListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObject::JCMovableObjectListenerProxy", new MovableObjectListenerClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public MovableObjectListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCMovableObjectListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.MovableObject$MovableObjectListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void objectDestroyed_CMovableObject_callback(long pMovableObject)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			objectDestroyed(pMovableObjectParamValue);
		}

		native private void objectDestroyed_CMovableObject(long pNativeObject, long pMovableObject);
		/**
		 * 销毁对象销毁移动对象
		 * @param pMovableObject 移动对象
		 */
		public void objectDestroyed(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectDestroyed_CMovableObject(this.nativeObject.pointer, pMovableObjectParamValue);
		}
		native private void objectDestroyed_CMovableObject_NoVirtual(long pNativeObject, long pMovableObject);
		protected void objectDestroyed_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectDestroyed_CMovableObject_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue);
		}

		protected  void objectAttached_CMovableObject_callback(long pMovableObject)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			objectAttached(pMovableObjectParamValue);
		}

		native private void objectAttached_CMovableObject(long pNativeObject, long pMovableObject);
		/**
		 * 附属对象在节点上附加一个移动对象
		 * @param pMovableObject 移动对象
		 */
		public void objectAttached(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectAttached_CMovableObject(this.nativeObject.pointer, pMovableObjectParamValue);
		}
		native private void objectAttached_CMovableObject_NoVirtual(long pNativeObject, long pMovableObject);
		protected void objectAttached_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectAttached_CMovableObject_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue);
		}

		protected  void objectDetached_CMovableObject_callback(long pMovableObject)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			objectDetached(pMovableObjectParamValue);
		}

		native private void objectDetached_CMovableObject(long pNativeObject, long pMovableObject);
		/**
		 * 分离对象分离节点上的移动对象
		 * @param pMovableObject 移动对象
		 */
		public void objectDetached(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectDetached_CMovableObject(this.nativeObject.pointer, pMovableObjectParamValue);
		}
		native private void objectDetached_CMovableObject_NoVirtual(long pNativeObject, long pMovableObject);
		protected void objectDetached_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectDetached_CMovableObject_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue);
		}

		protected  void objectMoved_CMovableObject_callback(long pMovableObject)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			objectMoved(pMovableObjectParamValue);
		}

		native private void objectMoved_CMovableObject(long pNativeObject, long pMovableObject);
		/**
		 * 移动对象对象被移动
		 * @param pMovableObject 移动对象
		 */
		public void objectMoved(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectMoved_CMovableObject(this.nativeObject.pointer, pMovableObjectParamValue);
		}
		native private void objectMoved_CMovableObject_NoVirtual(long pNativeObject, long pMovableObject);
		protected void objectMoved_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectMoved_CMovableObject_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue);
		}

		protected  boolean objectRendering_CMovableObject_CCamera_callback(long pMovableObject, long pCamera)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			com.earthview.world.graphic.Camera pCameraParamValue = (pCamera == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
			if(pCameraParamValue != null)
			{
			pCameraParamValue.setDelegate(true);
			pCameraParamValue.setInstancePointer(new InstancePointer(pCamera));
			IClassFactory pCameraParamValueClassFactory = GlobalClassFactoryMap.get(pCameraParamValue.getCppInstanceTypeName());
			if (pCameraParamValueClassFactory != null)
			{
				pCameraParamValue.setDelegate(true);
				pCameraParamValue = (com.earthview.world.graphic.Camera)pCameraParamValueClassFactory.create();
				pCameraParamValue.setDelegate(true);
				pCameraParamValue.setInstancePointer(new InstancePointer(pCamera));
			}
			}
			boolean returnValue = objectRendering(pMovableObjectParamValue, pCameraParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean objectRendering_CMovableObject_CCamera(long pNativeObject, long pMovableObject, long pCamera);
		/**
		 * 渲染对象
		 * @param pMovableObject 移动对象
		 * @param  摄像机
		 * @return 成功允许队列渲染，否则不允许
		 */
		public boolean objectRendering(com.earthview.world.graphic.MovableObject pMovableObject, com.earthview.world.graphic.Camera pCamera)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long pCameraParamValue = (pCamera == null ? 0L : pCamera.nativeObject.pointer);
			boolean returnValue = objectRendering_CMovableObject_CCamera(this.nativeObject.pointer, pMovableObjectParamValue, pCameraParamValue);
			return returnValue;
		}
		native private boolean objectRendering_CMovableObject_CCamera_NoVirtual(long pNativeObject, long pMovableObject, long pCamera);
		protected boolean objectRendering_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject, com.earthview.world.graphic.Camera pCamera)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long pCameraParamValue = (pCamera == null ? 0L : pCamera.nativeObject.pointer);
			boolean returnValue = objectRendering_CMovableObject_CCamera_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue, pCameraParamValue);
			return returnValue;
		}

		protected  long objectQueryLights_CMovableObject_callback(long pMovableObject)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			com.earthview.world.graphic.LightList returnValue = objectQueryLights(pMovableObjectParamValue);
			if(returnValue == null) {
				return 0L;
			}
			returnValue.setDelegate(true);
			long __returnValue = returnValue.nativeObject.pointer;
			return __returnValue;
		}

		native private long objectQueryLights_CMovableObject(long pNativeObject, long pMovableObject);
		/**
		 * 查询光源如果想要自定义光源，需要重载此函数
		 * @param pMovableObject 移动对象
		 * @return 指向光源容器的指针，可以为自己设定的光源容器；或者为空，则返回系统默认过程
		 */
		public com.earthview.world.graphic.LightList objectQueryLights(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long returnValue = objectQueryLights_CMovableObject(this.nativeObject.pointer, pMovableObjectParamValue);
			if(returnValue == 0L) {
				return null;
			}
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
		native private long objectQueryLights_CMovableObject_NoVirtual(long pNativeObject, long pMovableObject);
		protected com.earthview.world.graphic.LightList objectQueryLights_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long returnValue = objectQueryLights_CMovableObject_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue);
			if(returnValue == 0L) {
				return null;
			}
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

		protected  boolean objectSelected_CMovableObject_ev_int32_callback(long pMovableObject, int objectIndex)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			int objectIndexParamValue = objectIndex;
			boolean returnValue = objectSelected(pMovableObjectParamValue, objectIndexParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean objectSelected_CMovableObject_ev_int32(long pNativeObject, long pMovableObject, int objectIndex);
		/**
		 * 对象被选中
		 * @param pMovableObject 移动对象
		 * @param objectIndex 对象序号
		 * @return true:代表此对象将被加入到选择集;false:不加入选择集
		 */
		public boolean objectSelected(com.earthview.world.graphic.MovableObject pMovableObject, int objectIndex)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			int objectIndexParamValue = objectIndex;
			boolean returnValue = objectSelected_CMovableObject_ev_int32(this.nativeObject.pointer, pMovableObjectParamValue, objectIndexParamValue);
			return returnValue;
		}
		native private boolean objectSelected_CMovableObject_ev_int32_NoVirtual(long pNativeObject, long pMovableObject, int objectIndex);
		protected boolean objectSelected_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject, int objectIndex)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			int objectIndexParamValue = objectIndex;
			boolean returnValue = objectSelected_CMovableObject_ev_int32_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue, objectIndexParamValue);
			return returnValue;
		}

		protected  boolean objectSelected_CMovableObject_IntVector_callback(long pMovableObject, long objectIndex)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			com.earthview.world.core.IntVector objectIndexParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
			objectIndexParamValue.setDelegate(true);
			objectIndexParamValue.setInstancePointer(new InstancePointer(objectIndex));
			IClassFactory objectIndexParamValueClassFactory = GlobalClassFactoryMap.get(objectIndexParamValue.getCppInstanceTypeName());
			if (objectIndexParamValueClassFactory != null)
			{
				objectIndexParamValue.setDelegate(true);
				objectIndexParamValue = (com.earthview.world.core.IntVector)objectIndexParamValueClassFactory.create();
				objectIndexParamValue.setDelegate(true);
				objectIndexParamValue.setInstancePointer(new InstancePointer(objectIndex));
			}
			boolean returnValue = objectSelected(pMovableObjectParamValue, objectIndexParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean objectSelected_CMovableObject_IntVector(long pNativeObject, long pMovableObject, long objectIndex);
		/**
		 * 对象被选中
		 * @param pMovableObject 移动对象
		 * @param objectIndex 对象序号集
		 * @return true:代表此对象将被加入到选择集;false:不加入选择集
		 */
		public boolean objectSelected(com.earthview.world.graphic.MovableObject pMovableObject, com.earthview.world.core.IntVector objectIndex)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long objectIndexParamValue = objectIndex.nativeObject.pointer;
			boolean returnValue = objectSelected_CMovableObject_IntVector(this.nativeObject.pointer, pMovableObjectParamValue, objectIndexParamValue);
			return returnValue;
		}
		native private boolean objectSelected_CMovableObject_IntVector_NoVirtual(long pNativeObject, long pMovableObject, long objectIndex);
		protected boolean objectSelected_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject, com.earthview.world.core.IntVector objectIndex)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long objectIndexParamValue = objectIndex.nativeObject.pointer;
			boolean returnValue = objectSelected_CMovableObject_IntVector_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue, objectIndexParamValue);
			return returnValue;
		}

		protected  boolean componentSelected_CMovableObject_ev_int32_ev_int32_ev_int32_ev_int32_callback(long pMovableObject, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			int objIndexParamValue = objIndex;
			int submeshIndexParamValue = submeshIndex;
			int instanceIndexParamValue = instanceIndex;
			int segmentIndexParamValue = segmentIndex;
			boolean returnValue = componentSelected(pMovableObjectParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean componentSelected_CMovableObject_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, long pMovableObject, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex);
		/**
		 * 对象的组件被选中
		 * @param pMovableObject 移动对象
		 * @param objectIndex 对象序号
		 * @param submeshIndex 对象中的submesh序号
		 * @param instanceIndex 组件中的Instance序号
		 * @param segmentIndex submesh中的分段序号
		 * @return true:代表此对象将被加入到选择集;false:不加入选择集
		 */
		public boolean componentSelected(com.earthview.world.graphic.MovableObject pMovableObject, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			int objIndexParamValue = objIndex;
			int submeshIndexParamValue = submeshIndex;
			int instanceIndexParamValue = instanceIndex;
			int segmentIndexParamValue = segmentIndex;
			boolean returnValue = componentSelected_CMovableObject_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, pMovableObjectParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
			return returnValue;
		}
		native private boolean componentSelected_CMovableObject_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, long pMovableObject, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex);
		protected boolean componentSelected_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			int objIndexParamValue = objIndex;
			int submeshIndexParamValue = submeshIndex;
			int instanceIndexParamValue = instanceIndex;
			int segmentIndexParamValue = segmentIndex;
			boolean returnValue = componentSelected_CMovableObject_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
			return returnValue;
		}

		protected  void objectUnselected_CMovableObject_callback(long pMovableObject)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			objectUnselected(pMovableObjectParamValue);
		}

		native private void objectUnselected_CMovableObject(long pNativeObject, long pMovableObject);
		/**
		 * 对象被取消选中
		 * @param  移动对象
		 */
		public void objectUnselected(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectUnselected_CMovableObject(this.nativeObject.pointer, pMovableObjectParamValue);
		}
		native private void objectUnselected_CMovableObject_NoVirtual(long pNativeObject, long pMovableObject);
		protected void objectUnselected_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			objectUnselected_CMovableObject_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue);
		}

		public MovableObjectListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MovableObjectListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_objectDestroyed_CMovableObject(long pNativeObject, String method);
		native protected void register_objectAttached_CMovableObject(long pNativeObject, String method);
		native protected void register_objectDetached_CMovableObject(long pNativeObject, String method);
		native protected void register_objectMoved_CMovableObject(long pNativeObject, String method);
		native protected void register_objectRendering_CMovableObject_CCamera(long pNativeObject, String method);
		native protected void register_objectQueryLights_CMovableObject(long pNativeObject, String method);
		native protected void register_objectSelected_CMovableObject_ev_int32(long pNativeObject, String method);
		native protected void register_objectSelected_CMovableObject_IntVector(long pNativeObject, String method);
		native protected void register_componentSelected_CMovableObject_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
		native protected void register_objectUnselected_CMovableObject(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_objectDestroyed_CMovableObject(this.nativeObject.pointer, "objectDestroyed_CMovableObject_callback");
				this.register_objectAttached_CMovableObject(this.nativeObject.pointer, "objectAttached_CMovableObject_callback");
				this.register_objectDetached_CMovableObject(this.nativeObject.pointer, "objectDetached_CMovableObject_callback");
				this.register_objectMoved_CMovableObject(this.nativeObject.pointer, "objectMoved_CMovableObject_callback");
				this.register_objectRendering_CMovableObject_CCamera(this.nativeObject.pointer, "objectRendering_CMovableObject_CCamera_callback");
				this.register_objectQueryLights_CMovableObject(this.nativeObject.pointer, "objectQueryLights_CMovableObject_callback");
				this.register_objectSelected_CMovableObject_ev_int32(this.nativeObject.pointer, "objectSelected_CMovableObject_ev_int32_callback");
				this.register_objectSelected_CMovableObject_IntVector(this.nativeObject.pointer, "objectSelected_CMovableObject_IntVector_callback");
				this.register_componentSelected_CMovableObject_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "componentSelected_CMovableObject_ev_int32_ev_int32_ev_int32_ev_int32_callback");
				this.register_objectUnselected_CMovableObject(this.nativeObject.pointer, "objectUnselected_CMovableObject_callback");
			}
		}
		
		public static MovableObjectListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MovableObjectListener obj = null;
 			if(baseObj instanceof MovableObjectListener)
			{
				obj = (MovableObjectListener)baseObj;
			} else {
				obj = new MovableObjectListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CMovableObjectListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MovableObjectListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MovableObjectListener emptyInstance = new MovableObjectListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 移动对象监听类此类是对光照查询之后的响应
	 */
	public static class LightQueriedListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObject::CLightQueriedListener", new LightQueriedListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObject::JCLightQueriedListenerProxy", new LightQueriedListenerClassFactory());
		}

		public LightQueriedListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCLightQueriedListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.MovableObject$LightQueriedListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void objectQueryLightsFinished_CMovableObject_LightList_callback(long pMovableObject, long lightList)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			com.earthview.world.graphic.LightList lightListParamValue = (lightList == 0L ? null : new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate));
			if(lightListParamValue != null)
			{
			lightListParamValue.setDelegate(true);
			lightListParamValue.setInstancePointer(new InstancePointer(lightList));
			IClassFactory lightListParamValueClassFactory = GlobalClassFactoryMap.get(lightListParamValue.getCppInstanceTypeName());
			if (lightListParamValueClassFactory != null)
			{
				lightListParamValue.setDelegate(true);
				lightListParamValue = (com.earthview.world.graphic.LightList)lightListParamValueClassFactory.create();
				lightListParamValue.setDelegate(true);
				lightListParamValue.setInstancePointer(new InstancePointer(lightList));
			}
			}
			objectQueryLightsFinished(pMovableObjectParamValue, lightListParamValue);
		}

		native private void objectQueryLightsFinished_CMovableObject_LightList(long pNativeObject, long pMovableObject, long lightList);
		/**
		 * 查询光源结束后的通知					
		 * @param pMovableObject 移动对象
		 * @param lightList 查询到的光源容器
		 */
		public void objectQueryLightsFinished(com.earthview.world.graphic.MovableObject pMovableObject, com.earthview.world.graphic.LightList lightList)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long lightListParamValue = (lightList == null ? 0L : lightList.nativeObject.pointer);
			objectQueryLightsFinished_CMovableObject_LightList(this.nativeObject.pointer, pMovableObjectParamValue, lightListParamValue);
		}
		native private void objectQueryLightsFinished_CMovableObject_LightList_NoVirtual(long pNativeObject, long pMovableObject, long lightList);
		protected void objectQueryLightsFinished_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject, com.earthview.world.graphic.LightList lightList)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long lightListParamValue = (lightList == null ? 0L : lightList.nativeObject.pointer);
			objectQueryLightsFinished_CMovableObject_LightList_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue, lightListParamValue);
		}

		protected  void sceneShadowEnabled_CMovableObject_CSceneManager_ev_bool_callback(long pMovableObject, long pSceneManager, boolean enabled)
		{
			com.earthview.world.graphic.MovableObject pMovableObjectParamValue = (pMovableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pMovableObjectParamValue != null)
			{
			pMovableObjectParamValue.setDelegate(true);
			pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			IClassFactory pMovableObjectParamValueClassFactory = GlobalClassFactoryMap.get(pMovableObjectParamValue.getCppInstanceTypeName());
			if (pMovableObjectParamValueClassFactory != null)
			{
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue = (com.earthview.world.graphic.MovableObject)pMovableObjectParamValueClassFactory.create();
				pMovableObjectParamValue.setDelegate(true);
				pMovableObjectParamValue.setInstancePointer(new InstancePointer(pMovableObject));
			}
			}
			com.earthview.world.graphic.SceneManager pSceneManagerParamValue = (pSceneManager == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
			if(pSceneManagerParamValue != null)
			{
			pSceneManagerParamValue.setDelegate(true);
			pSceneManagerParamValue.setInstancePointer(new InstancePointer(pSceneManager));
			IClassFactory pSceneManagerParamValueClassFactory = GlobalClassFactoryMap.get(pSceneManagerParamValue.getCppInstanceTypeName());
			if (pSceneManagerParamValueClassFactory != null)
			{
				pSceneManagerParamValue.setDelegate(true);
				pSceneManagerParamValue = (com.earthview.world.graphic.SceneManager)pSceneManagerParamValueClassFactory.create();
				pSceneManagerParamValue.setDelegate(true);
				pSceneManagerParamValue.setInstancePointer(new InstancePointer(pSceneManager));
			}
			}
			boolean enabledParamValue = enabled;
			sceneShadowEnabled(pMovableObjectParamValue, pSceneManagerParamValue, enabledParamValue);
		}

		native private void sceneShadowEnabled_CMovableObject_CSceneManager_ev_bool(long pNativeObject, long pMovableObject, long pSceneManager, boolean enabled);
		/**
		 * 查询光源结束后的通知					
		 * @param pMovableObject 移动对象
		 * @param lightList 查询到的光源容器
		 */
		public void sceneShadowEnabled(com.earthview.world.graphic.MovableObject pMovableObject, com.earthview.world.graphic.SceneManager pSceneManager, boolean enabled)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
			boolean enabledParamValue = enabled;
			sceneShadowEnabled_CMovableObject_CSceneManager_ev_bool(this.nativeObject.pointer, pMovableObjectParamValue, pSceneManagerParamValue, enabledParamValue);
		}
		native private void sceneShadowEnabled_CMovableObject_CSceneManager_ev_bool_NoVirtual(long pNativeObject, long pMovableObject, long pSceneManager, boolean enabled);
		protected void sceneShadowEnabled_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObject, com.earthview.world.graphic.SceneManager pSceneManager, boolean enabled)
		{
			long pMovableObjectParamValue = (pMovableObject == null ? 0L : pMovableObject.nativeObject.pointer);
			long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
			boolean enabledParamValue = enabled;
			sceneShadowEnabled_CMovableObject_CSceneManager_ev_bool_NoVirtual(this.nativeObject.pointer, pMovableObjectParamValue, pSceneManagerParamValue, enabledParamValue);
		}

		public LightQueriedListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LightQueriedListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_objectQueryLightsFinished_CMovableObject_LightList(long pNativeObject, String method);
		native protected void register_sceneShadowEnabled_CMovableObject_CSceneManager_ev_bool(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_objectQueryLightsFinished_CMovableObject_LightList(this.nativeObject.pointer, "objectQueryLightsFinished_CMovableObject_LightList_callback");
				this.register_sceneShadowEnabled_CMovableObject_CSceneManager_ev_bool(this.nativeObject.pointer, "sceneShadowEnabled_CMovableObject_CSceneManager_ev_bool_callback");
			}
		}
		
		public static LightQueriedListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LightQueriedListener obj = null;
 			if(baseObj instanceof LightQueriedListener)
			{
				obj = (LightQueriedListener)baseObj;
			} else {
				obj = new LightQueriedListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CLightQueriedListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LightQueriedListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LightQueriedListener emptyInstance = new LightQueriedListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 移动对象内部访问AnimableValues的抽象接口类此类是对移动对象事件的响应，
	 */
	public static class MovableObjectInternalAnimableObject extends com.earthview.world.graphic.AnimableObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject", new MovableObjectInternalAnimableObjectClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObject::JCMovableObjectInternalAnimableObjectProxy", new MovableObjectInternalAnimableObjectClassFactory());
		}

		/**
		 * 构造函数
		 * @param pList 构造函数参数键值对表
		 */
		public MovableObjectInternalAnimableObject() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCMovableObjectInternalAnimableObjectProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.MovableObject$MovableObjectInternalAnimableObject".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public MovableObjectInternalAnimableObject(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MovableObjectInternalAnimableObject(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 初始化可动画路径
		 * @param  
		 */
		public void initialiseAnimableDictionary(com.earthview.world.core.StringVector val)
		{
			super.initialiseAnimableDictionary_NoVirtual(val);
		}
		/**
		 * 获得可动画路径
		 * @param  
		 * @return 返回路径名称
		 */
		public String getAnimableDictionaryName()
		{
			return super.getAnimableDictionaryName_NoVirtual();
		}
		/**
		 * 为可动画的值名称创建公共指针
		 * @param  
		 * @return 可动画值名称公共指针
		 */
		public com.earthview.world.graphic.AnimableValuePtr createAnimableValue(String valueName)
		{
			return super.createAnimableValue_NoVirtual(valueName);
		}
		
		native protected void register_initialiseAnimableDictionary_StringVector(long pNativeObject, String method);
		native protected void register_getAnimableDictionaryName_void(long pNativeObject, String method);
		native protected void register_createAnimableValue_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_initialiseAnimableDictionary_StringVector(this.nativeObject.pointer, "initialiseAnimableDictionary_StringVector_callback");
				this.register_getAnimableDictionaryName_void(this.nativeObject.pointer, "getAnimableDictionaryName_void_callback");
				this.register_createAnimableValue_EVString(this.nativeObject.pointer, "createAnimableValue_EVString_callback");
			}
		}
		
		public static MovableObjectInternalAnimableObject fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MovableObjectInternalAnimableObject obj = null;
 			if(baseObj instanceof MovableObjectInternalAnimableObject)
			{
				obj = (MovableObjectInternalAnimableObject)baseObj;
			} else {
				obj = new MovableObjectInternalAnimableObject(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CMovableObjectInternalAnimableObject");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MovableObjectInternalAnimableObjectClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MovableObjectInternalAnimableObject emptyInstance = new MovableObjectInternalAnimableObject(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class UserData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObject::CUserData", new UserDataClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObject::JCUserDataProxy", new UserDataClassFactory());
		}

		public UserData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCUserDataProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.MovableObject$UserData".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  long ev_clone_void_callback()
		{
			com.earthview.world.graphic.MovableObject.UserData returnValue = ev_clone();
			if(returnValue == null) {
				return 0L;
			}
			returnValue.setDelegate(true);
			long __returnValue = returnValue.nativeObject.pointer;
			return __returnValue;
		}

		native private long ev_clone_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObject.UserData ev_clone()
		{
			long returnValue = ev_clone_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject.UserData __returnValue = new com.earthview.world.graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate, "CUserData");
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject.UserData)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CUserData");
			}
			return __returnValue;
		}
		native private long ev_clone_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.MovableObject.UserData ev_clone_NoVirtual()
		{
			long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject.UserData __returnValue = new com.earthview.world.graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate, "CUserData");
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject.UserData)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CUserData");
			}
			return __returnValue;
		}

		public enum MovableObjectType implements INativeEnum<MovableObjectType> {
			MOT_UnKnown(MovableObjectTypeHelper.ENUM_VALUES[0]),
			MOT_Las(MovableObjectTypeHelper.ENUM_VALUES[1]),
			MOT_MeshX(MovableObjectTypeHelper.ENUM_VALUES[2]),
			MOT_MeshXG(MovableObjectTypeHelper.ENUM_VALUES[3]);
			private int value;
			MovableObjectType(int i) {
				this.value = i;
			}
			public MovableObjectType getEnum(int val) {
				return toEnum(val);
			}
			public int getValue() {
				return this.value;
			}
			public static final MovableObjectType toEnum(int retval) {
				if(retval == MOT_UnKnown.value){
					return MOT_UnKnown;
				}
				else if(retval == MOT_Las.value){
					return MOT_Las;
				}
				else if(retval == MOT_MeshX.value){
					return MOT_MeshX;
				}
				else if(retval == MOT_MeshXG.value){
					return MOT_MeshXG;
				}
				throw new RuntimeException("wrong number in jni call for an enum!");
			}
		}
		static class MovableObjectTypeHelper {
			public static final int[] ENUM_VALUES = getEnumValues();
			private static native int[] getEnumValues();
		}
		
		native private int get_mObjectType_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObject.UserData.MovableObjectType get_mObjectType()
		{
			int jniValue = get_mObjectType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.MovableObject.UserData.MovableObjectType.toEnum(jniValue);
		}
		
		native private void set_mObjectType_MovableObjectType (long pNativeObject, int value);
		public void set_mObjectType(com.earthview.world.graphic.MovableObject.UserData.MovableObjectType mObjectType)
		{
			int mObjectTypeParamValue = mObjectType.getValue();
			
			set_mObjectType_MovableObjectType(this.nativeObject.pointer, mObjectTypeParamValue);
		}
		
		public UserData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public UserData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_ev_clone_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			}
		}
		
		public static UserData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			UserData obj = null;
 			if(baseObj instanceof UserData)
			{
				obj = (UserData)baseObj;
			} else {
				obj = new UserData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CUserData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class UserDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			UserData emptyInstance = new UserData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getAnimableObjectPtr_void_callback()
	{
		com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject returnValue = getAnimableObjectPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimableObjectPtr_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr()
	{
		long returnValue = getAnimableObjectPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject __returnValue = new com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectInternalAnimableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObjectInternalAnimableObject");
		}
		return __returnValue;
	}
	native private long getAnimableObjectPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr_NoVirtual()
	{
		long returnValue = getAnimableObjectPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject __returnValue = new com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectInternalAnimableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObjectInternalAnimableObject");
		}
		return __returnValue;
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public MovableObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMovableObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.MovableObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 */
	public MovableObject(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCMovableObjectProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.MovableObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  short getRenderQueueId_void_callback()
	{
		short returnValue = getRenderQueueId();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getRenderQueueId_void(long pNativeObject);
	/**
	 * 获取渲染队列ID
	 * @param  
	 */
	public short getRenderQueueId()
	{
		short returnValue = getRenderQueueId_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getRenderQueueId_void_NoVirtual(long pNativeObject);
	protected short getRenderQueueId_NoVirtual()
	{
		short returnValue = getRenderQueueId_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _notifyCreator_CMovableObjectFactory_callback(long ref_fact)
	{
		com.earthview.world.graphic.MovableObjectFactory ref_factParamValue = (ref_fact == 0L ? null : new com.earthview.world.graphic.MovableObjectFactory(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_factParamValue != null)
		{
		ref_factParamValue.setDelegate(true);
		ref_factParamValue.setInstancePointer(new InstancePointer(ref_fact));
		IClassFactory ref_factParamValueClassFactory = GlobalClassFactoryMap.get(ref_factParamValue.getCppInstanceTypeName());
		if (ref_factParamValueClassFactory != null)
		{
			ref_factParamValue.setDelegate(true);
			ref_factParamValue = (com.earthview.world.graphic.MovableObjectFactory)ref_factParamValueClassFactory.create();
			ref_factParamValue.setDelegate(true);
			ref_factParamValue.setInstancePointer(new InstancePointer(ref_fact));
		}
		}
		_notifyCreator(ref_factParamValue);
	}

	native private void _notifyCreator_CMovableObjectFactory(long pNativeObject, long ref_fact);
	/**
	 * 通报创建者只能内部使用
	 * @param fact 实例
	 */
	public void _notifyCreator(com.earthview.world.graphic.MovableObjectFactory ref_fact)
	{
		long ref_factParamValue = (ref_fact == null ? 0L : ref_fact.nativeObject.pointer);
		_notifyCreator_CMovableObjectFactory(this.nativeObject.pointer, ref_factParamValue);
	}
	native private void _notifyCreator_CMovableObjectFactory_NoVirtual(long pNativeObject, long ref_fact);
	protected void _notifyCreator_NoVirtual(com.earthview.world.graphic.MovableObjectFactory ref_fact)
	{
		long ref_factParamValue = (ref_fact == null ? 0L : ref_fact.nativeObject.pointer);
		_notifyCreator_CMovableObjectFactory_NoVirtual(this.nativeObject.pointer, ref_factParamValue);
	}

	protected  long _getCreator_void_callback()
	{
		com.earthview.world.graphic.MovableObjectFactory returnValue = _getCreator();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getCreator_void(long pNativeObject);
	/**
	 * 获取创建者如果有的话，获取，只能在内部使用
	 * @param  
	 * @return 移动对象工厂类
	 */
	public com.earthview.world.graphic.MovableObjectFactory _getCreator()
	{
		long returnValue = _getCreator_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObjectFactory __returnValue = new com.earthview.world.graphic.MovableObjectFactory(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObjectFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObjectFactory");
		}
		return __returnValue;
	}
	native private long _getCreator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MovableObjectFactory _getCreator_NoVirtual()
	{
		long returnValue = _getCreator_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObjectFactory __returnValue = new com.earthview.world.graphic.MovableObjectFactory(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObjectFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObjectFactory");
		}
		return __returnValue;
	}

	protected  void _notifyManager_CSceneManager_callback(long ref_mgr)
	{
		com.earthview.world.graphic.SceneManager ref_mgrParamValue = (ref_mgr == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_mgrParamValue != null)
		{
		ref_mgrParamValue.setDelegate(true);
		ref_mgrParamValue.setInstancePointer(new InstancePointer(ref_mgr));
		IClassFactory ref_mgrParamValueClassFactory = GlobalClassFactoryMap.get(ref_mgrParamValue.getCppInstanceTypeName());
		if (ref_mgrParamValueClassFactory != null)
		{
			ref_mgrParamValue.setDelegate(true);
			ref_mgrParamValue = (com.earthview.world.graphic.SceneManager)ref_mgrParamValueClassFactory.create();
			ref_mgrParamValue.setDelegate(true);
			ref_mgrParamValue.setInstancePointer(new InstancePointer(ref_mgr));
		}
		}
		_notifyManager(ref_mgrParamValue);
	}

	native private void _notifyManager_CSceneManager(long pNativeObject, long ref_mgr);
	/**
	 * 通报场景管理器只能内部使用
	 * @param man 场景管理者
	 */
	public void _notifyManager(com.earthview.world.graphic.SceneManager ref_mgr)
	{
		long ref_mgrParamValue = (ref_mgr == null ? 0L : ref_mgr.nativeObject.pointer);
		_notifyManager_CSceneManager(this.nativeObject.pointer, ref_mgrParamValue);
	}
	native private void _notifyManager_CSceneManager_NoVirtual(long pNativeObject, long ref_mgr);
	protected void _notifyManager_NoVirtual(com.earthview.world.graphic.SceneManager ref_mgr)
	{
		long ref_mgrParamValue = (ref_mgr == null ? 0L : ref_mgr.nativeObject.pointer);
		_notifyManager_CSceneManager_NoVirtual(this.nativeObject.pointer, ref_mgrParamValue);
	}

	protected  long _getManager_void_callback()
	{
		com.earthview.world.graphic.SceneManager returnValue = _getManager();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getManager_void(long pNativeObject);
	/**
	 * 获取场景管理器
	 * @param  
	 * @return 管理者
	 */
	public com.earthview.world.graphic.SceneManager _getManager()
	{
		long returnValue = _getManager_void(this.nativeObject.pointer);
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
	native private long _getManager_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneManager _getManager_NoVirtual()
	{
		long returnValue = _getManager_void_NoVirtual(this.nativeObject.pointer);
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

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取对象的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getMovableType_void_callback()
	{
		String returnValue = getMovableType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getMovableType_void(long pNativeObject);
	/**
	 * 获取移动对象类型的名称
	 * @param  
	 * @return 名称
	 */
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

	protected  long getParentNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = getParentNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getParentNode_void(long pNativeObject);
	/**
	 * 获取父节点一个移动对象可以附属在一个场景节点或者骨骼节点上
	 * @param  
	 * @return 节点名称
	 */
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
	native private long getParentNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getParentNode_NoVirtual()
	{
		long returnValue = getParentNode_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getParentSceneNode_void_callback()
	{
		com.earthview.world.graphic.SceneNode returnValue = getParentSceneNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getParentSceneNode_void(long pNativeObject);
	/**
	 * 获取对象的场景父节点
	 * @param  
	 * @return 场景节点
	 */
	public com.earthview.world.graphic.SceneNode getParentSceneNode()
	{
		long returnValue = getParentSceneNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}
	native private long getParentSceneNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneNode getParentSceneNode_NoVirtual()
	{
		long returnValue = getParentSceneNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}

	protected  boolean isParentTagPoint_void_callback()
	{
		boolean returnValue = isParentTagPoint();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isParentTagPoint_void(long pNativeObject);
	/**
	 * 判断父节点是否是骨骼节点
	 * @param  
	 * @return 成功，返回标签点，否则为场景节点
	 */
	public boolean isParentTagPoint()
	{
		boolean returnValue = isParentTagPoint_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isParentTagPoint_void_NoVirtual(long pNativeObject);
	protected boolean isParentTagPoint_NoVirtual()
	{
		boolean returnValue = isParentTagPoint_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
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
	/**
	 * 通报被挂接内部方法
	 * @param parent 父节点名称
	 * @param isTagPoint 是否挂接在节点下
	 */
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

	protected  void _notifyAttached_CNode_callback(long ref_parent)
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
		_notifyAttached(ref_parentParamValue);
	}

	native private void _notifyAttached_CNode(long pNativeObject, long ref_parent);
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode(this.nativeObject.pointer, ref_parentParamValue);
	}
	native private void _notifyAttached_CNode_NoVirtual(long pNativeObject, long ref_parent);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode_NoVirtual(this.nativeObject.pointer, ref_parentParamValue);
	}

	protected  boolean isAttached_void_callback()
	{
		boolean returnValue = isAttached();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isAttached_void(long pNativeObject);
	/**
	 * 是否已挂接
	 * @param  
	 * @return 为真，挂接
	 */
	public boolean isAttached()
	{
		boolean returnValue = isAttached_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAttached_void_NoVirtual(long pNativeObject);
	protected boolean isAttached_NoVirtual()
	{
		boolean returnValue = isAttached_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void detachFromParent_void_callback()
	{
		detachFromParent();
	}

	native private void detachFromParent_void(long pNativeObject);
	/**
	 * 将指定对象从父节点分离
	 * @param  
	 */
	public void detachFromParent()
	{
		detachFromParent_void(this.nativeObject.pointer);
	}
	native private void detachFromParent_void_NoVirtual(long pNativeObject);
	protected void detachFromParent_NoVirtual()
	{
		detachFromParent_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isInScene_void_callback()
	{
		boolean returnValue = isInScene();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isInScene_void(long pNativeObject);
	/**
	 * 指定节点是否是场景图中动态部分指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
	 * @param  
	 */
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

	protected  void _notifyMoved_void_callback()
	{
		_notifyMoved();
	}

	native private void _notifyMoved_void(long pNativeObject);
	/**
	 * 通报被移动内部方法
	 * @param  
	 */
	public void _notifyMoved()
	{
		_notifyMoved_void(this.nativeObject.pointer);
	}
	native private void _notifyMoved_void_NoVirtual(long pNativeObject);
	protected void _notifyMoved_NoVirtual()
	{
		_notifyMoved_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _notifyLightsQueried_LightList_callback(long lightList)
	{
		com.earthview.world.graphic.LightList lightListParamValue = (lightList == 0L ? null : new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate));
		if(lightListParamValue != null)
		{
		lightListParamValue.setDelegate(true);
		lightListParamValue.setInstancePointer(new InstancePointer(lightList));
		IClassFactory lightListParamValueClassFactory = GlobalClassFactoryMap.get(lightListParamValue.getCppInstanceTypeName());
		if (lightListParamValueClassFactory != null)
		{
			lightListParamValue.setDelegate(true);
			lightListParamValue = (com.earthview.world.graphic.LightList)lightListParamValueClassFactory.create();
			lightListParamValue.setDelegate(true);
			lightListParamValue.setInstancePointer(new InstancePointer(lightList));
		}
		}
		_notifyLightsQueried(lightListParamValue);
	}

	native private void _notifyLightsQueried_LightList(long pNativeObject, long lightList);
	/**
	 * 通报光源查询结束内部方法
	 * @param  
	 */
	public void _notifyLightsQueried(com.earthview.world.graphic.LightList lightList)
	{
		long lightListParamValue = (lightList == null ? 0L : lightList.nativeObject.pointer);
		_notifyLightsQueried_LightList(this.nativeObject.pointer, lightListParamValue);
	}
	native private void _notifyLightsQueried_LightList_NoVirtual(long pNativeObject, long lightList);
	protected void _notifyLightsQueried_NoVirtual(com.earthview.world.graphic.LightList lightList)
	{
		long lightListParamValue = (lightList == null ? 0L : lightList.nativeObject.pointer);
		_notifyLightsQueried_LightList_NoVirtual(this.nativeObject.pointer, lightListParamValue);
	}

	protected  void setLightQueriedListener_CLightQueriedListener_callback(long listener)
	{
		com.earthview.world.graphic.MovableObject.LightQueriedListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.MovableObject.LightQueriedListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.MovableObject.LightQueriedListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		setLightQueriedListener(listenerParamValue);
	}

	native private void setLightQueriedListener_CLightQueriedListener(long pNativeObject, long listener);
	public void setLightQueriedListener(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		setLightQueriedListener_CLightQueriedListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void setLightQueriedListener_CLightQueriedListener_NoVirtual(long pNativeObject, long listener);
	protected void setLightQueriedListener_NoVirtual(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		setLightQueriedListener_CLightQueriedListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  long getLightQueriedListener_void_callback()
	{
		com.earthview.world.graphic.MovableObject.LightQueriedListener returnValue = getLightQueriedListener();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightQueriedListener_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener()
	{
		long returnValue = getLightQueriedListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.LightQueriedListener __returnValue = new com.earthview.world.graphic.MovableObject.LightQueriedListener(CreatedWhenConstruct.CWC_NotToCreate, "CLightQueriedListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.LightQueriedListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLightQueriedListener");
		}
		return __returnValue;
	}
	native private long getLightQueriedListener_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener_NoVirtual()
	{
		long returnValue = getLightQueriedListener_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.LightQueriedListener __returnValue = new com.earthview.world.graphic.MovableObject.LightQueriedListener(CreatedWhenConstruct.CWC_NotToCreate, "CLightQueriedListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.LightQueriedListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLightQueriedListener");
		}
		return __returnValue;
	}

	protected  long getLightListUpdated_void_callback()
	{
		long returnValue = getLightListUpdated();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getLightListUpdated_void(long pNativeObject);
	public long getLightListUpdated()
	{
		long returnValue = getLightListUpdated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLightListUpdated_void_NoVirtual(long pNativeObject);
	protected long getLightListUpdated_NoVirtual()
	{
		long returnValue = getLightListUpdated_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setLightListUpdated_ev_uint32_callback(long frame)
	{
		long frameParamValue = frame;
		setLightListUpdated(frameParamValue);
	}

	native private void setLightListUpdated_ev_uint32(long pNativeObject, long frame);
	public void setLightListUpdated(long frame)
	{
		long frameParamValue = frame;
		setLightListUpdated_ev_uint32(this.nativeObject.pointer, frameParamValue);
	}
	native private void setLightListUpdated_ev_uint32_NoVirtual(long pNativeObject, long frame);
	protected void setLightListUpdated_NoVirtual(long frame)
	{
		long frameParamValue = frame;
		setLightListUpdated_ev_uint32_NoVirtual(this.nativeObject.pointer, frameParamValue);
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
	/**
	 * 通报当前相机内部方法
	 * @param cam 摄像机
	 */
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
	/**
	 * 获取模型坐标系下的包围盒
	 * @param  
	 * @return 边框盒
	 */
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
	/**
	 * 获取当前对象的球体限定半径
	 * @param  
	 * @return 边框盒
	 */
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

	native private long getWorldBoundingBox_ev_bool(long pNativeObject, boolean derive);
	/**
	 * 在世界坐标系中获取当前对象的边框盒
	 * @param derive 是否检索
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingBox_ev_bool(this.nativeObject.pointer, deriveParamValue);
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
	native private long getWorldBoundingBox_ev_bool_NoVirtual(long pNativeObject, boolean derive);
	protected com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox_NoVirtual(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingBox_ev_bool_NoVirtual(this.nativeObject.pointer, deriveParamValue);
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

	native private long getWorldBoundingBox_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
	{
		long returnValue = getWorldBoundingBox_void(this.nativeObject.pointer);
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
	native private long getWorldBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox_NoVirtual()
	{
		long returnValue = getWorldBoundingBox_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getWorldBoundingSphere_ev_bool_callback(boolean derive)
	{
		boolean deriveParamValue = derive;
		com.earthview.world.spatial.math.Sphere returnValue = getWorldBoundingSphere(deriveParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWorldBoundingSphere_ev_bool(long pNativeObject, boolean derive);
	/**
	 * 在世界空间中获取当前对象的边框球体
	 * @param derive 是否检索
	 */
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, deriveParamValue);
		com.earthview.world.spatial.math.Sphere __returnValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate, "CSphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Sphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphere");
		}
		return __returnValue;
	}
	native private long getWorldBoundingSphere_ev_bool_NoVirtual(long pNativeObject, boolean derive);
	protected com.earthview.world.spatial.math.Sphere getWorldBoundingSphere_NoVirtual(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingSphere_ev_bool_NoVirtual(this.nativeObject.pointer, deriveParamValue);
		com.earthview.world.spatial.math.Sphere __returnValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate, "CSphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Sphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphere");
		}
		return __returnValue;
	}

	protected  long getWorldBoundingSphere_void_callback()
	{
		com.earthview.world.spatial.math.Sphere returnValue = getWorldBoundingSphere();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWorldBoundingSphere_void(long pNativeObject);
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere()
	{
		long returnValue = getWorldBoundingSphere_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Sphere __returnValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate, "CSphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Sphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphere");
		}
		return __returnValue;
	}
	native private long getWorldBoundingSphere_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Sphere getWorldBoundingSphere_NoVirtual()
	{
		long returnValue = getWorldBoundingSphere_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Sphere __returnValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate, "CSphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Sphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphere");
		}
		return __returnValue;
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
	/**
	 * 更新渲染队列内部方法
	 * @param queue 渲染队列
	 */
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

	protected  void setVisible_ev_bool_callback(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible(visibleParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置是否可见
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

	protected  boolean getVisible_void_callback()
	{
		boolean returnValue = getVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 获取是否可见,与setVisible对应
	 * @param  
	 */
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

	protected  boolean isVisible_void_callback()
	{
		boolean returnValue = isVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取是否可见,严格的判断(裁剪判断、可视距离判断)
	 * @param  
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

	protected  void setRenderingMaxDistance_Real_callback(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance(distParamValue);
	}

	native private void setRenderingMaxDistance_Real(long pNativeObject, double dist);
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance_Real(this.nativeObject.pointer, distParamValue);
	}
	native private void setRenderingMaxDistance_Real_NoVirtual(long pNativeObject, double dist);
	protected void setRenderingMaxDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance_Real_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	protected  double getRenderingMaxDistance_void_callback()
	{
		double returnValue = getRenderingMaxDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRenderingMaxDistance_void(long pNativeObject);
	/**
	 * 获取该对象可渲染的距离下限
	 * @param  
	 */
	public double getRenderingMaxDistance()
	{
		double returnValue = getRenderingMaxDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingMaxDistance_void_NoVirtual(long pNativeObject);
	protected double getRenderingMaxDistance_NoVirtual()
	{
		double returnValue = getRenderingMaxDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRenderingMinDistance_Real_callback(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance(distParamValue);
	}

	native private void setRenderingMinDistance_Real(long pNativeObject, double dist);
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance_Real(this.nativeObject.pointer, distParamValue);
	}
	native private void setRenderingMinDistance_Real_NoVirtual(long pNativeObject, double dist);
	protected void setRenderingMinDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance_Real_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	protected  double getRenderingMinDistance_void_callback()
	{
		double returnValue = getRenderingMinDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRenderingMinDistance_void(long pNativeObject);
	/**
	 * 获取该对象可渲染的距离上限
	 * @param  
	 */
	public double getRenderingMinDistance()
	{
		double returnValue = getRenderingMinDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingMinDistance_void_NoVirtual(long pNativeObject);
	protected double getRenderingMinDistance_NoVirtual()
	{
		double returnValue = getRenderingMinDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRenderingMinPixelSize_Real_callback(double pixelSize)
	{
		double pixelSizeParamValue = pixelSize;
		setRenderingMinPixelSize(pixelSizeParamValue);
	}

	native private void setRenderingMinPixelSize_Real(long pNativeObject, double pixelSize);
	/**
	 * 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)必须先调用setUseMinPixelSize才能开启此功能
	 * @param pixelSize 像素大小
	 */
	public void setRenderingMinPixelSize(double pixelSize)
	{
		double pixelSizeParamValue = pixelSize;
		setRenderingMinPixelSize_Real(this.nativeObject.pointer, pixelSizeParamValue);
	}
	native private void setRenderingMinPixelSize_Real_NoVirtual(long pNativeObject, double pixelSize);
	protected void setRenderingMinPixelSize_NoVirtual(double pixelSize)
	{
		double pixelSizeParamValue = pixelSize;
		setRenderingMinPixelSize_Real_NoVirtual(this.nativeObject.pointer, pixelSizeParamValue);
	}

	protected  double getRenderingMinPixelSize_void_callback()
	{
		double returnValue = getRenderingMinPixelSize();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRenderingMinPixelSize_void(long pNativeObject);
	/**
	 * 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
	 * @param  
	 * @return 像素大小
	 */
	public double getRenderingMinPixelSize()
	{
		double returnValue = getRenderingMinPixelSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingMinPixelSize_void_NoVirtual(long pNativeObject);
	protected double getRenderingMinPixelSize_NoVirtual()
	{
		double returnValue = getRenderingMinPixelSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean getSelectable_void(long pNativeObject);
	/**
	 * 询问是否可选择
	 * @param  
	 */
	public boolean getSelectable()
	{
		boolean returnValue = getSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	/**
	 * 设置是否可选择
	 * @param  
	 */
	public void setSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private boolean getHighlightable_void(long pNativeObject);
	/**
	 * 询问是否可高亮
	 * @param  
	 */
	public boolean getHighlightable()
	{
		boolean returnValue = getHighlightable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHighlightable_ev_bool(long pNativeObject, boolean highlightable);
	/**
	 * 设置是否可高亮，如果不可高亮，则不能被Tool选中
	 * @param  
	 */
	public void setHighlightable(boolean highlightable)
	{
		boolean highlightableParamValue = highlightable;
		setHighlightable_ev_bool(this.nativeObject.pointer, highlightableParamValue);
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
	protected  void setSelectionColour_CColourValue_callback(long colour)
	{
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		setSelectionColour(colourParamValue);
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

	native private boolean getEditable_void(long pNativeObject);
	/**
	 * 询问是否可编辑
	 * @param  
	 */
	public boolean getEditable()
	{
		boolean returnValue = getEditable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEditable_ev_bool(long pNativeObject, boolean editable);
	/**
	 * 设置是否可编辑
	 * @param  
	 */
	public void setEditable(boolean editable)
	{
		boolean editableParamValue = editable;
		setEditable_ev_bool(this.nativeObject.pointer, editableParamValue);
	}
	protected  boolean setSelected_IntVector_callback(long objIndics)
	{
		com.earthview.world.core.IntVector objIndicsParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		objIndicsParamValue.setDelegate(true);
		objIndicsParamValue.setInstancePointer(new InstancePointer(objIndics));
		IClassFactory objIndicsParamValueClassFactory = GlobalClassFactoryMap.get(objIndicsParamValue.getCppInstanceTypeName());
		if (objIndicsParamValueClassFactory != null)
		{
			objIndicsParamValue.setDelegate(true);
			objIndicsParamValue = (com.earthview.world.core.IntVector)objIndicsParamValueClassFactory.create();
			objIndicsParamValue.setDelegate(true);
			objIndicsParamValue.setInstancePointer(new InstancePointer(objIndics));
		}
		boolean returnValue = setSelected(objIndicsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  long getSelected_void_callback()
	{
		com.earthview.world.core.IntVector returnValue = getSelected();
		long __returnValue = returnValue.nativeObject.pointer;
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

	native private void setUserData_CUserData(long pNativeObject, long data);
	public void setUserData(com.earthview.world.graphic.MovableObject.UserData data)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		setUserData_CUserData(this.nativeObject.pointer, dataParamValue);
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
	protected  boolean startEditing_ev_uint32_callback(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing(objectIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean startEditing_ev_uint32(long pNativeObject, long objectIndex);
	/**
	 * 开始编辑
	 * @param  
	 */
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
	/**
	 * 结束编辑
	 * @param  
	 */
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
	/**
	 * 获得编辑包围盒
	 * @param  
	 */
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
	/**
	 * 获得选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
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
	/**
	 * 设置选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
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

	protected  void setRenderQueueGroup_ev_uint8_callback(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup(queueIDParamValue);
	}

	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	/**
	 * 设置渲染队列组信息
	 * @param queueID 队列ID号
	 */
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
	/**
	 * 设置渲染队列组信息和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
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
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
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

	protected  long _getParentNodeFullTransform_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = _getParentNodeFullTransform();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getParentNodeFullTransform_void(long pNativeObject);
	/**
	 * 获取父节点的全部变化信息
	 * @param  
	 */
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

	protected  void setQueryFlags_ev_uint32_callback(long flags)
	{
		long flagsParamValue = flags;
		setQueryFlags(flagsParamValue);
	}

	native private void setQueryFlags_ev_uint32(long pNativeObject, long flags);
	/**
	 * 设置该对象的询问标识
	 * @param flags 
	 */
	public void setQueryFlags(long flags)
	{
		long flagsParamValue = flags;
		setQueryFlags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
	}
	native private void setQueryFlags_ev_uint32_NoVirtual(long pNativeObject, long flags);
	protected void setQueryFlags_NoVirtual(long flags)
	{
		long flagsParamValue = flags;
		setQueryFlags_ev_uint32_NoVirtual(this.nativeObject.pointer, flagsParamValue);
	}

	protected  void addQueryFlags_ev_uint32_callback(long flags)
	{
		long flagsParamValue = flags;
		addQueryFlags(flagsParamValue);
	}

	native private void addQueryFlags_ev_uint32(long pNativeObject, long flags);
	/**
	 * 添加询问标识
	 * @param flags 
	 */
	public void addQueryFlags(long flags)
	{
		long flagsParamValue = flags;
		addQueryFlags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
	}
	native private void addQueryFlags_ev_uint32_NoVirtual(long pNativeObject, long flags);
	protected void addQueryFlags_NoVirtual(long flags)
	{
		long flagsParamValue = flags;
		addQueryFlags_ev_uint32_NoVirtual(this.nativeObject.pointer, flagsParamValue);
	}

	protected  void removeQueryFlags_ev_uint32_callback(long flags)
	{
		long flagsParamValue = flags;
		removeQueryFlags(flagsParamValue);
	}

	native private void removeQueryFlags_ev_uint32(long pNativeObject, long flags);
	/**
	 * 移除询问标识
	 * @param flags 
	 */
	public void removeQueryFlags(long flags)
	{
		long flagsParamValue = flags;
		removeQueryFlags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
	}
	native private void removeQueryFlags_ev_uint32_NoVirtual(long pNativeObject, long flags);
	protected void removeQueryFlags_NoVirtual(long flags)
	{
		long flagsParamValue = flags;
		removeQueryFlags_ev_uint32_NoVirtual(this.nativeObject.pointer, flagsParamValue);
	}

	protected  long getQueryFlags_void_callback()
	{
		long returnValue = getQueryFlags();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getQueryFlags_void(long pNativeObject);
	/**
	 * 获取询问标识
	 * @param  
	 */
	public long getQueryFlags()
	{
		long returnValue = getQueryFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getQueryFlags_void_NoVirtual(long pNativeObject);
	protected long getQueryFlags_NoVirtual()
	{
		long returnValue = getQueryFlags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private static void setDefaultQueryFlags_ev_uint32(long flags);
	/**
	 * 为可移动对象实例设置默认询问标识
	 * @param flags 
	 */
	public static void setDefaultQueryFlags(long flags)
	{
		long flagsParamValue = flags;
		setDefaultQueryFlags_ev_uint32(flagsParamValue);
	}
	native private static long getDefaultQueryFlags_void();
	/**
	 * 获取可移动对象实例设置默认询问标识
	 * @param  
	 */
	public static long getDefaultQueryFlags()
	{
		long returnValue = getDefaultQueryFlags_void();
		return returnValue;
	}
	protected  void setVisibilityFlags_ev_uint32_callback(long flags)
	{
		long flagsParamValue = flags;
		setVisibilityFlags(flagsParamValue);
	}

	native private void setVisibilityFlags_ev_uint32(long pNativeObject, long flags);
	/**
	 * 设置对象可见标识
	 * @param flags 
	 */
	public void setVisibilityFlags(long flags)
	{
		long flagsParamValue = flags;
		setVisibilityFlags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
	}
	native private void setVisibilityFlags_ev_uint32_NoVirtual(long pNativeObject, long flags);
	protected void setVisibilityFlags_NoVirtual(long flags)
	{
		long flagsParamValue = flags;
		setVisibilityFlags_ev_uint32_NoVirtual(this.nativeObject.pointer, flagsParamValue);
	}

	protected  void addVisibilityFlags_ev_uint32_callback(long flags)
	{
		long flagsParamValue = flags;
		addVisibilityFlags(flagsParamValue);
	}

	native private void addVisibilityFlags_ev_uint32(long pNativeObject, long flags);
	/**
	 * 添加对象可见标识
	 * @param flags 
	 */
	public void addVisibilityFlags(long flags)
	{
		long flagsParamValue = flags;
		addVisibilityFlags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
	}
	native private void addVisibilityFlags_ev_uint32_NoVirtual(long pNativeObject, long flags);
	protected void addVisibilityFlags_NoVirtual(long flags)
	{
		long flagsParamValue = flags;
		addVisibilityFlags_ev_uint32_NoVirtual(this.nativeObject.pointer, flagsParamValue);
	}

	protected  void removeVisibilityFlags_ev_uint32_callback(long flags)
	{
		long flagsParamValue = flags;
		removeVisibilityFlags(flagsParamValue);
	}

	native private void removeVisibilityFlags_ev_uint32(long pNativeObject, long flags);
	/**
	 * 移除对象可见标识
	 * @param flags 
	 */
	public void removeVisibilityFlags(long flags)
	{
		long flagsParamValue = flags;
		removeVisibilityFlags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
	}
	native private void removeVisibilityFlags_ev_uint32_NoVirtual(long pNativeObject, long flags);
	protected void removeVisibilityFlags_NoVirtual(long flags)
	{
		long flagsParamValue = flags;
		removeVisibilityFlags_ev_uint32_NoVirtual(this.nativeObject.pointer, flagsParamValue);
	}

	protected  long getVisibilityFlags_void_callback()
	{
		long returnValue = getVisibilityFlags();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getVisibilityFlags_void(long pNativeObject);
	/**
	 * 获取对象可见标识
	 * @param flags 
	 */
	public long getVisibilityFlags()
	{
		long returnValue = getVisibilityFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVisibilityFlags_void_NoVirtual(long pNativeObject);
	protected long getVisibilityFlags_NoVirtual()
	{
		long returnValue = getVisibilityFlags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private static void setDefaultVisibilityFlags_ev_uint32(long flags);
	/**
	 * 设置默认可见标识为所有预期可移动对象实例设置
	 * @param flags 标识
	 */
	public static void setDefaultVisibilityFlags(long flags)
	{
		long flagsParamValue = flags;
		setDefaultVisibilityFlags_ev_uint32(flagsParamValue);
	}
	native private static long getDefaultVisibilityFlags_void();
	/**
	 * 获取默认可见标识为所有预期可移动对象实例设置
	 * @param  
	 */
	public static long getDefaultVisibilityFlags()
	{
		long returnValue = getDefaultVisibilityFlags_void();
		return returnValue;
	}
	protected  void addListener_CMovableObjectListener_callback(long ref_listener)
	{
		com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listenerParamValue = (ref_listener == 0L ? null : new com.earthview.world.graphic.MovableObject.MovableObjectListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_listenerParamValue != null)
		{
		ref_listenerParamValue.setDelegate(true);
		ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		IClassFactory ref_listenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_listenerParamValue.getCppInstanceTypeName());
		if (ref_listenerParamValueClassFactory != null)
		{
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue = (com.earthview.world.graphic.MovableObject.MovableObjectListener)ref_listenerParamValueClassFactory.create();
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		}
		}
		addListener(ref_listenerParamValue);
	}

	native private void addListener_CMovableObjectListener(long pNativeObject, long ref_listener);
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addListener_CMovableObjectListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void addListener_CMovableObjectListener_NoVirtual(long pNativeObject, long ref_listener);
	protected void addListener_NoVirtual(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addListener_CMovableObjectListener_NoVirtual(this.nativeObject.pointer, ref_listenerParamValue);
	}

	protected  void removeListener_CMovableObjectListener_callback(long listener)
	{
		com.earthview.world.graphic.MovableObject.MovableObjectListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.MovableObject.MovableObjectListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.MovableObject.MovableObjectListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		removeListener(listenerParamValue);
	}

	native private void removeListener_CMovableObjectListener(long pNativeObject, long listener);
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CMovableObjectListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void removeListener_CMovableObjectListener_NoVirtual(long pNativeObject, long listener);
	protected void removeListener_NoVirtual(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CMovableObjectListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  boolean existListener_CMovableObjectListener_callback(long listener)
	{
		com.earthview.world.graphic.MovableObject.MovableObjectListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.MovableObject.MovableObjectListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.MovableObject.MovableObjectListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		boolean returnValue = existListener(listenerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean existListener_CMovableObjectListener(long pNativeObject, long listener);
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean returnValue = existListener_CMovableObjectListener(this.nativeObject.pointer, listenerParamValue);
		return returnValue;
	}
	native private boolean existListener_CMovableObjectListener_NoVirtual(long pNativeObject, long listener);
	protected boolean existListener_NoVirtual(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean returnValue = existListener_CMovableObjectListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
		return returnValue;
	}

	protected  long getListenerCount_void_callback()
	{
		long returnValue = getListenerCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getListenerCount_void(long pNativeObject);
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		long returnValue = getListenerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getListenerCount_void_NoVirtual(long pNativeObject);
	protected long getListenerCount_NoVirtual()
	{
		long returnValue = getListenerCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getListener_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.MovableObject.MovableObjectListener returnValue = getListener(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.MovableObject.MovableObjectListener getListener(long index)
	{
		long indexParamValue = index;
		long returnValue = getListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.MovableObjectListener __returnValue = new com.earthview.world.graphic.MovableObject.MovableObjectListener(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.MovableObjectListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObjectListener");
		}
		return __returnValue;
	}
	native private long getListener_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.MovableObject.MovableObjectListener getListener_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getListener_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.MovableObjectListener __returnValue = new com.earthview.world.graphic.MovableObject.MovableObjectListener(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.MovableObjectListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObjectListener");
		}
		return __returnValue;
	}

	protected  long queryLights_void_callback()
	{
		com.earthview.world.graphic.LightList returnValue = queryLights();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long queryLights_void(long pNativeObject);
	/**
	 * 获取光源列表以距离可移动物体由近到远顺序排列
	 * @param  
	 */
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

	protected  long getLightMask_void_callback()
	{
		long returnValue = getLightMask();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getLightMask_void(long pNativeObject);
	/**
	 * 获取光线掩码默认所有光源影响对象
	 * @param  
	 */
	public long getLightMask()
	{
		long returnValue = getLightMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLightMask_void_NoVirtual(long pNativeObject);
	protected long getLightMask_NoVirtual()
	{
		long returnValue = getLightMask_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setLightMask_ev_uint32_callback(long lightMask)
	{
		long lightMaskParamValue = lightMask;
		setLightMask(lightMaskParamValue);
	}

	native private void setLightMask_ev_uint32(long pNativeObject, long lightMask);
	/**
	 * 设置光线掩码
	 * @param lightMask 
	 */
	public void setLightMask(long lightMask)
	{
		long lightMaskParamValue = lightMask;
		setLightMask_ev_uint32(this.nativeObject.pointer, lightMaskParamValue);
	}
	native private void setLightMask_ev_uint32_NoVirtual(long pNativeObject, long lightMask);
	protected void setLightMask_NoVirtual(long lightMask)
	{
		long lightMaskParamValue = lightMask;
		setLightMask_ev_uint32_NoVirtual(this.nativeObject.pointer, lightMaskParamValue);
	}

	protected  long _getLightList_void_callback()
	{
		com.earthview.world.graphic.LightList returnValue = _getLightList();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getLightList_void(long pNativeObject);
	/**
	 * 获取指向该对象当前光列表
	 * @param  
	 */
	public com.earthview.world.graphic.LightList _getLightList()
	{
		long returnValue = _getLightList_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
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
	native private long _getLightList_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.LightList _getLightList_NoVirtual()
	{
		long returnValue = _getLightList_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
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

	native private long getEdgeList_void(long pNativeObject);
	/**
	 * 获取边列表
	 * @param  
	 */
	public com.earthview.world.graphic.EdgeData getEdgeList()
	{
		long returnValue = getEdgeList_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}
	native private long getEdgeList_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.EdgeData getEdgeList_NoVirtual()
	{
		long returnValue = getEdgeList_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}

	native private boolean hasEdgeList_void(long pNativeObject);
	/**
	 * 是否存在边列表
	 * @param  
	 */
	public boolean hasEdgeList()
	{
		boolean returnValue = hasEdgeList_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasEdgeList_void_NoVirtual(long pNativeObject);
	protected boolean hasEdgeList_NoVirtual()
	{
		boolean returnValue = hasEdgeList_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDist, long flags);
	/**
	 * 获取阴影锥渲染对象的迭代器
	 * @param shadowTechnique 阴影技术
	 * @param light 光源
	 * @param indexBuffer 索引
	 * @param extrudeVertices 为真，在软件中挤压顶点后面的体积成为三维实体
	 * @param extrusionDist 距离
	 * @param flags 标识，默认为0
	 */
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDist, long flags)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistParamValue = extrusionDist;
		long flagsParamValue = flags;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistParamValue, flagsParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}
	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDist, long flags);
	protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDist, long flags)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistParamValue = extrusionDist;
		long flagsParamValue = flags;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistParamValue, flagsParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}

	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDist);
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDist)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistParamValue = extrusionDist;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}
	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDist);
	protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDist)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistParamValue = extrusionDist;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}

	native private long getLightCapBounds_void(long pNativeObject);
	/**
	 * 在世界空间下获取光源光罩的边界
	 * @param  
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
	{
		long returnValue = getLightCapBounds_void(this.nativeObject.pointer);
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
	native private long getLightCapBounds_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds_NoVirtual()
	{
		long returnValue = getLightCapBounds_void_NoVirtual(this.nativeObject.pointer);
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

	native private long getDarkCapBounds_CLight_Real(long pNativeObject, long light, double dirLightExtrusionDist);
	/**
	 * 在世界空间下获取黑暗光罩的边界
	 * @param light 
	 * @param dirLightExtrusionDist 
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		long lightParamValue = light.nativeObject.pointer;
		double dirLightExtrusionDistParamValue = dirLightExtrusionDist;
		long returnValue = getDarkCapBounds_CLight_Real(this.nativeObject.pointer, lightParamValue, dirLightExtrusionDistParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getDarkCapBounds_CLight_Real_NoVirtual(long pNativeObject, long light, double dirLightExtrusionDist);
	protected com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds_NoVirtual(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		long lightParamValue = light.nativeObject.pointer;
		double dirLightExtrusionDistParamValue = dirLightExtrusionDist;
		long returnValue = getDarkCapBounds_CLight_Real_NoVirtual(this.nativeObject.pointer, lightParamValue, dirLightExtrusionDistParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	protected  void setCastShadows_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setCastShadows(enabledParamValue);
	}

	native private void setCastShadows_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置投射阴影
	 * @param enabled 
	 */
	public void setCastShadows(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setCastShadows_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setCastShadows_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setCastShadows_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setCastShadows_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	native private boolean getCastShadows_void(long pNativeObject);
	/**
	 * 是否启用阴影投射
	 * @param  
	 */
	public boolean getCastShadows()
	{
		boolean returnValue = getCastShadows_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCastShadows_void_NoVirtual(long pNativeObject);
	protected boolean getCastShadows_NoVirtual()
	{
		boolean returnValue = getCastShadows_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getReceivesShadows_void_callback()
	{
		boolean returnValue = getReceivesShadows();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getReceivesShadows_void(long pNativeObject);
	/**
	 * 是否接收阴影
	 * @param  
	 */
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
	native private boolean isParentNodeLocal_void(long pNativeObject);
	/**
	 * 父节点是否用来存储局部变换矩阵
	 * @param  
	 */
	public boolean isParentNodeLocal()
	{
		boolean returnValue = isParentNodeLocal_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setParentNodelLocal_ev_bool(long pNativeObject, boolean local);
	/**
	 * 设置父节点是否用来存储局部变换矩阵
	 * @param  
	 */
	public void setParentNodelLocal(boolean local)
	{
		boolean localParamValue = local;
		setParentNodelLocal_ev_bool(this.nativeObject.pointer, localParamValue);
	}
	native private double getPointExtrusionDistance_CLight(long pNativeObject, long l);
	/**
	 * 获取点挂光源或聚光灯延伸距离
	 * @param l 
	 */
	public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		double returnValue = getPointExtrusionDistance_CLight(this.nativeObject.pointer, lParamValue);
		return returnValue;
	}
	native private double getPointExtrusionDistance_CLight_NoVirtual(long pNativeObject, long l);
	protected double getPointExtrusionDistance_NoVirtual(com.earthview.world.graphic.Light l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		double returnValue = getPointExtrusionDistance_CLight_NoVirtual(this.nativeObject.pointer, lParamValue);
		return returnValue;
	}

	protected  long getTypeFlags_void_callback()
	{
		long returnValue = getTypeFlags();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getTypeFlags_void(long pNativeObject);
	/**
	 * 获取可移动对象的类型标识
	 * @param  
	 */
	public long getTypeFlags()
	{
		long returnValue = getTypeFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTypeFlags_void_NoVirtual(long pNativeObject);
	protected long getTypeFlags_NoVirtual()
	{
		long returnValue = getTypeFlags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
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
	/**
	 * 访问可渲染对象允许迭代器遍历渲染实例，当被询问时，渲染对象将添加到渲染队列
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
	 */
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

	protected  void setDebugDisplayEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDebugDisplayEnabled(enabledParamValue);
	}

	native private void setDebugDisplayEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置调试该对象是否启用
	 * @param  
	 */
	public void setDebugDisplayEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setDebugDisplayEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setDebugDisplayEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDebugDisplayEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  boolean isDebugDisplayEnabled_void_callback()
	{
		boolean returnValue = isDebugDisplayEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDebugDisplayEnabled_void(long pNativeObject);
	/**
	 * 是否调试该对象是否启用
	 * @param  
	 */
	public boolean isDebugDisplayEnabled()
	{
		boolean returnValue = isDebugDisplayEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDebugDisplayEnabled_void_NoVirtual(long pNativeObject);
	protected boolean isDebugDisplayEnabled_NoVirtual()
	{
		boolean returnValue = isDebugDisplayEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public MovableObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MovableObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static MovableObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MovableObject obj = null;
 		if(baseObj instanceof MovableObject)
		{
			obj = (MovableObject)baseObj;
		} else {
			obj = new MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMovableObject");
			obj.increaseCast();
		}

		return obj;
	}
}
