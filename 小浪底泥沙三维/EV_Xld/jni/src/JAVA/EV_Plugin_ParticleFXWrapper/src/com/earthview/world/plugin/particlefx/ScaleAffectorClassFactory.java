package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleAffectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScaleAffector emptyInstance = new ScaleAffector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
