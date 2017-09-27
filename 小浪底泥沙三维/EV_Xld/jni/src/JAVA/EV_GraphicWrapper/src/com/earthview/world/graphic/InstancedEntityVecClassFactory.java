package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstancedEntityVecClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstancedEntityVec emptyInstance = new InstancedEntityVec(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
