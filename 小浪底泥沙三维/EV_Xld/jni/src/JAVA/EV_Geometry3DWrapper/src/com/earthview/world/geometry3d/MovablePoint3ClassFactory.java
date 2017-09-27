package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovablePoint3ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovablePoint3 emptyInstance = new MovablePoint3(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
