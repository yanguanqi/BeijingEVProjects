package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileDBPathRuleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileDBPathRule emptyInstance = new TileDBPathRule(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
