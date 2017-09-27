package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandInsertMapFrameClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandInsertMapFrame emptyInstance = new CommandInsertMapFrame(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
