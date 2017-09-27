package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AddVertexCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AddVertexCommand emptyInstance = new AddVertexCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
