package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodeTagListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NodeTagList emptyInstance = new NodeTagList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
