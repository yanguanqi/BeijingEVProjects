package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GuieventqueueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Guieventqueue emptyInstance = new Guieventqueue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
