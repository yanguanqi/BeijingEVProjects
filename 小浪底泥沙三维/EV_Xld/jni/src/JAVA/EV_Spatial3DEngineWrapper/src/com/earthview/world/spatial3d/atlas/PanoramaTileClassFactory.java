package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PanoramaTileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PanoramaTile emptyInstance = new PanoramaTile(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
