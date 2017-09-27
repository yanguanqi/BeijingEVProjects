package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshxObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshxObject emptyInstance = new MeshxObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
