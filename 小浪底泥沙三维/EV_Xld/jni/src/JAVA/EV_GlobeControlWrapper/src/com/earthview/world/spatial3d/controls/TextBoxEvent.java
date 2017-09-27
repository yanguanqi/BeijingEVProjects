package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTextBoxEvent", new TextBoxEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TextBoxEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTextBoxEvent", null);
	}

	public TextBoxEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextBoxEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextBoxEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextBoxEvent obj = null;
 		if(baseObj instanceof TextBoxEvent)
		{
			obj = (TextBoxEvent)baseObj;
		} else {
			obj = new TextBoxEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextBoxEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
