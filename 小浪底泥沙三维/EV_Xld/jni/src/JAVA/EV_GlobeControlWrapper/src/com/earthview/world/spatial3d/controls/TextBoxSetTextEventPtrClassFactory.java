package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxSetTextEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextBoxSetTextEventPtr emptyInstance = new TextBoxSetTextEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
