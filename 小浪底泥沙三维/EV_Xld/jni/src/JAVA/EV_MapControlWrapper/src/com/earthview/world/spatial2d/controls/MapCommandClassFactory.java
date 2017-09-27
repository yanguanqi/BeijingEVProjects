package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapCommand emptyInstance = new MapCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
