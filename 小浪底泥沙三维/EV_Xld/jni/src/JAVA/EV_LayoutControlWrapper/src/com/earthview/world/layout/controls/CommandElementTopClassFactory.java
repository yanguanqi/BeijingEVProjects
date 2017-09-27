package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandElementTopClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandElementTop emptyInstance = new CommandElementTop(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
