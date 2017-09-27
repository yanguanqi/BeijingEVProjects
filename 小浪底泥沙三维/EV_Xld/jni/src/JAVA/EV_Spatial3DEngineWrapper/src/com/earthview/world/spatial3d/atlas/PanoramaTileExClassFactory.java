package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PanoramaTileExClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PanoramaTileEx emptyInstance = new PanoramaTileEx(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
