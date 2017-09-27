package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Vector3DCacheFieldClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Vector3DCacheField emptyInstance = new Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
