package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextOrigintrackLine extends com.earthview.world.graphic.Ilatticetexteffect {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextOrigintrackLine", new TextOrigintrackLineClassFactory());
	}

	public TextOrigintrackLine(long argb) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer argbPtr = new BasePointer(argb);
		list.add("argb", argbPtr.get());
		Create("CTextOrigintrackLine", list);
	}

	public TextOrigintrackLine(com.earthview.world.graphic.ColourValue color) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer colorPtr = new BasePointer(color);
		list.add("color", colorPtr.get());
		Create("CTextOrigintrackLine", list);
	}

	public TextOrigintrackLine() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTextOrigintrackLine", null);
	}

	public TextOrigintrackLine(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextOrigintrackLine(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextOrigintrackLine fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextOrigintrackLine obj = null;
 		if(baseObj instanceof TextOrigintrackLine)
		{
			obj = (TextOrigintrackLine)baseObj;
		} else {
			obj = new TextOrigintrackLine(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextOrigintrackLine");
			obj.increaseCast();
		}

		return obj;
	}
}
