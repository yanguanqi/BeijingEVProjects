package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AbstractNodeListPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AbstractNodeListPtr emptyInstance = new AbstractNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
