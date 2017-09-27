package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySelectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RaySelector emptyInstance = new RaySelector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
