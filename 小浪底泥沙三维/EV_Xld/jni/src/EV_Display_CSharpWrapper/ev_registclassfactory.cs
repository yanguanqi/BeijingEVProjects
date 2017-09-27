using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Display_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CBitmap", new EarthView.World.Display.BitmapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CBitmapProxy", new EarthView.World.Display.BitmapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CCacheBitmap", new EarthView.World.Display.CacheBitmapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CCacheBitmapProxy", new EarthView.World.Display.CacheBitmapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CDataPath", new EarthView.World.Display.DataPathClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CDataPathProxy", new EarthView.World.Display.DataPathClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CDataRegion", new EarthView.World.Display.DataRegionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CDisplayOptions", new EarthView.World.Display.DisplayOptionsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CDisplayOptionsProxy", new EarthView.World.Display.DisplayOptionsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CImageRender", new EarthView.World.Display.ImageRenderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CMetaFile", new EarthView.World.Display.MetaFileClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CMetaFileProxy", new EarthView.World.Display.MetaFileClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CPageRect", new EarthView.World.Display.PageRectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CPageSize", new EarthView.World.Display.PageSizeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CPrintEngine", new EarthView.World.Display.PrintEngineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CPrintEngineProxy", new EarthView.World.Display.PrintEngineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CPrinter", new EarthView.World.Display.PrinterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CPrinterProxy", new EarthView.World.Display.PrinterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::PageInfo", new EarthView.World.Display.PageInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::CPrinterInfo", new EarthView.World.Display.PrinterInfoClassFactory());
	}
}

