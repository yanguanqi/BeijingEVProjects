package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageRectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PageRect emptyInstance = new PageRect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
