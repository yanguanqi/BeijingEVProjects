package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TilePathRuleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TilePathRule emptyInstance = new TilePathRule(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
