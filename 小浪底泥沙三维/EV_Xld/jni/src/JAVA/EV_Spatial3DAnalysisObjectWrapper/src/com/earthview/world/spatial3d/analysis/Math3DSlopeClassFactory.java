package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Math3DSlopeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Math3DSlope emptyInstance = new Math3DSlope(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
