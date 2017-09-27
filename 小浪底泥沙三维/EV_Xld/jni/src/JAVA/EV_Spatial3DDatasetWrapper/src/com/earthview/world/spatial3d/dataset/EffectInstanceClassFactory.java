package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectInstanceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectInstance emptyInstance = new EffectInstance(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
