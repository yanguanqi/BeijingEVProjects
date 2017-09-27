package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwmsclampscenelayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwmsclampscenelayer emptyInstance = new Ogcwmsclampscenelayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
