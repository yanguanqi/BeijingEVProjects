package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SeparatorCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SeparatorCommand emptyInstance = new SeparatorCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
