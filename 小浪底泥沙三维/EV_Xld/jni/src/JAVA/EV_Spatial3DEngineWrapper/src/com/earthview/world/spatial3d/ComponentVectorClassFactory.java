package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ComponentVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ComponentVector emptyInstance = new ComponentVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
