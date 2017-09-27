package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolPagePanClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolPagePan emptyInstance = new ToolPagePan(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
