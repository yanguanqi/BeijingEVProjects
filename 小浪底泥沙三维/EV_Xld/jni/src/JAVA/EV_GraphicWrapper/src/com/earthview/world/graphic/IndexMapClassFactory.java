package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IndexMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IndexMap emptyInstance = new IndexMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
