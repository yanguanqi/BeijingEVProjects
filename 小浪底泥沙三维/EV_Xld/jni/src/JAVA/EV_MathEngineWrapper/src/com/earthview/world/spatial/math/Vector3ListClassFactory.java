package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Vector3ListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Vector3List emptyInstance = new Vector3List(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
