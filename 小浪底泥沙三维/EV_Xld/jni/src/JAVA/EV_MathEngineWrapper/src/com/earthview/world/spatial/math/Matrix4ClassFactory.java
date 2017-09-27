package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Matrix4ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Matrix4 emptyInstance = new Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
