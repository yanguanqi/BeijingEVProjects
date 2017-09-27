package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayoutControlAgentClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayoutControlAgent emptyInstance = new LayoutControlAgent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
