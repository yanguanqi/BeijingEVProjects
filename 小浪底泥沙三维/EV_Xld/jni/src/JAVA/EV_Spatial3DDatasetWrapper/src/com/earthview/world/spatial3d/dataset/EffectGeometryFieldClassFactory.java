package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectGeometryFieldClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectGeometryField emptyInstance = new EffectGeometryField(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
