package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageSizeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PageSize emptyInstance = new PageSize(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
