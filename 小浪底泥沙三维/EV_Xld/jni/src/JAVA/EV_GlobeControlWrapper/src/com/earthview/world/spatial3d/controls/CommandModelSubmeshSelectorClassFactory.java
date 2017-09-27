package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandModelSubmeshSelectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandModelSubmeshSelector emptyInstance = new CommandModelSubmeshSelector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
