package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Vector3ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Vector3 emptyInstance = new Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
