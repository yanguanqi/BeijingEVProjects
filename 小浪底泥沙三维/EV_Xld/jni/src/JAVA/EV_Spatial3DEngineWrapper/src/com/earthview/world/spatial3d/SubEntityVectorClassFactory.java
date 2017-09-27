package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubEntityVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubEntityVector emptyInstance = new SubEntityVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
