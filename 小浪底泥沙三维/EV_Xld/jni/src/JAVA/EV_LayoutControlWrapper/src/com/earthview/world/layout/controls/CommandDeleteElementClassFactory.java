package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandDeleteElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandDeleteElement emptyInstance = new CommandDeleteElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
