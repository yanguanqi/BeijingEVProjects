package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Math3DBaseObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Math3DBaseObject emptyInstance = new Math3DBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
