package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PointEditListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PointEditList emptyInstance = new PointEditList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
