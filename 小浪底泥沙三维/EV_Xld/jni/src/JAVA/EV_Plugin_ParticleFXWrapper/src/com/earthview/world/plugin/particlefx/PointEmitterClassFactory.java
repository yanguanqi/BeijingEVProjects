package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PointEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PointEmitter emptyInstance = new PointEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
