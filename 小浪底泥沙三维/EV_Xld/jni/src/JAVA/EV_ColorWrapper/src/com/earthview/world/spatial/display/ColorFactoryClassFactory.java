package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColorFactory emptyInstance = new ColorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
