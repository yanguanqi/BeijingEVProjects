package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubMeshClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubMesh emptyInstance = new SubMesh(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
