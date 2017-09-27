package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AreaEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AreaEmitter emptyInstance = new AreaEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
