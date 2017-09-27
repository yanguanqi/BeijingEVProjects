package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DeflectorPlaneAffectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DeflectorPlaneAffector emptyInstance = new DeflectorPlaneAffector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
