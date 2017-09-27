package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageLayoutClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PageLayout emptyInstance = new PageLayout(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
