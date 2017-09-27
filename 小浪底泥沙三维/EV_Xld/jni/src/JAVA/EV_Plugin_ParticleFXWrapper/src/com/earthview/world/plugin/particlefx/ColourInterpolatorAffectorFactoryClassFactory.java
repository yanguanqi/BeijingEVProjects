package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourInterpolatorAffectorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColourInterpolatorAffectorFactory emptyInstance = new ColourInterpolatorAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
