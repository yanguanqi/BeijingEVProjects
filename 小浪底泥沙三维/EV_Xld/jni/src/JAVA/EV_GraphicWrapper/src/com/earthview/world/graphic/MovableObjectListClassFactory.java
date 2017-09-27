package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableObjectListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableObjectList emptyInstance = new MovableObjectList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
