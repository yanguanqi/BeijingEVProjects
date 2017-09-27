package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ManualObjectFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ManualObjectFactory emptyInstance = new ManualObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
