package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Display_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Display::CBitmap", new com.earthview.world.display.BitmapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCBitmapProxy", new com.earthview.world.display.BitmapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CCacheBitmap", new com.earthview.world.display.CacheBitmapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCCacheBitmapProxy", new com.earthview.world.display.CacheBitmapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CDataPath", new com.earthview.world.display.DataPathClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCDataPathProxy", new com.earthview.world.display.DataPathClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CDataRegion", new com.earthview.world.display.DataRegionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CDisplayOptions", new com.earthview.world.display.DisplayOptionsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCDisplayOptionsProxy", new com.earthview.world.display.DisplayOptionsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CImageRender", new com.earthview.world.display.ImageRenderClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CMetaFile", new com.earthview.world.display.MetaFileClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCMetaFileProxy", new com.earthview.world.display.MetaFileClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CPageRect", new com.earthview.world.display.PageRectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CPageSize", new com.earthview.world.display.PageSizeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CPrintEngine", new com.earthview.world.display.PrintEngineClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCPrintEngineProxy", new com.earthview.world.display.PrintEngineClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CPrinter", new com.earthview.world.display.PrinterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCPrinterProxy", new com.earthview.world.display.PrinterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::PageInfo", new com.earthview.world.display.PageInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::CPrinterInfo", new com.earthview.world.display.PrinterInfoClassFactory());
	}
}

