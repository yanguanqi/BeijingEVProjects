package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatticeTextBox extends com.earthview.world.graphic.Ilatticetexteffect {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLatticeTextBox", new LatticeTextBoxClassFactory());
	}

	public LatticeTextBox(long argb) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer argbPtr = new BasePointer(argb);
		list.add("argb", argbPtr.get());
		Create("CLatticeTextBox", list);
	}

	public LatticeTextBox(com.earthview.world.graphic.ColourValue color) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer colorPtr = new BasePointer(color);
		list.add("color", colorPtr.get());
		Create("CLatticeTextBox", list);
	}

	public LatticeTextBox() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLatticeTextBox", null);
	}

	public LatticeTextBox(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LatticeTextBox(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LatticeTextBox fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LatticeTextBox obj = null;
 		if(baseObj instanceof LatticeTextBox)
		{
			obj = (LatticeTextBox)baseObj;
		} else {
			obj = new LatticeTextBox(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLatticeTextBox");
			obj.increaseCast();
		}

		return obj;
	}
}
