package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolRightangleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolRightangle emptyInstance = new ToolRightangle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
