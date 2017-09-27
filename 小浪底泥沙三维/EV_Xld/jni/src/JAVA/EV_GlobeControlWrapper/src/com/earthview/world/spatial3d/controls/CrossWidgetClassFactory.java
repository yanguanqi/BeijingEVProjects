package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CrossWidgetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CrossWidget emptyInstance = new CrossWidget(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
