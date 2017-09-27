package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandGeometryUnionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandGeometryUnion emptyInstance = new CommandGeometryUnion(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
