package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BoxEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BoxEmitter emptyInstance = new BoxEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
