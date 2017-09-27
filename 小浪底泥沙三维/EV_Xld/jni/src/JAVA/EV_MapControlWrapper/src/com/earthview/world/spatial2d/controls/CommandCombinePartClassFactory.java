package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandCombinePartClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandCombinePart emptyInstance = new CommandCombinePart(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
