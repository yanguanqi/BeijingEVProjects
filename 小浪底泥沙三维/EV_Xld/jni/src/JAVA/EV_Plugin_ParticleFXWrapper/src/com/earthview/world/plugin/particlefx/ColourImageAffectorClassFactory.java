package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourImageAffectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColourImageAffector emptyInstance = new ColourImageAffector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
