package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AbstractNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AbstractNode emptyInstance = new AbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
