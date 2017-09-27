using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_IndustryGraphic_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject", new EarthView.IndustryEngine.IndustryGraphic.BaseBandingObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObjectProxy", new EarthView.IndustryEngine.IndustryGraphic.BaseBandingObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CIndustryUtility", new EarthView.IndustryEngine.IndustryGraphic.IndustryUtilityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d", new EarthView.IndustryEngine.IndustryGraphic.MultiTexturePoint3dClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager", new EarthView.IndustryEngine.IndustryGraphic.PolylineFeatureManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManagerProxy", new EarthView.IndustryEngine.IndustryGraphic.PolylineFeatureManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CSymbolTool", new EarthView.IndustryEngine.IndustryGraphic.SymbolToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature", new EarthView.IndustryEngine.IndustryGraphic.PolylineFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureProxy", new EarthView.IndustryEngine.IndustryGraphic.PolylineFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon", new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent", new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject", new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObjectProxy", new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap", new EarthView.IndustryEngine.IndustryGraphic.ScutcheonMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager", new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonText", new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextProxy", new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextLineMovable", new EarthView.IndustryEngine.IndustryGraphic.TextLineMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextLineMovableProxy", new EarthView.IndustryEngine.IndustryGraphic.TextLineMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextLineMovable::CTextLineRenderable", new EarthView.IndustryEngine.IndustryGraphic.TextLineMovable.TextLineRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextLineMovable::CTextLineRenderableProxy", new EarthView.IndustryEngine.IndustryGraphic.TextLineMovable.TextLineRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextFrameMovable", new EarthView.IndustryEngine.IndustryGraphic.TextFrameMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextFrameMovableProxy", new EarthView.IndustryEngine.IndustryGraphic.TextFrameMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextFrameMovable::CTextFrameRenderable", new EarthView.IndustryEngine.IndustryGraphic.TextFrameMovable.TextFrameRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextFrameMovable::CTextFrameRenderableProxy", new EarthView.IndustryEngine.IndustryGraphic.TextFrameMovable.TextFrameRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextOverlayMovable", new EarthView.IndustryEngine.IndustryGraphic.TextOverlayMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextOverlayMovableProxy", new EarthView.IndustryEngine.IndustryGraphic.TextOverlayMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextOverlayMovable::CTextOverlayRenderable", new EarthView.IndustryEngine.IndustryGraphic.TextOverlayMovable.TextOverlayRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CTextOverlayMovable::CTextOverlayRenderableProxy", new EarthView.IndustryEngine.IndustryGraphic.TextOverlayMovable.TextOverlayRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent", new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject", new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObjectProxy", new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener", new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListenerProxy", new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CSimpleline", new EarthView.IndustryEngine.IndustryGraphic.SimplelineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CSimplelineProxy", new EarthView.IndustryEngine.IndustryGraphic.SimplelineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CRaySelectedListener", new EarthView.IndustryEngine.IndustryGraphic.RaySelectedListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CRaySelectedListenerProxy", new EarthView.IndustryEngine.IndustryGraphic.RaySelectedListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CCustomEntity", new EarthView.IndustryEngine.IndustryGraphic.CustomEntityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CCustomEntityProxy", new EarthView.IndustryEngine.IndustryGraphic.CustomEntityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CCustomEntityFactory", new EarthView.IndustryEngine.IndustryGraphic.CustomEntityFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CCustomEntityFactoryProxy", new EarthView.IndustryEngine.IndustryGraphic.CustomEntityFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CSimplelineManager", new EarthView.IndustryEngine.IndustryGraphic.SimplelineManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CSimplelineManagerProxy", new EarthView.IndustryEngine.IndustryGraphic.SimplelineManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline", new EarthView.IndustryEngine.IndustryGraphic.SubSimplelineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CSubSimplelineProxy", new EarthView.IndustryEngine.IndustryGraphic.SubSimplelineClassFactory());
	}
}

