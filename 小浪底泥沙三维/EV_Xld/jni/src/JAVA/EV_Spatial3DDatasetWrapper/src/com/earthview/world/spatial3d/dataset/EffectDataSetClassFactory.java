package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectDataSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectDataSet emptyInstance = new EffectDataSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
