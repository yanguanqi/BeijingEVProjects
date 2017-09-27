package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TilePathRuleFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TilePathRuleFactory emptyInstance = new TilePathRuleFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
