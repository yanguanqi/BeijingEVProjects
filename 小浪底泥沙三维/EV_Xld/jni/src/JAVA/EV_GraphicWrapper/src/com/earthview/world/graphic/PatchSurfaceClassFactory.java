package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PatchSurfaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PatchSurface emptyInstance = new PatchSurface(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
