package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectRefInfoVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectRefInfoVector emptyInstance = new EffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
