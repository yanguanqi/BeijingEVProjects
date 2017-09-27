package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandElementUpwardClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandElementUpward emptyInstance = new CommandElementUpward(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
