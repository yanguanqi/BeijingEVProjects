package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VisibleobjectVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VisibleobjectVector emptyInstance = new VisibleobjectVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
