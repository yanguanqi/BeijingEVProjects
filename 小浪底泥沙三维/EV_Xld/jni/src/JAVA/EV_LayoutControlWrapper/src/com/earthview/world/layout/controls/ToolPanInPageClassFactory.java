package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolPanInPageClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolPanInPage emptyInstance = new ToolPanInPage(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
