package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolRectangleSelectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolRectangleSelect emptyInstance = new ToolRectangleSelect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
