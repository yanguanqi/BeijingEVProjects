package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SphereSelectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SphereSelector emptyInstance = new SphereSelector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
