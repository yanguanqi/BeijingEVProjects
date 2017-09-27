package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlRequestData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CKmlRequestData", new KmlRequestDataClassFactory());
	}

	native private long get_mpGeoObject_void(long pNativeObject);
	public com.earthview.world.spatial.kml.GeoObjectExtension get_mpGeoObject()
	{
		long jniValue = get_mpGeoObject_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.GeoObjectExtension __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObjectExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtension");
		}
		return __returnValue;
	}
	
	native private void set_mpGeoObject_CGeoObjectExtension (long pNativeObject, long value);
	public void set_mpGeoObject(com.earthview.world.spatial.kml.GeoObjectExtension mpGeoObject)
	{
		long mpGeoObjectParamValue = (mpGeoObject == null ? 0L : mpGeoObject.nativeObject.pointer);
		
		set_mpGeoObject_CGeoObjectExtension(this.nativeObject.pointer, mpGeoObjectParamValue);
	}
	
	native private long get_mpKmlDoc_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlDocument get_mpKmlDoc()
	{
		long jniValue = get_mpKmlDoc_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	
	native private void set_mpKmlDoc_CKmlDocument (long pNativeObject, long value);
	public void set_mpKmlDoc(com.earthview.world.spatial.kml.KmlDocument mpKmlDoc)
	{
		long mpKmlDocParamValue = (mpKmlDoc == null ? 0L : mpKmlDoc.nativeObject.pointer);
		
		set_mpKmlDoc_CKmlDocument(this.nativeObject.pointer, mpKmlDocParamValue);
	}
	
	native private long get_mpParentKmlDoc_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlDocument get_mpParentKmlDoc()
	{
		long jniValue = get_mpParentKmlDoc_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	
	native private void set_mpParentKmlDoc_CKmlDocument (long pNativeObject, long value);
	public void set_mpParentKmlDoc(com.earthview.world.spatial.kml.KmlDocument mpParentKmlDoc)
	{
		long mpParentKmlDocParamValue = (mpParentKmlDoc == null ? 0L : mpParentKmlDoc.nativeObject.pointer);
		
		set_mpParentKmlDoc_CKmlDocument(this.nativeObject.pointer, mpParentKmlDocParamValue);
	}
	
	native private long get_mpCamera_void(long pNativeObject);
	public com.earthview.world.graphic.Camera get_mpCamera()
	{
		long jniValue = get_mpCamera_void(this.nativeObject.pointer);
		
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
	
	native private long get_mpLayer_void(long pNativeObject);
	public com.earthview.world.spatial3d.atlas.Iglobelayer get_mpLayer()
	{
		long jniValue = get_mpLayer_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}
	
	native private void set_mpLayer_IGlobeLayer (long pNativeObject, long value);
	public void set_mpLayer(com.earthview.world.spatial3d.atlas.Iglobelayer mpLayer)
	{
		long mpLayerParamValue = (mpLayer == null ? 0L : mpLayer.nativeObject.pointer);
		
		set_mpLayer_IGlobeLayer(this.nativeObject.pointer, mpLayerParamValue);
	}
	
	public KmlRequestData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlRequestData", null);
	}

	public KmlRequestData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlRequestData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlRequestData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlRequestData obj = null;
 		if(baseObj instanceof KmlRequestData)
		{
			obj = (KmlRequestData)baseObj;
		} else {
			obj = new KmlRequestData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlRequestData");
			obj.increaseCast();
		}

		return obj;
	}
}
