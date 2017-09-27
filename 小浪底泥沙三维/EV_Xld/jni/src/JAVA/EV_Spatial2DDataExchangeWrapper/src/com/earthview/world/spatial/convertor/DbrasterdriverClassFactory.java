package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DbrasterdriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Dbrasterdriver emptyInstance = new Dbrasterdriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
