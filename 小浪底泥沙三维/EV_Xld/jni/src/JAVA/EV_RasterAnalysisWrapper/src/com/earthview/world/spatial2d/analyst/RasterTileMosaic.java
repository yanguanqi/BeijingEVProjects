package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterTileMosaic extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic", new RasterTileMosaicClassFactory());
	}

	public static class TileMosaicListener extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener", new TileMosaicListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::JCTileMosaicListenerProxy", new TileMosaicListenerClassFactory());
		}

		public TileMosaicListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCTileMosaicListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.spatial2d.analyst.RasterTileMosaic$TileMosaicListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void progressChanged_ev_uint8_callback(short percent)
		{
			short percentParamValue = percent;
			progressChanged(percentParamValue);
		}

		native private void progressChanged_ev_uint8(long pNativeObject, short percent);
		public void progressChanged(short percent)
		{
			short percentParamValue = percent;
			progressChanged_ev_uint8(this.nativeObject.pointer, percentParamValue);
		}
		native private void progressChanged_ev_uint8_NoVirtual(long pNativeObject, short percent);
		protected void progressChanged_NoVirtual(short percent)
		{
			short percentParamValue = percent;
			progressChanged_ev_uint8_NoVirtual(this.nativeObject.pointer, percentParamValue);
		}

		protected  void finished_void_callback()
		{
			finished();
		}

		native private void finished_void(long pNativeObject);
		public void finished()
		{
			finished_void(this.nativeObject.pointer);
		}
		native private void finished_void_NoVirtual(long pNativeObject);
		protected void finished_NoVirtual()
		{
			finished_void_NoVirtual(this.nativeObject.pointer);
		}

		public TileMosaicListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TileMosaicListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_progressChanged_ev_uint8(long pNativeObject, String method);
		native protected void register_finished_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_progressChanged_ev_uint8(this.nativeObject.pointer, "progressChanged_ev_uint8_callback");
				this.register_finished_void(this.nativeObject.pointer, "finished_void_callback");
			}
		}
		
		public static TileMosaicListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TileMosaicListener obj = null;
 			if(baseObj instanceof TileMosaicListener)
			{
				obj = (TileMosaicListener)baseObj;
			} else {
				obj = new TileMosaicListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CTileMosaicListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TileMosaicListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TileMosaicListener emptyInstance = new TileMosaicListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public RasterTileMosaic() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRasterTileMosaic", null);
	}

	native private boolean mosaic_ITileDataset_IRasterDataset_CTileMosaicListener(long pNativeObject, long pTileDataset, long pDstDataset, long pListener);
	public boolean mosaic(com.earthview.world.spatial.Itiledataset pTileDataset, com.earthview.world.spatial.geodataset.Irasterdataset pDstDataset, com.earthview.world.spatial2d.analyst.RasterTileMosaic.TileMosaicListener pListener)
	{
		long pTileDatasetParamValue = (pTileDataset == null ? 0L : pTileDataset.nativeObject.pointer);
		long pDstDatasetParamValue = (pDstDataset == null ? 0L : pDstDataset.nativeObject.pointer);
		long pListenerParamValue = (pListener == null ? 0L : pListener.nativeObject.pointer);
		boolean returnValue = mosaic_ITileDataset_IRasterDataset_CTileMosaicListener(this.nativeObject.pointer, pTileDatasetParamValue, pDstDatasetParamValue, pListenerParamValue);
		return returnValue;
	}
	public RasterTileMosaic(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterTileMosaic(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RasterTileMosaic fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterTileMosaic obj = null;
 		if(baseObj instanceof RasterTileMosaic)
		{
			obj = (RasterTileMosaic)baseObj;
		} else {
			obj = new RasterTileMosaic(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterTileMosaic");
			obj.increaseCast();
		}

		return obj;
	}
}
