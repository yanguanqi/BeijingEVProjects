package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WidgetListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WidgetList emptyInstance = new WidgetList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
