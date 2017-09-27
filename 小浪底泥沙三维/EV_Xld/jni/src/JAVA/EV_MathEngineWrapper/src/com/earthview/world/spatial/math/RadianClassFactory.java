package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RadianClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Radian emptyInstance = new Radian(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
