package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RootClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Root emptyInstance = new Root(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
