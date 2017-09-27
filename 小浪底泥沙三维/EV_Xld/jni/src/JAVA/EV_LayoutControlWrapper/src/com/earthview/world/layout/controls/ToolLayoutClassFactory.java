package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolLayoutClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolLayout emptyInstance = new ToolLayout(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
