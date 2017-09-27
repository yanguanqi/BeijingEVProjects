package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BoxClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Box emptyInstance = new Box(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
