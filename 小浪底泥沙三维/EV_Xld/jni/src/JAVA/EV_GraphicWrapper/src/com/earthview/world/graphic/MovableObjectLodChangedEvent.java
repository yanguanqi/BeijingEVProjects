package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Struct containing information about a lod change event for movable objects.
public class MovableObjectLodChangedEvent extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::MovableObjectLodChangedEvent", new MovableObjectLodChangedEventClassFactory());
	}

	public MovableObjectLodChangedEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MovableObjectLodChangedEvent", null);
	}

	native private long get_movableObject_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject get_movableObject()
	{
		long jniValue = get_movableObject_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_movableObject_CMovableObject (long pNativeObject, long value);
	public void set_movableObject(com.earthview.world.graphic.MovableObject movableObject)
	{
		long movableObjectParamValue = (movableObject == null ? 0L : movableObject.nativeObject.pointer);
		
		set_movableObject_CMovableObject(this.nativeObject.pointer, movableObjectParamValue);
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
	
	public MovableObjectLodChangedEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MovableObjectLodChangedEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MovableObjectLodChangedEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MovableObjectLodChangedEvent obj = null;
 		if(baseObj instanceof MovableObjectLodChangedEvent)
		{
			obj = (MovableObjectLodChangedEvent)baseObj;
		} else {
			obj = new MovableObjectLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MovableObjectLodChangedEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
