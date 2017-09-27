package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandSubmeshSelectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandSubmeshSelector emptyInstance = new CommandSubmeshSelector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
