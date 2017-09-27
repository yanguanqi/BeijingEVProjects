package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandInsertMapTitleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandInsertMapTitle emptyInstance = new CommandInsertMapTitle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
