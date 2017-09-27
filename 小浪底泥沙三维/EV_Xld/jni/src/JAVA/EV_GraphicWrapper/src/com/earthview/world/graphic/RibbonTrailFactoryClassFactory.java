package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RibbonTrailFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RibbonTrailFactory emptyInstance = new RibbonTrailFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
