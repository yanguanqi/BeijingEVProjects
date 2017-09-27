package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Matrix3ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Matrix3 emptyInstance = new Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
