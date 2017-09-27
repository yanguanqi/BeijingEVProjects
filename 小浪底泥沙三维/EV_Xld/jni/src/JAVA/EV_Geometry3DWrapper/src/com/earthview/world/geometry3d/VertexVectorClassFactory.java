package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VertexVector emptyInstance = new VertexVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
