package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvserverlayerexfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evserverlayerexfactory emptyInstance = new Evserverlayerexfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
