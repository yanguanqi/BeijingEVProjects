package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayoutOperationManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayoutOperationManager emptyInstance = new LayoutOperationManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
