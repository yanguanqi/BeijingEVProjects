package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PointEditClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PointEdit emptyInstance = new PointEdit(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
