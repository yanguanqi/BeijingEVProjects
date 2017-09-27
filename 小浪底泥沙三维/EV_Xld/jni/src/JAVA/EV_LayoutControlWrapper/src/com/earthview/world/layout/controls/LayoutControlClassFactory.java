package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayoutControlClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayoutControl emptyInstance = new LayoutControl(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
