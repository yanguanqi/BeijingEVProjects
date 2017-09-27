package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MoonClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Moon emptyInstance = new Moon(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
