package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PageInfo emptyInstance = new PageInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
