package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxSetPositionEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextBoxSetPositionEventPtr emptyInstance = new TextBoxSetPositionEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
