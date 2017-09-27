package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstancedEntityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstancedEntity emptyInstance = new InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
