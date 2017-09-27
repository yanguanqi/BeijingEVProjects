package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableConeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableCone emptyInstance = new MovableCone(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
