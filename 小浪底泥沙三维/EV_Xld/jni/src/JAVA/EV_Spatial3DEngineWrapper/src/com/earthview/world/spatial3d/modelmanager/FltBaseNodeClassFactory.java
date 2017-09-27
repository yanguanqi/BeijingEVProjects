package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FltBaseNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FltBaseNode emptyInstance = new FltBaseNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
