package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SunClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Sun emptyInstance = new Sun(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
