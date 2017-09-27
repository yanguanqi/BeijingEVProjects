package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableCubeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableCube emptyInstance = new MovableCube(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
