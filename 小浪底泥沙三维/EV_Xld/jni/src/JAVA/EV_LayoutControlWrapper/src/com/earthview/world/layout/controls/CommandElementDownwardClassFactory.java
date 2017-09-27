package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandElementDownwardClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandElementDownward emptyInstance = new CommandElementDownward(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
