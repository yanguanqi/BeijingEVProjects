package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileFilePathRuleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileFilePathRule emptyInstance = new TileFilePathRule(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
