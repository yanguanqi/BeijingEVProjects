package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CategoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Category emptyInstance = new Category(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
