package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Page emptyInstance = new Page(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
