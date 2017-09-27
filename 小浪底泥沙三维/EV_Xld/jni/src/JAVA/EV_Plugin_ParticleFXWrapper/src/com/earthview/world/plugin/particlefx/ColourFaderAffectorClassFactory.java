package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourFaderAffectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColourFaderAffector emptyInstance = new ColourFaderAffector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
