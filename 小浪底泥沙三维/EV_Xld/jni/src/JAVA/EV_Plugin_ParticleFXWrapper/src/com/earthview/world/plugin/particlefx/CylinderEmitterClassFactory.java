package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CylinderEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CylinderEmitter emptyInstance = new CylinderEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
