package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourImageAffectorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColourImageAffectorFactory emptyInstance = new ColourImageAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
