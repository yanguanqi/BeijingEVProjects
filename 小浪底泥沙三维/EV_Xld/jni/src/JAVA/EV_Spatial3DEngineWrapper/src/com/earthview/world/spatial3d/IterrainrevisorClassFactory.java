package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IterrainrevisorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iterrainrevisor emptyInstance = new Iterrainrevisor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
