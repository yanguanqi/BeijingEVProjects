package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SnapAttributesClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SnapAttributes emptyInstance = new SnapAttributes(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
