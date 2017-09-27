package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourFaderAffectorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColourFaderAffectorFactory emptyInstance = new ColourFaderAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
