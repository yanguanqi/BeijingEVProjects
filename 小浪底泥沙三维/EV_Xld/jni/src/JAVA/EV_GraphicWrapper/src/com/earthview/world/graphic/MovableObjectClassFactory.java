package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableObject emptyInstance = new MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
