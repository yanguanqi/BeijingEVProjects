package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovablePolyline2ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovablePolyline2 emptyInstance = new MovablePolyline2(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
