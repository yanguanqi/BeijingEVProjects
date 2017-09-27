package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ring emptyInstance = new Ring(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
