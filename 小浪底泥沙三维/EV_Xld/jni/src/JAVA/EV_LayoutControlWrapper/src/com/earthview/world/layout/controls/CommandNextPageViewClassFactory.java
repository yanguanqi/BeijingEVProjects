package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandNextPageViewClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandNextPageView emptyInstance = new CommandNextPageView(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
