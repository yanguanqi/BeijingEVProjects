package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstancedEntity2ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstancedEntity2 emptyInstance = new InstancedEntity2(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
