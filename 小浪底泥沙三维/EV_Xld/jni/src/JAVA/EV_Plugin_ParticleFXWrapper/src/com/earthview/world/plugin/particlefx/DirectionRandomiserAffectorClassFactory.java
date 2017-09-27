package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DirectionRandomiserAffectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DirectionRandomiserAffector emptyInstance = new DirectionRandomiserAffector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
