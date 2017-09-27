package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WideLineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WideLine emptyInstance = new WideLine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
