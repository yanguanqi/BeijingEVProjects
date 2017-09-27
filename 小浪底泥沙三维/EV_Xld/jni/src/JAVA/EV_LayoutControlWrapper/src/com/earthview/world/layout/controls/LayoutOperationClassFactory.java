package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayoutOperationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayoutOperation emptyInstance = new LayoutOperation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
