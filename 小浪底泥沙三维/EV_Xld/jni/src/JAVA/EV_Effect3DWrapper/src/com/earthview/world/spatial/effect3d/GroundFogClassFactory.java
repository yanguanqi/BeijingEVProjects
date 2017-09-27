package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GroundFogClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GroundFog emptyInstance = new GroundFog(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
