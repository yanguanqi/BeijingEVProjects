package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RedoCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RedoCommand emptyInstance = new RedoCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
