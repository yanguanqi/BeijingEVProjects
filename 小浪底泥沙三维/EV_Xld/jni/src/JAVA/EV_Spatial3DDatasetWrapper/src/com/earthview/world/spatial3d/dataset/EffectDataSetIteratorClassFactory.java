package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectDataSetIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectDataSetIterator emptyInstance = new EffectDataSetIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
