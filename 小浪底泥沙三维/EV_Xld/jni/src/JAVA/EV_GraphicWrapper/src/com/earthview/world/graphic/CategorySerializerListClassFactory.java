package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CategorySerializerListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CategorySerializerList emptyInstance = new CategorySerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
