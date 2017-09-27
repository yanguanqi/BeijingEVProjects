package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandNextViewInPageClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandNextViewInPage emptyInstance = new CommandNextViewInPage(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
