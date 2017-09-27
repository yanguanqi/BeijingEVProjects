package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ThreeAxisClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ThreeAxis emptyInstance = new ThreeAxis(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
