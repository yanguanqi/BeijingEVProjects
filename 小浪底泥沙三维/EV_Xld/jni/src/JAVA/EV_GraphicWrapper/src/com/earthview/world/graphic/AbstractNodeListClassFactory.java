package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AbstractNodeListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AbstractNodeList emptyInstance = new AbstractNodeList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
