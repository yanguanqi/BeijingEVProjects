package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotorWashClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotorWash emptyInstance = new RotorWash(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
