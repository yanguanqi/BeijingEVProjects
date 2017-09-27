package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableObjectFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableObjectFactory emptyInstance = new MovableObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
