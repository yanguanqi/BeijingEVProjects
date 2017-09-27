package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Struct containing information about a material lod change event for entities.
public class EntityMaterialLodChangedEvent extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::EntityMaterialLodChangedEvent", new EntityMaterialLodChangedEventClassFactory());
	}

	public EntityMaterialLodChangedEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("EntityMaterialLodChangedEvent", null);
	}

	native private long get_subEntity_void(long pNativeObject);
	public com.earthview.world.graphic.SubEntity get_subEntity()
	{
		long jniValue = get_subEntity_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubEntity __returnValue = new com.earthview.world.graphic.SubEntity(CreatedWhenConstruct.CWC_NotToCreate, "CSubEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubEntity");
		}
		return __returnValue;
	}
	
	native private void set_subEntity_CSubEntity (long pNativeObject, long value);
	public void set_subEntity(com.earthview.world.graphic.SubEntity subEntity)
	{
		long subEntityParamValue = (subEntity == null ? 0L : subEntity.nativeObject.pointer);
		
		set_subEntity_CSubEntity(this.nativeObject.pointer, subEntityParamValue);
	}
	
	native private long get_camera_void(long pNativeObject);
	public com.earthview.world.graphic.Camera get_camera()
	{
		long jniValue = get_camera_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCamera");
		}
		return __returnValue;
	}
	
	native private void set_camera_CCamera (long pNativeObject, long value);
	public void set_camera(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		
		set_camera_CCamera(this.nativeObject.pointer, cameraParamValue);
	}
	
	native private double get_lodValue_void(long pNativeObject);
	public double get_lodValue()
	{
		double jniValue = get_lodValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_lodValue_Real (long pNativeObject, double value);
	public void set_lodValue(double lodValue)
	{
		double lodValueParamValue = lodValue;
		
		set_lodValue_Real(this.nativeObject.pointer, lodValueParamValue);
	}
	
	native private int get_previousLodIndex_void(long pNativeObject);
	public int get_previousLodIndex()
	{
		int jniValue = get_previousLodIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_previousLodIndex_ev_uint16 (long pNativeObject, int value);
	public void set_previousLodIndex(int previousLodIndex)
	{
		int previousLodIndexParamValue = previousLodIndex;
		
		set_previousLodIndex_ev_uint16(this.nativeObject.pointer, previousLodIndexParamValue);
	}
	
	native private int get_newLodIndex_void(long pNativeObject);
	public int get_newLodIndex()
	{
		int jniValue = get_newLodIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_newLodIndex_ev_uint16 (long pNativeObject, int value);
	public void set_newLodIndex(int newLodIndex)
	{
		int newLodIndexParamValue = newLodIndex;
		
		set_newLodIndex_ev_uint16(this.nativeObject.pointer, newLodIndexParamValue);
	}
	
	public EntityMaterialLodChangedEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EntityMaterialLodChangedEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EntityMaterialLodChangedEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EntityMaterialLodChangedEvent obj = null;
 		if(baseObj instanceof EntityMaterialLodChangedEvent)
		{
			obj = (EntityMaterialLodChangedEvent)baseObj;
		} else {
			obj = new EntityMaterialLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EntityMaterialLodChangedEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
