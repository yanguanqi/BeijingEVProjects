package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourFaderAffector2ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColourFaderAffector2 emptyInstance = new ColourFaderAffector2(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
