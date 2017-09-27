package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourInterpolatorAffectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColourInterpolatorAffector emptyInstance = new ColourInterpolatorAffector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
