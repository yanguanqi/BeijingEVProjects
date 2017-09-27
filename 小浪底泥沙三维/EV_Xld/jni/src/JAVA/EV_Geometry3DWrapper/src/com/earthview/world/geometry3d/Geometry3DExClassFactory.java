package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Geometry3DExClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Geometry3DEx emptyInstance = new Geometry3DEx(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
