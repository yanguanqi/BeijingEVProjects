package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectVector emptyInstance = new EffectVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
