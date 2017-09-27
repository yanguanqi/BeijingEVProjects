package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolOffsetObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolOffsetObject emptyInstance = new ToolOffsetObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
