package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolLongCircleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolLongCircle emptyInstance = new ToolLongCircle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
