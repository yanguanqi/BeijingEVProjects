package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Color_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColor", new com.earthview.world.spatial.display.ColorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCColorProxy", new com.earthview.world.spatial.display.ColorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorBlend", new com.earthview.world.spatial.display.ColorBlendClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorFactory", new com.earthview.world.spatial.display.ColorFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCColorFactoryProxy", new com.earthview.world.spatial.display.ColorFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorRamp", new com.earthview.world.spatial.display.ColorRampClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCColorRampProxy", new com.earthview.world.spatial.display.ColorRampClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorRampFactory", new com.earthview.world.spatial.display.ColorRampFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCColorRampFactoryProxy", new com.earthview.world.spatial.display.ColorRampFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorSpaceConvert", new com.earthview.world.spatial.display.ColorSpaceConvertClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorTable", new com.earthview.world.spatial.display.ColorTableClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCColorTableProxy", new com.earthview.world.spatial.display.ColorTableClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CGradientColorRamp", new com.earthview.world.spatial.display.GradientColorRampClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCGradientColorRampProxy", new com.earthview.world.spatial.display.GradientColorRampClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CHsvColor", new com.earthview.world.spatial.display.HsvColorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCHsvColorProxy", new com.earthview.world.spatial.display.HsvColorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CMonitorParameter", new com.earthview.world.spatial.display.MonitorParameterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCMonitorParameterProxy", new com.earthview.world.spatial.display.MonitorParameterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CRandomColorRamp", new com.earthview.world.spatial.display.RandomColorRampClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCRandomColorRampProxy", new com.earthview.world.spatial.display.RandomColorRampClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CRgbColor", new com.earthview.world.spatial.display.RgbColorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCRgbColorProxy", new com.earthview.world.spatial.display.RgbColorClassFactory());
	}
}

