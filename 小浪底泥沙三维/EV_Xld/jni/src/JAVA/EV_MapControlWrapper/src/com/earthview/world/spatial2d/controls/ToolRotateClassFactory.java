package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolRotateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolRotate emptyInstance = new ToolRotate(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
