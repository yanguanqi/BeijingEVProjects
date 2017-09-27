package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandElementBottomClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandElementBottom emptyInstance = new CommandElementBottom(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
