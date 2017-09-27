package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AbstractNodeMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AbstractNodeMap emptyInstance = new AbstractNodeMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
