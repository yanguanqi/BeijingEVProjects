package com.earthview.world.spatial.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IatmosphereClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iatmosphere emptyInstance = new Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
