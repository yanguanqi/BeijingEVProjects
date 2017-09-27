package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstanceObject emptyInstance = new InstanceObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
