package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PatchMeshClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PatchMesh emptyInstance = new PatchMesh(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
