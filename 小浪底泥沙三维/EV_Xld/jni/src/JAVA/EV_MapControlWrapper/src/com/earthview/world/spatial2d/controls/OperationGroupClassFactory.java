package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OperationGroupClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OperationGroup emptyInstance = new OperationGroup(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
