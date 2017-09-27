package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectObjectVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectObjectVector emptyInstance = new EffectObjectVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
