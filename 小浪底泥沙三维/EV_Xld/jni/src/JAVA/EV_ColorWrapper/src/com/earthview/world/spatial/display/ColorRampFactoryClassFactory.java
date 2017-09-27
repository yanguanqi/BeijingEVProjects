package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColorRampFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColorRampFactory emptyInstance = new ColorRampFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
