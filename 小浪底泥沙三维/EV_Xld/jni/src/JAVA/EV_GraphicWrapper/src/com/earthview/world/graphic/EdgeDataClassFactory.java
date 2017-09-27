package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EdgeDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EdgeData emptyInstance = new EdgeData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
