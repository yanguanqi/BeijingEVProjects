package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WidgetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Widget emptyInstance = new Widget(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
