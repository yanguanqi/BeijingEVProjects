package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ItextinsertClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itextinsert emptyInstance = new Itextinsert(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
