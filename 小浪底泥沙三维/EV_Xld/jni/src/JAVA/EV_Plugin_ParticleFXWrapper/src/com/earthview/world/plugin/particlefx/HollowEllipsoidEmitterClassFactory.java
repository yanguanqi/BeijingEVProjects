package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HollowEllipsoidEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HollowEllipsoidEmitter emptyInstance = new HollowEllipsoidEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
