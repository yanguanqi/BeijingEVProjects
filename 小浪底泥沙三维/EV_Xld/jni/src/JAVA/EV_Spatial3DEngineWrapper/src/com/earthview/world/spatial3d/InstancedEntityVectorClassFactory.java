package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstancedEntityVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstancedEntityVector emptyInstance = new InstancedEntityVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
