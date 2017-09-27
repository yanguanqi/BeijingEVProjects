package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CategoryListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CategoryList emptyInstance = new CategoryList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
