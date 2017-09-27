package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandPreviousViewClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandPreviousView emptyInstance = new CommandPreviousView(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
