package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectInfoVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectInfoVector emptyInstance = new EffectInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
