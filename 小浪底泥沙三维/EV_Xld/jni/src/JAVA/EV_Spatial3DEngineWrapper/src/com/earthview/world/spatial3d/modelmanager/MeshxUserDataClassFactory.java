package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshxUserDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshxUserData emptyInstance = new MeshxUserData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
