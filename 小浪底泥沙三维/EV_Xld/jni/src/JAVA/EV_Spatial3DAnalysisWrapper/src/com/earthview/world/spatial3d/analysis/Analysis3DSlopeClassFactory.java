package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DSlopeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DSlope emptyInstance = new Analysis3DSlope(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
