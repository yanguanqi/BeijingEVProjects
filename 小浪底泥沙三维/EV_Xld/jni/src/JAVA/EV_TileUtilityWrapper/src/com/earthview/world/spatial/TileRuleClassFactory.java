package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileRuleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileRule emptyInstance = new TileRule(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
