package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreeCachePublisher extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher", new VectorOctreeCachePublisherClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorOctreeCachePublisherProxy", new VectorOctreeCachePublisherClassFactory());
	}

	public VectorOctreeCachePublisher() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCVectorOctreeCachePublisherProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.VectorOctreeCachePublisher".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_callback(long pLayer, String path, String fileName, long fieldNames)
	{
		com.earthview.world.spatial3d.atlas.Iscenelayer pLayerParamValue = (pLayer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iscenelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLayerParamValue != null)
		{
		pLayerParamValue.setDelegate(true);
		pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		IClassFactory pLayerParamValueClassFactory = GlobalClassFactoryMap.get(pLayerParamValue.getCppInstanceTypeName());
		if (pLayerParamValueClassFactory != null)
		{
			pLayerParamValue.setDelegate(true);
			pLayerParamValue = (com.earthview.world.spatial3d.atlas.Iscenelayer)pLayerParamValueClassFactory.create();
			pLayerParamValue.setDelegate(true);
			pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		}
		}
		String pathParamValue = path;
		String fileNameParamValue = fileName;
		com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector fieldNamesParamValue = new com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector(CreatedWhenConstruct.CWC_NotToCreate);
		fieldNamesParamValue.setDelegate(true);
		fieldNamesParamValue.setInstancePointer(new InstancePointer(fieldNames));
		IClassFactory fieldNamesParamValueClassFactory = GlobalClassFactoryMap.get(fieldNamesParamValue.getCppInstanceTypeName());
		if (fieldNamesParamValueClassFactory != null)
		{
			fieldNamesParamValue.setDelegate(true);
			fieldNamesParamValue = (com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector)fieldNamesParamValueClassFactory.create();
			fieldNamesParamValue.setDelegate(true);
			fieldNamesParamValue.setInstancePointer(new InstancePointer(fieldNames));
		}
		boolean returnValue = publish(pLayerParamValue, pathParamValue, fileNameParamValue, fieldNamesParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(long pNativeObject, long pLayer, String path, String fileName, long fieldNames);
	public boolean publish(com.earthview.world.spatial3d.atlas.Iscenelayer pLayer, String path, String fileName, com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector fieldNames)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		String pathParamValue = path;
		String fileNameParamValue = fileName;
		long fieldNamesParamValue = fieldNames.nativeObject.pointer;
		boolean returnValue = publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(this.nativeObject.pointer, pLayerParamValue, pathParamValue, fileNameParamValue, fieldNamesParamValue);
		return returnValue;
	}
	native private boolean publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_NoVirtual(long pNativeObject, long pLayer, String path, String fileName, long fieldNames);
	protected boolean publish_NoVirtual(com.earthview.world.spatial3d.atlas.Iscenelayer pLayer, String path, String fileName, com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector fieldNames)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		String pathParamValue = path;
		String fileNameParamValue = fileName;
		long fieldNamesParamValue = fieldNames.nativeObject.pointer;
		boolean returnValue = publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_NoVirtual(this.nativeObject.pointer, pLayerParamValue, pathParamValue, fileNameParamValue, fieldNamesParamValue);
		return returnValue;
	}

	protected  void stopPublish_void_callback()
	{
		stopPublish();
	}

	native private void stopPublish_void(long pNativeObject);
	public void stopPublish()
	{
		stopPublish_void(this.nativeObject.pointer);
	}
	native private void stopPublish_void_NoVirtual(long pNativeObject);
	protected void stopPublish_NoVirtual()
	{
		stopPublish_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setPublishListener_CVectorOctreePublishListener_callback(long listener)
	{
		com.earthview.world.spatial3d.atlas.VectorOctreePublishListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.spatial3d.atlas.VectorOctreePublishListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.spatial3d.atlas.VectorOctreePublishListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		setPublishListener(listenerParamValue);
	}

	native private void setPublishListener_CVectorOctreePublishListener(long pNativeObject, long listener);
	public void setPublishListener(com.earthview.world.spatial3d.atlas.VectorOctreePublishListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		setPublishListener_CVectorOctreePublishListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void setPublishListener_CVectorOctreePublishListener_NoVirtual(long pNativeObject, long listener);
	protected void setPublishListener_NoVirtual(com.earthview.world.spatial3d.atlas.VectorOctreePublishListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		setPublishListener_CVectorOctreePublishListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  void setTotalCount_ev_uint32_callback(long count)
	{
		long countParamValue = count;
		setTotalCount(countParamValue);
	}

	native private void setTotalCount_ev_uint32(long pNativeObject, long count);
	public void setTotalCount(long count)
	{
		long countParamValue = count;
		setTotalCount_ev_uint32(this.nativeObject.pointer, countParamValue);
	}
	native private void setTotalCount_ev_uint32_NoVirtual(long pNativeObject, long count);
	protected void setTotalCount_NoVirtual(long count)
	{
		long countParamValue = count;
		setTotalCount_ev_uint32_NoVirtual(this.nativeObject.pointer, countParamValue);
	}

	protected  void updateProgressInformation_EVString_ev_uint32_callback(String info, long publishCount)
	{
		String infoParamValue = info;
		long publishCountParamValue = publishCount;
		updateProgressInformation(infoParamValue, publishCountParamValue);
	}

	native private void updateProgressInformation_EVString_ev_uint32(long pNativeObject, String info, long publishCount);
	public void updateProgressInformation(String info, long publishCount)
	{
		String infoParamValue = info;
		long publishCountParamValue = publishCount;
		updateProgressInformation_EVString_ev_uint32(this.nativeObject.pointer, infoParamValue, publishCountParamValue);
	}
	native private void updateProgressInformation_EVString_ev_uint32_NoVirtual(long pNativeObject, String info, long publishCount);
	protected void updateProgressInformation_NoVirtual(String info, long publishCount)
	{
		String infoParamValue = info;
		long publishCountParamValue = publishCount;
		updateProgressInformation_EVString_ev_uint32_NoVirtual(this.nativeObject.pointer, infoParamValue, publishCountParamValue);
	}

	protected  void setInformation_EVString_ev_int32_callback(String info, int percent)
	{
		String infoParamValue = info;
		int percentParamValue = percent;
		setInformation(infoParamValue, percentParamValue);
	}

	native private void setInformation_EVString_ev_int32(long pNativeObject, String info, int percent);
	public void setInformation(String info, int percent)
	{
		String infoParamValue = info;
		int percentParamValue = percent;
		setInformation_EVString_ev_int32(this.nativeObject.pointer, infoParamValue, percentParamValue);
	}
	native private void setInformation_EVString_ev_int32_NoVirtual(long pNativeObject, String info, int percent);
	protected void setInformation_NoVirtual(String info, int percent)
	{
		String infoParamValue = info;
		int percentParamValue = percent;
		setInformation_EVString_ev_int32_NoVirtual(this.nativeObject.pointer, infoParamValue, percentParamValue);
	}

	public VectorOctreeCachePublisher(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorOctreeCachePublisher(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(long pNativeObject, String method);
	native protected void register_stopPublish_void(long pNativeObject, String method);
	native protected void register_setPublishListener_CVectorOctreePublishListener(long pNativeObject, String method);
	native protected void register_setTotalCount_ev_uint32(long pNativeObject, String method);
	native protected void register_updateProgressInformation_EVString_ev_uint32(long pNativeObject, String method);
	native protected void register_setInformation_EVString_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(this.nativeObject.pointer, "publish_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_callback");
			this.register_stopPublish_void(this.nativeObject.pointer, "stopPublish_void_callback");
			this.register_setPublishListener_CVectorOctreePublishListener(this.nativeObject.pointer, "setPublishListener_CVectorOctreePublishListener_callback");
			this.register_setTotalCount_ev_uint32(this.nativeObject.pointer, "setTotalCount_ev_uint32_callback");
			this.register_updateProgressInformation_EVString_ev_uint32(this.nativeObject.pointer, "updateProgressInformation_EVString_ev_uint32_callback");
			this.register_setInformation_EVString_ev_int32(this.nativeObject.pointer, "setInformation_EVString_ev_int32_callback");
		}
	}
	
	public static VectorOctreeCachePublisher fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorOctreeCachePublisher obj = null;
 		if(baseObj instanceof VectorOctreeCachePublisher)
		{
			obj = (VectorOctreeCachePublisher)baseObj;
		} else {
			obj = new VectorOctreeCachePublisher(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorOctreeCachePublisher");
			obj.increaseCast();
		}

		return obj;
	}
}
