package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AssimpToMeshListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AssimpToMeshListener emptyInstance = new AssimpToMeshListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
