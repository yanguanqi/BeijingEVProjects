using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Color_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColor", new EarthView.World.Spatial.Display.ColorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorProxy", new EarthView.World.Spatial.Display.ColorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorBlend", new EarthView.World.Spatial.Display.ColorBlendClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorFactory", new EarthView.World.Spatial.Display.ColorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorFactoryProxy", new EarthView.World.Spatial.Display.ColorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorRamp", new EarthView.World.Spatial.Display.ColorRampClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorRampProxy", new EarthView.World.Spatial.Display.ColorRampClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorRampFactory", new EarthView.World.Spatial.Display.ColorRampFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorRampFactoryProxy", new EarthView.World.Spatial.Display.ColorRampFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorSpaceConvert", new EarthView.World.Spatial.Display.ColorSpaceConvertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorTable", new EarthView.World.Spatial.Display.ColorTableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorTableProxy", new EarthView.World.Spatial.Display.ColorTableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CGradientColorRamp", new EarthView.World.Spatial.Display.GradientColorRampClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CGradientColorRampProxy", new EarthView.World.Spatial.Display.GradientColorRampClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CHsvColor", new EarthView.World.Spatial.Display.HsvColorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CHsvColorProxy", new EarthView.World.Spatial.Display.HsvColorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CMonitorParameter", new EarthView.World.Spatial.Display.MonitorParameterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CMonitorParameterProxy", new EarthView.World.Spatial.Display.MonitorParameterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CRandomColorRamp", new EarthView.World.Spatial.Display.RandomColorRampClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CRandomColorRampProxy", new EarthView.World.Spatial.Display.RandomColorRampClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CRgbColor", new EarthView.World.Spatial.Display.RgbColorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CRgbColorProxy", new EarthView.World.Spatial.Display.RgbColorClassFactory());
	}
}

