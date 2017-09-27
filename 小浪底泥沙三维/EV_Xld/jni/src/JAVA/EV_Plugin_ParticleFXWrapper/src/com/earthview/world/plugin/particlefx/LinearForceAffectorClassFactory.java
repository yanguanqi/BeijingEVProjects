package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LinearForceAffectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LinearForceAffector emptyInstance = new LinearForceAffector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
