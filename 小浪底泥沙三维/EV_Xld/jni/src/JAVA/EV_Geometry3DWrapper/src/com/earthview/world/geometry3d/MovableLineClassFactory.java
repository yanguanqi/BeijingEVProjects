package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableLineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableLine emptyInstance = new MovableLine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
