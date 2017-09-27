package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Entity emptyInstance = new Entity(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
