package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolReconditionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolRecondition emptyInstance = new ToolRecondition(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
