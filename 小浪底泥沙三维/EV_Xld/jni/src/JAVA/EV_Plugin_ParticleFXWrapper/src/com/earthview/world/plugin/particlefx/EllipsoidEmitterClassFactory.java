package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipsoidEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipsoidEmitter emptyInstance = new EllipsoidEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
