package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IfieldClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifield emptyInstance = new Ifield(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
