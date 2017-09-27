package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OperationManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OperationManager emptyInstance = new OperationManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
