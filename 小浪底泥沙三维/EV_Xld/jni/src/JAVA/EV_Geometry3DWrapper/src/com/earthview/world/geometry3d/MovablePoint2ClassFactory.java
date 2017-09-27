package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovablePoint2ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovablePoint2 emptyInstance = new MovablePoint2(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
