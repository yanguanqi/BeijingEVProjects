package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FixedElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FixedElement emptyInstance = new FixedElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
