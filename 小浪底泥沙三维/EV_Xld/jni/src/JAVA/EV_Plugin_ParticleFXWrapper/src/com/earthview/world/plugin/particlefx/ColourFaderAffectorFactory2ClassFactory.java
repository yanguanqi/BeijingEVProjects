package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourFaderAffectorFactory2ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColourFaderAffectorFactory2 emptyInstance = new ColourFaderAffectorFactory2(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
