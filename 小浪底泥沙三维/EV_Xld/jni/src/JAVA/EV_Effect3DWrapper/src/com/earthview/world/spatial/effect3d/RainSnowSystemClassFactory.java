package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RainSnowSystemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RainSnowSystem emptyInstance = new RainSnowSystem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
