package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandSimplifyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandSimplify emptyInstance = new CommandSimplify(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
