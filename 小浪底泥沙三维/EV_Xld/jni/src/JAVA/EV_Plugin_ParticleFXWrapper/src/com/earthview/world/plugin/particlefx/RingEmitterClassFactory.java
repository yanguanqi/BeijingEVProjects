package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RingEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RingEmitter emptyInstance = new RingEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
