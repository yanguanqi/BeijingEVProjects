package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationAffectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotationAffector emptyInstance = new RotationAffector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
