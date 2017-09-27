package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectDataSource emptyInstance = new EffectDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
