package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceManagerVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstanceManagerVector emptyInstance = new InstanceManagerVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
