package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandLayoutRedoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandLayoutRedo emptyInstance = new CommandLayoutRedo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
