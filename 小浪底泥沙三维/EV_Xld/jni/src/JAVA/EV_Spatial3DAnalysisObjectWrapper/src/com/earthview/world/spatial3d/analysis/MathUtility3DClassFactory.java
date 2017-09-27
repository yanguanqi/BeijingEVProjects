package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MathUtility3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MathUtility3D emptyInstance = new MathUtility3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
