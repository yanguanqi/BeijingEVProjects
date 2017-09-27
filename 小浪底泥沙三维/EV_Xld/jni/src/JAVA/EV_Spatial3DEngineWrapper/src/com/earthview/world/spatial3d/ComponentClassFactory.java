package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ComponentClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Component emptyInstance = new Component(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
