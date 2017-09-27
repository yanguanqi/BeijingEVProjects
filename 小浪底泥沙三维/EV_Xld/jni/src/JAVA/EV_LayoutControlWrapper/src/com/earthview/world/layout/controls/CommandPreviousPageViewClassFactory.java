package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandPreviousPageViewClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandPreviousPageView emptyInstance = new CommandPreviousPageView(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
