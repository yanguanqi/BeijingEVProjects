package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VisibleObjectPtrVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VisibleObjectPtrVector emptyInstance = new VisibleObjectPtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
