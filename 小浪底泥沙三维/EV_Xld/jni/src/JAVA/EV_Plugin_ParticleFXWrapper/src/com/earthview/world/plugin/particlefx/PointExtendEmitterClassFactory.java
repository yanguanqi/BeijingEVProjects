package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PointExtendEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PointExtendEmitter emptyInstance = new PointExtendEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
