package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NameGeneratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NameGenerator emptyInstance = new NameGenerator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
