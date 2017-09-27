package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolPanClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolPan emptyInstance = new ToolPan(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
