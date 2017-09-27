package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolMidpointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolMidpoint emptyInstance = new ToolMidpoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
