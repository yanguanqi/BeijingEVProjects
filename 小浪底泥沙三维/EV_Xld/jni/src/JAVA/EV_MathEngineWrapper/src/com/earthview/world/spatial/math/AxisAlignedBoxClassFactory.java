package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AxisAlignedBoxClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AxisAlignedBox emptyInstance = new AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
