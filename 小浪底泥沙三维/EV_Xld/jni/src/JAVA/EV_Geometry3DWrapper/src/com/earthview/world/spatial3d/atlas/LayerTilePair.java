package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerTilePair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLayerTilePair", new LayerTilePairClassFactory());
	}

	public LayerTilePair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLayerTilePair", null);
	}

	public LayerTilePair(com.earthview.world.spatial3d.atlas.Iclampscenelayer layer, com.earthview.world.spatial.TileData tile) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer layerPtr = new BasePointer(layer);
		list.add("layer", layerPtr.get());
		BasePointer tilePtr = new BasePointer(tile);
		list.add("tile", tilePtr.get());
		Create("CLayerTilePair", list);
	}

	native private long get_mpLayer_void(long pNativeObject);
	public com.earthview.world.spatial3d.atlas.Iclampscenelayer get_mpLayer()
	{
		long jniValue = get_mpLayer_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iclampscenelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iclampscenelayer(CreatedWhenConstruct.CWC_NotToCreate, "IClampSceneLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iclampscenelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IClampSceneLayer");
		}
		return __returnValue;
	}
	
	native private void set_mpLayer_IClampSceneLayer (long pNativeObject, long value);
	public void set_mpLayer(com.earthview.world.spatial3d.atlas.Iclampscenelayer mpLayer)
	{
		long mpLayerParamValue = (mpLayer == null ? 0L : mpLayer.nativeObject.pointer);
		
		set_mpLayer_IClampSceneLayer(this.nativeObject.pointer, mpLayerParamValue);
	}
	
	native private long get_mTileData_void(long pNativeObject);
	public com.earthview.world.spatial.TileData get_mTileData()
	{
		long jniValue = get_mTileData_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.TileData __returnValue = new com.earthview.world.spatial.TileData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CTileData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileData");
		}
		return __returnValue;
	}
	
	native private void set_mTileData_CTileData (long pNativeObject, long value);
	public void set_mTileData(com.earthview.world.spatial.TileData mTileData)
	{
		long mTileDataParamValue = mTileData.nativeObject.pointer;
		
		set_mTileData_CTileData(this.nativeObject.pointer, mTileDataParamValue);
	}
	
	public LayerTilePair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerTilePair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LayerTilePair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerTilePair obj = null;
 		if(baseObj instanceof LayerTilePair)
		{
			obj = (LayerTilePair)baseObj;
		} else {
			obj = new LayerTilePair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerTilePair");
			obj.increaseCast();
		}

		return obj;
	}
}
